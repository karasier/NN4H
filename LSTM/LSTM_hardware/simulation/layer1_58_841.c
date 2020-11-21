#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer1_58_841_55593680;

SignalI clk_55655140_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makeclk_55655140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_55655140_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer1_58_841_55593680;
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

SignalI rst_55655120_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makerst_55655120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_55655120_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer1_58_841_55593680;
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

SignalI req_55655040_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makereq_55655040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_55655040_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer1_58_841_55593680;
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

SignalI _58165_56114940_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI make_58165_56114940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58165_56114940_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer1_58_841_55593680;
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

SignalI _58166_56625540_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI make_58166_56625540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58166_56625540_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer1_58_841_55593680;
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

SignalI ack__layer_56625440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makeack__layer_56625440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_56625440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer1_58_841_55593680;
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

SignalI _58167_56624780_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI make_58167_56624780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58167_56624780_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer1_58_841_55593680;
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

SignalI _58131_56858200_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI make_58131_56858200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58131_56858200_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer1_58_841_55593680;
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

Block __54619040;

Block __54618640;

void code__54618640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78843940(),ack_63638280_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78843880(),ack__mac_63638260_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78843820(),ack__add_63638240_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__54618640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54618640 = block;
   block->owner = (Object)__54619040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54618640;

   return block;
};

void code__54619040() {
   {
      Value cond = rst_55655120_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54618640();
   }
      }
   }
}

Block make__54619040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54619040 = block;
   block->owner = (Object)__54616420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54619040;

   return block;
};

Block __54616180;

Block __54639400;

Block __54638840;

void code__54638840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58384_64175660_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,value__z0_64222020_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78843640(),flag__z0_64268380_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__54638840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54638840 = block;
   block->owner = (Object)__54639400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54638840;

   return block;
};

void code__54639400() {
 code__54638840();
}

Block make__54639400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54639400 = block;
   block->owner = (Object)__54616180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54639400;

   return block;
};

Block __54640340;

void code__54640340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78843580(),flag__z0_64268380_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__54640340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54640340 = block;
   block->owner = (Object)__54616180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54640340;

   return block;
};

void code__54616180() {
   {
      Value cond = ack__add_63638240_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54639400();
   }
   else {
  code__54640340();
   }
      }
   }
}

Block make__54616180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54616180 = block;
   block->owner = (Object)__55148340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54616180;

   return block;
};

Block __55147700;

Block __55147140;

void code__55147140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78843480(),ack__a0_64268360_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__55147140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55147140 = block;
   block->owner = (Object)__55147700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55147140;

   return block;
};

Block __55146340;

Block __55145620;

void code__55145620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_64268400_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,_58131_56858200_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78843260(),ack__a0_64268360_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__55145620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55145620 = block;
   block->owner = (Object)__55146340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55145620;

   return block;
};

void code__55146340() {
 code__55145620();
}

Block make__55146340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55146340 = block;
   block->owner = (Object)__55147700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55146340;

   return block;
};

void code__55147700() {
   {
      Value cond = rst_55655120_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55147140();
   }
   else if (value2integer(flag__z0_64268380_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value)) {
  code__55146340();
   }
      }
   }
}

Block make__55147700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55147700 = block;
   block->owner = (Object)__55595060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55147700;

   return block;
};

Block __78678660;

void code__78678660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_55655040_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_63638260_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_63638300_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__78678660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78678660 = block;
   block->owner = (Object)__78678400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78678660;

   return block;
};

Block __78678880;

void code__78678880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_55655140_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,clk_64303600_counter_58_8400_64305440_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_63638280_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,ack_64303580_counter_58_8400_64305440_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_55655120_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,rst_64303560_counter_58_8400_64305440_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_64222020_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,z__value_51283720_func0_58_8400_50949760_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__a0_64268360_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,ack__layer_56625440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__78678880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78678880 = block;
   block->owner = (Object)__78697060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78678880;

   return block;
};

Block __78678820;

void code__78678820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_64303520_counter_58_8400_64305440_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,ack__mac_63638260_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_55655120_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,_58372_63941040_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_53347320_func0_58_8400_50949760_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,value__a0_64268400_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__78678820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78678820 = block;
   block->owner = (Object)__78696900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78678820;

   return block;
};

Block __54327200;

void code__54327200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_51298340_channel__w0_58322_55470800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
            idx = value2integer(abus__r_56060400_channel__w0_58322_55470800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_56060520_channel__w0_58322_55470800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__54327200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54327200 = block;
   block->owner = (Object)__55504000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54327200;

   return block;
};

Block __78696160;

void code__78696160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_56060520_channel__w0_58322_55470800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,_58331_63701000_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__78696160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78696160 = block;
   block->owner = (Object)__78695980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78696160;

   return block;
};

Block __78695940;

void code__78695940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58331_63701000_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,dbus__r_56060520_channel__w0_58322_55470800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__78695940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78695940 = block;
   block->owner = (Object)__78695760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78695940;

   return block;
};

Block __78695400;

void code__78695400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_55525280_channel__w0_58322_55470800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,_58329_63725520_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__78695400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78695400 = block;
   block->owner = (Object)__78695240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78695400;

   return block;
};

Block __78695200;

void code__78695200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58329_63725520_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,trig__r_55525280_channel__w0_58322_55470800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__78695200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78695200 = block;
   block->owner = (Object)__78695040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78695200;

   return block;
};

Block __78694740;

void code__78694740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_56060400_channel__w0_58322_55470800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,_58330_63725440_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__78694740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78694740 = block;
   block->owner = (Object)__78694560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78694740;

   return block;
};

Block __78694520;

void code__78694520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58330_63725440_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,abus__r_56060400_channel__w0_58322_55470800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__78694520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78694520 = block;
   block->owner = (Object)__78694360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78694520;

   return block;
};

Block __78693040;

void code__78693040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_56431540_channel__accum_58337_55503820_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,_58339_63837340_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__78693040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78693040 = block;
   block->owner = (Object)__78692880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78693040;

   return block;
};

Block __78692840;

void code__78692840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58339_63837340_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,reg__0_56431540_channel__accum_58337_55503820_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__78692840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78692840 = block;
   block->owner = (Object)__78692680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78692840;

   return block;
};

Block __50357540;

Block __50356740;

Block __50159560;

