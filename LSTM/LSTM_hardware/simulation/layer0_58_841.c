#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer0_58_841_55894220;

SignalI clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makeclk_55964840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_841_55894220;
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

SignalI rst_55964820_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makerst_55964820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_55964820_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_841_55894220;
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

SignalI req_55964780_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makereq_55964780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_55964780_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_841_55894220;
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

SignalI _58103_56305740_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI make_58103_56305740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58103_56305740_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_841_55894220;
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

SignalI ack__layer_56305700_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makeack__layer_56305700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_56305700_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_841_55894220;
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

SignalI _58101_56305620_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI make_58101_56305620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58101_56305620_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_841_55894220;
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

SignalI _58102_56305360_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI make_58102_56305360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58102_56305360_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_841_55894220;
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

SignalI _58143_56496580_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI make_58143_56496580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58143_56496580_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_841_55894220;
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

SignalI _58144_56681940_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI make_58144_56681940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58144_56681940_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_841_55894220;
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

Block __53962520;

Block __53962040;

void code__53962040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77466300(),ack_51277920_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77466240(),ack__mac_51277900_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77466180(),ack__add_51277880_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__53962040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53962040 = block;
   block->owner = (Object)__53962520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53962040;

   return block;
};

void code__53962520() {
   {
      Value cond = rst_55964820_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53962040();
   }
      }
   }
}

Block make__53962520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53962520 = block;
   block->owner = (Object)__54017740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53962520;

   return block;
};

Block __54017580;

Block __54016380;

Block __54016140;

void code__54016140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58272_54012920_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,value__z0_54696400_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77466000(),flag__z0_55052780_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__54016140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54016140 = block;
   block->owner = (Object)__54016380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54016140;

   return block;
};

Block __54694720;

void code__54694720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58273_54208920_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,value__z1_54851360_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77465860(),flag__z1_55052760_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__54694720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54694720 = block;
   block->owner = (Object)__54016380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54694720;

   return block;
};

void code__54016380() {
 code__54016140();
 code__54694720();
}

Block make__54016380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54016380 = block;
   block->owner = (Object)__54017580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54016380;

   return block;
};

Block __54017400;

void code__54017400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77465800(),flag__z0_55052780_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77465740(),flag__z1_55052760_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__54017400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54017400 = block;
   block->owner = (Object)__54017580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54017400;

   return block;
};

void code__54017580() {
   {
      Value cond = ack__add_51277880_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54016380();
   }
   else {
  code__54017400();
   }
      }
   }
}

Block make__54017580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54017580 = block;
   block->owner = (Object)__55066640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54017580;

   return block;
};

Block __55131720;

Block __55131360;

void code__55131360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77465600(),ack__a0_55052740_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77465540(),ack__a1_55052720_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__55131360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55131360 = block;
   block->owner = (Object)__55131720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55131360;

   return block;
};

Block __55130360;

Block __55130180;

void code__55130180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_54941020_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,_58143_56496580_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77465200(),ack__a0_55052740_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__55130180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55130180 = block;
   block->owner = (Object)__55130360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55130180;

   return block;
};

Block __55435600;

void code__55435600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a1_55052800_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,_58144_56681940_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77465060(),ack__a1_55052720_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__55435600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55435600 = block;
   block->owner = (Object)__55130360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55435600;

   return block;
};

void code__55130360() {
 code__55130180();
 code__55435600();
}

Block make__55130360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55130360 = block;
   block->owner = (Object)__55131720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55130360;

   return block;
};

void code__55131720() {
   {
      Value cond = rst_55964820_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55131360();
   }
   else if (value2integer(({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = flag__z0_55052780_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
         src1 = flag__z1_55052760_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; }))) {
  code__55130360();
   }
      }
   }
}

Block make__55131720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55131720 = block;
   block->owner = (Object)__55894820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55131720;

   return block;
};

Block __77199300;

void code__77199300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_55964780_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_51277900_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_51277960_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__77199300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77199300 = block;
   block->owner = (Object)__77199060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77199300;

   return block;
};

Block __77199580;

void code__77199580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,clk_55069720_counter_58_843_55072120_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_51277920_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,ack_55069700_counter_58_843_55072120_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_55964820_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,rst_55069680_counter_58_843_55072120_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_54696400_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,z__value_57492420_func0_58_843_57378180_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z1_54851360_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,z__value_45734160_func1_58_841_57381020_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ack__a0_55052740_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
      src1 = ack__a1_55052720_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),ack__layer_56305700_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__77199580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77199580 = block;
   block->owner = (Object)__77248660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77199580;

   return block;
};

Block __77199500;

void code__77199500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_55069640_counter_58_843_55072120_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,ack__mac_51277900_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_55964820_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,_58245_53882660_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_55964820_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,_58260_54379620_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_47882600_func0_58_843_57378180_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,value__a0_54941020_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_48097780_func1_58_841_57381020_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,value__a1_55052800_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__77199500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77199500 = block;
   block->owner = (Object)__77248480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77199500;

   return block;
};

Block __44659960;

void code__44659960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_57377280_channel__w0_58171_56634360_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
            idx = value2integer(abus__r_56711780_channel__w0_58171_56634360_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_56711860_channel__w0_58171_56634360_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__44659960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __44659960 = block;
   block->owner = (Object)__49647780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__44659960;

   return block;
};

Block __77247720;

void code__77247720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_56711860_channel__w0_58171_56634360_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,_58180_51372800_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__77247720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77247720 = block;
   block->owner = (Object)__77247560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77247720;

   return block;
};

Block __77247520;

void code__77247520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58180_51372800_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,dbus__r_56711860_channel__w0_58171_56634360_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__77247520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77247520 = block;
   block->owner = (Object)__77247340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77247520;

   return block;
};

Block __77247040;

void code__77247040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_56632780_channel__w0_58171_56634360_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,_58178_51372760_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__77247040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77247040 = block;
   block->owner = (Object)__77246880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77247040;

   return block;
};

Block __77246840;

void code__77246840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58178_51372760_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,trig__r_56632780_channel__w0_58171_56634360_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__77246840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77246840 = block;
   block->owner = (Object)__77246660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77246840;

   return block;
};

Block __77246280;

void code__77246280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_56711780_channel__w0_58171_56634360_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,_58179_51372660_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__77246280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77246280 = block;
   block->owner = (Object)__77246120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77246280;

   return block;
};

Block __77246080;

void code__77246080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58179_51372660_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,abus__r_56711780_channel__w0_58171_56634360_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__77246080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77246080 = block;
   block->owner = (Object)__77245920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77246080;

   return block;
};

Block __51471760;

void code__51471760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_51228320_channel__w1_58186_49647560_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
            idx = value2integer(abus__r_49845660_channel__w1_58186_49647560_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_49846380_channel__w1_58186_49647560_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__51471760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51471760 = block;
   block->owner = (Object)__53625420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51471760;

   return block;
};

Block __77244680;

void code__77244680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_49846380_channel__w1_58186_49647560_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,_58195_53632700_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__77244680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77244680 = block;
   block->owner = (Object)__77244480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77244680;

   return block;
};

Block __77244440;

void code__77244440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58195_53632700_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,dbus__r_49846380_channel__w1_58186_49647560_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__77244440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77244440 = block;
   block->owner = (Object)__77244220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77244440;

   return block;
};

Block __77243920;

void code__77243920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_49645380_channel__w1_58186_49647560_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,_58193_53632620_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__77243920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77243920 = block;
   block->owner = (Object)__77243760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77243920;

   return block;
};

Block __77243720;

void code__77243720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58193_53632620_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,trig__r_49645380_channel__w1_58186_49647560_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__77243720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77243720 = block;
   block->owner = (Object)__77243560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77243720;

   return block;
};

Block __77243240;

void code__77243240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_49845660_channel__w1_58186_49647560_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,_58194_53632540_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__77243240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77243240 = block;
   block->owner = (Object)__77243080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77243240;

   return block;
};

Block __77243040;

void code__77243040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58194_53632540_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,abus__r_49845660_channel__w1_58186_49647560_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__77243040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77243040 = block;
   block->owner = (Object)__77242880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77243040;

   return block;
};

Block __77265880;

void code__77265880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_53919700_channel__accum_58201_53625300_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,_58203_51576320_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__77265880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77265880 = block;
   block->owner = (Object)__77265720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77265880;

   return block;
};

Block __77265680;

void code__77265680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58203_51576320_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,reg__0_53919700_channel__accum_58201_53625300_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__77265680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77265680 = block;
   block->owner = (Object)__77265520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77265680;

   return block;
};

Block __77265200;

void code__77265200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_54013380_channel__accum_58201_53625300_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,_58204_51763420_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__77265200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77265200 = block;
   block->owner = (Object)__77265040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77265200;

   return block;
};

Block __77265000;

void code__77265000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58204_51763420_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,reg__1_54013380_channel__accum_58201_53625300_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__77265000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77265000 = block;
   block->owner = (Object)__77264840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77265000;

   return block;
};

Block __55295240;

Block __55295060;

Block __55294740;

void code__55294740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77398360(),_58194_53632540_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__55294740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55294740 = block;
   block->owner = (Object)__55295060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55294740;

   return block;
};

void code__55295060() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_55964820_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__77398500();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55294740();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77398300(),_58193_53632620_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__55295060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55295060 = block;
   block->owner = (Object)__55295240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55295060;

   return block;
};

Block __55294080;

Block __55293500;

void code__55293500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77398140(),_58179_51372660_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__55293500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55293500 = block;
   block->owner = (Object)__55294080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55293500;

   return block;
};

