#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer1_58_840_59228120;

SignalI clk_59225760_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makeclk_59225760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_59225760_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)layer1_58_840_59228120;
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

SignalI rst_59225740_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makerst_59225740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_59225740_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)layer1_58_840_59228120;
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

SignalI req_59225680_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makereq_59225680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_59225680_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)layer1_58_840_59228120;
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

SignalI _58123_59357220_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI make_58123_59357220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58123_59357220_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)layer1_58_840_59228120;
   signalI->name = ":123";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58124_59471840_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI make_58124_59471840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58124_59471840_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)layer1_58_840_59228120;
   signalI->name = ":124";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI ack__layer_59471800_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makeack__layer_59471800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_59471800_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)layer1_58_840_59228120;
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

SignalI _58125_59471720_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI make_58125_59471720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58125_59471720_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)layer1_58_840_59228120;
   signalI->name = ":125";
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

SignalI _5877_59628440_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI make_5877_59628440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5877_59628440_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)layer1_58_840_59228120;
   signalI->name = ":77";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Block __58433660;

Block __58498740;

void code__58498740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48860440(),ack_60308160_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48860380(),ack__add_60308120_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__58498740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58498740 = block;
   block->owner = (Object)__58433660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58498740;

   return block;
};

void code__58433660() {
   {
      Value cond = rst_59225740_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58498740();
   }
      }
   }
}

Block make__58433660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58433660 = block;
   block->owner = (Object)__58497860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58433660;

   return block;
};

Block __58497640;

Block __58497000;

Block __58496740;

void code__58496740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58369_47396480_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value,value__z0_61364000_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48860200(),flag__z0_61641380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__58496740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58496740 = block;
   block->owner = (Object)__58497000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58496740;

   return block;
};

void code__58497000() {
 code__58496740();
}

Block make__58497000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58497000 = block;
   block->owner = (Object)__58497640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58497000;

   return block;
};

Block __58497420;

void code__58497420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48860140(),flag__z0_61641380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__58497420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58497420 = block;
   block->owner = (Object)__58497640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58497420;

   return block;
};

void code__58497640() {
   {
      Value cond = ack__add_60308120_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58497000();
   }
   else {
  code__58497420();
   }
      }
   }
}

Block make__58497640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58497640 = block;
   block->owner = (Object)__58793780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58497640;

   return block;
};

Block __58793660;

Block __58793440;

void code__58793440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48860040(),ack__a0_61641360_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__58793440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58793440 = block;
   block->owner = (Object)__58793660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58793440;

   return block;
};

Block __58792880;

Block __58792680;

void code__58792680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_61641400_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value,_5877_59628440_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48859800(),ack__a0_61641360_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__58792680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58792680 = block;
   block->owner = (Object)__58792880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58792680;

   return block;
};

void code__58792880() {
 code__58792680();
}

Block make__58792880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58792880 = block;
   block->owner = (Object)__58793660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58792880;

   return block;
};

void code__58793660() {
   {
      Value cond = rst_59225740_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58793440();
   }
   else if (value2integer(flag__z0_61641380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value)) {
  code__58792880();
   }
      }
   }
}

Block make__58793660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58793660 = block;
   block->owner = (Object)__59195740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58793660;

   return block;
};

Block __53290400;

void code__53290400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_59225680_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_60308140_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_60308180_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__53290400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53290400 = block;
   block->owner = (Object)__53289940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53290400;

   return block;
};

Block __53290800;

void code__53290800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_59225760_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value,clk_47574980_counter_58_8400_47474100_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_60308160_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value,ack_47574900_counter_58_8400_47474100_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_59225740_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value,rst_47574840_counter_58_8400_47474100_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_61364000_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value,z__value_53214920_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__a0_61641360_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value,ack__layer_59471800_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__53290800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53290800 = block;
   block->owner = (Object)__53487380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53290800;

   return block;
};

Block __53290600;

void code__53290600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_47574680_counter_58_8400_47474100_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value,ack__mac_60308140_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_59225740_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value,_58357_61022660_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_53667740_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value,value__a0_61641400_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__53290600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53290600 = block;
   block->owner = (Object)__53487080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53290600;

   return block;
};

Block __58886760;

void code__58886760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_58728900_channel__w0_58302_53824040_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value;
            idx = value2integer(abus__r_58083740_channel__w0_58302_53824040_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_58083820_channel__w0_58302_53824040_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__58886760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58886760 = block;
   block->owner = (Object)__59397500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58886760;

   return block;
};

Block __53566800;

void code__53566800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_58083820_channel__w0_58302_53824040_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value,_58311_60445120_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__53566800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53566800 = block;
   block->owner = (Object)__53566200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53566800;

   return block;
};

Block __53566120;

void code__53566120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58311_60445120_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value,dbus__r_58083820_channel__w0_58302_53824040_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__53566120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53566120 = block;
   block->owner = (Object)__53565520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53566120;

   return block;
};

Block __53564720;

void code__53564720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58309_60445100_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value,trig__r_53822360_channel__w0_58302_53824040_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__53564720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53564720 = block;
   block->owner = (Object)__53564520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53564720;

   return block;
};

Block __53564440;

void code__53564440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_53822360_channel__w0_58302_53824040_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value,_58309_60445100_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__53564440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53564440 = block;
   block->owner = (Object)__53564000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53564440;

   return block;
};

Block __53562780;

void code__53562780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58310_60445020_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value,abus__r_58083740_channel__w0_58302_53824040_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__53562780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53562780 = block;
   block->owner = (Object)__53562460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53562780;

   return block;
};

Block __53562380;

void code__53562380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_58083740_channel__w0_58302_53824040_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value,_58310_60445020_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__53562380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53562380 = block;
   block->owner = (Object)__53561860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53562380;

   return block;
};

Block __53582980;

void code__53582980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58320_60646960_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value,reg__0_59500840_channel__accum_58317_59397380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__53582980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53582980 = block;
   block->owner = (Object)__53582720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53582980;

   return block;
};

Block __53582680;

void code__53582680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_59500840_channel__accum_58317_59397380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value,_58320_60646960_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__53582680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53582680 = block;
   block->owner = (Object)__53582320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53582680;

   return block;
};

Block __53581100;

void code__53581100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_59500840_channel__accum_58317_59397380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value,_58319_60753440_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__53581100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53581100 = block;
   block->owner = (Object)__53580260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53581100;

   return block;
};

Block __53580180;

void code__53580180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58319_60753440_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value,reg__0_59500840_channel__accum_58317_59397380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__53580180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53580180 = block;
   block->owner = (Object)__53579720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53580180;

   return block;
};

Block __60338460;

Block __60338300;

Block __60337980;

void code__60337980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53828360(),_58310_60445020_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53828280(),_58309_60445100_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__60337980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60337980 = block;
   block->owner = (Object)__60338300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60337980;

   return block;
};

void code__60338300() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59225740_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__53828440();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60337980();
   }
      }
   }
}