void code__50159560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78786380(),_58330_63725440_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__50159560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50159560 = block;
   block->owner = (Object)__50356740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50159560;

   return block;
};

void code__50356740() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_55655120_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78786460();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50159560();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78786320(),_58329_63725520_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__50356740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50356740 = block;
   block->owner = (Object)__50357540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50356740;

   return block;
};

Block __50158400;

Block __50157880;

void code__50157880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78786160(),_58167_56624780_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__50157880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50157880 = block;
   block->owner = (Object)__50158400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50157880;

   return block;
};

void code__50158400() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_55655120_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78786240();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50157880();
   }
      }
   }
}

Block make__50158400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50158400 = block;
   block->owner = (Object)__50357540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50158400;

   return block;
};

Block __50155240;

void code__50155240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78785900(),rvok_50360020_mac__n1_58362_45731800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78785840(),lvok0_50360040_mac__n1_58362_45731800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78785780(),wok0_50359640_mac__n1_58362_45731800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__50155240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50155240 = block;
   block->owner = (Object)__50357540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50155240;

   return block;
};

Block __50621780;

Block __50642120;

Block __50635960;

Block __50674880;

Block __50688620;

void code__50688620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58165_56114940_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,rv_50360060_mac__n1_58362_45731800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__50688620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50688620 = block;
   block->owner = (Object)__50674880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50688620;

   return block;
};

Block __51336960;

void code__51336960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58166_56625540_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,rv_50360060_mac__n1_58362_45731800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__51336960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51336960 = block;
   block->owner = (Object)__50674880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51336960;

   return block;
};

void code__50674880() {
{
      Value value = _58167_56624780_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__78785360())) {
    code__50688620();
         }
         else if (value2integer(value) == value2integer(make__78785260())) {
    code__51336960();
         }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78785100(),rvok_50360020_mac__n1_58362_45731800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
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
                  src0 = _58167_56624780_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
                  src1 = make__78784980();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__78784940();
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
                        src0 = _58167_56624780_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__78784640();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__78784580();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58167_56624780_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__50674880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50674880 = block;
   block->owner = (Object)__50635960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50674880;

   return block;
};

void code__50635960() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_55655120_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78785480();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50674880();
   }
      }
   }
}

Block make__50635960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50635960 = block;
   block->owner = (Object)__50642120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50635960;

   return block;
};

void code__50642120() {
 code__50635960();
}

Block make__50642120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50642120 = block;
   block->owner = (Object)__50621780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50642120;

   return block;
};

Block __53528900;

Block __53528060;

Block __53526860;

Block __53612920;

Block __53612700;

void code__53612700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58331_63701000_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,lv0_47902720_mac__n1_58362_45731800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__78784120(),lvok0_50360040_mac__n1_58362_45731800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__53612700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53612700 = block;
   block->owner = (Object)__53612920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53612700;

   return block;
};

void code__53612920() {
 code__53612700();
}

Block make__53612920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53612920 = block;
   block->owner = (Object)__53526860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53612920;

   return block;
};

Block __53616500;

void code__53616500() {
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
                  src0 = _58330_63725440_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
                  src1 = make__78784020();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__78783980();
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
                        src0 = _58330_63725440_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__78783720();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__78783660();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58330_63725440_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78783540(),_58329_63725520_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__53616500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53616500 = block;
   block->owner = (Object)__53526860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53616500;

   return block;
};

void code__53526860() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58329_63725520_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78784280();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53612920();
   }
   else {
  code__53616500();
   }
      }
   }
}

Block make__53526860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53526860 = block;
   block->owner = (Object)__53528060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53526860;

   return block;
};

void code__53528060() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_55655120_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78784380();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53526860();
   }
      }
   }
}

Block make__53528060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53528060 = block;
   block->owner = (Object)__53528900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53528060;

   return block;
};

void code__53528900() {
 code__53528060();
}

Block make__53528900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53528900 = block;
   block->owner = (Object)__50621780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53528900;

   return block;
};

Block __54067820;

Block __54090920;

Block __54090640;

void code__54090640() {
}

Block make__54090640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54090640 = block;
   block->owner = (Object)__54090920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54090640;

   return block;
};

Block __55374120;

void code__55374120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_49399440_mac__n1_58362_45731800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,_58339_63837340_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78782640(),wok0_50359640_mac__n1_58362_45731800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__55374120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55374120 = block;
   block->owner = (Object)__54090920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55374120;

   return block;
};

void code__54090920() {
 code__54090640();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av0_49399440_mac__n1_58362_45731800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
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
                              src0 = lv0_47902720_mac__n1_58362_45731800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_50360060_mac__n1_58362_45731800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__78782880();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_49399440_mac__n1_58362_45731800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
 code__55374120();
}

Block make__54090920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54090920 = block;
   block->owner = (Object)__54067820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54090920;

   return block;
};

void code__54067820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78783300(),ack_63638280_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78783240(),run_50359500_mac__n1_58362_45731800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
 code__54090920();
}

Block make__54067820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54067820 = block;
   block->owner = (Object)__50621780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54067820;

   return block;
};

Block __55805740;

void code__55805740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78782540(),wok0_50359640_mac__n1_58362_45731800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78782480(),lvok0_50360040_mac__n1_58362_45731800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78847920(),rvok_50360020_mac__n1_58362_45731800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__55805740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55805740 = block;
   block->owner = (Object)__50621780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55805740;

   return block;
};

void code__50621780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78785620(),run_50359500_mac__n1_58362_45731800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = rvok_50360020_mac__n1_58362_45731800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50642120();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_50360040_mac__n1_58362_45731800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53528900();
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
               src0 = lvok0_50360040_mac__n1_58362_45731800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
               src1 = rvok_50360020_mac__n1_58362_45731800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok0_50359640_mac__n1_58362_45731800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54067820();
   }
      }
   }
   {
      Value cond = wok0_50359640_mac__n1_58362_45731800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55805740();
   }
      }
   }
}

Block make__50621780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50621780 = block;
   block->owner = (Object)__50357540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50621780;

   return block;
};

Block __50153520;

void code__50153520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78847860(),av0_49399440_mac__n1_58362_45731800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__50153520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50153520 = block;
   block->owner = (Object)__50357540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50153520;

   return block;
};