void code__55294080() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_55964820_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__77398220();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55293500();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77398080(),_58178_51372760_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__55294080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55294080 = block;
   block->owner = (Object)__55295240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55294080;

   return block;
};

Block __55292880;

Block __55292540;

void code__55292540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77422460(),_58102_56305360_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__55292540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55292540 = block;
   block->owner = (Object)__55292880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55292540;

   return block;
};

void code__55292880() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_55964820_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__77422540();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55292540();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77422400(),_58101_56305620_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__55292880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55292880 = block;
   block->owner = (Object)__55295240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55292880;

   return block;
};

Block __55291420;

void code__55291420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77422160(),rvok_55295420_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77422100(),lvok0_55295460_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77422040(),wok0_55295400_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77421980(),lvok1_55295440_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77421900(),wok1_55295380_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__55291420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55291420 = block;
   block->owner = (Object)__55295240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55291420;

   return block;
};

Block __55451840;

Block __55475980;

Block __55475800;

Block __55475480;

Block __55473560;

Block __55473400;

void code__55473400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58103_56305740_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,rv_55295480_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__77421340(),rvok_55295420_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__55473400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55473400 = block;
   block->owner = (Object)__55473560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55473400;

   return block;
};

void code__55473560() {
 code__55473400();
}

Block make__55473560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55473560 = block;
   block->owner = (Object)__55475480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55473560;

   return block;
};

Block __55475320;

void code__55475320() {
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
                  src0 = _58102_56305360_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
                  src1 = make__77421240();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__77421200();
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
                        src0 = _58102_56305360_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__77420900();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__77420800();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58102_56305360_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77420680(),_58101_56305620_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__55475320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55475320 = block;
   block->owner = (Object)__55475480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55475320;

   return block;
};

void code__55475480() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58101_56305620_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__77421500();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55473560();
   }
   else {
  code__55475320();
   }
      }
   }
}

Block make__55475480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55475480 = block;
   block->owner = (Object)__55475800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55475480;

   return block;
};

void code__55475800() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_55964820_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__77421600();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55475480();
   }
      }
   }
}

Block make__55475800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55475800 = block;
   block->owner = (Object)__55475980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55475800;

   return block;
};

void code__55475980() {
 code__55475800();
}

Block make__55475980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55475980 = block;
   block->owner = (Object)__55451840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55475980;

   return block;
};

Block __55709040;

Block __55708880;

Block __55708500;

Block __55706600;

Block __55706420;

void code__55706420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58180_51372800_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,lv0_54880300_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__77420280(),lvok0_55295460_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__55706420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55706420 = block;
   block->owner = (Object)__55706600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55706420;

   return block;
};

void code__55706600() {
 code__55706420();
}

Block make__55706600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55706600 = block;
   block->owner = (Object)__55708500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55706600;

   return block;
};

Block __55708300;

void code__55708300() {
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
                  src0 = _58179_51372660_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
                  src1 = make__77420180();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__77420140();
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
                        src0 = _58179_51372660_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__77419900();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__77419820();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58179_51372660_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77419700(),_58178_51372760_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__55708300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55708300 = block;
   block->owner = (Object)__55708500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55708300;

   return block;
};

void code__55708500() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58178_51372760_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__77420440();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55706600();
   }
   else {
  code__55708300();
   }
      }
   }
}

Block make__55708500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55708500 = block;
   block->owner = (Object)__55708880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55708500;

   return block;
};

void code__55708880() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_55964820_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__77420540();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55708500();
   }
      }
   }
}

Block make__55708880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55708880 = block;
   block->owner = (Object)__55709040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55708880;

   return block;
};

void code__55709040() {
 code__55708880();
}

Block make__55709040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55709040 = block;
   block->owner = (Object)__55451840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55709040;

   return block;
};

Block __56031160;

Block __56030640;

Block __56030420;

void code__56030420() {
}

Block make__56030420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56030420 = block;
   block->owner = (Object)__56030640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56030420;

   return block;
};

Block __56709140;

void code__56709140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_55050940_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,_58203_51576320_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77418860(),wok0_55295400_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__56709140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56709140 = block;
   block->owner = (Object)__56030640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56709140;

   return block;
};

void code__56030640() {
 code__56030420();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av0_55050940_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
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
                              src0 = lv0_54880300_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_55295480_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__77419060();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_55050940_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
 code__56709140();
}

Block make__56030640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56030640 = block;
   block->owner = (Object)__56031160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56030640;

   return block;
};

void code__56031160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77419460(),ack_51277920_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77419400(),run_55295360_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
 code__56030640();
}

Block make__56031160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56031160 = block;
   block->owner = (Object)__55451840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56031160;

   return block;
};

Block __57051460;

void code__57051460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77418640(),wok0_55295400_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77418580(),wok1_55295380_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77418520(),lvok0_55295460_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77418460(),lvok1_55295440_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77418400(),rvok_55295420_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__57051460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57051460 = block;
   block->owner = (Object)__55451840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57051460;

   return block;
};

Block __57050320;

Block __57050140;

Block __57049740;

Block __57088780;

Block __57088580;

void code__57088580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58195_53632700_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,lv1_54949440_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__77418000(),lvok1_55295440_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__57088580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57088580 = block;
   block->owner = (Object)__57088780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57088580;

   return block;
};

void code__57088780() {
 code__57088580();
}

Block make__57088780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57088780 = block;
   block->owner = (Object)__57049740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57088780;

   return block;
};

Block __57049580;

void code__57049580() {
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
                  src0 = _58194_53632540_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
                  src1 = make__77417900();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__77417860();
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
                        src0 = _58194_53632540_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__77417600();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__77417540();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58194_53632540_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77417420(),_58193_53632620_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__57049580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57049580 = block;
   block->owner = (Object)__57049740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57049580;

   return block;
};

void code__57049740() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58193_53632620_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__77418160();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57088780();
   }
   else {
  code__57049580();
   }
      }
   }
}

Block make__57049740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57049740 = block;
   block->owner = (Object)__57050140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57049740;

   return block;
};

void code__57050140() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_55964820_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__77418260();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57049740();
   }
      }
   }
}

Block make__57050140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57050140 = block;
   block->owner = (Object)__57050320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57050140;

   return block;
};

void code__57050320() {
 code__57050140();
}

Block make__57050320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57050320 = block;
   block->owner = (Object)__55451840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57050320;

   return block;
};

Block __57364980;

Block __57364500;

Block __57364320;

void code__57364320() {
}

Block make__57364320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57364320 = block;
   block->owner = (Object)__57364500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57364320;

   return block;
};

Block __49660540;

void code__49660540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av1_55177320_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,_58204_51763420_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77416300(),wok1_55295380_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__49660540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49660540 = block;
   block->owner = (Object)__57364500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49660540;

   return block;
};

void code__57364500() {
 code__57364320();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av1_55177320_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
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
                              src0 = lv1_54949440_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_55295480_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__77416740();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av1_55177320_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
 code__49660540();
}

Block make__57364500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57364500 = block;
   block->owner = (Object)__57364980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57364500;

   return block;
};

void code__57364980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77417180(),ack_51277920_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77417120(),run_55295360_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
 code__57364500();
}

Block make__57364980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57364980 = block;
   block->owner = (Object)__55451840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57364980;

   return block;
};

Block __50298000;

void code__50298000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77416140(),wok0_55295400_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77416080(),wok1_55295380_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77416020(),lvok0_55295460_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77415960(),lvok1_55295440_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77415900(),rvok_55295420_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__50298000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50298000 = block;
   block->owner = (Object)__55451840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50298000;

   return block;
};

void code__55451840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77421740(),run_55295360_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = rvok_55295420_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55475980();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_55295460_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55709040();
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
               src0 = lvok0_55295460_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
               src1 = rvok_55295420_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok0_55295400_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56031160();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = wok0_55295400_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
         src1 = wok1_55295380_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57051460();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_55295440_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57050320();
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
               src0 = lvok1_55295440_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
               src1 = rvok_55295420_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok1_55295380_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57364980();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = wok0_55295400_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
         src1 = wok1_55295380_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50298000();
   }
      }
   }
}

Block make__55451840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55451840 = block;
   block->owner = (Object)__55295240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55451840;

   return block;
};

Block __55290360;

void code__55290360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77415840(),av0_55050940_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77415780(),av1_55177320_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__55290360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55290360 = block;
   block->owner = (Object)__55295240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55290360;

   return block;
};

void code__55295240() {
 code__55295060();
 code__55294080();
 code__55292880();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77422340(),ack_51277920_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77422280(),run_55295360_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = run_55295360_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55291420();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_51277960_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
         src1 = run_55295360_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55451840();
   }
   else {
  code__55290360();
   }
      }
   }
}

Block make__55295240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55295240 = block;
   block->owner = (Object)__50295840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55295240;

   return block;
};

Block __51454920;

void code__51454920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_51150300_channel__b0_58240_50295220_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
            idx = value2integer(abus__r_50689320_channel__b0_58240_50295220_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_50689440_channel__b0_58240_50295220_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__51454920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51454920 = block;
   block->owner = (Object)__53625060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51454920;

   return block;
};

Block __77263000;

void code__77263000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_50689440_channel__b0_58240_50295220_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,_58244_53882700_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__77263000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77263000 = block;
   block->owner = (Object)__77262840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77263000;

   return block;
};

Block __77262800;

void code__77262800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58244_53882700_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,dbus__r_50689440_channel__b0_58240_50295220_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__77262800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77262800 = block;
   block->owner = (Object)__77262620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77262800;

   return block;
};

Block __77262240;