Block make__60338300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60338300 = block;
   block->owner = (Object)__60338460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60338300;

   return block;
};

Block __60337260;

Block __60336940;

void code__60336940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53828040(),_58125_59471720_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__60336940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60336940 = block;
   block->owner = (Object)__60337260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60336940;

   return block;
};

void code__60337260() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59225740_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__53828140();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60336940();
   }
      }
   }
}

Block make__60337260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60337260 = block;
   block->owner = (Object)__60338460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60337260;

   return block;
};

Block __60336080;

void code__60336080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53827740(),rvok_60338620_mac__n1_58347_59883540_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53827680(),lvok0_60338640_mac__n1_58347_59883540_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53827560(),wok0_60338600_mac__n1_58347_59883540_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__60336080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60336080 = block;
   block->owner = (Object)__60338460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60336080;

   return block;
};

Block __60606760;

Block __60606360;

Block __60606200;

Block __60605880;

Block __60605420;

void code__60605420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58123_59357220_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value,rv_60338660_mac__n1_58347_59883540_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__60605420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60605420 = block;
   block->owner = (Object)__60605880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60605420;

   return block;
};

Block __60852660;

void code__60852660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58124_59471840_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value,rv_60338660_mac__n1_58347_59883540_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__60852660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60852660 = block;
   block->owner = (Object)__60605880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60852660;

   return block;
};

void code__60605880() {
{
      Value value = _58125_59471720_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__53826760())) {
    code__60605420();
         }
         else if (value2integer(value) == value2integer(make__53826660())) {
    code__60852660();
         }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53826480(),rvok_60338620_mac__n1_58347_59883540_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
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
                  src0 = _58125_59471720_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__53826340();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58125_59471720_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__60605880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60605880 = block;
   block->owner = (Object)__60606200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60605880;

   return block;
};

void code__60606200() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59225740_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__53826880();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60605880();
   }
      }
   }
}

Block make__60606200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60606200 = block;
   block->owner = (Object)__60606360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60606200;

   return block;
};

void code__60606360() {
 code__60606200();
}

Block make__60606360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60606360 = block;
   block->owner = (Object)__60606760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60606360;

   return block;
};

Block __61206080;

Block __61205920;

Block __61205600;

Block __61204540;

Block __61204360;

void code__61204360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__53825940(),_58309_60445100_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58311_60445120_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value,lv0_60073300_mac__n1_58347_59883540_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__53825760(),lvok0_60338640_mac__n1_58347_59883540_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__61204360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61204360 = block;
   block->owner = (Object)__61204540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61204360;

   return block;
};

void code__61204540() {
 code__61204360();
}

Block make__61204540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61204540 = block;
   block->owner = (Object)__61205600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61204540;

   return block;
};

Block __61205440;

void code__61205440() {
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
                  src0 = _58310_60445020_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__53825600();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58310_60445020_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53825380(),_58309_60445100_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__61205440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61205440 = block;
   block->owner = (Object)__61205600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61205440;

   return block;
};

void code__61205600() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58309_60445100_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__53826020();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__61204540();
   }
   else {
  code__61205440();
   }
      }
   }
}

Block make__61205600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61205600 = block;
   block->owner = (Object)__61205920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61205600;

   return block;
};

void code__61205920() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59225740_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__53826120();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__61205600();
   }
      }
   }
}

Block make__61205920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61205920 = block;
   block->owner = (Object)__61206080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61205920;

   return block;
};

void code__61206080() {
 code__61205920();
}

Block make__61206080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61206080 = block;
   block->owner = (Object)__60606760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61206080;

   return block;
};

Block __42470880;

Block __43436560;

Block __43604580;

void code__43604580() {
}

Block make__43604580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __43604580 = block;
   block->owner = (Object)__43436560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__43604580;

   return block;
};

Block __51040680;

void code__51040680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_60197800_mac__n1_58347_59883540_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value,_58320_60646960_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53823520(),wok0_60338600_mac__n1_58347_59883540_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__51040680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51040680 = block;
   block->owner = (Object)__43436560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51040680;

   return block;
};

void code__43436560() {
 code__43604580();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av0_60197800_mac__n1_58347_59883540_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value;
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
                              src0 = lv0_60073300_mac__n1_58347_59883540_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_60338660_mac__n1_58347_59883540_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__53824060();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_60197800_mac__n1_58347_59883540_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
 code__51040680();
}

Block make__43436560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __43436560 = block;
   block->owner = (Object)__42470880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__43436560;

   return block;
};

void code__42470880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53825000(),ack_60308160_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53824940(),run_60338580_mac__n1_58347_59883540_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
 code__43436560();
}

Block make__42470880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42470880 = block;
   block->owner = (Object)__60606760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42470880;

   return block;
};

Block __51697480;

void code__51697480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53823400(),wok0_60338600_mac__n1_58347_59883540_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53823100(),lvok0_60338640_mac__n1_58347_59883540_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53823040(),rvok_60338620_mac__n1_58347_59883540_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__51697480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51697480 = block;
   block->owner = (Object)__60606760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51697480;

   return block;
};

void code__60606760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53827320(),run_60338580_mac__n1_58347_59883540_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = rvok_60338620_mac__n1_58347_59883540_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60606360();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_60338640_mac__n1_58347_59883540_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__61206080();
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
               src0 = lvok0_60338640_mac__n1_58347_59883540_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value;
               src1 = rvok_60338620_mac__n1_58347_59883540_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok0_60338600_mac__n1_58347_59883540_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__42470880();
   }
      }
   }
   {
      Value cond = wok0_60338600_mac__n1_58347_59883540_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51697480();
   }
      }
   }
}

Block make__60606760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60606760 = block;
   block->owner = (Object)__60338460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60606760;

   return block;
};

Block __60335260;

void code__60335260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53822920(),av0_60197800_mac__n1_58347_59883540_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__60335260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60335260 = block;
   block->owner = (Object)__60338460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60335260;

   return block;
};

void code__60338460() {
 code__60338300();
 code__60337260();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53827980(),ack_60308160_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__53827860(),run_60338580_mac__n1_58347_59883540_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = run_60338580_mac__n1_58347_59883540_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60336080();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_60308180_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value;
         src1 = run_60338580_mac__n1_58347_59883540_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60606760();
   }
   else {
  code__60335260();
   }
      }
   }
}

Block make__60338460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60338460 = block;
   block->owner = (Object)__51694660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60338460;

   return block;
};

Block __50787420;

void code__50787420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_53009640_channel__b0_58352_51694380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value;
            idx = value2integer(abus__r_52172400_channel__b0_58352_51694380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_52172480_channel__b0_58352_51694380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__50787420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50787420 = block;
   block->owner = (Object)__58166060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50787420;

   return block;
};

Block __53639980;

void code__53639980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_52172480_channel__b0_58352_51694380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value,_58356_61022680_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__53639980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53639980 = block;
   block->owner = (Object)__53639340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53639980;

   return block;
};