void code__50357540() {
 code__50356740();
 code__50158400();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78786100(),ack_63638280_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78786040(),run_50359500_mac__n1_58362_45731800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = run_50359500_mac__n1_58362_45731800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50155240();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_63638300_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
         src1 = run_50359500_mac__n1_58362_45731800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50621780();
   }
   else {
  code__50153520();
   }
      }
   }
}

Block make__50357540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50357540 = block;
   block->owner = (Object)__55828260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50357540;

   return block;
};

Block __61727520;

void code__61727520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_56449860_channel__b0_58367_55827980_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
            idx = value2integer(abus__r_56413260_channel__b0_58367_55827980_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_56413800_channel__b0_58367_55827980_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__61727520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61727520 = block;
   block->owner = (Object)__62111640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61727520;

   return block;
};

Block __78748140;

void code__78748140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_56413800_channel__b0_58367_55827980_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,_58371_63941060_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__78748140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78748140 = block;
   block->owner = (Object)__78747980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78748140;

   return block;
};

Block __78747940;

void code__78747940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58371_63941060_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,dbus__r_56413800_channel__b0_58367_55827980_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__78747940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78747940 = block;
   block->owner = (Object)__78747760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78747940;

   return block;
};

Block __78747460;

void code__78747460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_55824600_channel__b0_58367_55827980_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,_58369_63941020_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__78747460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78747460 = block;
   block->owner = (Object)__78747300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78747460;

   return block;
};

Block __78747260;

void code__78747260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58369_63941020_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,trig__r_55824600_channel__b0_58367_55827980_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__78747260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78747260 = block;
   block->owner = (Object)__78747100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78747260;

   return block;
};

Block __78746700;

void code__78746700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_56413260_channel__b0_58367_55827980_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,_58370_63940940_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__78746700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78746700 = block;
   block->owner = (Object)__78746540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78746700;

   return block;
};

Block __78746500;

void code__78746500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58370_63940940_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,abus__r_56413260_channel__b0_58367_55827980_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__78746500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78746500 = block;
   block->owner = (Object)__78746340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78746500;

   return block;
};

Block __78745100;

void code__78745100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_62170720_channel__z_58382_62111520_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,_58384_64175660_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__78745100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78745100 = block;
   block->owner = (Object)__78744920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78745100;

   return block;
};

Block __78744860;

void code__78744860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58384_64175660_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,reg__0_62170720_channel__z_58382_62111520_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__78744860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78744860 = block;
   block->owner = (Object)__78744680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78744860;

   return block;
};

Block __62748680;

Block __62748520;

void code__62748520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78846640(),_58369_63941020_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__62748520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62748520 = block;
   block->owner = (Object)__62748680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62748520;

   return block;
};

Block __62747260;

Block __62746940;

void code__62746940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58339_63837340_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,lv0_62555060_add__n_58405_62377900_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78846120(),lvok0_62748840_add__n_58405_62377900_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__62746940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62746940 = block;
   block->owner = (Object)__62747260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62746940;

   return block;
};

Block __62962120;

Block __62961800;

Block __62960940;

void code__62960940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58371_63941060_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value,rv0_62748860_add__n_58405_62377900_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78845780(),_58369_63941020_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78845720(),rvok0_62748820_add__n_58405_62377900_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__62960940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62960940 = block;
   block->owner = (Object)__62961800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62960940;

   return block;
};

Block __62961640;

void code__62961640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78845660(),_58370_63940940_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78845600(),_58369_63941020_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__62961640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62961640 = block;
   block->owner = (Object)__62961800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62961640;

   return block;
};

void code__62961800() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58369_63941020_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78845940();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__62960940();
   }
   else {
  code__62961640();
   }
      }
   }
}

Block make__62961800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62961800 = block;
   block->owner = (Object)__62962120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62961800;

   return block;
};

void code__62962120() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58372_63941040_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78846040();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__62961800();
   }
      }
   }
}

Block make__62962120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62962120 = block;
   block->owner = (Object)__62747260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62962120;

   return block;
};

Block __63273900;

Block __63273420;

void code__63273420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_62555060_add__n_58405_62377900_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
      src1 = rv0_62748860_add__n_58405_62377900_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58384_64175660_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__63273420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63273420 = block;
   block->owner = (Object)__63273900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63273420;

   return block;
};

void code__63273900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78845440(),run_62748800_add__n_58405_62377900_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78845380(),ack__add_63638240_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
 code__63273420();
}

Block make__63273900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63273900 = block;
   block->owner = (Object)__62747260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63273900;

   return block;
};

void code__62747260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78846320(),run_62748800_add__n_58405_62377900_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
 code__62746940();
 code__62962120();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_62748840_add__n_58405_62377900_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
         src1 = rvok0_62748820_add__n_58405_62377900_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__63273900();
   }
      }
   }
}

Block make__62747260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62747260 = block;
   block->owner = (Object)__62748680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62747260;

   return block;
};

Block __62747880;

void code__62747880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78845120(),lvok0_62748840_add__n_58405_62377900_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78845060(),rvok0_62748820_add__n_58405_62377900_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__62747880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62747880 = block;
   block->owner = (Object)__62748680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62747880;

   return block;
};

void code__62748680() {
 code__62748520();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78846580(),ack__add_63638240_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78846520(),run_62748800_add__n_58405_62377900_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_63638260_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
         src1 = run_62748800_add__n_58405_62377900_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__62747260();
   }
   else {
  code__62747880();
   }
      }
   }
}

Block make__62748680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62748680 = block;
   block->owner = (Object)__63638440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62748680;

   return block;
};