void code__77262240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_50291720_channel__b0_58240_50295220_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,_58242_53882640_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__77262240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77262240 = block;
   block->owner = (Object)__77262080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77262240;

   return block;
};

Block __77262040;

void code__77262040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58242_53882640_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,trig__r_50291720_channel__b0_58240_50295220_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__77262040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77262040 = block;
   block->owner = (Object)__77261880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77262040;

   return block;
};

Block __77261580;

void code__77261580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_50689320_channel__b0_58240_50295220_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,_58243_53882540_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__77261580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77261580 = block;
   block->owner = (Object)__77261420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77261580;

   return block;
};

Block __77261380;

void code__77261380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58243_53882540_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,abus__r_50689320_channel__b0_58240_50295220_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__77261380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77261380 = block;
   block->owner = (Object)__77261200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77261380;

   return block;
};

Block __54659820;

void code__54659820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_54207340_channel__b1_58255_53821320_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
            idx = value2integer(abus__r_53917740_channel__b1_58255_53821320_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_53917820_channel__b1_58255_53821320_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__54659820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54659820 = block;
   block->owner = (Object)__55022100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54659820;

   return block;
};

Block __77259880;

void code__77259880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_53917820_channel__b1_58255_53821320_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,_58259_54379640_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__77259880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77259880 = block;
   block->owner = (Object)__77259720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77259880;

   return block;
};

Block __77259680;

void code__77259680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58259_54379640_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,dbus__r_53917820_channel__b1_58255_53821320_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__77259680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77259680 = block;
   block->owner = (Object)__77259520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77259680;

   return block;
};

Block __77259200;

void code__77259200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_53818320_channel__b1_58255_53821320_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,_58257_54379600_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__77259200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77259200 = block;
   block->owner = (Object)__77259040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77259200;

   return block;
};

Block __77259000;

void code__77259000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58257_54379600_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,trig__r_53818320_channel__b1_58255_53821320_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__77259000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77259000 = block;
   block->owner = (Object)__77258840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77259000;

   return block;
};

Block __77283080;

void code__77283080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_53917740_channel__b1_58255_53821320_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,_58258_54379500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__77283080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77283080 = block;
   block->owner = (Object)__77282880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77283080;

   return block;
};

Block __77282840;

void code__77282840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58258_54379500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,abus__r_53917740_channel__b1_58255_53821320_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__77282840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77282840 = block;
   block->owner = (Object)__77282620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77282840;

   return block;
};

Block __77281380;

void code__77281380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_55142360_channel__z_58270_55021980_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,_58272_54012920_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__77281380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77281380 = block;
   block->owner = (Object)__77281220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77281380;

   return block;
};

Block __77281180;

void code__77281180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58272_54012920_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,reg__0_55142360_channel__z_58270_55021980_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__77281180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77281180 = block;
   block->owner = (Object)__77281020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77281180;

   return block;
};

Block __77280660;

void code__77280660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_55274940_channel__z_58270_55021980_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,_58273_54208920_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__77280660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77280660 = block;
   block->owner = (Object)__77280460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77280660;

   return block;
};

Block __77280420;

void code__77280420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58273_54208920_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,reg__1_55274940_channel__z_58270_55021980_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__77280420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77280420 = block;
   block->owner = (Object)__77280260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77280420;

   return block;
};

Block __56464280;

Block __56464120;

void code__56464120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77470600(),_58257_54379600_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__56464120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56464120 = block;
   block->owner = (Object)__56464280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56464120;

   return block;
};

Block __56463800;

void code__56463800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77470540(),_58242_53882640_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__56463800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56463800 = block;
   block->owner = (Object)__56464280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56463800;

   return block;
};

Block __56461980;

Block __56461660;

void code__56461660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58203_51576320_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,lv0_55895800_add__n_58300_55708240_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77470120(),lvok0_56464620_add__n_58300_55708240_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__56461660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56461660 = block;
   block->owner = (Object)__56461980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56461660;

   return block;
};

Block __56683980;

Block __56683620;

Block __56682680;

void code__56682680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58244_53882700_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,rv0_56323680_add__n_58300_55708240_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77469740(),_58242_53882640_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77469680(),rvok0_56464560_add__n_58300_55708240_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__56682680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56682680 = block;
   block->owner = (Object)__56683620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56682680;

   return block;
};

Block __56683400;

void code__56683400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77469600(),_58243_53882540_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77469500(),_58242_53882640_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__56683400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56683400 = block;
   block->owner = (Object)__56683620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56683400;

   return block;
};

void code__56683620() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58242_53882640_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__77469940();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56682680();
   }
   else {
  code__56683400();
   }
      }
   }
}

Block make__56683620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56683620 = block;
   block->owner = (Object)__56683980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56683620;

   return block;
};

void code__56683980() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58245_53882660_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__77470040();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56683620();
   }
      }
   }
}

Block make__56683980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56683980 = block;
   block->owner = (Object)__56461980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56683980;

   return block;
};

Block __57036820;

Block __57036220;

void code__57036220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_55895800_add__n_58300_55708240_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
      src1 = rv0_56323680_add__n_58300_55708240_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58272_54012920_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__57036220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57036220 = block;
   block->owner = (Object)__57036820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57036220;

   return block;
};

void code__57036820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77469340(),run_56464520_add__n_58300_55708240_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77469280(),ack__add_51277880_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
 code__57036220();
}

Block make__57036820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57036820 = block;
   block->owner = (Object)__56461980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57036820;

   return block;
};

Block __42985560;

void code__42985560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58204_51763420_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,lv1_56027600_add__n_58300_55708240_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77468960(),lvok1_56464580_add__n_58300_55708240_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__42985560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42985560 = block;
   block->owner = (Object)__56461980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42985560;

   return block;
};

Block __48492740;

Block __48491120;

Block __48504900;

void code__48504900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58259_54379640_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,rv1_56464660_add__n_58300_55708240_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77468620(),_58257_54379600_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77468540(),rvok1_56464540_add__n_58300_55708240_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__48504900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48504900 = block;
   block->owner = (Object)__48491120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48504900;

   return block;
};

Block __48490420;

void code__48490420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77468480(),_58258_54379500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77468420(),_58257_54379600_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__48490420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48490420 = block;
   block->owner = (Object)__48491120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48490420;

   return block;
};

void code__48491120() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58257_54379600_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__77468780();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48504900();
   }
   else {
  code__48490420();
   }
      }
   }
}

Block make__48491120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48491120 = block;
   block->owner = (Object)__48492740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48491120;

   return block;
};

void code__48492740() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58260_54379620_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__77468880();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48491120();
   }
      }
   }
}

Block make__48492740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48492740 = block;
   block->owner = (Object)__56461980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48492740;

   return block;
};

Block __50068580;

Block __50067320;

void code__50067320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv1_56027600_add__n_58300_55708240_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
      src1 = rv1_56464660_add__n_58300_55708240_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58273_54208920_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__50067320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50067320 = block;
   block->owner = (Object)__50068580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50067320;

   return block;
};

void code__50068580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77468260(),run_56464520_add__n_58300_55708240_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77468200(),ack__add_51277880_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
 code__50067320();
}

Block make__50068580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50068580 = block;
   block->owner = (Object)__56461980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50068580;

   return block;
};

void code__56461980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77470260(),run_56464520_add__n_58300_55708240_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
 code__56461660();
 code__56683980();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_56464620_add__n_58300_55708240_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
         src1 = rvok0_56464560_add__n_58300_55708240_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57036820();
   }
      }
   }
 code__42985560();
 code__48492740();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_56464580_add__n_58300_55708240_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
         src1 = rvok1_56464540_add__n_58300_55708240_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50068580();
   }
      }
   }
}

Block make__56461980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56461980 = block;
   block->owner = (Object)__56464280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56461980;

   return block;
};

Block __56463120;

void code__56463120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77467960(),lvok0_56464620_add__n_58300_55708240_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77467900(),rvok0_56464560_add__n_58300_55708240_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77467840(),lvok1_56464580_add__n_58300_55708240_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77467760(),rvok1_56464540_add__n_58300_55708240_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__56463120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56463120 = block;
   block->owner = (Object)__56464280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56463120;

   return block;
};

void code__56464280() {
 code__56464120();
 code__56463800();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77470480(),ack__add_51277880_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__77470420(),run_56464520_add__n_58300_55708240_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_51277900_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
         src1 = run_56464520_add__n_58300_55708240_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56461980();
   }
   else {
  code__56463120();
   }
      }
   }
}

Block make__56464280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56464280 = block;
   block->owner = (Object)__51278100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56464280;

   return block;
};