Block __53639200;

void code__53639200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58356_61022680_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value,dbus__r_52172480_channel__b0_58352_51694380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__53639200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53639200 = block;
   block->owner = (Object)__53638700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53639200;

   return block;
};

Block __53637160;

void code__53637160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58354_61022640_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value,trig__r_51847060_channel__b0_58352_51694380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__53637160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53637160 = block;
   block->owner = (Object)__53636980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53637160;

   return block;
};

Block __53636880;

void code__53636880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_51847060_channel__b0_58352_51694380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value,_58354_61022640_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__53636880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53636880 = block;
   block->owner = (Object)__53636420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53636880;

   return block;
};

Block __53635320;

void code__53635320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58355_61022560_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value,abus__r_52172400_channel__b0_58352_51694380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__53635320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53635320 = block;
   block->owner = (Object)__53634240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53635320;

   return block;
};

Block __53634160;

void code__53634160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_52172400_channel__b0_58352_51694380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value,_58355_61022560_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__53634160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53634160 = block;
   block->owner = (Object)__53633280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53634160;

   return block;
};

Block __53670820;

void code__53670820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58370_61161740_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value,reg__0_58380620_channel__z_58367_58165940_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__53670820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53670820 = block;
   block->owner = (Object)__53670540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53670820;

   return block;
};

Block __53670420;

void code__53670420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_58380620_channel__z_58367_58165940_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value,_58370_61161740_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__53670420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53670420 = block;
   block->owner = (Object)__53669960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53670420;

   return block;
};

Block __53668200;

void code__53668200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_58380620_channel__z_58367_58165940_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value,_58369_47396480_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__53668200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53668200 = block;
   block->owner = (Object)__53667800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53668200;

   return block;
};

Block __53667700;

void code__53667700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58369_47396480_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value,reg__0_58380620_channel__z_58367_58165940_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__53667700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53667700 = block;
   block->owner = (Object)__53667500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53667700;

   return block;
};

Block __59294220;

Block __59294060;

void code__59294060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48864000(),_58354_61022640_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__59294060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59294060 = block;
   block->owner = (Object)__59294220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59294060;

   return block;
};

Block __59317240;

Block __59316880;

void code__59316880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58319_60753440_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value,lv0_59131020_add__n_58395_58870720_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48863440(),lvok0_59294440_add__n_58395_58870720_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__59316880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59316880 = block;
   block->owner = (Object)__59317240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59316880;

   return block;
};

Block __59502240;

Block __59501920;

Block __59501020;

void code__59501020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58356_61022680_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value,rv0_59294460_add__n_58395_58870720_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48863040(),_58354_61022640_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48862980(),rvok0_59294420_add__n_58395_58870720_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__59501020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59501020 = block;
   block->owner = (Object)__59501920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59501020;

   return block;
};

Block __59501760;

void code__59501760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48862900(),_58355_61022560_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48862840(),_58354_61022640_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__59501760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59501760 = block;
   block->owner = (Object)__59501920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59501760;

   return block;
};

void code__59501920() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58354_61022640_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__48863200();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59501020();
   }
   else {
  code__59501760();
   }
      }
   }
}

Block make__59501920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59501920 = block;
   block->owner = (Object)__59502240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59501920;

   return block;
};

void code__59502240() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58357_61022660_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__48863360();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59501920();
   }
      }
   }
}

Block make__59502240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59502240 = block;
   block->owner = (Object)__59317240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59502240;

   return block;
};

Block __59695980;

Block __59695420;

void code__59695420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_59131020_add__n_58395_58870720_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value;
      src1 = rv0_59294460_add__n_58395_58870720_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58370_61161740_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__59695420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59695420 = block;
   block->owner = (Object)__59695980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59695420;

   return block;
};

void code__59695980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48862620(),run_59294380_add__n_58395_58870720_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48862500(),ack__add_60308120_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
 code__59695420();
}

Block make__59695980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59695980 = block;
   block->owner = (Object)__59317240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59695980;

   return block;
};

void code__59317240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48863620(),run_59294380_add__n_58395_58870720_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
 code__59316880();
 code__59502240();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_59294440_add__n_58395_58870720_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value;
         src1 = rvok0_59294420_add__n_58395_58870720_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59695980();
   }
      }
   }
}

Block make__59317240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59317240 = block;
   block->owner = (Object)__59294220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59317240;

   return block;
};

Block __59317860;

void code__59317860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48862160(),lvok0_59294440_add__n_58395_58870720_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48862040(),rvok0_59294420_add__n_58395_58870720_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
}

Block make__59317860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59317860 = block;
   block->owner = (Object)__59294220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59317860;

   return block;
};

void code__59294220() {
 code__59294060();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48863900(),ack__add_60308120_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__48863780(),run_59294380_add__n_58395_58870720_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_60308140_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value;
         src1 = run_59294380_add__n_58395_58870720_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59317240();
   }
   else {
  code__59317860();
   }
      }
   }
}

Block make__59294220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59294220 = block;
   block->owner = (Object)__60308320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59294220;

   return block;
};

Value make__49464160() {
   static unsigned long long data[] = { 20ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49464140() {
   static unsigned long long data[] = { 13ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__53822520() {
   static unsigned long long data[] = { 4294967294ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__53828440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53828360() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53828280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53828140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53828040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53827980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53827860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53827740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53827680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53827560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53827320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53826880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53826760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53826660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__53826480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53826340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53826120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53826020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53825940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53825760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53825600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53825380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53825000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53824940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53824060() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__53823520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53823400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53823100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53823040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__53822920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__48864000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48863900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48863780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48863620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48863440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48863360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48863200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__48863040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48862980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48862900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__48862840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48862620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48862500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48862160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48862040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48860440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48860380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48860200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48860140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48860040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__48859800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope layer1_58_84_53824340;

SignalI req__mac_60308180_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makereq__mac_60308180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_60308180_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)layer1_58_84_53824340;
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

SignalI ack_60308160_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makeack_60308160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_60308160_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)layer1_58_84_53824340;
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

SignalI ack__mac_60308140_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makeack__mac_60308140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_60308140_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)layer1_58_84_53824340;
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

SignalI ack__add_60308120_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makeack__add_60308120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_60308120_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)layer1_58_84_53824340;
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

SignalI _58311_60445120_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI make_58311_60445120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58311_60445120_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)layer1_58_84_53824340;
   signalI->name = ":311";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58309_60445100_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI make_58309_60445100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58309_60445100_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)layer1_58_84_53824340;
   signalI->name = ":309";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58310_60445020_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI make_58310_60445020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58310_60445020_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)layer1_58_84_53824340;
   signalI->name = ":310";
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