Value make__78787820() {
   static unsigned long long data[] = { 4294967244ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78787800() {
   static unsigned long long data[] = { 48ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78847840() {
   static unsigned long long data[] = { 4294967285ULL };
   return make_set_value(get_type_vector(get_type_vector(get_type_signed(),8),1),1,data);
}

Value make__78786460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78786380() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78786320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78786240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78786160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78786100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78786040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78785900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78785840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78785780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78785620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78785480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78785360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78785260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78785100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78784980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78784940() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78784640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78784580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78784380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78784280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78784120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78784020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78783980() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78783720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78783660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78783540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78783300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78783240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78782880() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78782640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78782540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78782480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78847920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78847860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78846640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78846580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78846520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78846320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78846120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78846040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78845940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78845780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78845720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78845660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78845600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78845440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78845380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78845120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78845060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78843940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78843880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78843820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78843640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78843580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78843480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78843260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope layer1_58_84_55471440;

SignalI req__mac_63638300_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makereq__mac_63638300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_63638300_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer1_58_84_55471440;
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

SignalI ack_63638280_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makeack_63638280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_63638280_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer1_58_84_55471440;
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

SignalI ack__mac_63638260_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makeack__mac_63638260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_63638260_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer1_58_84_55471440;
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

SignalI ack__add_63638240_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makeack__add_63638240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_63638240_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer1_58_84_55471440;
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

SignalI _58331_63701000_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI make_58331_63701000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58331_63701000_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer1_58_84_55471440;
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

SignalI _58329_63725520_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI make_58329_63725520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58329_63725520_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer1_58_84_55471440;
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

SignalI _58330_63725440_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI make_58330_63725440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58330_63725440_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer1_58_84_55471440;
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

SignalI _58339_63837340_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI make_58339_63837340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58339_63837340_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer1_58_84_55471440;
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

SignalI _58371_63941060_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI make_58371_63941060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58371_63941060_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer1_58_84_55471440;
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

SignalI _58372_63941040_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI make_58372_63941040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58372_63941040_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer1_58_84_55471440;
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

SignalI _58369_63941020_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI make_58369_63941020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58369_63941020_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer1_58_84_55471440;
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

SignalI _58370_63940940_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI make_58370_63940940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58370_63940940_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer1_58_84_55471440;
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

SignalI _58384_64175660_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI make_58384_64175660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58384_64175660_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer1_58_84_55471440;
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

SignalI value__z0_64222020_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makevalue__z0_64222020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_64222020_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer1_58_84_55471440;
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

SignalI value__a0_64268400_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makevalue__a0_64268400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_64268400_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer1_58_84_55471440;
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

SignalI flag__z0_64268380_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makeflag__z0_64268380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_64268380_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer1_58_84_55471440;
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

SignalI ack__a0_64268360_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makeack__a0_64268360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_64268360_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)layer1_58_84_55471440;
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

SystemI counter_64303380;

SystemI makecounter_64303380() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_64303380 = systemI;
   systemI->owner = (Object)layer1_58_84_55471440;
   systemI->name = "counter";
   systemI->system = counter_58_8400_64305440;

   return systemI;
};

SystemI func0_53347160;

SystemI makefunc0_53347160() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_53347160 = systemI;
   systemI->owner = (Object)layer1_58_84_55471440;
   systemI->name = "func0";
   systemI->system = func0_58_8400_50949760;

   return systemI;
};

Scope channel__w0_58322_55470800;

SignalI trig__r_55525280_channel__w0_58322_55470800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI maketrig__r_55525280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_55525280_channel__w0_58322_55470800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__w0_58322_55470800;
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

SignalI dbus__r_56060520_channel__w0_58322_55470800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makedbus__r_56060520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_56060520_channel__w0_58322_55470800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__w0_58322_55470800;
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

SignalI abus__r_56060400_channel__w0_58322_55470800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makeabus__r_56060400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_56060400_channel__w0_58322_55470800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__w0_58322_55470800;
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

SignalI mem_51298340_channel__w0_58322_55470800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makemem_51298340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_51298340_channel__w0_58322_55470800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__w0_58322_55470800;
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
         src0 = make__78787820();
         src1 = make__78787800();
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

Scope raddr_58323_55470380;

Scope makeraddr_58323_55470380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58323_55470380 = scope;
   scope->owner = (Object)channel__w0_58322_55470800;
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

Scope rinc_58328_55469660;

Scope makerinc_58328_55469660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58328_55469660 = scope;
   scope->owner = (Object)channel__w0_58322_55470800;
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

Scope rdec_58332_55468960;

Scope makerdec_58332_55468960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58332_55468960 = scope;
   scope->owner = (Object)channel__w0_58322_55470800;
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

Behavior __55504000;

Behavior make__55504000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55504000 = behavior;
   behavior->owner = (Object)channel__w0_58322_55470800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_55655140_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   clk_55655140_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_neg += 1;
   clk_55655140_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->neg = realloc(clk_55655140_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->neg,clk_55655140_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_neg*sizeof(Object));
clk_55655140_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->neg[clk_55655140_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_neg-1] = (Object)behavior;
   behavior->block = make__54327200();

   return behavior;
}

Behavior __78695980;