Value make__77401260() {
   static unsigned long long data[] = { 4294967238ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77401240() {
   static unsigned long long data[] = { 4294967242ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77400060() {
   static unsigned long long data[] = { 4294967270ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77400040() {
   static unsigned long long data[] = { 4294967271ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77415760() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_vector(get_type_signed(),8),1),1,data);
}

Value make__77414840() {
   static unsigned long long data[] = { 33ULL };
   return make_set_value(get_type_vector(get_type_vector(get_type_signed(),8),1),1,data);
}

Value make__77398500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77398360() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77398300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77398220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77398140() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77398080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77422540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77422460() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77422400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77422340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77422280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77422160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77422100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77422040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77421980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77421900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77421740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77421600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77421500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77421340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77421240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77421200() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77420900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77420800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77420680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77420540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77420440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77420280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77420180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77420140() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77419900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77419820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77419700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77419460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77419400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77419060() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77418860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77418640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77418580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77418520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77418460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77418400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77418260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77418160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77418000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77417900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77417860() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77417600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77417540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77417420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77417180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77417120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77416740() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77416300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77416140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77416080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77416020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77415960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77415900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77415840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77415780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__77470600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77470540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77470480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77470420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77470260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77470120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77470040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77469940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77469740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77469680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77469600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77469500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77469340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77469280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77468960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77468880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77468780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__77468620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77468540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77468480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__77468420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77468260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77468200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77467960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77467900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77467840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77467760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77466300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77466240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77466180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77466000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77465860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77465800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77465740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77465600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77465540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77465200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__77465060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope layer0_58_84_56634660;

SignalI req__mac_51277960_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makereq__mac_51277960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_51277960_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_84_56634660;
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

SignalI ack_51277920_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makeack_51277920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_51277920_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_84_56634660;
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

SignalI ack__mac_51277900_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makeack__mac_51277900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_51277900_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_84_56634660;
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

SignalI ack__add_51277880_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makeack__add_51277880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_51277880_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_84_56634660;
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

SignalI _58180_51372800_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI make_58180_51372800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58180_51372800_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_84_56634660;
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

SignalI _58178_51372760_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI make_58178_51372760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58178_51372760_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_84_56634660;
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

SignalI _58179_51372660_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI make_58179_51372660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58179_51372660_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_84_56634660;
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

SignalI _58203_51576320_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI make_58203_51576320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58203_51576320_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_84_56634660;
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

SignalI _58204_51763420_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI make_58204_51763420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58204_51763420_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_84_56634660;
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

SignalI _58195_53632700_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI make_58195_53632700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58195_53632700_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_84_56634660;
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

SignalI _58193_53632620_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI make_58193_53632620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58193_53632620_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_84_56634660;
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

SignalI _58194_53632540_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI make_58194_53632540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58194_53632540_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_84_56634660;
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

SignalI _58244_53882700_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI make_58244_53882700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58244_53882700_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_84_56634660;
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

SignalI _58245_53882660_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI make_58245_53882660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58245_53882660_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_84_56634660;
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

SignalI _58242_53882640_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI make_58242_53882640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58242_53882640_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_84_56634660;
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

SignalI _58243_53882540_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI make_58243_53882540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58243_53882540_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_84_56634660;
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

SignalI _58272_54012920_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI make_58272_54012920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58272_54012920_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_84_56634660;
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

SignalI _58273_54208920_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI make_58273_54208920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58273_54208920_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_84_56634660;
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

SignalI _58259_54379640_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI make_58259_54379640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58259_54379640_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_84_56634660;
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

SignalI _58260_54379620_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI make_58260_54379620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58260_54379620_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_84_56634660;
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

SignalI _58257_54379600_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI make_58257_54379600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58257_54379600_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_84_56634660;
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

SignalI _58258_54379500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI make_58258_54379500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58258_54379500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_84_56634660;
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

SignalI value__z0_54696400_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makevalue__z0_54696400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_54696400_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_84_56634660;
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

SignalI value__z1_54851360_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makevalue__z1_54851360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z1_54851360_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_84_56634660;
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

SignalI value__a0_54941020_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makevalue__a0_54941020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_54941020_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_84_56634660;
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

SignalI value__a1_55052800_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makevalue__a1_55052800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a1_55052800_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_84_56634660;
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

SignalI flag__z0_55052780_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makeflag__z0_55052780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_55052780_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_84_56634660;
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

SignalI flag__z1_55052760_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makeflag__z1_55052760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z1_55052760_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_84_56634660;
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

SignalI ack__a0_55052740_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makeack__a0_55052740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_55052740_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_84_56634660;
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

SignalI ack__a1_55052720_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makeack__a1_55052720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a1_55052720_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer0_58_84_56634660;
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

SystemI counter_55069480;

SystemI makecounter_55069480() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_55069480 = systemI;
   systemI->owner = (Object)layer0_58_84_56634660;
   systemI->name = "counter";
   systemI->system = counter_58_843_55072120;

   return systemI;
};

SystemI func0_47905060;

SystemI makefunc0_47905060() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_47905060 = systemI;
   systemI->owner = (Object)layer0_58_84_56634660;
   systemI->name = "func0";
   systemI->system = func0_58_843_57378180;

   return systemI;
};

SystemI func1_48096960;

SystemI makefunc1_48096960() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func1_48096960 = systemI;
   systemI->owner = (Object)layer0_58_84_56634660;
   systemI->name = "func1";
   systemI->system = func1_58_841_57381020;

   return systemI;
};

Scope channel__w0_58171_56634360;

SignalI trig__r_56632780_channel__w0_58171_56634360_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI maketrig__r_56632780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_56632780_channel__w0_58171_56634360_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)channel__w0_58171_56634360;
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

SignalI dbus__r_56711860_channel__w0_58171_56634360_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makedbus__r_56711860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_56711860_channel__w0_58171_56634360_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)channel__w0_58171_56634360;
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

SignalI abus__r_56711780_channel__w0_58171_56634360_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makeabus__r_56711780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_56711780_channel__w0_58171_56634360_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)channel__w0_58171_56634360;
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

SignalI mem_57377280_channel__w0_58171_56634360_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makemem_57377280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_57377280_channel__w0_58171_56634360_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)channel__w0_58171_56634360;
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
         src0 = make__77401260();
         src1 = make__77401240();
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

Scope raddr_58172_56634060;

Scope makeraddr_58172_56634060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58172_56634060 = scope;
   scope->owner = (Object)channel__w0_58171_56634360;
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

Scope rinc_58177_56633640;

Scope makerinc_58177_56633640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58177_56633640 = scope;
   scope->owner = (Object)channel__w0_58171_56634360;
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

Scope rdec_58181_56633220;

Scope makerdec_58181_56633220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58181_56633220 = scope;
   scope->owner = (Object)channel__w0_58171_56634360;
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

Behavior __49647780;

Behavior make__49647780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49647780 = behavior;
   behavior->owner = (Object)channel__w0_58171_56634360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_neg += 1;
   clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->neg = realloc(clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->neg,clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_neg*sizeof(Object));
clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->neg[clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_neg-1] = (Object)behavior;
   behavior->block = make__44659960();

   return behavior;
}

Behavior __77247560;

