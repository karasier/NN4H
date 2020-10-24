#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer0_58_840_55187300;

SignalI clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makeclk_55185060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer0_58_840_55187300;
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

SignalI rst_55185040_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makerst_55185040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_55185040_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer0_58_840_55187300;
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

SignalI req_55185020_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makereq_55185020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_55185020_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer0_58_840_55187300;
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

SignalI _5859_55486180_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI make_5859_55486180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5859_55486180_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer0_58_840_55187300;
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

SignalI ack__layer_55486120_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makeack__layer_55486120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_55486120_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer0_58_840_55187300;
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

SignalI _5857_55486100_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI make_5857_55486100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5857_55486100_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer0_58_840_55187300;
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

SignalI _5858_55485940_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI make_5858_55485940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5858_55485940_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer0_58_840_55187300;
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

SignalI _5899_55597320_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI make_5899_55597320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5899_55597320_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer0_58_840_55187300;
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

SignalI _58100_55661500_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI make_58100_55661500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58100_55661500_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer0_58_840_55187300;
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

Block __50101500;

Block __50101240;

void code__50101240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49565880(),ack_48399860_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49565760(),ack__mac_48399720_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49565640(),ack__add_48399580_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__50101240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50101240 = block;
   block->owner = (Object)__50101500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50101240;

   return block;
};

void code__50101500() {
   {
      Value cond = rst_55185040_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50101240();
   }
      }
   }
}

Block make__50101500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50101500 = block;
   block->owner = (Object)__50099240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50101500;

   return block;
};

Block __50098980;

Block __50097120;

Block __50096760;

void code__50096760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58228_49969720_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,value__z0_50316360_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49565160(),flag__z0_50697340_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__50096760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50096760 = block;
   block->owner = (Object)__50097120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50096760;

   return block;
};

Block __50517640;

void code__50517640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58229_50066500_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,value__z1_50430560_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49564800(),flag__z1_50697320_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__50517640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50517640 = block;
   block->owner = (Object)__50097120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50517640;

   return block;
};

void code__50097120() {
 code__50096760();
 code__50517640();
}

Block make__50097120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50097120 = block;
   block->owner = (Object)__50098980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50097120;

   return block;
};

Block __50098520;

void code__50098520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49564700(),flag__z0_50697340_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49564540(),flag__z1_50697320_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__50098520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50098520 = block;
   block->owner = (Object)__50098980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50098520;

   return block;
};

void code__50098980() {
   {
      Value cond = ack__add_48399580_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50097120();
   }
   else {
  code__50098520();
   }
      }
   }
}

Block make__50098980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50098980 = block;
   block->owner = (Object)__54444920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50098980;

   return block;
};

Block __54444800;

Block __54444560;

void code__54444560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49564240(),ack__a0_50697300_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49564060(),ack__a1_50697260_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__54444560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54444560 = block;
   block->owner = (Object)__54444800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54444560;

   return block;
};

Block __54623760;

Block __54623600;

void code__54623600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_50564880_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,_5899_55597320_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49562720(),ack__a0_50697300_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__54623600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54623600 = block;
   block->owner = (Object)__54623760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54623600;

   return block;
};

Block __54816420;

void code__54816420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a1_50697400_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,_58100_55661500_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49562440(),ack__a1_50697260_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__54816420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54816420 = block;
   block->owner = (Object)__54623760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54816420;

   return block;
};

void code__54623760() {
 code__54623600();
 code__54816420();
}

Block make__54623760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54623760 = block;
   block->owner = (Object)__54444800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54623760;

   return block;
};

void code__54444800() {
   {
      Value cond = rst_55185040_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54444560();
   }
   else if (value2integer(({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = flag__z0_50697340_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
         src1 = flag__z1_50697320_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; }))) {
  code__54623760();
   }
      }
   }
}

Block make__54444800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54444800 = block;
   block->owner = (Object)__55187620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54444800;

   return block;
};

Block __57726500;

void code__57726500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_55185020_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_48399720_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_48399940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__57726500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57726500 = block;
   block->owner = (Object)__57726260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57726500;

   return block;
};

Block __57726780;

void code__57726780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,clk_50712260_counter_58_841_50715080_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_48399860_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,ack_50712160_counter_58_841_50715080_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_55185040_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,rst_50712140_counter_58_841_50715080_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_50316360_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,z__value_56118100_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z1_50430560_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,z__value_57675200_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ack__a0_50697300_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
      src1 = ack__a1_50697260_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),ack__layer_55486120_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__57726780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57726780 = block;
   block->owner = (Object)__57738080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57726780;

   return block;
};

Block __57726720;

void code__57726720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_50712080_counter_58_841_50715080_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,ack__mac_48399720_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_55185040_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,_58201_49583840_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_55185040_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,_58216_50186180_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_56300940_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,value__a0_50564880_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_57864160_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,value__a1_50697400_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__57726720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57726720 = block;
   block->owner = (Object)__57737920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57726720;

   return block;
};

Block __49163320;

void code__49163320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_48743080_channel__w0_58127_50761260_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
            idx = value2integer(abus__r_46208960_channel__w0_58127_50761260_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_46209120_channel__w0_58127_50761260_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__49163320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49163320 = block;
   block->owner = (Object)__49888680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49163320;

   return block;
};

Block __57785680;

void code__57785680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_46209120_channel__w0_58127_50761260_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,_58136_48677940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__57785680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57785680 = block;
   block->owner = (Object)__57785380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57785680;

   return block;
};

Block __57785300;

void code__57785300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58136_48677940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,dbus__r_46209120_channel__w0_58127_50761260_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__57785300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57785300 = block;
   block->owner = (Object)__57785000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57785300;

   return block;
};

Block __57784660;

void code__57784660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_50759520_channel__w0_58127_50761260_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,_58134_48677920_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__57784660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57784660 = block;
   block->owner = (Object)__57784500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57784660;

   return block;
};

Block __57784460;

void code__57784460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58134_48677920_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,trig__r_50759520_channel__w0_58127_50761260_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__57784460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57784460 = block;
   block->owner = (Object)__57784300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57784460;

   return block;
};

Block __57783600;

void code__57783600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_46208960_channel__w0_58127_50761260_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,_58135_48677760_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__57783600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57783600 = block;
   block->owner = (Object)__57783320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57783600;

   return block;
};

Block __57783260;

void code__57783260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58135_48677760_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,abus__r_46208960_channel__w0_58127_50761260_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__57783260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57783260 = block;
   block->owner = (Object)__57783020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57783260;

   return block;
};

Block __50546440;

void code__50546440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_50365840_channel__w1_58142_49888560_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
            idx = value2integer(abus__r_49949360_channel__w1_58142_49888560_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_49949480_channel__w1_58142_49888560_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__50546440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50546440 = block;
   block->owner = (Object)__46304500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50546440;

   return block;
};

Block __57781020;

void code__57781020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_49949480_channel__w1_58142_49888560_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,_58151_49356160_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__57781020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57781020 = block;
   block->owner = (Object)__57780820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57781020;

   return block;
};

Block __57780780;

void code__57780780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58151_49356160_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,dbus__r_49949480_channel__w1_58142_49888560_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__57780780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57780780 = block;
   block->owner = (Object)__57780400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57780780;

   return block;
};

Block __57779760;

void code__57779760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_49886780_channel__w1_58142_49888560_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,_58149_49356140_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__57779760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57779760 = block;
   block->owner = (Object)__57779400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57779760;

   return block;
};

Block __57779340;

void code__57779340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58149_49356140_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,trig__r_49886780_channel__w1_58142_49888560_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__57779340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57779340 = block;
   block->owner = (Object)__57779020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57779340;

   return block;
};

Block __57778620;

void code__57778620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_49949360_channel__w1_58142_49888560_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,_58150_49356000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__57778620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57778620 = block;
   block->owner = (Object)__57778400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57778620;

   return block;
};

Block __57778360;

void code__57778360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58150_49356000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,abus__r_49949360_channel__w1_58142_49888560_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__57778360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57778360 = block;
   block->owner = (Object)__57778200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57778360;

   return block;
};

Block __57865980;

void code__57865980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_46883140_channel__accum_58157_46304220_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,_58159_48860940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__57865980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57865980 = block;
   block->owner = (Object)__57865820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57865980;

   return block;
};

Block __57865780;

void code__57865780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58159_48860940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,reg__0_46883140_channel__accum_58157_46304220_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__57865780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57865780 = block;
   block->owner = (Object)__57865540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57865780;

   return block;
};

Block __57864960;

void code__57864960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_47137980_channel__accum_58157_46304220_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,_58160_49872380_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__57864960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57864960 = block;
   block->owner = (Object)__57864500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57864960;

   return block;
};

Block __57864460;

void code__57864460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58160_49872380_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,reg__1_47137980_channel__accum_58157_46304220_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__57864460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57864460 = block;
   block->owner = (Object)__57863940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57864460;

   return block;
};

Block __49968060;

Block __49967880;

Block __49967500;

void code__49967500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49151800(),_58150_49356000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__49967500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49967500 = block;
   block->owner = (Object)__49967880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49967500;

   return block;
};

void code__49967880() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_55185040_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49151900();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49967500();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49151600(),_58149_49356140_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__49967880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49967880 = block;
   block->owner = (Object)__49968060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49967880;

   return block;
};

Block __49964700;

Block __49964380;

void code__49964380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49146340(),_58135_48677760_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__49964380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49964380 = block;
   block->owner = (Object)__49964700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49964380;

   return block;
};

void code__49964700() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_55185040_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49148240();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49964380();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49146040(),_58134_48677920_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__49964700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49964700 = block;
   block->owner = (Object)__49968060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49964700;

   return block;
};