Behavior make__78695980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78695980 = behavior;
   behavior->owner = (Object)channel__w0_58322_55470800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_56060520_channel__w0_58322_55470800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   dbus__r_56060520_channel__w0_58322_55470800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   dbus__r_56060520_channel__w0_58322_55470800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(dbus__r_56060520_channel__w0_58322_55470800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,dbus__r_56060520_channel__w0_58322_55470800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
dbus__r_56060520_channel__w0_58322_55470800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[dbus__r_56060520_channel__w0_58322_55470800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__78696160();

   return behavior;
}

Behavior __78695760;

Behavior make__78695760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78695760 = behavior;
   behavior->owner = (Object)channel__w0_58322_55470800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58331_63701000_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   _58331_63701000_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   _58331_63701000_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(_58331_63701000_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,_58331_63701000_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
_58331_63701000_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[_58331_63701000_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__78695940();

   return behavior;
}

Behavior __78695240;

Behavior make__78695240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78695240 = behavior;
   behavior->owner = (Object)channel__w0_58322_55470800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_55525280_channel__w0_58322_55470800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   trig__r_55525280_channel__w0_58322_55470800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   trig__r_55525280_channel__w0_58322_55470800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(trig__r_55525280_channel__w0_58322_55470800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,trig__r_55525280_channel__w0_58322_55470800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
trig__r_55525280_channel__w0_58322_55470800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[trig__r_55525280_channel__w0_58322_55470800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__78695400();

   return behavior;
}

Behavior __78695040;

Behavior make__78695040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78695040 = behavior;
   behavior->owner = (Object)channel__w0_58322_55470800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58329_63725520_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   _58329_63725520_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   _58329_63725520_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(_58329_63725520_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,_58329_63725520_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
_58329_63725520_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[_58329_63725520_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__78695200();

   return behavior;
}

Behavior __78694560;

Behavior make__78694560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78694560 = behavior;
   behavior->owner = (Object)channel__w0_58322_55470800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_56060400_channel__w0_58322_55470800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   abus__r_56060400_channel__w0_58322_55470800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   abus__r_56060400_channel__w0_58322_55470800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(abus__r_56060400_channel__w0_58322_55470800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,abus__r_56060400_channel__w0_58322_55470800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
abus__r_56060400_channel__w0_58322_55470800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[abus__r_56060400_channel__w0_58322_55470800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__78694740();

   return behavior;
}

Behavior __78694360;

Behavior make__78694360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78694360 = behavior;
   behavior->owner = (Object)channel__w0_58322_55470800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58330_63725440_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   _58330_63725440_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   _58330_63725440_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(_58330_63725440_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,_58330_63725440_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
_58330_63725440_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[_58330_63725440_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__78694520();

   return behavior;
}

Scope makechannel__w0_58322_55470800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58322_55470800 = scope;
   scope->owner = (Object)layer1_58_84_55471440;
   scope->name = "channel_w0:322";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_55525280();
   scope->inners[1] = makedbus__r_56060520();
   scope->inners[2] = makeabus__r_56060400();
   scope->inners[3] = makemem_51298340();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58323_55470380();
   scope->scopes[1] = makerinc_58328_55469660();
   scope->scopes[2] = makerdec_58332_55468960();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__55504000();
   scope->behaviors[1] = make__78695980();
   scope->behaviors[2] = make__78695760();
   scope->behaviors[3] = make__78695240();
   scope->behaviors[4] = make__78695040();
   scope->behaviors[5] = make__78694560();
   scope->behaviors[6] = make__78694360();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58337_55503820;

SignalI reg__0_56431540_channel__accum_58337_55503820_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makereg__0_56431540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_56431540_channel__accum_58337_55503820_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__accum_58337_55503820;
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

Scope anum_58338_55502560;

Scope makeanum_58338_55502560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58338_55502560 = scope;
   scope->owner = (Object)channel__accum_58337_55503820;
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

Scope raddr_58340_55501940;

Scope makeraddr_58340_55501940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58340_55501940 = scope;
   scope->owner = (Object)channel__accum_58337_55503820;
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

Scope waddr_58343_55501120;

Scope makewaddr_58343_55501120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58343_55501120 = scope;
   scope->owner = (Object)channel__accum_58337_55503820;
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

Scope rinc_58346_55426700;

SignalI abus__r_55426020_rinc_58346_55426700_channel__accum_58337_55503820_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makeabus__r_55426020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_55426020_rinc_58346_55426700_channel__accum_58337_55503820_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)rinc_58346_55426700;
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

Scope makerinc_58346_55426700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58346_55426700 = scope;
   scope->owner = (Object)channel__accum_58337_55503820;
   scope->name = "rinc:346";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_55426020();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58350_55425900;

SignalI abus__w_55425380_winc_58350_55425900_channel__accum_58337_55503820_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makeabus__w_55425380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_55425380_winc_58350_55425900_channel__accum_58337_55503820_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)winc_58350_55425900;
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

Scope makewinc_58350_55425900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58350_55425900 = scope;
   scope->owner = (Object)channel__accum_58337_55503820;
   scope->name = "winc:350";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_55425380();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58354_55425060;

SignalI abus__r_55423940_rdec_58354_55425060_channel__accum_58337_55503820_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makeabus__r_55423940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_55423940_rdec_58354_55425060_channel__accum_58337_55503820_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)rdec_58354_55425060;
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

Scope makerdec_58354_55425060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58354_55425060 = scope;
   scope->owner = (Object)channel__accum_58337_55503820;
   scope->name = "rdec:354";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_55423940();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58358_55423800;

SignalI abus__w_55423300_wdec_58358_55423800_channel__accum_58337_55503820_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makeabus__w_55423300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_55423300_wdec_58358_55423800_channel__accum_58337_55503820_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)wdec_58358_55423800;
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

Scope makewdec_58358_55423800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58358_55423800 = scope;
   scope->owner = (Object)channel__accum_58337_55503820;
   scope->name = "wdec:358";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_55423300();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __78692880;

Behavior make__78692880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78692880 = behavior;
   behavior->owner = (Object)channel__accum_58337_55503820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_56431540_channel__accum_58337_55503820_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   reg__0_56431540_channel__accum_58337_55503820_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   reg__0_56431540_channel__accum_58337_55503820_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(reg__0_56431540_channel__accum_58337_55503820_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,reg__0_56431540_channel__accum_58337_55503820_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
reg__0_56431540_channel__accum_58337_55503820_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[reg__0_56431540_channel__accum_58337_55503820_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__78693040();

   return behavior;
}

Behavior __78692680;

Behavior make__78692680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78692680 = behavior;
   behavior->owner = (Object)channel__accum_58337_55503820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58339_63837340_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   _58339_63837340_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   _58339_63837340_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(_58339_63837340_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,_58339_63837340_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
_58339_63837340_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[_58339_63837340_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__78692840();

   return behavior;
}

Scope makechannel__accum_58337_55503820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58337_55503820 = scope;
   scope->owner = (Object)layer1_58_84_55471440;
   scope->name = "channel_accum:337";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_56431540();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58338_55502560();
   scope->scopes[1] = makeraddr_58340_55501940();
   scope->scopes[2] = makewaddr_58343_55501120();
   scope->scopes[3] = makerinc_58346_55426700();
   scope->scopes[4] = makewinc_58350_55425900();
   scope->scopes[5] = makerdec_58354_55425060();
   scope->scopes[6] = makewdec_58358_55423800();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__78692880();
   scope->behaviors[1] = make__78692680();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58362_45731800;

SignalI lv0_47902720_mac__n1_58362_45731800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makelv0_47902720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_47902720_mac__n1_58362_45731800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)mac__n1_58362_45731800;
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

SignalI av0_49399440_mac__n1_58362_45731800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makeav0_49399440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_49399440_mac__n1_58362_45731800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)mac__n1_58362_45731800;
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

SignalI rv_50360060_mac__n1_58362_45731800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makerv_50360060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_50360060_mac__n1_58362_45731800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)mac__n1_58362_45731800;
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

SignalI lvok0_50360040_mac__n1_58362_45731800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makelvok0_50360040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_50360040_mac__n1_58362_45731800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)mac__n1_58362_45731800;
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