Behavior make__77247560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77247560 = behavior;
   behavior->owner = (Object)channel__w0_58171_56634360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_56711860_channel__w0_58171_56634360_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   dbus__r_56711860_channel__w0_58171_56634360_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   dbus__r_56711860_channel__w0_58171_56634360_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(dbus__r_56711860_channel__w0_58171_56634360_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,dbus__r_56711860_channel__w0_58171_56634360_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
dbus__r_56711860_channel__w0_58171_56634360_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[dbus__r_56711860_channel__w0_58171_56634360_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__77247720();

   return behavior;
}

Behavior __77247340;

Behavior make__77247340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77247340 = behavior;
   behavior->owner = (Object)channel__w0_58171_56634360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58180_51372800_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   _58180_51372800_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   _58180_51372800_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(_58180_51372800_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,_58180_51372800_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
_58180_51372800_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[_58180_51372800_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__77247520();

   return behavior;
}

Behavior __77246880;

Behavior make__77246880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77246880 = behavior;
   behavior->owner = (Object)channel__w0_58171_56634360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_56632780_channel__w0_58171_56634360_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   trig__r_56632780_channel__w0_58171_56634360_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   trig__r_56632780_channel__w0_58171_56634360_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(trig__r_56632780_channel__w0_58171_56634360_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,trig__r_56632780_channel__w0_58171_56634360_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
trig__r_56632780_channel__w0_58171_56634360_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[trig__r_56632780_channel__w0_58171_56634360_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__77247040();

   return behavior;
}

Behavior __77246660;

Behavior make__77246660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77246660 = behavior;
   behavior->owner = (Object)channel__w0_58171_56634360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58178_51372760_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   _58178_51372760_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   _58178_51372760_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(_58178_51372760_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,_58178_51372760_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
_58178_51372760_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[_58178_51372760_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__77246840();

   return behavior;
}

Behavior __77246120;

Behavior make__77246120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77246120 = behavior;
   behavior->owner = (Object)channel__w0_58171_56634360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_56711780_channel__w0_58171_56634360_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   abus__r_56711780_channel__w0_58171_56634360_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   abus__r_56711780_channel__w0_58171_56634360_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(abus__r_56711780_channel__w0_58171_56634360_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,abus__r_56711780_channel__w0_58171_56634360_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
abus__r_56711780_channel__w0_58171_56634360_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[abus__r_56711780_channel__w0_58171_56634360_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__77246280();

   return behavior;
}

Behavior __77245920;

Behavior make__77245920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77245920 = behavior;
   behavior->owner = (Object)channel__w0_58171_56634360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58179_51372660_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   _58179_51372660_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   _58179_51372660_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(_58179_51372660_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,_58179_51372660_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
_58179_51372660_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[_58179_51372660_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__77246080();

   return behavior;
}

Scope makechannel__w0_58171_56634360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58171_56634360 = scope;
   scope->owner = (Object)layer0_58_84_56634660;
   scope->name = "channel_w0:171";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_56632780();
   scope->inners[1] = makedbus__r_56711860();
   scope->inners[2] = makeabus__r_56711780();
   scope->inners[3] = makemem_57377280();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58172_56634060();
   scope->scopes[1] = makerinc_58177_56633640();
   scope->scopes[2] = makerdec_58181_56633220();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49647780();
   scope->behaviors[1] = make__77247560();
   scope->behaviors[2] = make__77247340();
   scope->behaviors[3] = make__77246880();
   scope->behaviors[4] = make__77246660();
   scope->behaviors[5] = make__77246120();
   scope->behaviors[6] = make__77245920();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__w1_58186_49647560;

SignalI trig__r_49645380_channel__w1_58186_49647560_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI maketrig__r_49645380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_49645380_channel__w1_58186_49647560_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)channel__w1_58186_49647560;
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

SignalI dbus__r_49846380_channel__w1_58186_49647560_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makedbus__r_49846380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_49846380_channel__w1_58186_49647560_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)channel__w1_58186_49647560;
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

SignalI abus__r_49845660_channel__w1_58186_49647560_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makeabus__r_49845660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49845660_channel__w1_58186_49647560_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)channel__w1_58186_49647560;
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

SignalI mem_51228320_channel__w1_58186_49647560_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makemem_51228320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_51228320_channel__w1_58186_49647560_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)channel__w1_58186_49647560;
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
         src0 = make__77400060();
         src1 = make__77400040();
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

Scope raddr_58187_49646980;

Scope makeraddr_58187_49646980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58187_49646980 = scope;
   scope->owner = (Object)channel__w1_58186_49647560;
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

Scope rinc_58192_49646520;

Scope makerinc_58192_49646520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58192_49646520 = scope;
   scope->owner = (Object)channel__w1_58186_49647560;
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

Scope rdec_58196_49646020;

Scope makerdec_58196_49646020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58196_49646020 = scope;
   scope->owner = (Object)channel__w1_58186_49647560;
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

Behavior __53625420;

Behavior make__53625420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53625420 = behavior;
   behavior->owner = (Object)channel__w1_58186_49647560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_neg += 1;
   clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->neg = realloc(clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->neg,clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_neg*sizeof(Object));
clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->neg[clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_neg-1] = (Object)behavior;
   behavior->block = make__51471760();

   return behavior;
}

Behavior __77244480;

Behavior make__77244480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77244480 = behavior;
   behavior->owner = (Object)channel__w1_58186_49647560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_49846380_channel__w1_58186_49647560_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   dbus__r_49846380_channel__w1_58186_49647560_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   dbus__r_49846380_channel__w1_58186_49647560_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(dbus__r_49846380_channel__w1_58186_49647560_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,dbus__r_49846380_channel__w1_58186_49647560_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
dbus__r_49846380_channel__w1_58186_49647560_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[dbus__r_49846380_channel__w1_58186_49647560_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__77244680();

   return behavior;
}

Behavior __77244220;

Behavior make__77244220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77244220 = behavior;
   behavior->owner = (Object)channel__w1_58186_49647560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58195_53632700_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   _58195_53632700_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   _58195_53632700_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(_58195_53632700_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,_58195_53632700_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
_58195_53632700_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[_58195_53632700_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__77244440();

   return behavior;
}

Behavior __77243760;

Behavior make__77243760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77243760 = behavior;
   behavior->owner = (Object)channel__w1_58186_49647560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_49645380_channel__w1_58186_49647560_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   trig__r_49645380_channel__w1_58186_49647560_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   trig__r_49645380_channel__w1_58186_49647560_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(trig__r_49645380_channel__w1_58186_49647560_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,trig__r_49645380_channel__w1_58186_49647560_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
trig__r_49645380_channel__w1_58186_49647560_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[trig__r_49645380_channel__w1_58186_49647560_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__77243920();

   return behavior;
}

Behavior __77243560;

Behavior make__77243560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77243560 = behavior;
   behavior->owner = (Object)channel__w1_58186_49647560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58193_53632620_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   _58193_53632620_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   _58193_53632620_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(_58193_53632620_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,_58193_53632620_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
_58193_53632620_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[_58193_53632620_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__77243720();

   return behavior;
}

Behavior __77243080;

Behavior make__77243080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77243080 = behavior;
   behavior->owner = (Object)channel__w1_58186_49647560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_49845660_channel__w1_58186_49647560_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   abus__r_49845660_channel__w1_58186_49647560_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   abus__r_49845660_channel__w1_58186_49647560_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(abus__r_49845660_channel__w1_58186_49647560_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,abus__r_49845660_channel__w1_58186_49647560_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
abus__r_49845660_channel__w1_58186_49647560_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[abus__r_49845660_channel__w1_58186_49647560_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__77243240();

   return behavior;
}

Behavior __77242880;

Behavior make__77242880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77242880 = behavior;
   behavior->owner = (Object)channel__w1_58186_49647560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58194_53632540_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   _58194_53632540_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   _58194_53632540_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(_58194_53632540_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,_58194_53632540_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
_58194_53632540_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[_58194_53632540_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__77243040();

   return behavior;
}

Scope makechannel__w1_58186_49647560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w1_58186_49647560 = scope;
   scope->owner = (Object)layer0_58_84_56634660;
   scope->name = "channel_w1:186";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_49645380();
   scope->inners[1] = makedbus__r_49846380();
   scope->inners[2] = makeabus__r_49845660();
   scope->inners[3] = makemem_51228320();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58187_49646980();
   scope->scopes[1] = makerinc_58192_49646520();
   scope->scopes[2] = makerdec_58196_49646020();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53625420();
   scope->behaviors[1] = make__77244480();
   scope->behaviors[2] = make__77244220();
   scope->behaviors[3] = make__77243760();
   scope->behaviors[4] = make__77243560();
   scope->behaviors[5] = make__77243080();
   scope->behaviors[6] = make__77242880();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58201_53625300;

SignalI reg__0_53919700_channel__accum_58201_53625300_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makereg__0_53919700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_53919700_channel__accum_58201_53625300_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)channel__accum_58201_53625300;
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

SignalI reg__1_54013380_channel__accum_58201_53625300_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makereg__1_54013380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_54013380_channel__accum_58201_53625300_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)channel__accum_58201_53625300;
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

Scope anum_58202_53624980;

Scope makeanum_58202_53624980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58202_53624980 = scope;
   scope->owner = (Object)channel__accum_58201_53625300;
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

Scope raddr_58205_53821120;

Scope makeraddr_58205_53821120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58205_53821120 = scope;
   scope->owner = (Object)channel__accum_58201_53625300;
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

Scope waddr_58209_53820700;

Scope makewaddr_58209_53820700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58209_53820700 = scope;
   scope->owner = (Object)channel__accum_58201_53625300;
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

Scope rinc_58213_53820240;

SignalI abus__r_53819800_rinc_58213_53820240_channel__accum_58201_53625300_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makeabus__r_53819800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_53819800_rinc_58213_53820240_channel__accum_58201_53625300_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)rinc_58213_53820240;
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

Scope makerinc_58213_53820240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58213_53820240 = scope;
   scope->owner = (Object)channel__accum_58201_53625300;
   scope->name = "rinc:213";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_53819800();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58218_53819680;

SignalI abus__w_53819300_winc_58218_53819680_channel__accum_58201_53625300_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makeabus__w_53819300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_53819300_winc_58218_53819680_channel__accum_58201_53625300_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)winc_58218_53819680;
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

Scope makewinc_58218_53819680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58218_53819680 = scope;
   scope->owner = (Object)channel__accum_58201_53625300;
   scope->name = "winc:218";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_53819300();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58223_53819180;

SignalI abus__r_53818780_rdec_58223_53819180_channel__accum_58201_53625300_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makeabus__r_53818780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_53818780_rdec_58223_53819180_channel__accum_58201_53625300_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)rdec_58223_53819180;
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

Scope makerdec_58223_53819180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58223_53819180 = scope;
   scope->owner = (Object)channel__accum_58201_53625300;
   scope->name = "rdec:223";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_53818780();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58228_53818660;

SignalI abus__w_53818260_wdec_58228_53818660_channel__accum_58201_53625300_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makeabus__w_53818260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_53818260_wdec_58228_53818660_channel__accum_58201_53625300_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)wdec_58228_53818660;
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

Scope makewdec_58228_53818660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58228_53818660 = scope;
   scope->owner = (Object)channel__accum_58201_53625300;
   scope->name = "wdec:228";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_53818260();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __77265720;

Behavior make__77265720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77265720 = behavior;
   behavior->owner = (Object)channel__accum_58201_53625300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_53919700_channel__accum_58201_53625300_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   reg__0_53919700_channel__accum_58201_53625300_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   reg__0_53919700_channel__accum_58201_53625300_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(reg__0_53919700_channel__accum_58201_53625300_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,reg__0_53919700_channel__accum_58201_53625300_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
reg__0_53919700_channel__accum_58201_53625300_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[reg__0_53919700_channel__accum_58201_53625300_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__77265880();

   return behavior;
}

Behavior __77265520;

Behavior make__77265520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77265520 = behavior;
   behavior->owner = (Object)channel__accum_58201_53625300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58203_51576320_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   _58203_51576320_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   _58203_51576320_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(_58203_51576320_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,_58203_51576320_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
_58203_51576320_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[_58203_51576320_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__77265680();

   return behavior;
}

Behavior __77265040;

Behavior make__77265040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77265040 = behavior;
   behavior->owner = (Object)channel__accum_58201_53625300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_54013380_channel__accum_58201_53625300_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   reg__1_54013380_channel__accum_58201_53625300_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   reg__1_54013380_channel__accum_58201_53625300_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(reg__1_54013380_channel__accum_58201_53625300_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,reg__1_54013380_channel__accum_58201_53625300_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
reg__1_54013380_channel__accum_58201_53625300_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[reg__1_54013380_channel__accum_58201_53625300_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__77265200();

   return behavior;
}

Behavior __77264840;

Behavior make__77264840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77264840 = behavior;
   behavior->owner = (Object)channel__accum_58201_53625300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58204_51763420_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   _58204_51763420_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   _58204_51763420_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(_58204_51763420_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,_58204_51763420_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
_58204_51763420_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[_58204_51763420_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__77265000();

   return behavior;
}

Scope makechannel__accum_58201_53625300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58201_53625300 = scope;
   scope->owner = (Object)layer0_58_84_56634660;
   scope->name = "channel_accum:201";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_53919700();
   scope->inners[1] = makereg__1_54013380();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58202_53624980();
   scope->scopes[1] = makeraddr_58205_53821120();
   scope->scopes[2] = makewaddr_58209_53820700();
   scope->scopes[3] = makerinc_58213_53820240();
   scope->scopes[4] = makewinc_58218_53819680();
   scope->scopes[5] = makerdec_58223_53819180();
   scope->scopes[6] = makewdec_58228_53818660();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__77265720();
   scope->behaviors[1] = make__77265520();
   scope->behaviors[2] = make__77265040();
   scope->behaviors[3] = make__77264840();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58233_54811500;

SignalI lv0_54880300_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makelv0_54880300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_54880300_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)mac__n1_58233_54811500;
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

SignalI lv1_54949440_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makelv1_54949440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_54949440_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)mac__n1_58233_54811500;
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

SignalI av0_55050940_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makeav0_55050940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_55050940_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)mac__n1_58233_54811500;
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

SignalI av1_55177320_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makeav1_55177320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av1_55177320_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)mac__n1_58233_54811500;
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

SignalI rv_55295480_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makerv_55295480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_55295480_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)mac__n1_58233_54811500;
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