Block __49963620;

Block __49963240;

void code__49963240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49145260(),_5858_55485940_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__49963240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49963240 = block;
   block->owner = (Object)__49963620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49963240;

   return block;
};

void code__49963620() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_55185040_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49145520();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49963240();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49144140(),_5857_55486100_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__49963620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49963620 = block;
   block->owner = (Object)__49968060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49963620;

   return block;
};

Block __49986660;

void code__49986660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49872060(),rvok_49968320_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49871780(),lvok0_49968360_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49871520(),wok0_49968300_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49871460(),lvok1_49968340_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49871400(),wok1_49968260_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__49986660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49986660 = block;
   block->owner = (Object)__49968060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49986660;

   return block;
};

Block __50111800;

Block __50111400;

Block __50111240;

Block __50110900;

Block __50133360;

Block __50133160;

void code__50133160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_5859_55486180_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,rv_49968380_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__49869900(),rvok_49968320_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__50133160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50133160 = block;
   block->owner = (Object)__50133360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50133160;

   return block;
};

void code__50133360() {
 code__50133160();
}

Block make__50133360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50133360 = block;
   block->owner = (Object)__50110900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50133360;

   return block;
};

Block __50110700;

void code__50110700() {
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
                  src0 = _5858_55485940_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
                  src1 = make__49869540();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__49869400();
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
                        src0 = _5858_55485940_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__49868100();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__49867860();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_5858_55485940_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49866900(),_5857_55486100_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__50110700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50110700 = block;
   block->owner = (Object)__50110900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50110700;

   return block;
};

void code__50110900() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5857_55486100_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49870680();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50133360();
   }
   else {
  code__50110700();
   }
      }
   }
}

Block make__50110900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50110900 = block;
   block->owner = (Object)__50111240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50110900;

   return block;
};

void code__50111240() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_55185040_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49870800();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50110900();
   }
      }
   }
}

Block make__50111240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50111240 = block;
   block->owner = (Object)__50111400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50111240;

   return block;
};

void code__50111400() {
 code__50111240();
}

Block make__50111400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50111400 = block;
   block->owner = (Object)__50111800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50111400;

   return block;
};

Block __50351120;

Block __50350880;

Block __50350440;

Block __50348240;

Block __50348080;

void code__50348080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58136_48677940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,lv0_49165080_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__48599800(),lvok0_49968360_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__50348080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50348080 = block;
   block->owner = (Object)__50348240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50348080;

   return block;
};

void code__50348240() {
 code__50348080();
}

Block make__50348240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50348240 = block;
   block->owner = (Object)__50350440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50348240;

   return block;
};

Block __50350280;

void code__50350280() {
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
                  src0 = _58135_48677760_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
                  src1 = make__48599400();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__48599100();
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
                        src0 = _58135_48677760_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__48598080();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__48597940();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58135_48677760_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48596940(),_58134_48677920_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__50350280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50350280 = block;
   block->owner = (Object)__50350440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50350280;

   return block;
};

void code__50350440() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58134_48677920_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__48602460();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50348240();
   }
   else {
  code__50350280();
   }
      }
   }
}

Block make__50350440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50350440 = block;
   block->owner = (Object)__50350880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50350440;

   return block;
};

void code__50350880() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_55185040_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49865040();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50350440();
   }
      }
   }
}

Block make__50350880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50350880 = block;
   block->owner = (Object)__50351120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50350880;

   return block;
};

void code__50351120() {
 code__50350880();
}

Block make__50351120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50351120 = block;
   block->owner = (Object)__50111800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50351120;

   return block;
};

Block __50548580;

Block __50548000;

Block __50547700;

void code__50547700() {
}

Block make__50547700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50547700 = block;
   block->owner = (Object)__50548000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50547700;

   return block;
};

Block __47864560;

void code__47864560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_49459760_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,_58159_48860940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49199920(),wok0_49968300_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__47864560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47864560 = block;
   block->owner = (Object)__50548000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47864560;

   return block;
};

void code__50548000() {
 code__50547700();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av0_49459760_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
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
                              src0 = lv0_49165080_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_49968380_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__49200360();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_49459760_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
 code__47864560();
}

Block make__50548000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50548000 = block;
   block->owner = (Object)__50548580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50548000;

   return block;
};

void code__50548580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48596420(),ack_48399860_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48596080(),run_49968240_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
 code__50548000();
}

Block make__50548580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50548580 = block;
   block->owner = (Object)__50111800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50548580;

   return block;
};

Block __48646240;

void code__48646240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49199320(),wok0_49968300_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49199060(),wok1_49968260_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49198560(),lvok0_49968360_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49198380(),lvok1_49968340_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49198040(),rvok_49968320_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__48646240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48646240 = block;
   block->owner = (Object)__50111800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48646240;

   return block;
};

Block __48644600;

Block __48644400;

Block __48668520;

Block __48662880;

Block __48662640;

void code__48662640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58151_49356160_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,lv1_49305040_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__49195560(),lvok1_49968340_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__48662640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48662640 = block;
   block->owner = (Object)__48662880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48662640;

   return block;
};

void code__48662880() {
 code__48662640();
}

Block make__48662880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48662880 = block;
   block->owner = (Object)__48668520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48662880;

   return block;
};

Block __48668160;

void code__48668160() {
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
                  src0 = _58150_49356000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
                  src1 = make__49195300();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__49195220();
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
                        src0 = _58150_49356000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__49194620();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__49194380();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58150_49356000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49193800(),_58149_49356140_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__48668160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48668160 = block;
   block->owner = (Object)__48668520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48668160;

   return block;
};

void code__48668520() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58149_49356140_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49196920();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48662880();
   }
   else {
  code__48668160();
   }
      }
   }
}

Block make__48668520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48668520 = block;
   block->owner = (Object)__48644400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48668520;

   return block;
};

void code__48644400() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_55185040_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49197280();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48668520();
   }
      }
   }
}

Block make__48644400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48644400 = block;
   block->owner = (Object)__48644600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48644400;

   return block;
};

void code__48644600() {
 code__48644400();
}

Block make__48644600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48644600 = block;
   block->owner = (Object)__50111800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48644600;

   return block;
};

Block __48997580;

Block __48996860;

Block __48996500;

void code__48996500() {
}

Block make__48996500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48996500 = block;
   block->owner = (Object)__48996860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48996500;

   return block;
};

Block __50030340;

void code__50030340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av1_49883900_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,_58160_49872380_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49666260(),wok1_49968260_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__50030340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50030340 = block;
   block->owner = (Object)__48996860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50030340;

   return block;
};

void code__48996860() {
 code__48996500();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av1_49883900_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
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
                              src0 = lv1_49305040_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_49968380_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__49666980();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av1_49883900_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
 code__50030340();
}

Block make__48996860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48996860 = block;
   block->owner = (Object)__48997580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48996860;

   return block;
};

void code__48997580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49193120(),ack_48399860_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49667840(),run_49968240_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
 code__48996860();
}

Block make__48997580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48997580 = block;
   block->owner = (Object)__50111800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48997580;

   return block;
};

Block __50252980;

void code__50252980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49666000(),wok0_49968300_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49665600(),wok1_49968260_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49665200(),lvok0_49968360_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49665060(),lvok1_49968340_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49665000(),rvok_49968320_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__50252980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50252980 = block;
   block->owner = (Object)__50111800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50252980;

   return block;
};

void code__50111800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49871200(),run_49968240_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = rvok_49968320_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50111400();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_49968360_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50351120();
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
               src0 = lvok0_49968360_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
               src1 = rvok_49968320_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok0_49968300_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50548580();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = wok0_49968300_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
         src1 = wok1_49968260_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48646240();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_49968340_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48644600();
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
               src0 = lvok1_49968340_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
               src1 = rvok_49968320_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok1_49968260_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48997580();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = wok0_49968300_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
         src1 = wok1_49968260_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50252980();
   }
      }
   }
}

Block make__50111800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50111800 = block;
   block->owner = (Object)__49968060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50111800;

   return block;
};

Block __49985380;

void code__49985380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49664880(),av0_49459760_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49664800(),av1_49883900_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__49985380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49985380 = block;
   block->owner = (Object)__49968060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49985380;

   return block;
};

void code__49968060() {
 code__49967880();
 code__49964700();
 code__49963620();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49184460(),ack_48399860_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49237940(),run_49968240_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = run_49968240_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49986660();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_48399940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
         src1 = run_49968240_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50111800();
   }
   else {
  code__49985380();
   }
      }
   }
}

Block make__49968060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49968060 = block;
   block->owner = (Object)__50250300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49968060;

   return block;
};

Block __50742780;

void code__50742780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_50565560_channel__b0_58196_50249820_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
            idx = value2integer(abus__r_50369720_channel__b0_58196_50249820_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_50369820_channel__b0_58196_50249820_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__50742780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50742780 = block;
   block->owner = (Object)__48353760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50742780;

   return block;
};

Block __57914380;

void code__57914380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_50369820_channel__b0_58196_50249820_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,_58200_49583880_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__57914380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57914380 = block;
   block->owner = (Object)__57914180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57914380;

   return block;
};

Block __57914140;

void code__57914140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58200_49583880_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,dbus__r_50369820_channel__b0_58196_50249820_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__57914140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57914140 = block;
   block->owner = (Object)__57913980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57914140;

   return block;
};

Block __57913660;

void code__57913660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_50271580_channel__b0_58196_50249820_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,_58198_49583820_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__57913660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57913660 = block;
   block->owner = (Object)__57913460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57913660;

   return block;
};