SignalI rvok_50360020_mac__n1_58362_45731800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makervok_50360020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_50360020_mac__n1_58362_45731800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)mac__n1_58362_45731800;
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

SignalI wok0_50359640_mac__n1_58362_45731800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makewok0_50359640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok0_50359640_mac__n1_58362_45731800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)mac__n1_58362_45731800;
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

SignalI run_50359500_mac__n1_58362_45731800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makerun_50359500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_50359500_mac__n1_58362_45731800_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)mac__n1_58362_45731800;
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

Behavior __55828260;

Behavior make__55828260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55828260 = behavior;
   behavior->owner = (Object)mac__n1_58362_45731800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_55655140_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   clk_55655140_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_pos += 1;
   clk_55655140_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->pos = realloc(clk_55655140_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->pos,clk_55655140_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_pos*sizeof(Object));
clk_55655140_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->pos[clk_55655140_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_pos-1] = (Object)behavior;
   behavior->block = make__50357540();

   return behavior;
}

Scope makemac__n1_58362_45731800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58362_45731800 = scope;
   scope->owner = (Object)layer1_58_84_55471440;
   scope->name = "mac_n1:362";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_47902720();
   scope->inners[1] = makeav0_49399440();
   scope->inners[2] = makerv_50360060();
   scope->inners[3] = makelvok0_50360040();
   scope->inners[4] = makervok_50360020();
   scope->inners[5] = makewok0_50359640();
   scope->inners[6] = makerun_50359500();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__55828260();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__b0_58367_55827980;

SignalI trig__r_55824600_channel__b0_58367_55827980_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI maketrig__r_55824600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_55824600_channel__b0_58367_55827980_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__b0_58367_55827980;
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

SignalI dbus__r_56413800_channel__b0_58367_55827980_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makedbus__r_56413800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_56413800_channel__b0_58367_55827980_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__b0_58367_55827980;
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

SignalI abus__r_56413260_channel__b0_58367_55827980_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makeabus__r_56413260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_56413260_channel__b0_58367_55827980_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__b0_58367_55827980;
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

SignalI mem_56449860_channel__b0_58367_55827980_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makemem_56449860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_56449860_channel__b0_58367_55827980_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__b0_58367_55827980;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(make__78847840(),signalI->c_value);
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope raddr_58368_55827340;

Scope makeraddr_58368_55827340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58368_55827340 = scope;
   scope->owner = (Object)channel__b0_58367_55827980;
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

Scope rinc_58373_55826640;

Scope makerinc_58373_55826640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58373_55826640 = scope;
   scope->owner = (Object)channel__b0_58367_55827980;
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

Scope rdec_58377_55825300;

Scope makerdec_58377_55825300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58377_55825300 = scope;
   scope->owner = (Object)channel__b0_58367_55827980;
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

Behavior __62111640;

Behavior make__62111640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62111640 = behavior;
   behavior->owner = (Object)channel__b0_58367_55827980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_55655140_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   clk_55655140_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_neg += 1;
   clk_55655140_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->neg = realloc(clk_55655140_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->neg,clk_55655140_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_neg*sizeof(Object));
clk_55655140_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->neg[clk_55655140_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_neg-1] = (Object)behavior;
   behavior->block = make__61727520();

   return behavior;
}

Behavior __78747980;