SignalI lvok0_55295460_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makelvok0_55295460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_55295460_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)mac__n1_58233_54811500;
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

SignalI lvok1_55295440_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makelvok1_55295440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_55295440_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)mac__n1_58233_54811500;
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

SignalI rvok_55295420_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makervok_55295420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_55295420_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)mac__n1_58233_54811500;
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

SignalI wok0_55295400_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makewok0_55295400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok0_55295400_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)mac__n1_58233_54811500;
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

SignalI wok1_55295380_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makewok1_55295380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok1_55295380_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)mac__n1_58233_54811500;
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

SignalI run_55295360_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makerun_55295360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_55295360_mac__n1_58233_54811500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)mac__n1_58233_54811500;
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

Behavior __50295840;

Behavior make__50295840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50295840 = behavior;
   behavior->owner = (Object)mac__n1_58233_54811500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_pos += 1;
   clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->pos = realloc(clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->pos,clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_pos*sizeof(Object));
clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->pos[clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_pos-1] = (Object)behavior;
   behavior->block = make__55295240();

   return behavior;
}

Scope makemac__n1_58233_54811500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58233_54811500 = scope;
   scope->owner = (Object)layer0_58_84_56634660;
   scope->name = "mac_n1:233";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 11;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_54880300();
   scope->inners[1] = makelv1_54949440();
   scope->inners[2] = makeav0_55050940();
   scope->inners[3] = makeav1_55177320();
   scope->inners[4] = makerv_55295480();
   scope->inners[5] = makelvok0_55295460();
   scope->inners[6] = makelvok1_55295440();
   scope->inners[7] = makervok_55295420();
   scope->inners[8] = makewok0_55295400();
   scope->inners[9] = makewok1_55295380();
   scope->inners[10] = makerun_55295360();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50295840();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__b0_58240_50295220;

SignalI trig__r_50291720_channel__b0_58240_50295220_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI maketrig__r_50291720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_50291720_channel__b0_58240_50295220_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)channel__b0_58240_50295220;
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

SignalI dbus__r_50689440_channel__b0_58240_50295220_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makedbus__r_50689440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_50689440_channel__b0_58240_50295220_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)channel__b0_58240_50295220;
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

SignalI abus__r_50689320_channel__b0_58240_50295220_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makeabus__r_50689320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50689320_channel__b0_58240_50295220_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)channel__b0_58240_50295220;
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

SignalI mem_51150300_channel__b0_58240_50295220_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makemem_51150300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_51150300_channel__b0_58240_50295220_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)channel__b0_58240_50295220;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(make__77415760(),signalI->c_value);
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope raddr_58241_50294420;

Scope makeraddr_58241_50294420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58241_50294420 = scope;
   scope->owner = (Object)channel__b0_58240_50295220;
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

Scope rinc_58246_50293620;

Scope makerinc_58246_50293620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58246_50293620 = scope;
   scope->owner = (Object)channel__b0_58240_50295220;
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

Scope rdec_58250_50292480;

Scope makerdec_58250_50292480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58250_50292480 = scope;
   scope->owner = (Object)channel__b0_58240_50295220;
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

Behavior __53625060;

Behavior make__53625060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53625060 = behavior;
   behavior->owner = (Object)channel__b0_58240_50295220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_neg += 1;
   clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->neg = realloc(clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->neg,clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_neg*sizeof(Object));
clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->neg[clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_neg-1] = (Object)behavior;
   behavior->block = make__51454920();

   return behavior;
}

Behavior __77262840;