Block __57913400;

void code__57913400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58198_49583820_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,trig__r_50271580_channel__b0_58196_50249820_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__57913400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57913400 = block;
   block->owner = (Object)__57913180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57913400;

   return block;
};

Block __57912780;

void code__57912780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_50369720_channel__b0_58196_50249820_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,_58199_49583740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__57912780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57912780 = block;
   block->owner = (Object)__57912380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57912780;

   return block;
};

Block __57912260;

void code__57912260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58199_49583740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,abus__r_50369720_channel__b0_58196_50249820_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__57912260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57912260 = block;
   block->owner = (Object)__57911840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57912260;

   return block;
};

Block __49351940;

void code__49351940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_48934420_channel__b1_58211_48353640_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
            idx = value2integer(abus__r_48513040_channel__b1_58211_48353640_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_48513140_channel__b1_58211_48353640_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__49351940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49351940 = block;
   block->owner = (Object)__50031620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49351940;

   return block;
};

Block __57909620;

void code__57909620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_48513140_channel__b1_58211_48353640_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,_58215_50186240_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__57909620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57909620 = block;
   block->owner = (Object)__57909380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57909620;

   return block;
};

Block __57941900;

void code__57941900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58215_50186240_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,dbus__r_48513140_channel__b1_58211_48353640_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__57941900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57941900 = block;
   block->owner = (Object)__57940080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57941900;

   return block;
};

Block __57939360;

void code__57939360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_48351400_channel__b1_58211_48353640_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,_58213_50186160_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__57939360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57939360 = block;
   block->owner = (Object)__57939120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57939360;

   return block;
};

Block __57939020;

void code__57939020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58213_50186160_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,trig__r_48351400_channel__b1_58211_48353640_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__57939020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57939020 = block;
   block->owner = (Object)__57938760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57939020;

   return block;
};

Block __57938280;

void code__57938280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_48513040_channel__b1_58211_48353640_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,_58214_50186080_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__57938280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57938280 = block;
   block->owner = (Object)__57938120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57938280;

   return block;
};

Block __57938080;

void code__57938080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58214_50186080_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,abus__r_48513040_channel__b1_58211_48353640_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__57938080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57938080 = block;
   block->owner = (Object)__57937880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57938080;

   return block;
};

Block __57935740;

void code__57935740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_50129160_channel__z_58226_50031500_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,_58228_49969720_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__57935740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57935740 = block;
   block->owner = (Object)__57935520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57935740;

   return block;
};

Block __57935280;

void code__57935280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58228_49969720_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,reg__0_50129160_channel__z_58226_50031500_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__57935280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57935280 = block;
   block->owner = (Object)__57934920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57935280;

   return block;
};

Block __57934560;

void code__57934560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_50284940_channel__z_58226_50031500_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,_58229_50066500_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__57934560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57934560 = block;
   block->owner = (Object)__57934200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57934560;

   return block;
};

Block __57934140;

void code__57934140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58229_50066500_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,reg__1_50284940_channel__z_58226_50031500_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__57934140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57934140 = block;
   block->owner = (Object)__57939880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57934140;

   return block;
};

Block __48450620;

Block __48469540;

void code__48469540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49806100(),_58213_50186160_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__48469540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48469540 = block;
   block->owner = (Object)__48450620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48469540;

   return block;
};

Block __48467260;

void code__48467260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49806020(),_58198_49583820_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__48467260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48467260 = block;
   block->owner = (Object)__48450620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48467260;

   return block;
};

Block __48487820;

Block __48486680;

void code__48486680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58159_48860940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,lv0_45083840_add__n_58256_50715940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49804900(),lvok0_48450820_add__n_58256_50715940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__48486680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48486680 = block;
   block->owner = (Object)__48487820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48486680;

   return block;
};

Block __48896320;

Block __48895960;

Block __48894800;

void code__48894800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58200_49583880_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,rv0_47859120_add__n_58256_50715940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49801920(),_58198_49583820_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49801780(),rvok0_48450780_add__n_58256_50715940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__48894800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48894800 = block;
   block->owner = (Object)__48895960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48894800;

   return block;
};

Block __48895740;

void code__48895740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49799320(),_58199_49583740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49462500(),_58198_49583820_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__48895740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48895740 = block;
   block->owner = (Object)__48895960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48895740;

   return block;
};

void code__48895960() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58198_49583820_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49802900();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48894800();
   }
   else {
  code__48895740();
   }
      }
   }
}

Block make__48895960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48895960 = block;
   block->owner = (Object)__48896320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48895960;

   return block;
};

void code__48896320() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58201_49583840_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49803780();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48895960();
   }
      }
   }
}

Block make__48896320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48896320 = block;
   block->owner = (Object)__48487820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48896320;

   return block;
};

Block __49352100;

Block __49351180;

void code__49351180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_45083840_add__n_58256_50715940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
      src1 = rv0_47859120_add__n_58256_50715940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58228_49969720_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__49351180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49351180 = block;
   block->owner = (Object)__49352100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49351180;

   return block;
};

void code__49352100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49461980(),run_48450740_add__n_58256_50715940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49461780(),ack__add_48399580_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
 code__49351180();
}

Block make__49352100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49352100 = block;
   block->owner = (Object)__48487820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49352100;

   return block;
};

Block __50170840;

void code__50170840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58160_49872380_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,lv1_46906080_add__n_58256_50715940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49460920(),lvok1_48450800_add__n_58256_50715940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__50170840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50170840 = block;
   block->owner = (Object)__48487820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50170840;

   return block;
};

Block __50419800;

Block __50419300;

Block __50418220;

void code__50418220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58215_50186240_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value,rv1_48450840_add__n_58256_50715940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49458640(),_58213_50186160_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49458580(),rvok1_48450760_add__n_58256_50715940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__50418220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50418220 = block;
   block->owner = (Object)__50419300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50418220;

   return block;
};

Block __50419080;

void code__50419080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49458440(),_58214_50186080_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49458120(),_58213_50186160_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__50419080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50419080 = block;
   block->owner = (Object)__50419300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50419080;

   return block;
};

void code__50419300() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58213_50186160_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49459260();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50418220();
   }
   else {
  code__50419080();
   }
      }
   }
}

Block make__50419300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50419300 = block;
   block->owner = (Object)__50419800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50419300;

   return block;
};

void code__50419800() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58216_50186180_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49459860();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50419300();
   }
      }
   }
}

Block make__50419800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50419800 = block;
   block->owner = (Object)__48487820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50419800;

   return block;
};

Block __50646180;

Block __50645340;

void code__50645340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv1_46906080_add__n_58256_50715940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
      src1 = rv1_48450840_add__n_58256_50715940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58229_50066500_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__50645340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50645340 = block;
   block->owner = (Object)__50646180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50645340;

   return block;
};

void code__50646180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49457900(),run_48450740_add__n_58256_50715940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49457720(),ack__add_48399580_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
 code__50645340();
}

Block make__50646180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50646180 = block;
   block->owner = (Object)__48487820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50646180;

   return block;
};

void code__48487820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49805440(),run_48450740_add__n_58256_50715940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
 code__48486680();
 code__48896320();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_48450820_add__n_58256_50715940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
         src1 = rvok0_48450780_add__n_58256_50715940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49352100();
   }
      }
   }
 code__50170840();
 code__50419800();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_48450800_add__n_58256_50715940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
         src1 = rvok1_48450760_add__n_58256_50715940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50646180();
   }
      }
   }
}

Block make__48487820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48487820 = block;
   block->owner = (Object)__48450620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48487820;

   return block;
};

Block __48465260;

void code__48465260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49455900(),lvok0_48450820_add__n_58256_50715940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49455780(),rvok0_48450780_add__n_58256_50715940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49455500(),lvok1_48450800_add__n_58256_50715940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49455280(),rvok1_48450760_add__n_58256_50715940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
}

Block make__48465260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48465260 = block;
   block->owner = (Object)__48450620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48465260;

   return block;
};

void code__48450620() {
 code__48469540();
 code__48467260();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49805960(),ack__add_48399580_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49805780(),run_48450740_add__n_58256_50715940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_48399720_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
         src1 = run_48450740_add__n_58256_50715940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48487820();
   }
   else {
  code__48465260();
   }
      }
   }
}

Block make__48450620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48450620 = block;
   block->owner = (Object)__48400100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48450620;

   return block;
};