Behavior make__78747980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78747980 = behavior;
   behavior->owner = (Object)channel__b0_58367_55827980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_56413800_channel__b0_58367_55827980_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   dbus__r_56413800_channel__b0_58367_55827980_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   dbus__r_56413800_channel__b0_58367_55827980_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(dbus__r_56413800_channel__b0_58367_55827980_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,dbus__r_56413800_channel__b0_58367_55827980_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
dbus__r_56413800_channel__b0_58367_55827980_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[dbus__r_56413800_channel__b0_58367_55827980_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__78748140();

   return behavior;
}

Behavior __78747760;

Behavior make__78747760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78747760 = behavior;
   behavior->owner = (Object)channel__b0_58367_55827980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58371_63941060_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   _58371_63941060_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   _58371_63941060_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(_58371_63941060_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,_58371_63941060_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
_58371_63941060_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[_58371_63941060_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__78747940();

   return behavior;
}

Behavior __78747300;

Behavior make__78747300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78747300 = behavior;
   behavior->owner = (Object)channel__b0_58367_55827980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_55824600_channel__b0_58367_55827980_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   trig__r_55824600_channel__b0_58367_55827980_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   trig__r_55824600_channel__b0_58367_55827980_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(trig__r_55824600_channel__b0_58367_55827980_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,trig__r_55824600_channel__b0_58367_55827980_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
trig__r_55824600_channel__b0_58367_55827980_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[trig__r_55824600_channel__b0_58367_55827980_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__78747460();

   return behavior;
}

Behavior __78747100;

Behavior make__78747100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78747100 = behavior;
   behavior->owner = (Object)channel__b0_58367_55827980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58369_63941020_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   _58369_63941020_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   _58369_63941020_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(_58369_63941020_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,_58369_63941020_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
_58369_63941020_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[_58369_63941020_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__78747260();

   return behavior;
}

Behavior __78746540;

Behavior make__78746540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78746540 = behavior;
   behavior->owner = (Object)channel__b0_58367_55827980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_56413260_channel__b0_58367_55827980_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   abus__r_56413260_channel__b0_58367_55827980_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   abus__r_56413260_channel__b0_58367_55827980_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(abus__r_56413260_channel__b0_58367_55827980_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,abus__r_56413260_channel__b0_58367_55827980_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
abus__r_56413260_channel__b0_58367_55827980_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[abus__r_56413260_channel__b0_58367_55827980_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__78746700();

   return behavior;
}

Behavior __78746340;

Behavior make__78746340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78746340 = behavior;
   behavior->owner = (Object)channel__b0_58367_55827980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58370_63940940_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   _58370_63940940_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   _58370_63940940_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(_58370_63940940_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,_58370_63940940_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
_58370_63940940_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[_58370_63940940_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__78746500();

   return behavior;
}

Scope makechannel__b0_58367_55827980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__b0_58367_55827980 = scope;
   scope->owner = (Object)layer1_58_84_55471440;
   scope->name = "channel_b0:367";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_55824600();
   scope->inners[1] = makedbus__r_56413800();
   scope->inners[2] = makeabus__r_56413260();
   scope->inners[3] = makemem_56449860();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58368_55827340();
   scope->scopes[1] = makerinc_58373_55826640();
   scope->scopes[2] = makerdec_58377_55825300();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__62111640();
   scope->behaviors[1] = make__78747980();
   scope->behaviors[2] = make__78747760();
   scope->behaviors[3] = make__78747300();
   scope->behaviors[4] = make__78747100();
   scope->behaviors[5] = make__78746540();
   scope->behaviors[6] = make__78746340();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58382_62111520;

SignalI reg__0_62170720_channel__z_58382_62111520_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makereg__0_62170720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_62170720_channel__z_58382_62111520_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__z_58382_62111520;
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

Scope anum_58383_62111220;

Scope makeanum_58383_62111220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58383_62111220 = scope;
   scope->owner = (Object)channel__z_58382_62111520;
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

Scope raddr_58385_62110800;

Scope makeraddr_58385_62110800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58385_62110800 = scope;
   scope->owner = (Object)channel__z_58382_62111520;
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

Scope waddr_58388_62110380;

Scope makewaddr_58388_62110380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58388_62110380 = scope;
   scope->owner = (Object)channel__z_58382_62111520;
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

Scope rinc_58391_62109960;

SignalI abus__r_62109580_rinc_58391_62109960_channel__z_58382_62111520_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makeabus__r_62109580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_62109580_rinc_58391_62109960_channel__z_58382_62111520_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)rinc_58391_62109960;
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

Scope makerinc_58391_62109960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58391_62109960 = scope;
   scope->owner = (Object)channel__z_58382_62111520;
   scope->name = "rinc:391";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_62109580();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58394_62109460;

SignalI abus__w_62109080_winc_58394_62109460_channel__z_58382_62111520_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makeabus__w_62109080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_62109080_winc_58394_62109460_channel__z_58382_62111520_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)winc_58394_62109460;
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

Scope makewinc_58394_62109460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58394_62109460 = scope;
   scope->owner = (Object)channel__z_58382_62111520;
   scope->name = "winc:394";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_62109080();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58397_62108960;

SignalI abus__r_62108580_rdec_58397_62108960_channel__z_58382_62111520_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makeabus__r_62108580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_62108580_rdec_58397_62108960_channel__z_58382_62111520_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)rdec_58397_62108960;
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

Scope makerdec_58397_62108960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58397_62108960 = scope;
   scope->owner = (Object)channel__z_58382_62111520;
   scope->name = "rdec:397";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_62108580();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58401_62108460;

SignalI abus__w_62108080_wdec_58401_62108460_channel__z_58382_62111520_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makeabus__w_62108080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_62108080_wdec_58401_62108460_channel__z_58382_62111520_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)wdec_58401_62108460;
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

Scope makewdec_58401_62108460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58401_62108460 = scope;
   scope->owner = (Object)channel__z_58382_62111520;
   scope->name = "wdec:401";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_62108080();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __78744920;

Behavior make__78744920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78744920 = behavior;
   behavior->owner = (Object)channel__z_58382_62111520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_62170720_channel__z_58382_62111520_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   reg__0_62170720_channel__z_58382_62111520_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   reg__0_62170720_channel__z_58382_62111520_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(reg__0_62170720_channel__z_58382_62111520_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,reg__0_62170720_channel__z_58382_62111520_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
reg__0_62170720_channel__z_58382_62111520_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[reg__0_62170720_channel__z_58382_62111520_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__78745100();

   return behavior;
}

Behavior __78744680;

Behavior make__78744680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78744680 = behavior;
   behavior->owner = (Object)channel__z_58382_62111520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58384_64175660_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   _58384_64175660_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   _58384_64175660_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(_58384_64175660_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,_58384_64175660_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
_58384_64175660_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[_58384_64175660_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__78744860();

   return behavior;
}

Scope makechannel__z_58382_62111520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58382_62111520 = scope;
   scope->owner = (Object)layer1_58_84_55471440;
   scope->name = "channel_z:382";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_62170720();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58383_62111220();
   scope->scopes[1] = makeraddr_58385_62110800();
   scope->scopes[2] = makewaddr_58388_62110380();
   scope->scopes[3] = makerinc_58391_62109960();
   scope->scopes[4] = makewinc_58394_62109460();
   scope->scopes[5] = makerdec_58397_62108960();
   scope->scopes[6] = makewdec_58401_62108460();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__78744920();
   scope->behaviors[1] = make__78744680();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58405_62377900;

SignalI lv0_62555060_add__n_58405_62377900_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makelv0_62555060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_62555060_add__n_58405_62377900_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)add__n_58405_62377900;
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

SignalI rv0_62748860_add__n_58405_62377900_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makerv0_62748860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_62748860_add__n_58405_62377900_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)add__n_58405_62377900;
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

SignalI lvok0_62748840_add__n_58405_62377900_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makelvok0_62748840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_62748840_add__n_58405_62377900_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)add__n_58405_62377900;
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

SignalI rvok0_62748820_add__n_58405_62377900_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makervok0_62748820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_62748820_add__n_58405_62377900_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)add__n_58405_62377900;
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

SignalI run_62748800_add__n_58405_62377900_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140;

SignalI makerun_62748800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_62748800_add__n_58405_62377900_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)add__n_58405_62377900;
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

Behavior __63638440;

Behavior make__63638440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63638440 = behavior;
   behavior->owner = (Object)add__n_58405_62377900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_55655140_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   clk_55655140_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_pos += 1;
   clk_55655140_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->pos = realloc(clk_55655140_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->pos,clk_55655140_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_pos*sizeof(Object));
clk_55655140_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->pos[clk_55655140_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_pos-1] = (Object)behavior;
   behavior->block = make__62748680();

   return behavior;
}

Scope makeadd__n_58405_62377900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58405_62377900 = scope;
   scope->owner = (Object)layer1_58_84_55471440;
   scope->name = "add_n:405";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_62555060();
   scope->inners[1] = makerv0_62748860();
   scope->inners[2] = makelvok0_62748840();
   scope->inners[3] = makervok0_62748820();
   scope->inners[4] = makerun_62748800();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__63638440();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __54616420;

Behavior make__54616420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54616420 = behavior;
   behavior->owner = (Object)layer1_58_84_55471440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_55655140_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   clk_55655140_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_pos += 1;
   clk_55655140_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->pos = realloc(clk_55655140_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->pos,clk_55655140_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_pos*sizeof(Object));