Behavior make__77262840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77262840 = behavior;
   behavior->owner = (Object)channel__b0_58240_50295220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_50689440_channel__b0_58240_50295220_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   dbus__r_50689440_channel__b0_58240_50295220_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   dbus__r_50689440_channel__b0_58240_50295220_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(dbus__r_50689440_channel__b0_58240_50295220_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,dbus__r_50689440_channel__b0_58240_50295220_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
dbus__r_50689440_channel__b0_58240_50295220_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[dbus__r_50689440_channel__b0_58240_50295220_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__77263000();

   return behavior;
}

Behavior __77262620;

Behavior make__77262620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77262620 = behavior;
   behavior->owner = (Object)channel__b0_58240_50295220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58244_53882700_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   _58244_53882700_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   _58244_53882700_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(_58244_53882700_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,_58244_53882700_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
_58244_53882700_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[_58244_53882700_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__77262800();

   return behavior;
}

Behavior __77262080;

Behavior make__77262080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77262080 = behavior;
   behavior->owner = (Object)channel__b0_58240_50295220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_50291720_channel__b0_58240_50295220_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   trig__r_50291720_channel__b0_58240_50295220_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   trig__r_50291720_channel__b0_58240_50295220_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(trig__r_50291720_channel__b0_58240_50295220_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,trig__r_50291720_channel__b0_58240_50295220_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
trig__r_50291720_channel__b0_58240_50295220_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[trig__r_50291720_channel__b0_58240_50295220_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__77262240();

   return behavior;
}

Behavior __77261880;

Behavior make__77261880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77261880 = behavior;
   behavior->owner = (Object)channel__b0_58240_50295220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58242_53882640_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   _58242_53882640_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   _58242_53882640_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(_58242_53882640_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,_58242_53882640_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
_58242_53882640_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[_58242_53882640_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__77262040();

   return behavior;
}

Behavior __77261420;

Behavior make__77261420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77261420 = behavior;
   behavior->owner = (Object)channel__b0_58240_50295220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_50689320_channel__b0_58240_50295220_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   abus__r_50689320_channel__b0_58240_50295220_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   abus__r_50689320_channel__b0_58240_50295220_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(abus__r_50689320_channel__b0_58240_50295220_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,abus__r_50689320_channel__b0_58240_50295220_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
abus__r_50689320_channel__b0_58240_50295220_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[abus__r_50689320_channel__b0_58240_50295220_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__77261580();

   return behavior;
}

Behavior __77261200;

Behavior make__77261200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77261200 = behavior;
   behavior->owner = (Object)channel__b0_58240_50295220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58243_53882540_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   _58243_53882540_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   _58243_53882540_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(_58243_53882540_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,_58243_53882540_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
_58243_53882540_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[_58243_53882540_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__77261380();

   return behavior;
}

Scope makechannel__b0_58240_50295220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__b0_58240_50295220 = scope;
   scope->owner = (Object)layer0_58_84_56634660;
   scope->name = "channel_b0:240";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_50291720();
   scope->inners[1] = makedbus__r_50689440();
   scope->inners[2] = makeabus__r_50689320();
   scope->inners[3] = makemem_51150300();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58241_50294420();
   scope->scopes[1] = makerinc_58246_50293620();
   scope->scopes[2] = makerdec_58250_50292480();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53625060();
   scope->behaviors[1] = make__77262840();
   scope->behaviors[2] = make__77262620();
   scope->behaviors[3] = make__77262080();
   scope->behaviors[4] = make__77261880();
   scope->behaviors[5] = make__77261420();
   scope->behaviors[6] = make__77261200();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__b1_58255_53821320;

SignalI trig__r_53818320_channel__b1_58255_53821320_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI maketrig__r_53818320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_53818320_channel__b1_58255_53821320_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)channel__b1_58255_53821320;
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

SignalI dbus__r_53917820_channel__b1_58255_53821320_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makedbus__r_53917820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_53917820_channel__b1_58255_53821320_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)channel__b1_58255_53821320;
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

SignalI abus__r_53917740_channel__b1_58255_53821320_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makeabus__r_53917740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_53917740_channel__b1_58255_53821320_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)channel__b1_58255_53821320;
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

SignalI mem_54207340_channel__b1_58255_53821320_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makemem_54207340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_54207340_channel__b1_58255_53821320_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)channel__b1_58255_53821320;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(make__77414840(),signalI->c_value);
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope raddr_58256_53820820;

Scope makeraddr_58256_53820820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58256_53820820 = scope;
   scope->owner = (Object)channel__b1_58255_53821320;
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

Scope rinc_58261_53819940;

Scope makerinc_58261_53819940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58261_53819940 = scope;
   scope->owner = (Object)channel__b1_58255_53821320;
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

Scope rdec_58265_53819220;

Scope makerdec_58265_53819220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58265_53819220 = scope;
   scope->owner = (Object)channel__b1_58255_53821320;
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

Behavior __55022100;

Behavior make__55022100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55022100 = behavior;
   behavior->owner = (Object)channel__b1_58255_53821320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_neg += 1;
   clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->neg = realloc(clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->neg,clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_neg*sizeof(Object));
clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->neg[clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_neg-1] = (Object)behavior;
   behavior->block = make__54659820();

   return behavior;
}

Behavior __77259720;

Behavior make__77259720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77259720 = behavior;
   behavior->owner = (Object)channel__b1_58255_53821320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_53917820_channel__b1_58255_53821320_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   dbus__r_53917820_channel__b1_58255_53821320_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   dbus__r_53917820_channel__b1_58255_53821320_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(dbus__r_53917820_channel__b1_58255_53821320_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,dbus__r_53917820_channel__b1_58255_53821320_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
dbus__r_53917820_channel__b1_58255_53821320_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[dbus__r_53917820_channel__b1_58255_53821320_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__77259880();

   return behavior;
}

Behavior __77259520;

Behavior make__77259520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77259520 = behavior;
   behavior->owner = (Object)channel__b1_58255_53821320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58259_54379640_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   _58259_54379640_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   _58259_54379640_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(_58259_54379640_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,_58259_54379640_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
_58259_54379640_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[_58259_54379640_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__77259680();

   return behavior;
}

Behavior __77259040;

Behavior make__77259040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77259040 = behavior;
   behavior->owner = (Object)channel__b1_58255_53821320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_53818320_channel__b1_58255_53821320_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   trig__r_53818320_channel__b1_58255_53821320_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   trig__r_53818320_channel__b1_58255_53821320_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(trig__r_53818320_channel__b1_58255_53821320_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,trig__r_53818320_channel__b1_58255_53821320_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
trig__r_53818320_channel__b1_58255_53821320_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[trig__r_53818320_channel__b1_58255_53821320_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__77259200();

   return behavior;
}

Behavior __77258840;

Behavior make__77258840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77258840 = behavior;
   behavior->owner = (Object)channel__b1_58255_53821320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58257_54379600_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   _58257_54379600_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   _58257_54379600_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(_58257_54379600_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,_58257_54379600_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
_58257_54379600_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[_58257_54379600_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__77259000();

   return behavior;
}

Behavior __77282880;

Behavior make__77282880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77282880 = behavior;
   behavior->owner = (Object)channel__b1_58255_53821320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_53917740_channel__b1_58255_53821320_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   abus__r_53917740_channel__b1_58255_53821320_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   abus__r_53917740_channel__b1_58255_53821320_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(abus__r_53917740_channel__b1_58255_53821320_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,abus__r_53917740_channel__b1_58255_53821320_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
abus__r_53917740_channel__b1_58255_53821320_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[abus__r_53917740_channel__b1_58255_53821320_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__77283080();

   return behavior;
}

Behavior __77282620;

Behavior make__77282620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77282620 = behavior;
   behavior->owner = (Object)channel__b1_58255_53821320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58258_54379500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   _58258_54379500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   _58258_54379500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(_58258_54379500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,_58258_54379500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
_58258_54379500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[_58258_54379500_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__77282840();

   return behavior;
}

Scope makechannel__b1_58255_53821320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__b1_58255_53821320 = scope;
   scope->owner = (Object)layer0_58_84_56634660;
   scope->name = "channel_b1:255";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_53818320();
   scope->inners[1] = makedbus__r_53917820();
   scope->inners[2] = makeabus__r_53917740();
   scope->inners[3] = makemem_54207340();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58256_53820820();
   scope->scopes[1] = makerinc_58261_53819940();
   scope->scopes[2] = makerdec_58265_53819220();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__55022100();
   scope->behaviors[1] = make__77259720();
   scope->behaviors[2] = make__77259520();
   scope->behaviors[3] = make__77259040();
   scope->behaviors[4] = make__77258840();
   scope->behaviors[5] = make__77282880();
   scope->behaviors[6] = make__77282620();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58270_55021980;

SignalI reg__0_55142360_channel__z_58270_55021980_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makereg__0_55142360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_55142360_channel__z_58270_55021980_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)channel__z_58270_55021980;
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

SignalI reg__1_55274940_channel__z_58270_55021980_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makereg__1_55274940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_55274940_channel__z_58270_55021980_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)channel__z_58270_55021980;
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

Scope anum_58271_55021620;

Scope makeanum_58271_55021620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58271_55021620 = scope;
   scope->owner = (Object)channel__z_58270_55021980;
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

Scope raddr_58274_55021100;

Scope makeraddr_58274_55021100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58274_55021100 = scope;
   scope->owner = (Object)channel__z_58270_55021980;
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

Scope waddr_58278_55020640;

Scope makewaddr_58278_55020640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58278_55020640 = scope;
   scope->owner = (Object)channel__z_58270_55021980;
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

Scope rinc_58282_55020200;

SignalI abus__r_55019780_rinc_58282_55020200_channel__z_58270_55021980_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makeabus__r_55019780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_55019780_rinc_58282_55020200_channel__z_58270_55021980_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)rinc_58282_55020200;
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

Scope makerinc_58282_55020200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58282_55020200 = scope;
   scope->owner = (Object)channel__z_58270_55021980;
   scope->name = "rinc:282";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_55019780();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58286_55019640;

SignalI abus__w_55019180_winc_58286_55019640_channel__z_58270_55021980_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makeabus__w_55019180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_55019180_winc_58286_55019640_channel__z_58270_55021980_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)winc_58286_55019640;
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

Scope makewinc_58286_55019640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58286_55019640 = scope;
   scope->owner = (Object)channel__z_58270_55021980;
   scope->name = "winc:286";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_55019180();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58290_55019040;

SignalI abus__r_55018600_rdec_58290_55019040_channel__z_58270_55021980_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makeabus__r_55018600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_55018600_rdec_58290_55019040_channel__z_58270_55021980_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)rdec_58290_55019040;
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

Scope makerdec_58290_55019040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58290_55019040 = scope;
   scope->owner = (Object)channel__z_58270_55021980;
   scope->name = "rdec:290";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_55018600();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58295_55018460;

SignalI abus__w_55018080_wdec_58295_55018460_channel__z_58270_55021980_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makeabus__w_55018080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_55018080_wdec_58295_55018460_channel__z_58270_55021980_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)wdec_58295_55018460;
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

Scope makewdec_58295_55018460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58295_55018460 = scope;
   scope->owner = (Object)channel__z_58270_55021980;
   scope->name = "wdec:295";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_55018080();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __77281220;

Behavior make__77281220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77281220 = behavior;
   behavior->owner = (Object)channel__z_58270_55021980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_55142360_channel__z_58270_55021980_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   reg__0_55142360_channel__z_58270_55021980_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   reg__0_55142360_channel__z_58270_55021980_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(reg__0_55142360_channel__z_58270_55021980_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,reg__0_55142360_channel__z_58270_55021980_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
reg__0_55142360_channel__z_58270_55021980_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[reg__0_55142360_channel__z_58270_55021980_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__77281380();

   return behavior;
}

Behavior __77281020;

Behavior make__77281020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77281020 = behavior;
   behavior->owner = (Object)channel__z_58270_55021980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58272_54012920_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   _58272_54012920_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   _58272_54012920_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(_58272_54012920_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,_58272_54012920_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
_58272_54012920_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[_58272_54012920_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__77281180();

   return behavior;
}

Behavior __77280460;

Behavior make__77280460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77280460 = behavior;
   behavior->owner = (Object)channel__z_58270_55021980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_55274940_channel__z_58270_55021980_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   reg__1_55274940_channel__z_58270_55021980_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   reg__1_55274940_channel__z_58270_55021980_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(reg__1_55274940_channel__z_58270_55021980_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,reg__1_55274940_channel__z_58270_55021980_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
reg__1_55274940_channel__z_58270_55021980_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[reg__1_55274940_channel__z_58270_55021980_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__77280660();

   return behavior;
}

Behavior __77280260;

Behavior make__77280260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77280260 = behavior;
   behavior->owner = (Object)channel__z_58270_55021980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58273_54208920_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   _58273_54208920_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   _58273_54208920_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(_58273_54208920_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,_58273_54208920_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
_58273_54208920_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[_58273_54208920_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__77280420();

   return behavior;
}

Scope makechannel__z_58270_55021980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58270_55021980 = scope;
   scope->owner = (Object)layer0_58_84_56634660;
   scope->name = "channel_z:270";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_55142360();
   scope->inners[1] = makereg__1_55274940();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58271_55021620();
   scope->scopes[1] = makeraddr_58274_55021100();
   scope->scopes[2] = makewaddr_58278_55020640();
   scope->scopes[3] = makerinc_58282_55020200();
   scope->scopes[4] = makewinc_58286_55019640();
   scope->scopes[5] = makerdec_58290_55019040();
   scope->scopes[6] = makewdec_58295_55018460();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__77281220();
   scope->behaviors[1] = make__77281020();
   scope->behaviors[2] = make__77280460();
   scope->behaviors[3] = make__77280260();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58300_55708240;

SignalI lv0_55895800_add__n_58300_55708240_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makelv0_55895800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_55895800_add__n_58300_55708240_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)add__n_58300_55708240;
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

SignalI lv1_56027600_add__n_58300_55708240_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makelv1_56027600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_56027600_add__n_58300_55708240_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)add__n_58300_55708240;
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

SignalI rv0_56323680_add__n_58300_55708240_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makerv0_56323680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_56323680_add__n_58300_55708240_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)add__n_58300_55708240;
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

SignalI rv1_56464660_add__n_58300_55708240_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makerv1_56464660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv1_56464660_add__n_58300_55708240_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)add__n_58300_55708240;
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

SignalI lvok0_56464620_add__n_58300_55708240_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makelvok0_56464620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_56464620_add__n_58300_55708240_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)add__n_58300_55708240;
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