SignalI _58320_60646960_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI make_58320_60646960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58320_60646960_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)layer1_58_84_53824340;
   signalI->name = ":320";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58319_60753440_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI make_58319_60753440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58319_60753440_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)layer1_58_84_53824340;
   signalI->name = ":319";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58356_61022680_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI make_58356_61022680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58356_61022680_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)layer1_58_84_53824340;
   signalI->name = ":356";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58357_61022660_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI make_58357_61022660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58357_61022660_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)layer1_58_84_53824340;
   signalI->name = ":357";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58354_61022640_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI make_58354_61022640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58354_61022640_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)layer1_58_84_53824340;
   signalI->name = ":354";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58355_61022560_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI make_58355_61022560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58355_61022560_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)layer1_58_84_53824340;
   signalI->name = ":355";
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

SignalI _58370_61161740_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI make_58370_61161740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58370_61161740_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)layer1_58_84_53824340;
   signalI->name = ":370";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI value__z0_61364000_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makevalue__z0_61364000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_61364000_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)layer1_58_84_53824340;
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

SignalI value__a0_61641400_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makevalue__a0_61641400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_61641400_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)layer1_58_84_53824340;
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

SignalI flag__z0_61641380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makeflag__z0_61641380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_61641380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)layer1_58_84_53824340;
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

SignalI ack__a0_61641360_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makeack__a0_61641360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_61641360_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)layer1_58_84_53824340;
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

SignalI _58369_47396480_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI make_58369_47396480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58369_47396480_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)layer1_58_84_53824340;
   signalI->name = ":369";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SystemI counter_47573720;

SystemI makecounter_47573720() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_47573720 = systemI;
   systemI->owner = (Object)layer1_58_84_53824340;
   systemI->name = "counter";
   systemI->system = counter_58_8400_47474100;

   return systemI;
};

SystemI func0_53667600;

SystemI makefunc0_53667600() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_53667600 = systemI;
   systemI->owner = (Object)layer1_58_84_53824340;
   systemI->name = "func0";
   systemI->system = func0_58_8400_52870840;

   return systemI;
};

Scope channel__w0_58302_53824040;

SignalI trig__r_53822360_channel__w0_58302_53824040_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI maketrig__r_53822360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_53822360_channel__w0_58302_53824040_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)channel__w0_58302_53824040;
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

SignalI dbus__r_58083820_channel__w0_58302_53824040_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makedbus__r_58083820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_58083820_channel__w0_58302_53824040_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)channel__w0_58302_53824040;
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

SignalI abus__r_58083740_channel__w0_58302_53824040_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makeabus__r_58083740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_58083740_channel__w0_58302_53824040_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)channel__w0_58302_53824040;
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

SignalI mem_58728900_channel__w0_58302_53824040_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makemem_58728900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_58728900_channel__w0_58302_53824040_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)channel__w0_58302_53824040;
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
         src0 = make__49464160();
         src1 = make__49464140();
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

Scope raddr_58303_53823740;

Scope makeraddr_58303_53823740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58303_53823740 = scope;
   scope->owner = (Object)channel__w0_58302_53824040;
   scope->name = "raddr:303";
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

Scope rinc_58308_53823320;

Scope makerinc_58308_53823320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58308_53823320 = scope;
   scope->owner = (Object)channel__w0_58302_53824040;
   scope->name = "rinc:308";
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

Scope rdec_58312_53822800;

Scope makerdec_58312_53822800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58312_53822800 = scope;
   scope->owner = (Object)channel__w0_58302_53824040;
   scope->name = "rdec:312";
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

Behavior __59397500;

Behavior make__59397500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59397500 = behavior;
   behavior->owner = (Object)channel__w0_58302_53824040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_59225760_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   clk_59225760_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_neg += 1;
   clk_59225760_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->neg = realloc(clk_59225760_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->neg,clk_59225760_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_neg*sizeof(Object));
clk_59225760_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->neg[clk_59225760_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_neg-1] = (Object)behavior;
   behavior->block = make__58886760();

   return behavior;
}

Behavior __53566200;