Value make__48947360() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__48986520() {
   static unsigned long long data[] = { 4294967282ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49017000() {
   static unsigned long long data[] = { 4294967279ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49016980() {
   static unsigned long long data[] = { 24ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49664780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_vector(get_type_signed(),8),1),1,data);
}

Value make__49662640() {
   static unsigned long long data[] = { 4294967293ULL };
   return make_set_value(get_type_vector(get_type_vector(get_type_signed(),8),1),1,data);
}

Value make__49151900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49151800() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49151600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49148240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49146340() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49146040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49145520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49145260() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49144140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49184460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49237940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49872060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49871780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49871520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49871460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49871400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49871200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49870800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49870680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49869900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49869540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49869400() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49868100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49867860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49866900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49865040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48602460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48599800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48599400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48599100() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48598080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48597940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__48596940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48596420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48596080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49200360() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49199920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49199320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49199060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49198560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49198380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49198040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49197280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49196920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49195560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49195300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49195220() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49194620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49194380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49193800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49193120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49667840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49666980() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49666260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49666000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49665600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49665200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49665060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49665000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49664880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49664800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49806100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49806020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49805960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49805780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49805440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49804900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49803780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49802900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49801920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49801780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49799320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49462500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49461980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49461780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49460920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49459860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49459260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49458640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49458580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49458440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49458120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49457900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49457720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49455900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49455780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49455500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49455280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49565880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49565760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49565640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49565160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49564800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49564700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49564540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49564240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49564060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49562720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49562440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope layer0_58_84_50761640;

SignalI req__mac_48399940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makereq__mac_48399940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_48399940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer0_58_84_50761640;
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

SignalI ack_48399860_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makeack_48399860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_48399860_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer0_58_84_50761640;
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

SignalI ack__mac_48399720_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makeack__mac_48399720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_48399720_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer0_58_84_50761640;
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

SignalI ack__add_48399580_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makeack__add_48399580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_48399580_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer0_58_84_50761640;
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

SignalI _58136_48677940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI make_58136_48677940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58136_48677940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer0_58_84_50761640;
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

SignalI _58134_48677920_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI make_58134_48677920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58134_48677920_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer0_58_84_50761640;
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

SignalI _58135_48677760_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI make_58135_48677760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58135_48677760_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer0_58_84_50761640;
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

SignalI _58159_48860940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI make_58159_48860940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58159_48860940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer0_58_84_50761640;
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

SignalI _58160_49872380_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI make_58160_49872380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58160_49872380_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer0_58_84_50761640;
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

SignalI _58151_49356160_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI make_58151_49356160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58151_49356160_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer0_58_84_50761640;
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

SignalI _58149_49356140_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI make_58149_49356140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58149_49356140_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer0_58_84_50761640;
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

SignalI _58150_49356000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI make_58150_49356000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58150_49356000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer0_58_84_50761640;
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

SignalI _58200_49583880_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI make_58200_49583880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58200_49583880_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer0_58_84_50761640;
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

SignalI _58201_49583840_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI make_58201_49583840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58201_49583840_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer0_58_84_50761640;
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

SignalI _58198_49583820_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI make_58198_49583820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58198_49583820_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer0_58_84_50761640;
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

SignalI _58199_49583740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI make_58199_49583740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58199_49583740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer0_58_84_50761640;
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

SignalI _58228_49969720_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI make_58228_49969720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58228_49969720_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer0_58_84_50761640;
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

SignalI _58229_50066500_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI make_58229_50066500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58229_50066500_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer0_58_84_50761640;
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

SignalI _58215_50186240_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI make_58215_50186240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58215_50186240_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer0_58_84_50761640;
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

SignalI _58216_50186180_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI make_58216_50186180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58216_50186180_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer0_58_84_50761640;
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

SignalI _58213_50186160_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI make_58213_50186160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58213_50186160_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer0_58_84_50761640;
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

SignalI _58214_50186080_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI make_58214_50186080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58214_50186080_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer0_58_84_50761640;
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

SignalI value__z0_50316360_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makevalue__z0_50316360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_50316360_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer0_58_84_50761640;
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

SignalI value__z1_50430560_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makevalue__z1_50430560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z1_50430560_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer0_58_84_50761640;
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

SignalI value__a0_50564880_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makevalue__a0_50564880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_50564880_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer0_58_84_50761640;
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

SignalI value__a1_50697400_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makevalue__a1_50697400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a1_50697400_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer0_58_84_50761640;
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

SignalI flag__z0_50697340_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makeflag__z0_50697340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_50697340_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer0_58_84_50761640;
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

SignalI flag__z1_50697320_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makeflag__z1_50697320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z1_50697320_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer0_58_84_50761640;
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

SignalI ack__a0_50697300_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makeack__a0_50697300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_50697300_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer0_58_84_50761640;
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

SignalI ack__a1_50697260_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makeack__a1_50697260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a1_50697260_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)layer0_58_84_50761640;
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

SystemI counter_50711860;

SystemI makecounter_50711860() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_50711860 = systemI;
   systemI->owner = (Object)layer0_58_84_50761640;
   systemI->name = "counter";
   systemI->system = counter_58_841_50715080;

   return systemI;
};

SystemI func0_56300740;

SystemI makefunc0_56300740() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_56300740 = systemI;
   systemI->owner = (Object)layer0_58_84_50761640;
   systemI->name = "func0";
   systemI->system = func0_58_841_55845740;

   return systemI;
};

SystemI func1_57864020;

SystemI makefunc1_57864020() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func1_57864020 = systemI;
   systemI->owner = (Object)layer0_58_84_50761640;
   systemI->name = "func1";
   systemI->system = func1_58_840_57595000;

   return systemI;
};

Scope channel__w0_58127_50761260;

SignalI trig__r_50759520_channel__w0_58127_50761260_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI maketrig__r_50759520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_50759520_channel__w0_58127_50761260_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)channel__w0_58127_50761260;
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

SignalI dbus__r_46209120_channel__w0_58127_50761260_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makedbus__r_46209120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_46209120_channel__w0_58127_50761260_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)channel__w0_58127_50761260;
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

SignalI abus__r_46208960_channel__w0_58127_50761260_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makeabus__r_46208960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_46208960_channel__w0_58127_50761260_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)channel__w0_58127_50761260;
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

SignalI mem_48743080_channel__w0_58127_50761260_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makemem_48743080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_48743080_channel__w0_58127_50761260_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)channel__w0_58127_50761260;
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
         src0 = make__48947360();
         src1 = make__48986520();
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

Scope raddr_58128_50760960;

Scope makeraddr_58128_50760960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58128_50760960 = scope;
   scope->owner = (Object)channel__w0_58127_50761260;
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

Scope rinc_58133_50760440;

Scope makerinc_58133_50760440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58133_50760440 = scope;
   scope->owner = (Object)channel__w0_58127_50761260;
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

Scope rdec_58137_50760020;

Scope makerdec_58137_50760020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58137_50760020 = scope;
   scope->owner = (Object)channel__w0_58127_50761260;
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

Behavior __49888680;

Behavior make__49888680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49888680 = behavior;
   behavior->owner = (Object)channel__w0_58127_50761260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_neg += 1;
   clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->neg = realloc(clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->neg,clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_neg*sizeof(Object));
clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->neg[clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_neg-1] = (Object)behavior;
   behavior->block = make__49163320();

   return behavior;
}

Behavior __57785380;