SignalI lvok1_56464580_add__n_58300_55708240_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makelvok1_56464580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_56464580_add__n_58300_55708240_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)add__n_58300_55708240;
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

SignalI rvok0_56464560_add__n_58300_55708240_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makervok0_56464560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_56464560_add__n_58300_55708240_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)add__n_58300_55708240;
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

SignalI rvok1_56464540_add__n_58300_55708240_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makervok1_56464540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok1_56464540_add__n_58300_55708240_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)add__n_58300_55708240;
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

SignalI run_56464520_add__n_58300_55708240_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makerun_56464520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_56464520_add__n_58300_55708240_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)add__n_58300_55708240;
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

Behavior __51278100;

Behavior make__51278100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51278100 = behavior;
   behavior->owner = (Object)add__n_58300_55708240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_pos += 1;
   clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->pos = realloc(clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->pos,clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_pos*sizeof(Object));
clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->pos[clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_pos-1] = (Object)behavior;
   behavior->block = make__56464280();

   return behavior;
}

Scope makeadd__n_58300_55708240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58300_55708240 = scope;
   scope->owner = (Object)layer0_58_84_56634660;
   scope->name = "add_n:300";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_55895800();
   scope->inners[1] = makelv1_56027600();
   scope->inners[2] = makerv0_56323680();
   scope->inners[3] = makerv1_56464660();
   scope->inners[4] = makelvok0_56464620();
   scope->inners[5] = makelvok1_56464580();
   scope->inners[6] = makervok0_56464560();
   scope->inners[7] = makervok1_56464540();
   scope->inners[8] = makerun_56464520();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51278100();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __54017740;

Behavior make__54017740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54017740 = behavior;
   behavior->owner = (Object)layer0_58_84_56634660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_pos += 1;
   clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->pos = realloc(clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->pos,clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_pos*sizeof(Object));
clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->pos[clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_pos-1] = (Object)behavior;
   behavior->block = make__53962520();

   return behavior;
}

Behavior __55066640;

Behavior make__55066640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55066640 = behavior;
   behavior->owner = (Object)layer0_58_84_56634660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_pos += 1;
   clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->pos = realloc(clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->pos,clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_pos*sizeof(Object));
clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->pos[clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_pos-1] = (Object)behavior;
   behavior->block = make__54017580();

   return behavior;
}

Behavior __55894820;

Behavior make__55894820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55894820 = behavior;
   behavior->owner = (Object)layer0_58_84_56634660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_pos += 1;
   clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->pos = realloc(clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->pos,clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_pos*sizeof(Object));
clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->pos[clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_pos-1] = (Object)behavior;
   behavior->block = make__55131720();

   return behavior;
}

Behavior __77199060;

Behavior make__77199060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77199060 = behavior;
   behavior->owner = (Object)layer0_58_84_56634660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_55964780_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   req_55964780_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   req_55964780_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(req_55964780_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,req_55964780_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
req_55964780_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[req_55964780_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_51277900_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   ack__mac_51277900_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   ack__mac_51277900_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(ack__mac_51277900_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,ack__mac_51277900_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
ack__mac_51277900_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[ack__mac_51277900_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__77199300();

   return behavior;
}

Behavior __77248660;

Behavior make__77248660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77248660 = behavior;
   behavior->owner = (Object)layer0_58_84_56634660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 7;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[clk_55964840_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_51277920_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   ack_51277920_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   ack_51277920_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(ack_51277920_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,ack_51277920_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
ack_51277920_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[ack_51277920_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_55964820_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   rst_55964820_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   rst_55964820_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(rst_55964820_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,rst_55964820_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
rst_55964820_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[rst_55964820_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_54696400_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   value__z0_54696400_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   value__z0_54696400_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(value__z0_54696400_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,value__z0_54696400_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
value__z0_54696400_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[value__z0_54696400_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,value__z1_54851360_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   value__z1_54851360_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   value__z1_54851360_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(value__z1_54851360_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,value__z1_54851360_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
value__z1_54851360_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[value__z1_54851360_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,ack__a0_55052740_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   ack__a0_55052740_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   ack__a0_55052740_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(ack__a0_55052740_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,ack__a0_55052740_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
ack__a0_55052740_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[ack__a0_55052740_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->events[6] = make_event(ANYEDGE,ack__a1_55052720_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   ack__a1_55052720_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   ack__a1_55052720_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(ack__a1_55052720_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,ack__a1_55052720_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
ack__a1_55052720_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[ack__a1_55052720_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__77199580();

   return behavior;
}

Behavior __77248480;

Behavior make__77248480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77248480 = behavior;
   behavior->owner = (Object)layer0_58_84_56634660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 4;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_55069640_counter_58_843_55072120_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   ack__mac_55069640_counter_58_843_55072120_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   ack__mac_55069640_counter_58_843_55072120_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(ack__mac_55069640_counter_58_843_55072120_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,ack__mac_55069640_counter_58_843_55072120_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
ack__mac_55069640_counter_58_843_55072120_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[ack__mac_55069640_counter_58_843_55072120_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_55964820_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   rst_55964820_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   rst_55964820_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(rst_55964820_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,rst_55964820_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
rst_55964820_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[rst_55964820_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,a_47882600_func0_58_843_57378180_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   a_47882600_func0_58_843_57378180_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   a_47882600_func0_58_843_57378180_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(a_47882600_func0_58_843_57378180_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,a_47882600_func0_58_843_57378180_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
a_47882600_func0_58_843_57378180_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[a_47882600_func0_58_843_57378180_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,a_48097780_func1_58_841_57381020_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   a_48097780_func1_58_841_57381020_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   a_48097780_func1_58_841_57381020_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(a_48097780_func1_58_841_57381020_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,a_48097780_func1_58_841_57381020_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
a_48097780_func1_58_841_57381020_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[a_48097780_func1_58_841_57381020_layer0_58_84_56634660_layer0_58_841_55894220_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__77199500();

   return behavior;
}

Scope makelayer0_58_84_56634660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer0_58_84_56634660 = scope;
   scope->owner = (Object)layer0_58_841_55894220;
   scope->name = "layer0:T";
   scope->num_systemIs = 3;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_55069480();
   scope->systemIs[1] = makefunc0_47905060();
   scope->systemIs[2] = makefunc1_48096960();
   scope->num_inners = 30;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_51277960();
   scope->inners[1] = makeack_51277920();
   scope->inners[2] = makeack__mac_51277900();
   scope->inners[3] = makeack__add_51277880();
   scope->inners[4] = make_58180_51372800();
   scope->inners[5] = make_58178_51372760();
   scope->inners[6] = make_58179_51372660();
   scope->inners[7] = make_58203_51576320();
   scope->inners[8] = make_58204_51763420();
   scope->inners[9] = make_58195_53632700();
   scope->inners[10] = make_58193_53632620();
   scope->inners[11] = make_58194_53632540();
   scope->inners[12] = make_58244_53882700();
   scope->inners[13] = make_58245_53882660();
   scope->inners[14] = make_58242_53882640();
   scope->inners[15] = make_58243_53882540();
   scope->inners[16] = make_58272_54012920();
   scope->inners[17] = make_58273_54208920();
   scope->inners[18] = make_58259_54379640();
   scope->inners[19] = make_58260_54379620();
   scope->inners[20] = make_58257_54379600();
   scope->inners[21] = make_58258_54379500();
   scope->inners[22] = makevalue__z0_54696400();
   scope->inners[23] = makevalue__z1_54851360();
   scope->inners[24] = makevalue__a0_54941020();
   scope->inners[25] = makevalue__a1_55052800();
   scope->inners[26] = makeflag__z0_55052780();
   scope->inners[27] = makeflag__z1_55052760();
   scope->inners[28] = makeack__a0_55052740();
   scope->inners[29] = makeack__a1_55052720();
   scope->num_scopes = 8;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58171_56634360();
   scope->scopes[1] = makechannel__w1_58186_49647560();
   scope->scopes[2] = makechannel__accum_58201_53625300();
   scope->scopes[3] = makemac__n1_58233_54811500();
   scope->scopes[4] = makechannel__b0_58240_50295220();
   scope->scopes[5] = makechannel__b1_58255_53821320();
   scope->scopes[6] = makechannel__z_58270_55021980();
   scope->scopes[7] = makeadd__n_58300_55708240();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54017740();
   scope->behaviors[1] = make__55066640();
   scope->behaviors[2] = make__55894820();
   scope->behaviors[3] = make__77199060();
   scope->behaviors[4] = make__77248660();
   scope->behaviors[5] = make__77248480();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer0_58_841_55894220() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer0_58_841_55894220 = systemT;
systemT->owner = NULL;
   systemT->name = "layer0:T1";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_55964840();
   systemT->inputs[1] = makerst_55964820();
   systemT->inputs[2] = makereq_55964780();
   systemT->inputs[3] = make_58103_56305740();
   systemT->num_outputs = 3;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_56305700();
   systemT->outputs[1] = make_58101_56305620();
   systemT->outputs[2] = make_58102_56305360();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_58143_56496580();
   systemT->inouts[1] = make_58144_56681940();

   systemT->scope = makelayer0_58_84_56634660();

   return systemT;
}