clk_55655140_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->pos[clk_55655140_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_pos-1] = (Object)behavior;
   behavior->block = make__54619040();

   return behavior;
}

Behavior __55148340;

Behavior make__55148340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55148340 = behavior;
   behavior->owner = (Object)layer1_58_84_55471440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_55655140_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   clk_55655140_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_pos += 1;
   clk_55655140_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->pos = realloc(clk_55655140_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->pos,clk_55655140_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_pos*sizeof(Object));
clk_55655140_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->pos[clk_55655140_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_pos-1] = (Object)behavior;
   behavior->block = make__54616180();

   return behavior;
}

Behavior __55595060;

Behavior make__55595060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55595060 = behavior;
   behavior->owner = (Object)layer1_58_84_55471440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_55655140_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   clk_55655140_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_pos += 1;
   clk_55655140_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->pos = realloc(clk_55655140_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->pos,clk_55655140_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_pos*sizeof(Object));
clk_55655140_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->pos[clk_55655140_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_pos-1] = (Object)behavior;
   behavior->block = make__55147700();

   return behavior;
}

Behavior __78678400;

Behavior make__78678400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78678400 = behavior;
   behavior->owner = (Object)layer1_58_84_55471440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_55655040_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   req_55655040_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   req_55655040_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(req_55655040_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,req_55655040_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
req_55655040_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[req_55655040_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_63638260_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   ack__mac_63638260_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   ack__mac_63638260_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(ack__mac_63638260_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,ack__mac_63638260_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
ack__mac_63638260_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[ack__mac_63638260_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__78678660();

   return behavior;
}

Behavior __78697060;

Behavior make__78697060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78697060 = behavior;
   behavior->owner = (Object)layer1_58_84_55471440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_55655140_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   clk_55655140_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   clk_55655140_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(clk_55655140_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,clk_55655140_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
clk_55655140_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[clk_55655140_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_63638280_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   ack_63638280_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   ack_63638280_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(ack_63638280_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,ack_63638280_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
ack_63638280_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[ack_63638280_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_55655120_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   rst_55655120_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   rst_55655120_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(rst_55655120_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,rst_55655120_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
rst_55655120_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[rst_55655120_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_64222020_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   value__z0_64222020_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   value__z0_64222020_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(value__z0_64222020_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,value__z0_64222020_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
value__z0_64222020_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[value__z0_64222020_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__a0_64268360_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   ack__a0_64268360_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   ack__a0_64268360_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(ack__a0_64268360_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,ack__a0_64268360_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
ack__a0_64268360_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[ack__a0_64268360_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__78678880();

   return behavior;
}

Behavior __78696900;

Behavior make__78696900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78696900 = behavior;
   behavior->owner = (Object)layer1_58_84_55471440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_64303520_counter_58_8400_64305440_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   ack__mac_64303520_counter_58_8400_64305440_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   ack__mac_64303520_counter_58_8400_64305440_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(ack__mac_64303520_counter_58_8400_64305440_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,ack__mac_64303520_counter_58_8400_64305440_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
ack__mac_64303520_counter_58_8400_64305440_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[ack__mac_64303520_counter_58_8400_64305440_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_55655120_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   rst_55655120_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   rst_55655120_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(rst_55655120_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,rst_55655120_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
rst_55655120_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[rst_55655120_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,a_53347320_func0_58_8400_50949760_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140);
   a_53347320_func0_58_8400_50949760_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any += 1;
   a_53347320_func0_58_8400_50949760_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any = realloc(a_53347320_func0_58_8400_50949760_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any,a_53347320_func0_58_8400_50949760_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
a_53347320_func0_58_8400_50949760_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->any[a_53347320_func0_58_8400_50949760_layer1_58_84_55471440_layer1_58_841_55593680_sigmoid__neural__network_58_84_53820920_sigmoid__neural__network_58_840_62681040______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__78678820();

   return behavior;
}

Scope makelayer1_58_84_55471440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer1_58_84_55471440 = scope;
   scope->owner = (Object)layer1_58_841_55593680;
   scope->name = "layer1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_64303380();
   scope->systemIs[1] = makefunc0_53347160();
   scope->num_inners = 17;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_63638300();
   scope->inners[1] = makeack_63638280();
   scope->inners[2] = makeack__mac_63638260();
   scope->inners[3] = makeack__add_63638240();
   scope->inners[4] = make_58331_63701000();
   scope->inners[5] = make_58329_63725520();
   scope->inners[6] = make_58330_63725440();
   scope->inners[7] = make_58339_63837340();
   scope->inners[8] = make_58371_63941060();
   scope->inners[9] = make_58372_63941040();
   scope->inners[10] = make_58369_63941020();
   scope->inners[11] = make_58370_63940940();
   scope->inners[12] = make_58384_64175660();
   scope->inners[13] = makevalue__z0_64222020();
   scope->inners[14] = makevalue__a0_64268400();
   scope->inners[15] = makeflag__z0_64268380();
   scope->inners[16] = makeack__a0_64268360();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58322_55470800();
   scope->scopes[1] = makechannel__accum_58337_55503820();
   scope->scopes[2] = makemac__n1_58362_45731800();
   scope->scopes[3] = makechannel__b0_58367_55827980();
   scope->scopes[4] = makechannel__z_58382_62111520();
   scope->scopes[5] = makeadd__n_58405_62377900();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54616420();
   scope->behaviors[1] = make__55148340();
   scope->behaviors[2] = make__55595060();
   scope->behaviors[3] = make__78678400();
   scope->behaviors[4] = make__78697060();
   scope->behaviors[5] = make__78696900();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer1_58_841_55593680() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer1_58_841_55593680 = systemT;
systemT->owner = NULL;
   systemT->name = "layer1:T1";
   systemT->num_inputs = 5;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_55655140();
   systemT->inputs[1] = makerst_55655120();
   systemT->inputs[2] = makereq_55655040();
   systemT->inputs[3] = make_58165_56114940();
   systemT->inputs[4] = make_58166_56625540();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_56625440();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_58167_56624780();
   systemT->inouts[1] = make_58131_56858200();

   systemT->scope = makelayer1_58_84_55471440();

   return systemT;
}