Behavior make__57785380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57785380 = behavior;
   behavior->owner = (Object)channel__w0_58127_50761260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_46209120_channel__w0_58127_50761260_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   dbus__r_46209120_channel__w0_58127_50761260_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   dbus__r_46209120_channel__w0_58127_50761260_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(dbus__r_46209120_channel__w0_58127_50761260_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,dbus__r_46209120_channel__w0_58127_50761260_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
dbus__r_46209120_channel__w0_58127_50761260_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[dbus__r_46209120_channel__w0_58127_50761260_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__57785680();

   return behavior;
}

Behavior __57785000;

Behavior make__57785000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57785000 = behavior;
   behavior->owner = (Object)channel__w0_58127_50761260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58136_48677940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   _58136_48677940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   _58136_48677940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(_58136_48677940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,_58136_48677940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
_58136_48677940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[_58136_48677940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__57785300();

   return behavior;
}

Behavior __57784500;

Behavior make__57784500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57784500 = behavior;
   behavior->owner = (Object)channel__w0_58127_50761260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_50759520_channel__w0_58127_50761260_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   trig__r_50759520_channel__w0_58127_50761260_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   trig__r_50759520_channel__w0_58127_50761260_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(trig__r_50759520_channel__w0_58127_50761260_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,trig__r_50759520_channel__w0_58127_50761260_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
trig__r_50759520_channel__w0_58127_50761260_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[trig__r_50759520_channel__w0_58127_50761260_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__57784660();

   return behavior;
}

Behavior __57784300;

Behavior make__57784300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57784300 = behavior;
   behavior->owner = (Object)channel__w0_58127_50761260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58134_48677920_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   _58134_48677920_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   _58134_48677920_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(_58134_48677920_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,_58134_48677920_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
_58134_48677920_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[_58134_48677920_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__57784460();

   return behavior;
}

Behavior __57783320;

Behavior make__57783320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57783320 = behavior;
   behavior->owner = (Object)channel__w0_58127_50761260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_46208960_channel__w0_58127_50761260_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   abus__r_46208960_channel__w0_58127_50761260_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   abus__r_46208960_channel__w0_58127_50761260_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(abus__r_46208960_channel__w0_58127_50761260_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,abus__r_46208960_channel__w0_58127_50761260_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
abus__r_46208960_channel__w0_58127_50761260_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[abus__r_46208960_channel__w0_58127_50761260_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__57783600();

   return behavior;
}

Behavior __57783020;

Behavior make__57783020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57783020 = behavior;
   behavior->owner = (Object)channel__w0_58127_50761260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58135_48677760_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   _58135_48677760_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   _58135_48677760_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(_58135_48677760_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,_58135_48677760_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
_58135_48677760_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[_58135_48677760_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__57783260();

   return behavior;
}

Scope makechannel__w0_58127_50761260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58127_50761260 = scope;
   scope->owner = (Object)layer0_58_84_50761640;
   scope->name = "channel_w0:127";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_50759520();
   scope->inners[1] = makedbus__r_46209120();
   scope->inners[2] = makeabus__r_46208960();
   scope->inners[3] = makemem_48743080();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58128_50760960();
   scope->scopes[1] = makerinc_58133_50760440();
   scope->scopes[2] = makerdec_58137_50760020();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49888680();
   scope->behaviors[1] = make__57785380();
   scope->behaviors[2] = make__57785000();
   scope->behaviors[3] = make__57784500();
   scope->behaviors[4] = make__57784300();
   scope->behaviors[5] = make__57783320();
   scope->behaviors[6] = make__57783020();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__w1_58142_49888560;

SignalI trig__r_49886780_channel__w1_58142_49888560_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI maketrig__r_49886780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_49886780_channel__w1_58142_49888560_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)channel__w1_58142_49888560;
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

SignalI dbus__r_49949480_channel__w1_58142_49888560_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makedbus__r_49949480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_49949480_channel__w1_58142_49888560_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)channel__w1_58142_49888560;
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

SignalI abus__r_49949360_channel__w1_58142_49888560_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makeabus__r_49949360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49949360_channel__w1_58142_49888560_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)channel__w1_58142_49888560;
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

SignalI mem_50365840_channel__w1_58142_49888560_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makemem_50365840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_50365840_channel__w1_58142_49888560_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)channel__w1_58142_49888560;
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
         src0 = make__49017000();
         src1 = make__49016980();
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

Scope raddr_58143_49888260;

Scope makeraddr_58143_49888260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58143_49888260 = scope;
   scope->owner = (Object)channel__w1_58142_49888560;
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

Scope rinc_58148_49887840;

Scope makerinc_58148_49887840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58148_49887840 = scope;
   scope->owner = (Object)channel__w1_58142_49888560;
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

Scope rdec_58152_49887280;

Scope makerdec_58152_49887280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58152_49887280 = scope;
   scope->owner = (Object)channel__w1_58142_49888560;
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

Behavior __46304500;

Behavior make__46304500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46304500 = behavior;
   behavior->owner = (Object)channel__w1_58142_49888560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_neg += 1;
   clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->neg = realloc(clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->neg,clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_neg*sizeof(Object));
clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->neg[clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_neg-1] = (Object)behavior;
   behavior->block = make__50546440();

   return behavior;
}

Behavior __57780820;

Behavior make__57780820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57780820 = behavior;
   behavior->owner = (Object)channel__w1_58142_49888560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_49949480_channel__w1_58142_49888560_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   dbus__r_49949480_channel__w1_58142_49888560_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   dbus__r_49949480_channel__w1_58142_49888560_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(dbus__r_49949480_channel__w1_58142_49888560_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,dbus__r_49949480_channel__w1_58142_49888560_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
dbus__r_49949480_channel__w1_58142_49888560_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[dbus__r_49949480_channel__w1_58142_49888560_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__57781020();

   return behavior;
}

Behavior __57780400;

Behavior make__57780400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57780400 = behavior;
   behavior->owner = (Object)channel__w1_58142_49888560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58151_49356160_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   _58151_49356160_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   _58151_49356160_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(_58151_49356160_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,_58151_49356160_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
_58151_49356160_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[_58151_49356160_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__57780780();

   return behavior;
}

Behavior __57779400;

Behavior make__57779400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57779400 = behavior;
   behavior->owner = (Object)channel__w1_58142_49888560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_49886780_channel__w1_58142_49888560_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   trig__r_49886780_channel__w1_58142_49888560_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   trig__r_49886780_channel__w1_58142_49888560_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(trig__r_49886780_channel__w1_58142_49888560_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,trig__r_49886780_channel__w1_58142_49888560_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
trig__r_49886780_channel__w1_58142_49888560_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[trig__r_49886780_channel__w1_58142_49888560_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__57779760();

   return behavior;
}

Behavior __57779020;

Behavior make__57779020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57779020 = behavior;
   behavior->owner = (Object)channel__w1_58142_49888560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58149_49356140_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   _58149_49356140_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   _58149_49356140_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(_58149_49356140_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,_58149_49356140_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
_58149_49356140_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[_58149_49356140_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__57779340();

   return behavior;
}

Behavior __57778400;

Behavior make__57778400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57778400 = behavior;
   behavior->owner = (Object)channel__w1_58142_49888560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_49949360_channel__w1_58142_49888560_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   abus__r_49949360_channel__w1_58142_49888560_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   abus__r_49949360_channel__w1_58142_49888560_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(abus__r_49949360_channel__w1_58142_49888560_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,abus__r_49949360_channel__w1_58142_49888560_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
abus__r_49949360_channel__w1_58142_49888560_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[abus__r_49949360_channel__w1_58142_49888560_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__57778620();

   return behavior;
}

Behavior __57778200;

Behavior make__57778200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57778200 = behavior;
   behavior->owner = (Object)channel__w1_58142_49888560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58150_49356000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   _58150_49356000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   _58150_49356000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(_58150_49356000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,_58150_49356000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
_58150_49356000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[_58150_49356000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__57778360();

   return behavior;
}

Scope makechannel__w1_58142_49888560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w1_58142_49888560 = scope;
   scope->owner = (Object)layer0_58_84_50761640;
   scope->name = "channel_w1:142";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_49886780();
   scope->inners[1] = makedbus__r_49949480();
   scope->inners[2] = makeabus__r_49949360();
   scope->inners[3] = makemem_50365840();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58143_49888260();
   scope->scopes[1] = makerinc_58148_49887840();
   scope->scopes[2] = makerdec_58152_49887280();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__46304500();
   scope->behaviors[1] = make__57780820();
   scope->behaviors[2] = make__57780400();
   scope->behaviors[3] = make__57779400();
   scope->behaviors[4] = make__57779020();
   scope->behaviors[5] = make__57778400();
   scope->behaviors[6] = make__57778200();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58157_46304220;

SignalI reg__0_46883140_channel__accum_58157_46304220_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makereg__0_46883140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_46883140_channel__accum_58157_46304220_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)channel__accum_58157_46304220;
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

SignalI reg__1_47137980_channel__accum_58157_46304220_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makereg__1_47137980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_47137980_channel__accum_58157_46304220_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)channel__accum_58157_46304220;
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

Scope anum_58158_46303560;

Scope makeanum_58158_46303560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58158_46303560 = scope;
   scope->owner = (Object)channel__accum_58157_46304220;
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

Scope raddr_58161_46302960;

Scope makeraddr_58161_46302960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58161_46302960 = scope;
   scope->owner = (Object)channel__accum_58157_46304220;
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

Scope waddr_58165_46302420;

Scope makewaddr_58165_46302420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58165_46302420 = scope;
   scope->owner = (Object)channel__accum_58157_46304220;
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

Scope rinc_58169_46301740;

SignalI abus__r_45842080_rinc_58169_46301740_channel__accum_58157_46304220_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makeabus__r_45842080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_45842080_rinc_58169_46301740_channel__accum_58157_46304220_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)rinc_58169_46301740;
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

Scope makerinc_58169_46301740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58169_46301740 = scope;
   scope->owner = (Object)channel__accum_58157_46304220;
   scope->name = "rinc:169";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_45842080();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58174_45841940;

SignalI abus__w_45840660_winc_58174_45841940_channel__accum_58157_46304220_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makeabus__w_45840660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_45840660_winc_58174_45841940_channel__accum_58157_46304220_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)winc_58174_45841940;
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

Scope makewinc_58174_45841940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58174_45841940 = scope;
   scope->owner = (Object)channel__accum_58157_46304220;
   scope->name = "winc:174";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_45840660();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58179_45839440;

SignalI abus__r_45834500_rdec_58179_45839440_channel__accum_58157_46304220_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makeabus__r_45834500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_45834500_rdec_58179_45839440_channel__accum_58157_46304220_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)rdec_58179_45839440;
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

Scope makerdec_58179_45839440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58179_45839440 = scope;
   scope->owner = (Object)channel__accum_58157_46304220;
   scope->name = "rdec:179";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_45834500();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58184_45834360;

SignalI abus__w_45855300_wdec_58184_45834360_channel__accum_58157_46304220_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makeabus__w_45855300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_45855300_wdec_58184_45834360_channel__accum_58157_46304220_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)wdec_58184_45834360;
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

Scope makewdec_58184_45834360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58184_45834360 = scope;
   scope->owner = (Object)channel__accum_58157_46304220;
   scope->name = "wdec:184";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_45855300();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __57865820;

Behavior make__57865820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57865820 = behavior;
   behavior->owner = (Object)channel__accum_58157_46304220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_46883140_channel__accum_58157_46304220_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   reg__0_46883140_channel__accum_58157_46304220_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   reg__0_46883140_channel__accum_58157_46304220_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(reg__0_46883140_channel__accum_58157_46304220_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,reg__0_46883140_channel__accum_58157_46304220_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
reg__0_46883140_channel__accum_58157_46304220_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[reg__0_46883140_channel__accum_58157_46304220_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__57865980();

   return behavior;
}

Behavior __57865540;

Behavior make__57865540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57865540 = behavior;
   behavior->owner = (Object)channel__accum_58157_46304220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58159_48860940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   _58159_48860940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   _58159_48860940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(_58159_48860940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,_58159_48860940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
_58159_48860940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[_58159_48860940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__57865780();

   return behavior;
}

Behavior __57864500;

Behavior make__57864500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57864500 = behavior;
   behavior->owner = (Object)channel__accum_58157_46304220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_47137980_channel__accum_58157_46304220_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   reg__1_47137980_channel__accum_58157_46304220_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   reg__1_47137980_channel__accum_58157_46304220_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(reg__1_47137980_channel__accum_58157_46304220_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,reg__1_47137980_channel__accum_58157_46304220_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
reg__1_47137980_channel__accum_58157_46304220_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[reg__1_47137980_channel__accum_58157_46304220_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__57864960();

   return behavior;
}

Behavior __57863940;

Behavior make__57863940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57863940 = behavior;
   behavior->owner = (Object)channel__accum_58157_46304220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58160_49872380_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   _58160_49872380_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   _58160_49872380_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(_58160_49872380_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,_58160_49872380_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
_58160_49872380_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[_58160_49872380_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__57864460();

   return behavior;
}

Scope makechannel__accum_58157_46304220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58157_46304220 = scope;
   scope->owner = (Object)layer0_58_84_50761640;
   scope->name = "channel_accum:157";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_46883140();
   scope->inners[1] = makereg__1_47137980();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58158_46303560();
   scope->scopes[1] = makeraddr_58161_46302960();
   scope->scopes[2] = makewaddr_58165_46302420();
   scope->scopes[3] = makerinc_58169_46301740();
   scope->scopes[4] = makewinc_58174_45841940();
   scope->scopes[5] = makerdec_58179_45839440();
   scope->scopes[6] = makewdec_58184_45834360();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57865820();
   scope->behaviors[1] = make__57865540();
   scope->behaviors[2] = make__57864500();
   scope->behaviors[3] = make__57863940();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58189_48876040;

SignalI lv0_49165080_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makelv0_49165080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_49165080_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)mac__n1_58189_48876040;
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

SignalI lv1_49305040_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makelv1_49305040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_49305040_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)mac__n1_58189_48876040;
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

SignalI av0_49459760_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makeav0_49459760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_49459760_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)mac__n1_58189_48876040;
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

SignalI av1_49883900_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makeav1_49883900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av1_49883900_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)mac__n1_58189_48876040;
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

SignalI rv_49968380_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makerv_49968380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_49968380_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)mac__n1_58189_48876040;
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