Behavior make__53566200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53566200 = behavior;
   behavior->owner = (Object)channel__w0_58302_53824040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_58083820_channel__w0_58302_53824040_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   dbus__r_58083820_channel__w0_58302_53824040_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   dbus__r_58083820_channel__w0_58302_53824040_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(dbus__r_58083820_channel__w0_58302_53824040_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,dbus__r_58083820_channel__w0_58302_53824040_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
dbus__r_58083820_channel__w0_58302_53824040_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[dbus__r_58083820_channel__w0_58302_53824040_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->block = make__53566800();

   return behavior;
}

Behavior __53565520;

Behavior make__53565520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53565520 = behavior;
   behavior->owner = (Object)channel__w0_58302_53824040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58311_60445120_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   _58311_60445120_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   _58311_60445120_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(_58311_60445120_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,_58311_60445120_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
_58311_60445120_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[_58311_60445120_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->block = make__53566120();

   return behavior;
}

Behavior __53564520;

Behavior make__53564520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53564520 = behavior;
   behavior->owner = (Object)channel__w0_58302_53824040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58309_60445100_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   _58309_60445100_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   _58309_60445100_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(_58309_60445100_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,_58309_60445100_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
_58309_60445100_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[_58309_60445100_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->block = make__53564720();

   return behavior;
}

Behavior __53564000;

Behavior make__53564000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53564000 = behavior;
   behavior->owner = (Object)channel__w0_58302_53824040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_53822360_channel__w0_58302_53824040_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   trig__r_53822360_channel__w0_58302_53824040_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   trig__r_53822360_channel__w0_58302_53824040_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(trig__r_53822360_channel__w0_58302_53824040_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,trig__r_53822360_channel__w0_58302_53824040_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
trig__r_53822360_channel__w0_58302_53824040_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[trig__r_53822360_channel__w0_58302_53824040_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->block = make__53564440();

   return behavior;
}

Behavior __53562460;

Behavior make__53562460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53562460 = behavior;
   behavior->owner = (Object)channel__w0_58302_53824040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58310_60445020_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   _58310_60445020_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   _58310_60445020_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(_58310_60445020_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,_58310_60445020_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
_58310_60445020_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[_58310_60445020_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->block = make__53562780();

   return behavior;
}

Behavior __53561860;

Behavior make__53561860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53561860 = behavior;
   behavior->owner = (Object)channel__w0_58302_53824040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_58083740_channel__w0_58302_53824040_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   abus__r_58083740_channel__w0_58302_53824040_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   abus__r_58083740_channel__w0_58302_53824040_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(abus__r_58083740_channel__w0_58302_53824040_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,abus__r_58083740_channel__w0_58302_53824040_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
abus__r_58083740_channel__w0_58302_53824040_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[abus__r_58083740_channel__w0_58302_53824040_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->block = make__53562380();

   return behavior;
}

Scope makechannel__w0_58302_53824040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58302_53824040 = scope;
   scope->owner = (Object)layer1_58_84_53824340;
   scope->name = "channel_w0:302";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_53822360();
   scope->inners[1] = makedbus__r_58083820();
   scope->inners[2] = makeabus__r_58083740();
   scope->inners[3] = makemem_58728900();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58303_53823740();
   scope->scopes[1] = makerinc_58308_53823320();
   scope->scopes[2] = makerdec_58312_53822800();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59397500();
   scope->behaviors[1] = make__53566200();
   scope->behaviors[2] = make__53565520();
   scope->behaviors[3] = make__53564520();
   scope->behaviors[4] = make__53564000();
   scope->behaviors[5] = make__53562460();
   scope->behaviors[6] = make__53561860();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58317_59397380;

SignalI reg__0_59500840_channel__accum_58317_59397380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makereg__0_59500840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_59500840_channel__accum_58317_59397380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)channel__accum_58317_59397380;
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

Scope anum_58318_59397040;

Scope makeanum_58318_59397040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58318_59397040 = scope;
   scope->owner = (Object)channel__accum_58317_59397380;
   scope->name = "anum:318";
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

Scope rnum_58321_59396560;

Scope makernum_58321_59396560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rnum_58321_59396560 = scope;
   scope->owner = (Object)channel__accum_58317_59397380;
   scope->name = "rnum:321";
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

Scope wnum_58323_59396140;

Scope makewnum_58323_59396140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wnum_58323_59396140 = scope;
   scope->owner = (Object)channel__accum_58317_59397380;
   scope->name = "wnum:323";
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

Scope raddr_58325_59395720;

Scope makeraddr_58325_59395720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58325_59395720 = scope;
   scope->owner = (Object)channel__accum_58317_59397380;
   scope->name = "raddr:325";
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

Scope waddr_58328_59395300;

Scope makewaddr_58328_59395300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58328_59395300 = scope;
   scope->owner = (Object)channel__accum_58317_59397380;
   scope->name = "waddr:328";
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

Scope rinc_58331_59394780;

SignalI abus__r_59394400_rinc_58331_59394780_channel__accum_58317_59397380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makeabus__r_59394400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_59394400_rinc_58331_59394780_channel__accum_58317_59397380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)rinc_58331_59394780;
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

Scope makerinc_58331_59394780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58331_59394780 = scope;
   scope->owner = (Object)channel__accum_58317_59397380;
   scope->name = "rinc:331";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_59394400();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58335_59394280;

SignalI abus__w_59393900_winc_58335_59394280_channel__accum_58317_59397380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makeabus__w_59393900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_59393900_winc_58335_59394280_channel__accum_58317_59397380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)winc_58335_59394280;
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

Scope makewinc_58335_59394280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58335_59394280 = scope;
   scope->owner = (Object)channel__accum_58317_59397380;
   scope->name = "winc:335";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_59393900();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58339_59393780;

SignalI abus__r_59393400_rdec_58339_59393780_channel__accum_58317_59397380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makeabus__r_59393400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_59393400_rdec_58339_59393780_channel__accum_58317_59397380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)rdec_58339_59393780;
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

Scope makerdec_58339_59393780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58339_59393780 = scope;
   scope->owner = (Object)channel__accum_58317_59397380;
   scope->name = "rdec:339";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_59393400();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58343_59393280;

SignalI abus__w_59392860_wdec_58343_59393280_channel__accum_58317_59397380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makeabus__w_59392860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_59392860_wdec_58343_59393280_channel__accum_58317_59397380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)wdec_58343_59393280;
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

Scope makewdec_58343_59393280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58343_59393280 = scope;
   scope->owner = (Object)channel__accum_58317_59397380;
   scope->name = "wdec:343";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_59392860();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __53582720;

Behavior make__53582720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53582720 = behavior;
   behavior->owner = (Object)channel__accum_58317_59397380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58320_60646960_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   _58320_60646960_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   _58320_60646960_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(_58320_60646960_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,_58320_60646960_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
_58320_60646960_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[_58320_60646960_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->block = make__53582980();

   return behavior;
}

Behavior __53582320;

Behavior make__53582320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53582320 = behavior;
   behavior->owner = (Object)channel__accum_58317_59397380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_59500840_channel__accum_58317_59397380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   reg__0_59500840_channel__accum_58317_59397380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   reg__0_59500840_channel__accum_58317_59397380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(reg__0_59500840_channel__accum_58317_59397380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,reg__0_59500840_channel__accum_58317_59397380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
reg__0_59500840_channel__accum_58317_59397380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[reg__0_59500840_channel__accum_58317_59397380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->block = make__53582680();

   return behavior;
}

Behavior __53580260;

Behavior make__53580260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53580260 = behavior;
   behavior->owner = (Object)channel__accum_58317_59397380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_59500840_channel__accum_58317_59397380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   reg__0_59500840_channel__accum_58317_59397380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   reg__0_59500840_channel__accum_58317_59397380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(reg__0_59500840_channel__accum_58317_59397380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,reg__0_59500840_channel__accum_58317_59397380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
reg__0_59500840_channel__accum_58317_59397380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[reg__0_59500840_channel__accum_58317_59397380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->block = make__53581100();

   return behavior;
}

Behavior __53579720;

Behavior make__53579720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53579720 = behavior;
   behavior->owner = (Object)channel__accum_58317_59397380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58319_60753440_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   _58319_60753440_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   _58319_60753440_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(_58319_60753440_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,_58319_60753440_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
_58319_60753440_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[_58319_60753440_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->block = make__53580180();

   return behavior;
}

Scope makechannel__accum_58317_59397380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58317_59397380 = scope;
   scope->owner = (Object)layer1_58_84_53824340;
   scope->name = "channel_accum:317";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_59500840();
   scope->num_scopes = 9;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58318_59397040();
   scope->scopes[1] = makernum_58321_59396560();
   scope->scopes[2] = makewnum_58323_59396140();
   scope->scopes[3] = makeraddr_58325_59395720();
   scope->scopes[4] = makewaddr_58328_59395300();
   scope->scopes[5] = makerinc_58331_59394780();
   scope->scopes[6] = makewinc_58335_59394280();
   scope->scopes[7] = makerdec_58339_59393780();
   scope->scopes[8] = makewdec_58343_59393280();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53582720();
   scope->behaviors[1] = make__53582320();
   scope->behaviors[2] = make__53580260();
   scope->behaviors[3] = make__53579720();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58347_59883540;

SignalI lv0_60073300_mac__n1_58347_59883540_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makelv0_60073300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_60073300_mac__n1_58347_59883540_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)mac__n1_58347_59883540;
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

SignalI av0_60197800_mac__n1_58347_59883540_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makeav0_60197800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_60197800_mac__n1_58347_59883540_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)mac__n1_58347_59883540;
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

SignalI rv_60338660_mac__n1_58347_59883540_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makerv_60338660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_60338660_mac__n1_58347_59883540_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)mac__n1_58347_59883540;
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

SignalI lvok0_60338640_mac__n1_58347_59883540_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makelvok0_60338640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_60338640_mac__n1_58347_59883540_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)mac__n1_58347_59883540;
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

SignalI rvok_60338620_mac__n1_58347_59883540_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makervok_60338620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_60338620_mac__n1_58347_59883540_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)mac__n1_58347_59883540;
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