SignalI lvok0_49968360_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makelvok0_49968360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_49968360_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)mac__n1_58189_48876040;
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

SignalI lvok1_49968340_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makelvok1_49968340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_49968340_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)mac__n1_58189_48876040;
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

SignalI rvok_49968320_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makervok_49968320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_49968320_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)mac__n1_58189_48876040;
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

SignalI wok0_49968300_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makewok0_49968300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok0_49968300_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)mac__n1_58189_48876040;
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

SignalI wok1_49968260_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makewok1_49968260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok1_49968260_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)mac__n1_58189_48876040;
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

SignalI run_49968240_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makerun_49968240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_49968240_mac__n1_58189_48876040_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)mac__n1_58189_48876040;
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

Behavior __50250300;

Behavior make__50250300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50250300 = behavior;
   behavior->owner = (Object)mac__n1_58189_48876040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_pos += 1;
   clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->pos = realloc(clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->pos,clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_pos*sizeof(Object));
clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->pos[clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_pos-1] = (Object)behavior;
   behavior->block = make__49968060();

   return behavior;
}

Scope makemac__n1_58189_48876040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58189_48876040 = scope;
   scope->owner = (Object)layer0_58_84_50761640;
   scope->name = "mac_n1:189";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 11;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_49165080();
   scope->inners[1] = makelv1_49305040();
   scope->inners[2] = makeav0_49459760();
   scope->inners[3] = makeav1_49883900();
   scope->inners[4] = makerv_49968380();
   scope->inners[5] = makelvok0_49968360();
   scope->inners[6] = makelvok1_49968340();
   scope->inners[7] = makervok_49968320();
   scope->inners[8] = makewok0_49968300();
   scope->inners[9] = makewok1_49968260();
   scope->inners[10] = makerun_49968240();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50250300();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__b0_58196_50249820;

SignalI trig__r_50271580_channel__b0_58196_50249820_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI maketrig__r_50271580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_50271580_channel__b0_58196_50249820_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)channel__b0_58196_50249820;
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

SignalI dbus__r_50369820_channel__b0_58196_50249820_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makedbus__r_50369820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_50369820_channel__b0_58196_50249820_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)channel__b0_58196_50249820;
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

SignalI abus__r_50369720_channel__b0_58196_50249820_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makeabus__r_50369720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50369720_channel__b0_58196_50249820_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)channel__b0_58196_50249820;
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

SignalI mem_50565560_channel__b0_58196_50249820_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makemem_50565560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_50565560_channel__b0_58196_50249820_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)channel__b0_58196_50249820;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(make__49664780(),signalI->c_value);
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope raddr_58197_50273780;

Scope makeraddr_58197_50273780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58197_50273780 = scope;
   scope->owner = (Object)channel__b0_58196_50249820;
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

Scope rinc_58202_50273020;

Scope makerinc_58202_50273020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58202_50273020 = scope;
   scope->owner = (Object)channel__b0_58196_50249820;
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

Scope rdec_58206_50272320;

Scope makerdec_58206_50272320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58206_50272320 = scope;
   scope->owner = (Object)channel__b0_58196_50249820;
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

Behavior __48353760;

Behavior make__48353760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48353760 = behavior;
   behavior->owner = (Object)channel__b0_58196_50249820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_neg += 1;
   clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->neg = realloc(clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->neg,clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_neg*sizeof(Object));
clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->neg[clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_neg-1] = (Object)behavior;
   behavior->block = make__50742780();

   return behavior;
}

Behavior __57914180;