SignalI wok0_60338600_mac__n1_58347_59883540_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makewok0_60338600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok0_60338600_mac__n1_58347_59883540_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)mac__n1_58347_59883540;
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

SignalI run_60338580_mac__n1_58347_59883540_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makerun_60338580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_60338580_mac__n1_58347_59883540_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)mac__n1_58347_59883540;
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

Behavior __51694660;

Behavior make__51694660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51694660 = behavior;
   behavior->owner = (Object)mac__n1_58347_59883540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_59225760_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   clk_59225760_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_pos += 1;
   clk_59225760_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->pos = realloc(clk_59225760_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->pos,clk_59225760_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_pos*sizeof(Object));
clk_59225760_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->pos[clk_59225760_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_pos-1] = (Object)behavior;
   behavior->block = make__60338460();

   return behavior;
}

Scope makemac__n1_58347_59883540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58347_59883540 = scope;
   scope->owner = (Object)layer1_58_84_53824340;
   scope->name = "mac_n1:347";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_60073300();
   scope->inners[1] = makeav0_60197800();
   scope->inners[2] = makerv_60338660();
   scope->inners[3] = makelvok0_60338640();
   scope->inners[4] = makervok_60338620();
   scope->inners[5] = makewok0_60338600();
   scope->inners[6] = makerun_60338580();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51694660();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__b0_58352_51694380;

SignalI trig__r_51847060_channel__b0_58352_51694380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI maketrig__r_51847060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_51847060_channel__b0_58352_51694380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)channel__b0_58352_51694380;
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

SignalI dbus__r_52172480_channel__b0_58352_51694380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makedbus__r_52172480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_52172480_channel__b0_58352_51694380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)channel__b0_58352_51694380;
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

SignalI abus__r_52172400_channel__b0_58352_51694380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makeabus__r_52172400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_52172400_channel__b0_58352_51694380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)channel__b0_58352_51694380;
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

SignalI mem_53009640_channel__b0_58352_51694380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makemem_53009640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_53009640_channel__b0_58352_51694380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)channel__b0_58352_51694380;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(({
         Value src0;
         Value dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = make__53822520();
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

Scope raddr_58353_51693880;

Scope makeraddr_58353_51693880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58353_51693880 = scope;
   scope->owner = (Object)channel__b0_58352_51694380;
   scope->name = "raddr:353";
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

Scope rinc_58358_51692780;

Scope makerinc_58358_51692780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58358_51692780 = scope;
   scope->owner = (Object)channel__b0_58352_51694380;
   scope->name = "rinc:358";
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

Scope rdec_58362_51691940;

Scope makerdec_58362_51691940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58362_51691940 = scope;
   scope->owner = (Object)channel__b0_58352_51694380;
   scope->name = "rdec:362";
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

Behavior __58166060;

Behavior make__58166060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58166060 = behavior;
   behavior->owner = (Object)channel__b0_58352_51694380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_59225760_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   clk_59225760_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_neg += 1;
   clk_59225760_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->neg = realloc(clk_59225760_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->neg,clk_59225760_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_neg*sizeof(Object));
clk_59225760_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->neg[clk_59225760_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_neg-1] = (Object)behavior;
   behavior->block = make__50787420();

   return behavior;
}

Behavior __53639340;

Behavior make__53639340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53639340 = behavior;
   behavior->owner = (Object)channel__b0_58352_51694380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_52172480_channel__b0_58352_51694380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   dbus__r_52172480_channel__b0_58352_51694380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   dbus__r_52172480_channel__b0_58352_51694380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(dbus__r_52172480_channel__b0_58352_51694380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,dbus__r_52172480_channel__b0_58352_51694380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
dbus__r_52172480_channel__b0_58352_51694380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[dbus__r_52172480_channel__b0_58352_51694380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->block = make__53639980();

   return behavior;
}

Behavior __53638700;

Behavior make__53638700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53638700 = behavior;
   behavior->owner = (Object)channel__b0_58352_51694380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58356_61022680_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   _58356_61022680_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   _58356_61022680_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(_58356_61022680_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,_58356_61022680_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
_58356_61022680_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[_58356_61022680_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->block = make__53639200();

   return behavior;
}

Behavior __53636980;

Behavior make__53636980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53636980 = behavior;
   behavior->owner = (Object)channel__b0_58352_51694380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58354_61022640_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   _58354_61022640_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   _58354_61022640_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(_58354_61022640_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,_58354_61022640_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
_58354_61022640_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[_58354_61022640_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->block = make__53637160();

   return behavior;
}

Behavior __53636420;

Behavior make__53636420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53636420 = behavior;
   behavior->owner = (Object)channel__b0_58352_51694380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_51847060_channel__b0_58352_51694380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   trig__r_51847060_channel__b0_58352_51694380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   trig__r_51847060_channel__b0_58352_51694380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(trig__r_51847060_channel__b0_58352_51694380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,trig__r_51847060_channel__b0_58352_51694380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
trig__r_51847060_channel__b0_58352_51694380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[trig__r_51847060_channel__b0_58352_51694380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->block = make__53636880();

   return behavior;
}

Behavior __53634240;

Behavior make__53634240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53634240 = behavior;
   behavior->owner = (Object)channel__b0_58352_51694380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58355_61022560_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   _58355_61022560_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   _58355_61022560_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(_58355_61022560_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,_58355_61022560_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
_58355_61022560_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[_58355_61022560_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->block = make__53635320();

   return behavior;
}

Behavior __53633280;

Behavior make__53633280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53633280 = behavior;
   behavior->owner = (Object)channel__b0_58352_51694380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_52172400_channel__b0_58352_51694380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   abus__r_52172400_channel__b0_58352_51694380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   abus__r_52172400_channel__b0_58352_51694380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(abus__r_52172400_channel__b0_58352_51694380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,abus__r_52172400_channel__b0_58352_51694380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
abus__r_52172400_channel__b0_58352_51694380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[abus__r_52172400_channel__b0_58352_51694380_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->block = make__53634160();

   return behavior;
}

Scope makechannel__b0_58352_51694380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__b0_58352_51694380 = scope;
   scope->owner = (Object)layer1_58_84_53824340;
   scope->name = "channel_b0:352";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_51847060();
   scope->inners[1] = makedbus__r_52172480();
   scope->inners[2] = makeabus__r_52172400();
   scope->inners[3] = makemem_53009640();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58353_51693880();
   scope->scopes[1] = makerinc_58358_51692780();
   scope->scopes[2] = makerdec_58362_51691940();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__58166060();
   scope->behaviors[1] = make__53639340();
   scope->behaviors[2] = make__53638700();
   scope->behaviors[3] = make__53636980();
   scope->behaviors[4] = make__53636420();
   scope->behaviors[5] = make__53634240();
   scope->behaviors[6] = make__53633280();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58367_58165940;

SignalI reg__0_58380620_channel__z_58367_58165940_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makereg__0_58380620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_58380620_channel__z_58367_58165940_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)channel__z_58367_58165940;
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

Scope anum_58368_58165640;

Scope makeanum_58368_58165640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58368_58165640 = scope;
   scope->owner = (Object)channel__z_58367_58165940;
   scope->name = "anum:368";
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

Scope rnum_58371_58165220;

Scope makernum_58371_58165220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rnum_58371_58165220 = scope;
   scope->owner = (Object)channel__z_58367_58165940;
   scope->name = "rnum:371";
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

Scope wnum_58373_58164760;

Scope makewnum_58373_58164760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wnum_58373_58164760 = scope;
   scope->owner = (Object)channel__z_58367_58165940;
   scope->name = "wnum:373";
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

Scope raddr_58375_58164220;

Scope makeraddr_58375_58164220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58375_58164220 = scope;
   scope->owner = (Object)channel__z_58367_58165940;
   scope->name = "raddr:375";
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

Scope waddr_58378_58163760;

Scope makewaddr_58378_58163760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58378_58163760 = scope;
   scope->owner = (Object)channel__z_58367_58165940;
   scope->name = "waddr:378";
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

Scope rinc_58381_58163340;

SignalI abus__r_58261220_rinc_58381_58163340_channel__z_58367_58165940_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makeabus__r_58261220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_58261220_rinc_58381_58163340_channel__z_58367_58165940_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)rinc_58381_58163340;
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

Scope makerinc_58381_58163340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58381_58163340 = scope;
   scope->owner = (Object)channel__z_58367_58165940;
   scope->name = "rinc:381";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_58261220();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58384_58261060;

SignalI abus__w_58260620_winc_58384_58261060_channel__z_58367_58165940_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makeabus__w_58260620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_58260620_winc_58384_58261060_channel__z_58367_58165940_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)winc_58384_58261060;
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

Scope makewinc_58384_58261060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58384_58261060 = scope;
   scope->owner = (Object)channel__z_58367_58165940;
   scope->name = "winc:384";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_58260620();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58387_58260460;

SignalI abus__r_58260020_rdec_58387_58260460_channel__z_58367_58165940_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makeabus__r_58260020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_58260020_rdec_58387_58260460_channel__z_58367_58165940_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)rdec_58387_58260460;
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

Scope makerdec_58387_58260460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58387_58260460 = scope;
   scope->owner = (Object)channel__z_58367_58165940;
   scope->name = "rdec:387";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_58260020();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58391_58259900;

SignalI abus__w_58259520_wdec_58391_58259900_channel__z_58367_58165940_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makeabus__w_58259520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_58259520_wdec_58391_58259900_channel__z_58367_58165940_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)wdec_58391_58259900;
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

Scope makewdec_58391_58259900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58391_58259900 = scope;
   scope->owner = (Object)channel__z_58367_58165940;
   scope->name = "wdec:391";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_58259520();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __53670540;

Behavior make__53670540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53670540 = behavior;
   behavior->owner = (Object)channel__z_58367_58165940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58370_61161740_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   _58370_61161740_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   _58370_61161740_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(_58370_61161740_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,_58370_61161740_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
_58370_61161740_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[_58370_61161740_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->block = make__53670820();

   return behavior;
}

Behavior __53669960;

Behavior make__53669960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53669960 = behavior;
   behavior->owner = (Object)channel__z_58367_58165940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_58380620_channel__z_58367_58165940_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   reg__0_58380620_channel__z_58367_58165940_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   reg__0_58380620_channel__z_58367_58165940_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(reg__0_58380620_channel__z_58367_58165940_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,reg__0_58380620_channel__z_58367_58165940_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
reg__0_58380620_channel__z_58367_58165940_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[reg__0_58380620_channel__z_58367_58165940_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->block = make__53670420();

   return behavior;
}

Behavior __53667800;

Behavior make__53667800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53667800 = behavior;
   behavior->owner = (Object)channel__z_58367_58165940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_58380620_channel__z_58367_58165940_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   reg__0_58380620_channel__z_58367_58165940_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   reg__0_58380620_channel__z_58367_58165940_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(reg__0_58380620_channel__z_58367_58165940_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,reg__0_58380620_channel__z_58367_58165940_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
reg__0_58380620_channel__z_58367_58165940_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[reg__0_58380620_channel__z_58367_58165940_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->block = make__53668200();

   return behavior;
}

Behavior __53667500;

Behavior make__53667500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53667500 = behavior;
   behavior->owner = (Object)channel__z_58367_58165940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58369_47396480_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   _58369_47396480_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   _58369_47396480_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(_58369_47396480_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,_58369_47396480_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
_58369_47396480_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[_58369_47396480_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->block = make__53667700();

   return behavior;
}

Scope makechannel__z_58367_58165940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58367_58165940 = scope;
   scope->owner = (Object)layer1_58_84_53824340;
   scope->name = "channel_z:367";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_58380620();
   scope->num_scopes = 9;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58368_58165640();
   scope->scopes[1] = makernum_58371_58165220();
   scope->scopes[2] = makewnum_58373_58164760();
   scope->scopes[3] = makeraddr_58375_58164220();
   scope->scopes[4] = makewaddr_58378_58163760();
   scope->scopes[5] = makerinc_58381_58163340();
   scope->scopes[6] = makewinc_58384_58261060();
   scope->scopes[7] = makerdec_58387_58260460();
   scope->scopes[8] = makewdec_58391_58259900();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53670540();
   scope->behaviors[1] = make__53669960();
   scope->behaviors[2] = make__53667800();
   scope->behaviors[3] = make__53667500();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58395_58870720;

SignalI lv0_59131020_add__n_58395_58870720_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makelv0_59131020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_59131020_add__n_58395_58870720_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)add__n_58395_58870720;
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

SignalI rv0_59294460_add__n_58395_58870720_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makerv0_59294460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_59294460_add__n_58395_58870720_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)add__n_58395_58870720;
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

SignalI lvok0_59294440_add__n_58395_58870720_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makelvok0_59294440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_59294440_add__n_58395_58870720_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)add__n_58395_58870720;
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

SignalI rvok0_59294420_add__n_58395_58870720_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makervok0_59294420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_59294420_add__n_58395_58870720_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)add__n_58395_58870720;
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

SignalI run_59294380_add__n_58395_58870720_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140;

SignalI makerun_59294380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_59294380_add__n_58395_58870720_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140 = signalI;
   signalI->owner = (Object)add__n_58395_58870720;
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

Behavior __60308320;

Behavior make__60308320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60308320 = behavior;
   behavior->owner = (Object)add__n_58395_58870720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_59225760_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   clk_59225760_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_pos += 1;
   clk_59225760_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->pos = realloc(clk_59225760_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->pos,clk_59225760_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_pos*sizeof(Object));
clk_59225760_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->pos[clk_59225760_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_pos-1] = (Object)behavior;
   behavior->block = make__59294220();

   return behavior;
}

Scope makeadd__n_58395_58870720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58395_58870720 = scope;
   scope->owner = (Object)layer1_58_84_53824340;
   scope->name = "add_n:395";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_59131020();
   scope->inners[1] = makerv0_59294460();
   scope->inners[2] = makelvok0_59294440();
   scope->inners[3] = makervok0_59294420();
   scope->inners[4] = makerun_59294380();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60308320();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __58497860;

Behavior make__58497860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58497860 = behavior;
   behavior->owner = (Object)layer1_58_84_53824340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_59225760_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   clk_59225760_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_pos += 1;
   clk_59225760_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->pos = realloc(clk_59225760_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->pos,clk_59225760_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_pos*sizeof(Object));
clk_59225760_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->pos[clk_59225760_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_pos-1] = (Object)behavior;
   behavior->block = make__58433660();

   return behavior;
}

Behavior __58793780;

Behavior make__58793780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58793780 = behavior;
   behavior->owner = (Object)layer1_58_84_53824340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_59225760_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   clk_59225760_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_pos += 1;
   clk_59225760_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->pos = realloc(clk_59225760_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->pos,clk_59225760_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_pos*sizeof(Object));
clk_59225760_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->pos[clk_59225760_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_pos-1] = (Object)behavior;
   behavior->block = make__58497640();

   return behavior;
}