Behavior make__57914180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57914180 = behavior;
   behavior->owner = (Object)channel__b0_58196_50249820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_50369820_channel__b0_58196_50249820_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   dbus__r_50369820_channel__b0_58196_50249820_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   dbus__r_50369820_channel__b0_58196_50249820_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(dbus__r_50369820_channel__b0_58196_50249820_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,dbus__r_50369820_channel__b0_58196_50249820_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
dbus__r_50369820_channel__b0_58196_50249820_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[dbus__r_50369820_channel__b0_58196_50249820_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__57914380();

   return behavior;
}

Behavior __57913980;

Behavior make__57913980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57913980 = behavior;
   behavior->owner = (Object)channel__b0_58196_50249820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58200_49583880_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   _58200_49583880_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   _58200_49583880_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(_58200_49583880_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,_58200_49583880_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
_58200_49583880_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[_58200_49583880_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__57914140();

   return behavior;
}

Behavior __57913460;

Behavior make__57913460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57913460 = behavior;
   behavior->owner = (Object)channel__b0_58196_50249820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_50271580_channel__b0_58196_50249820_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   trig__r_50271580_channel__b0_58196_50249820_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   trig__r_50271580_channel__b0_58196_50249820_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(trig__r_50271580_channel__b0_58196_50249820_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,trig__r_50271580_channel__b0_58196_50249820_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
trig__r_50271580_channel__b0_58196_50249820_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[trig__r_50271580_channel__b0_58196_50249820_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__57913660();

   return behavior;
}

Behavior __57913180;

Behavior make__57913180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57913180 = behavior;
   behavior->owner = (Object)channel__b0_58196_50249820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58198_49583820_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   _58198_49583820_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   _58198_49583820_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(_58198_49583820_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,_58198_49583820_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
_58198_49583820_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[_58198_49583820_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__57913400();

   return behavior;
}

Behavior __57912380;

Behavior make__57912380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57912380 = behavior;
   behavior->owner = (Object)channel__b0_58196_50249820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_50369720_channel__b0_58196_50249820_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   abus__r_50369720_channel__b0_58196_50249820_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   abus__r_50369720_channel__b0_58196_50249820_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(abus__r_50369720_channel__b0_58196_50249820_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,abus__r_50369720_channel__b0_58196_50249820_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
abus__r_50369720_channel__b0_58196_50249820_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[abus__r_50369720_channel__b0_58196_50249820_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__57912780();

   return behavior;
}

Behavior __57911840;

Behavior make__57911840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57911840 = behavior;
   behavior->owner = (Object)channel__b0_58196_50249820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58199_49583740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   _58199_49583740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   _58199_49583740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(_58199_49583740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,_58199_49583740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
_58199_49583740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[_58199_49583740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__57912260();

   return behavior;
}

Scope makechannel__b0_58196_50249820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__b0_58196_50249820 = scope;
   scope->owner = (Object)layer0_58_84_50761640;
   scope->name = "channel_b0:196";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_50271580();
   scope->inners[1] = makedbus__r_50369820();
   scope->inners[2] = makeabus__r_50369720();
   scope->inners[3] = makemem_50565560();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58197_50273780();
   scope->scopes[1] = makerinc_58202_50273020();
   scope->scopes[2] = makerdec_58206_50272320();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48353760();
   scope->behaviors[1] = make__57914180();
   scope->behaviors[2] = make__57913980();
   scope->behaviors[3] = make__57913460();
   scope->behaviors[4] = make__57913180();
   scope->behaviors[5] = make__57912380();
   scope->behaviors[6] = make__57911840();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__b1_58211_48353640;

SignalI trig__r_48351400_channel__b1_58211_48353640_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI maketrig__r_48351400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_48351400_channel__b1_58211_48353640_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)channel__b1_58211_48353640;
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

SignalI dbus__r_48513140_channel__b1_58211_48353640_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makedbus__r_48513140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_48513140_channel__b1_58211_48353640_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)channel__b1_58211_48353640;
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

SignalI abus__r_48513040_channel__b1_58211_48353640_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makeabus__r_48513040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48513040_channel__b1_58211_48353640_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)channel__b1_58211_48353640;
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

SignalI mem_48934420_channel__b1_58211_48353640_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makemem_48934420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_48934420_channel__b1_58211_48353640_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)channel__b1_58211_48353640;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(make__49662640(),signalI->c_value);
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope raddr_58212_48353160;

Scope makeraddr_58212_48353160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58212_48353160 = scope;
   scope->owner = (Object)channel__b1_58211_48353640;
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

Scope rinc_58217_48352540;

Scope makerinc_58217_48352540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58217_48352540 = scope;
   scope->owner = (Object)channel__b1_58211_48353640;
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

Scope rdec_58221_48351960;

Scope makerdec_58221_48351960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58221_48351960 = scope;
   scope->owner = (Object)channel__b1_58211_48353640;
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

Behavior __50031620;

Behavior make__50031620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50031620 = behavior;
   behavior->owner = (Object)channel__b1_58211_48353640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_neg += 1;
   clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->neg = realloc(clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->neg,clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_neg*sizeof(Object));
clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->neg[clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_neg-1] = (Object)behavior;
   behavior->block = make__49351940();

   return behavior;
}

Behavior __57909380;

Behavior make__57909380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57909380 = behavior;
   behavior->owner = (Object)channel__b1_58211_48353640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_48513140_channel__b1_58211_48353640_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   dbus__r_48513140_channel__b1_58211_48353640_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   dbus__r_48513140_channel__b1_58211_48353640_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(dbus__r_48513140_channel__b1_58211_48353640_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,dbus__r_48513140_channel__b1_58211_48353640_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
dbus__r_48513140_channel__b1_58211_48353640_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[dbus__r_48513140_channel__b1_58211_48353640_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__57909620();

   return behavior;
}

Behavior __57940080;

Behavior make__57940080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57940080 = behavior;
   behavior->owner = (Object)channel__b1_58211_48353640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58215_50186240_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   _58215_50186240_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   _58215_50186240_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(_58215_50186240_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,_58215_50186240_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
_58215_50186240_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[_58215_50186240_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__57941900();

   return behavior;
}

Behavior __57939120;

Behavior make__57939120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57939120 = behavior;
   behavior->owner = (Object)channel__b1_58211_48353640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_48351400_channel__b1_58211_48353640_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   trig__r_48351400_channel__b1_58211_48353640_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   trig__r_48351400_channel__b1_58211_48353640_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(trig__r_48351400_channel__b1_58211_48353640_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,trig__r_48351400_channel__b1_58211_48353640_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
trig__r_48351400_channel__b1_58211_48353640_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[trig__r_48351400_channel__b1_58211_48353640_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__57939360();

   return behavior;
}

Behavior __57938760;

Behavior make__57938760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57938760 = behavior;
   behavior->owner = (Object)channel__b1_58211_48353640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58213_50186160_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   _58213_50186160_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   _58213_50186160_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(_58213_50186160_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,_58213_50186160_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
_58213_50186160_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[_58213_50186160_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__57939020();

   return behavior;
}

Behavior __57938120;

Behavior make__57938120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57938120 = behavior;
   behavior->owner = (Object)channel__b1_58211_48353640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_48513040_channel__b1_58211_48353640_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   abus__r_48513040_channel__b1_58211_48353640_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   abus__r_48513040_channel__b1_58211_48353640_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(abus__r_48513040_channel__b1_58211_48353640_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,abus__r_48513040_channel__b1_58211_48353640_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
abus__r_48513040_channel__b1_58211_48353640_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[abus__r_48513040_channel__b1_58211_48353640_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__57938280();

   return behavior;
}

Behavior __57937880;

Behavior make__57937880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57937880 = behavior;
   behavior->owner = (Object)channel__b1_58211_48353640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58214_50186080_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   _58214_50186080_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   _58214_50186080_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(_58214_50186080_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,_58214_50186080_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
_58214_50186080_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[_58214_50186080_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__57938080();

   return behavior;
}

Scope makechannel__b1_58211_48353640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__b1_58211_48353640 = scope;
   scope->owner = (Object)layer0_58_84_50761640;
   scope->name = "channel_b1:211";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_48351400();
   scope->inners[1] = makedbus__r_48513140();
   scope->inners[2] = makeabus__r_48513040();
   scope->inners[3] = makemem_48934420();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58212_48353160();
   scope->scopes[1] = makerinc_58217_48352540();
   scope->scopes[2] = makerdec_58221_48351960();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50031620();
   scope->behaviors[1] = make__57909380();
   scope->behaviors[2] = make__57940080();
   scope->behaviors[3] = make__57939120();
   scope->behaviors[4] = make__57938760();
   scope->behaviors[5] = make__57938120();
   scope->behaviors[6] = make__57937880();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58226_50031500;

SignalI reg__0_50129160_channel__z_58226_50031500_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makereg__0_50129160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_50129160_channel__z_58226_50031500_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)channel__z_58226_50031500;
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

SignalI reg__1_50284940_channel__z_58226_50031500_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makereg__1_50284940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_50284940_channel__z_58226_50031500_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)channel__z_58226_50031500;
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

Scope anum_58227_50031100;

Scope makeanum_58227_50031100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58227_50031100 = scope;
   scope->owner = (Object)channel__z_58226_50031500;
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

Scope raddr_58230_50029960;

Scope makeraddr_58230_50029960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58230_50029960 = scope;
   scope->owner = (Object)channel__z_58226_50031500;
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

Scope waddr_58234_50029480;

Scope makewaddr_58234_50029480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58234_50029480 = scope;
   scope->owner = (Object)channel__z_58226_50031500;
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

Scope rinc_58238_50029040;

SignalI abus__r_50053000_rinc_58238_50029040_channel__z_58226_50031500_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makeabus__r_50053000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50053000_rinc_58238_50029040_channel__z_58226_50031500_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)rinc_58238_50029040;
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

Scope makerinc_58238_50029040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58238_50029040 = scope;
   scope->owner = (Object)channel__z_58226_50031500;
   scope->name = "rinc:238";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_50053000();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58242_50052800;

SignalI abus__w_50052360_winc_58242_50052800_channel__z_58226_50031500_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makeabus__w_50052360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50052360_winc_58242_50052800_channel__z_58226_50031500_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)winc_58242_50052800;
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

Scope makewinc_58242_50052800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58242_50052800 = scope;
   scope->owner = (Object)channel__z_58226_50031500;
   scope->name = "winc:242";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_50052360();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58246_50052200;

SignalI abus__r_50051720_rdec_58246_50052200_channel__z_58226_50031500_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makeabus__r_50051720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50051720_rdec_58246_50052200_channel__z_58226_50031500_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)rdec_58246_50052200;
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

Scope makerdec_58246_50052200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58246_50052200 = scope;
   scope->owner = (Object)channel__z_58226_50031500;
   scope->name = "rdec:246";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_50051720();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58251_50051600;

SignalI abus__w_50051020_wdec_58251_50051600_channel__z_58226_50031500_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makeabus__w_50051020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50051020_wdec_58251_50051600_channel__z_58226_50031500_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)wdec_58251_50051600;
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

Scope makewdec_58251_50051600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58251_50051600 = scope;
   scope->owner = (Object)channel__z_58226_50031500;
   scope->name = "wdec:251";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_50051020();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __57935520;

Behavior make__57935520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57935520 = behavior;
   behavior->owner = (Object)channel__z_58226_50031500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_50129160_channel__z_58226_50031500_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   reg__0_50129160_channel__z_58226_50031500_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   reg__0_50129160_channel__z_58226_50031500_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(reg__0_50129160_channel__z_58226_50031500_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,reg__0_50129160_channel__z_58226_50031500_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
reg__0_50129160_channel__z_58226_50031500_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[reg__0_50129160_channel__z_58226_50031500_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__57935740();

   return behavior;
}

Behavior __57934920;

Behavior make__57934920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57934920 = behavior;
   behavior->owner = (Object)channel__z_58226_50031500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58228_49969720_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   _58228_49969720_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   _58228_49969720_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(_58228_49969720_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,_58228_49969720_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
_58228_49969720_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[_58228_49969720_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__57935280();

   return behavior;
}

Behavior __57934200;

Behavior make__57934200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57934200 = behavior;
   behavior->owner = (Object)channel__z_58226_50031500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_50284940_channel__z_58226_50031500_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   reg__1_50284940_channel__z_58226_50031500_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   reg__1_50284940_channel__z_58226_50031500_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(reg__1_50284940_channel__z_58226_50031500_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,reg__1_50284940_channel__z_58226_50031500_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
reg__1_50284940_channel__z_58226_50031500_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[reg__1_50284940_channel__z_58226_50031500_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__57934560();

   return behavior;
}

Behavior __57939880;

Behavior make__57939880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57939880 = behavior;
   behavior->owner = (Object)channel__z_58226_50031500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58229_50066500_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   _58229_50066500_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   _58229_50066500_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(_58229_50066500_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,_58229_50066500_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
_58229_50066500_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[_58229_50066500_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__57934140();

   return behavior;
}

Scope makechannel__z_58226_50031500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58226_50031500 = scope;
   scope->owner = (Object)layer0_58_84_50761640;
   scope->name = "channel_z:226";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_50129160();
   scope->inners[1] = makereg__1_50284940();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58227_50031100();
   scope->scopes[1] = makeraddr_58230_50029960();
   scope->scopes[2] = makewaddr_58234_50029480();
   scope->scopes[3] = makerinc_58238_50029040();
   scope->scopes[4] = makewinc_58242_50052800();
   scope->scopes[5] = makerdec_58246_50052200();
   scope->scopes[6] = makewdec_58251_50051600();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57935520();
   scope->behaviors[1] = make__57934920();
   scope->behaviors[2] = make__57934200();
   scope->behaviors[3] = make__57939880();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58256_50715940;

SignalI lv0_45083840_add__n_58256_50715940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makelv0_45083840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_45083840_add__n_58256_50715940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)add__n_58256_50715940;
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

SignalI lv1_46906080_add__n_58256_50715940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makelv1_46906080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_46906080_add__n_58256_50715940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)add__n_58256_50715940;
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

SignalI rv0_47859120_add__n_58256_50715940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makerv0_47859120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_47859120_add__n_58256_50715940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)add__n_58256_50715940;
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

SignalI rv1_48450840_add__n_58256_50715940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makerv1_48450840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv1_48450840_add__n_58256_50715940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)add__n_58256_50715940;
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

SignalI lvok0_48450820_add__n_58256_50715940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makelvok0_48450820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_48450820_add__n_58256_50715940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)add__n_58256_50715940;
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

SignalI lvok1_48450800_add__n_58256_50715940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makelvok1_48450800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_48450800_add__n_58256_50715940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)add__n_58256_50715940;
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

SignalI rvok0_48450780_add__n_58256_50715940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makervok0_48450780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_48450780_add__n_58256_50715940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)add__n_58256_50715940;
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

SignalI rvok1_48450760_add__n_58256_50715940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makervok1_48450760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok1_48450760_add__n_58256_50715940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)add__n_58256_50715940;
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

SignalI run_48450740_add__n_58256_50715940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140;

SignalI makerun_48450740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_48450740_add__n_58256_50715940_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140 = signalI;
   signalI->owner = (Object)add__n_58256_50715940;
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

Behavior __48400100;

Behavior make__48400100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48400100 = behavior;
   behavior->owner = (Object)add__n_58256_50715940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_pos += 1;
   clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->pos = realloc(clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->pos,clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_pos*sizeof(Object));
clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->pos[clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_pos-1] = (Object)behavior;
   behavior->block = make__48450620();

   return behavior;
}

Scope makeadd__n_58256_50715940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58256_50715940 = scope;
   scope->owner = (Object)layer0_58_84_50761640;
   scope->name = "add_n:256";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_45083840();
   scope->inners[1] = makelv1_46906080();
   scope->inners[2] = makerv0_47859120();
   scope->inners[3] = makerv1_48450840();
   scope->inners[4] = makelvok0_48450820();
   scope->inners[5] = makelvok1_48450800();
   scope->inners[6] = makervok0_48450780();
   scope->inners[7] = makervok1_48450760();
   scope->inners[8] = makerun_48450740();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48400100();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __50099240;

Behavior make__50099240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50099240 = behavior;
   behavior->owner = (Object)layer0_58_84_50761640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_pos += 1;
   clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->pos = realloc(clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->pos,clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_pos*sizeof(Object));
clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->pos[clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_pos-1] = (Object)behavior;
   behavior->block = make__50101500();

   return behavior;
}

Behavior __54444920;

Behavior make__54444920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54444920 = behavior;
   behavior->owner = (Object)layer0_58_84_50761640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_pos += 1;
   clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->pos = realloc(clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->pos,clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_pos*sizeof(Object));
clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->pos[clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_pos-1] = (Object)behavior;
   behavior->block = make__50098980();

   return behavior;
}

Behavior __55187620;

Behavior make__55187620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55187620 = behavior;
   behavior->owner = (Object)layer0_58_84_50761640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_pos += 1;
   clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->pos = realloc(clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->pos,clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_pos*sizeof(Object));
clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->pos[clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_pos-1] = (Object)behavior;
   behavior->block = make__54444800();

   return behavior;
}

Behavior __57726260;

Behavior make__57726260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57726260 = behavior;
   behavior->owner = (Object)layer0_58_84_50761640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_55185020_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   req_55185020_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   req_55185020_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(req_55185020_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,req_55185020_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
req_55185020_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[req_55185020_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_48399720_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   ack__mac_48399720_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   ack__mac_48399720_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(ack__mac_48399720_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,ack__mac_48399720_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
ack__mac_48399720_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[ack__mac_48399720_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__57726500();

   return behavior;
}

Behavior __57738080;

Behavior make__57738080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57738080 = behavior;
   behavior->owner = (Object)layer0_58_84_50761640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 7;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[clk_55185060_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_48399860_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   ack_48399860_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   ack_48399860_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(ack_48399860_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,ack_48399860_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
ack_48399860_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[ack_48399860_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_55185040_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   rst_55185040_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   rst_55185040_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(rst_55185040_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,rst_55185040_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
rst_55185040_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[rst_55185040_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_50316360_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   value__z0_50316360_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   value__z0_50316360_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(value__z0_50316360_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,value__z0_50316360_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
value__z0_50316360_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[value__z0_50316360_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,value__z1_50430560_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   value__z1_50430560_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   value__z1_50430560_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(value__z1_50430560_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,value__z1_50430560_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
value__z1_50430560_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[value__z1_50430560_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,ack__a0_50697300_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   ack__a0_50697300_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   ack__a0_50697300_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(ack__a0_50697300_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,ack__a0_50697300_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
ack__a0_50697300_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[ack__a0_50697300_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->events[6] = make_event(ANYEDGE,ack__a1_50697260_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   ack__a1_50697260_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   ack__a1_50697260_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(ack__a1_50697260_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,ack__a1_50697260_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
ack__a1_50697260_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[ack__a1_50697260_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__57726780();

   return behavior;
}

Behavior __57737920;

Behavior make__57737920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57737920 = behavior;
   behavior->owner = (Object)layer0_58_84_50761640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 4;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_50712080_counter_58_841_50715080_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   ack__mac_50712080_counter_58_841_50715080_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   ack__mac_50712080_counter_58_841_50715080_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(ack__mac_50712080_counter_58_841_50715080_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,ack__mac_50712080_counter_58_841_50715080_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
ack__mac_50712080_counter_58_841_50715080_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[ack__mac_50712080_counter_58_841_50715080_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_55185040_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   rst_55185040_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   rst_55185040_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(rst_55185040_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,rst_55185040_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
rst_55185040_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[rst_55185040_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,a_56300940_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   a_56300940_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   a_56300940_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(a_56300940_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,a_56300940_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
a_56300940_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[a_56300940_func0_58_841_55845740_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,a_57864160_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140);
   a_57864160_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any += 1;
   a_57864160_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any = realloc(a_57864160_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any,a_57864160_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any*sizeof(Object));
a_57864160_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->any[a_57864160_func1_58_840_57595000_layer0_58_84_50761640_layer0_58_840_55187300_neural__network_58_84_50050260_neural__network_58_840_56087020______58_84_50287080______58_840_56679140->num_any-1] = (Object)behavior;
   behavior->block = make__57726720();

   return behavior;
}

Scope makelayer0_58_84_50761640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer0_58_84_50761640 = scope;
   scope->owner = (Object)layer0_58_840_55187300;
   scope->name = "layer0:T";
   scope->num_systemIs = 3;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_50711860();
   scope->systemIs[1] = makefunc0_56300740();
   scope->systemIs[2] = makefunc1_57864020();
   scope->num_inners = 30;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_48399940();
   scope->inners[1] = makeack_48399860();
   scope->inners[2] = makeack__mac_48399720();
   scope->inners[3] = makeack__add_48399580();
   scope->inners[4] = make_58136_48677940();
   scope->inners[5] = make_58134_48677920();
   scope->inners[6] = make_58135_48677760();
   scope->inners[7] = make_58159_48860940();
   scope->inners[8] = make_58160_49872380();
   scope->inners[9] = make_58151_49356160();
   scope->inners[10] = make_58149_49356140();
   scope->inners[11] = make_58150_49356000();
   scope->inners[12] = make_58200_49583880();
   scope->inners[13] = make_58201_49583840();
   scope->inners[14] = make_58198_49583820();
   scope->inners[15] = make_58199_49583740();
   scope->inners[16] = make_58228_49969720();
   scope->inners[17] = make_58229_50066500();
   scope->inners[18] = make_58215_50186240();
   scope->inners[19] = make_58216_50186180();
   scope->inners[20] = make_58213_50186160();
   scope->inners[21] = make_58214_50186080();
   scope->inners[22] = makevalue__z0_50316360();
   scope->inners[23] = makevalue__z1_50430560();
   scope->inners[24] = makevalue__a0_50564880();
   scope->inners[25] = makevalue__a1_50697400();
   scope->inners[26] = makeflag__z0_50697340();
   scope->inners[27] = makeflag__z1_50697320();
   scope->inners[28] = makeack__a0_50697300();
   scope->inners[29] = makeack__a1_50697260();
   scope->num_scopes = 8;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58127_50761260();
   scope->scopes[1] = makechannel__w1_58142_49888560();
   scope->scopes[2] = makechannel__accum_58157_46304220();
   scope->scopes[3] = makemac__n1_58189_48876040();
   scope->scopes[4] = makechannel__b0_58196_50249820();
   scope->scopes[5] = makechannel__b1_58211_48353640();
   scope->scopes[6] = makechannel__z_58226_50031500();
   scope->scopes[7] = makeadd__n_58256_50715940();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50099240();
   scope->behaviors[1] = make__54444920();
   scope->behaviors[2] = make__55187620();
   scope->behaviors[3] = make__57726260();
   scope->behaviors[4] = make__57738080();
   scope->behaviors[5] = make__57737920();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer0_58_840_55187300() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer0_58_840_55187300 = systemT;
systemT->owner = NULL;
   systemT->name = "layer0:T0";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_55185060();
   systemT->inputs[1] = makerst_55185040();
   systemT->inputs[2] = makereq_55185020();
   systemT->inputs[3] = make_5859_55486180();
   systemT->num_outputs = 3;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_55486120();
   systemT->outputs[1] = make_5857_55486100();
   systemT->outputs[2] = make_5858_55485940();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_5899_55597320();
   systemT->inouts[1] = make_58100_55661500();

   systemT->scope = makelayer0_58_84_50761640();

   return systemT;
}