Behavior __59195740;

Behavior make__59195740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59195740 = behavior;
   behavior->owner = (Object)layer1_58_84_53824340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_59225760_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   clk_59225760_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_pos += 1;
   clk_59225760_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->pos = realloc(clk_59225760_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->pos,clk_59225760_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_pos*sizeof(Object));
clk_59225760_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->pos[clk_59225760_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_pos-1] = (Object)behavior;
   behavior->block = make__58793660();

   return behavior;
}

Behavior __53289940;

Behavior make__53289940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53289940 = behavior;
   behavior->owner = (Object)layer1_58_84_53824340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_59225680_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   req_59225680_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   req_59225680_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(req_59225680_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,req_59225680_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
req_59225680_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[req_59225680_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_60308140_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   ack__mac_60308140_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   ack__mac_60308140_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(ack__mac_60308140_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,ack__mac_60308140_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
ack__mac_60308140_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[ack__mac_60308140_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->block = make__53290400();

   return behavior;
}

Behavior __53487380;

Behavior make__53487380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53487380 = behavior;
   behavior->owner = (Object)layer1_58_84_53824340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_59225760_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   clk_59225760_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   clk_59225760_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(clk_59225760_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,clk_59225760_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
clk_59225760_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[clk_59225760_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_60308160_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   ack_60308160_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   ack_60308160_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(ack_60308160_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,ack_60308160_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
ack_60308160_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[ack_60308160_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_59225740_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   rst_59225740_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   rst_59225740_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(rst_59225740_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,rst_59225740_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
rst_59225740_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[rst_59225740_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_61364000_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   value__z0_61364000_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   value__z0_61364000_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(value__z0_61364000_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,value__z0_61364000_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
value__z0_61364000_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[value__z0_61364000_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__a0_61641360_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   ack__a0_61641360_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   ack__a0_61641360_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(ack__a0_61641360_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,ack__a0_61641360_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
ack__a0_61641360_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[ack__a0_61641360_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->block = make__53290800();

   return behavior;
}

Behavior __53487080;

Behavior make__53487080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53487080 = behavior;
   behavior->owner = (Object)layer1_58_84_53824340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_47574680_counter_58_8400_47474100_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   ack__mac_47574680_counter_58_8400_47474100_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   ack__mac_47574680_counter_58_8400_47474100_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(ack__mac_47574680_counter_58_8400_47474100_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,ack__mac_47574680_counter_58_8400_47474100_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
ack__mac_47574680_counter_58_8400_47474100_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[ack__mac_47574680_counter_58_8400_47474100_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_59225740_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   rst_59225740_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   rst_59225740_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(rst_59225740_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,rst_59225740_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
rst_59225740_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[rst_59225740_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,a_53667740_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140);
   a_53667740_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any += 1;
   a_53667740_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any = realloc(a_53667740_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any,a_53667740_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any*sizeof(Object));
a_53667740_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->any[a_53667740_func0_58_8400_52870840_layer1_58_84_53824340_layer1_58_840_59228120_neural__network_58_84_51977700_neural__network_58_840_61178100______58_84_49425780______58_840_48064140->num_any-1] = (Object)behavior;
   behavior->block = make__53290600();

   return behavior;
}

Scope makelayer1_58_84_53824340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer1_58_84_53824340 = scope;
   scope->owner = (Object)layer1_58_840_59228120;
   scope->name = "layer1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_47573720();
   scope->systemIs[1] = makefunc0_53667600();
   scope->num_inners = 19;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_60308180();
   scope->inners[1] = makeack_60308160();
   scope->inners[2] = makeack__mac_60308140();
   scope->inners[3] = makeack__add_60308120();
   scope->inners[4] = make_58311_60445120();
   scope->inners[5] = make_58309_60445100();
   scope->inners[6] = make_58310_60445020();
   scope->inners[7] = make_58320_60646960();
   scope->inners[8] = make_58319_60753440();
   scope->inners[9] = make_58356_61022680();
   scope->inners[10] = make_58357_61022660();
   scope->inners[11] = make_58354_61022640();
   scope->inners[12] = make_58355_61022560();
   scope->inners[13] = make_58370_61161740();
   scope->inners[14] = makevalue__z0_61364000();
   scope->inners[15] = makevalue__a0_61641400();
   scope->inners[16] = makeflag__z0_61641380();
   scope->inners[17] = makeack__a0_61641360();
   scope->inners[18] = make_58369_47396480();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58302_53824040();
   scope->scopes[1] = makechannel__accum_58317_59397380();
   scope->scopes[2] = makemac__n1_58347_59883540();
   scope->scopes[3] = makechannel__b0_58352_51694380();
   scope->scopes[4] = makechannel__z_58367_58165940();
   scope->scopes[5] = makeadd__n_58395_58870720();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__58497860();
   scope->behaviors[1] = make__58793780();
   scope->behaviors[2] = make__59195740();
   scope->behaviors[3] = make__53289940();
   scope->behaviors[4] = make__53487380();
   scope->behaviors[5] = make__53487080();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer1_58_840_59228120() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer1_58_840_59228120 = systemT;
systemT->owner = NULL;
   systemT->name = "layer1:T0";
   systemT->num_inputs = 5;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_59225760();
   systemT->inputs[1] = makerst_59225740();
   systemT->inputs[2] = makereq_59225680();
   systemT->inputs[3] = make_58123_59357220();
   systemT->inputs[4] = make_58124_59471840();
   systemT->num_outputs = 3;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_59471800();
   systemT->outputs[1] = make_58125_59471720();
   systemT->outputs[2] = make_5877_59628440();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makelayer1_58_84_53824340();

   return systemT;
}