#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer1_58_841_50828300;

SignalI clk_50845900_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makeclk_50845900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_50845900_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer1_58_841_50828300;
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

SignalI rst_50845720_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makerst_50845720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_50845720_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer1_58_841_50828300;
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

SignalI req_50845680_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makereq_50845680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_50845680_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer1_58_841_50828300;
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

SignalI _58154_51226960_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI make_58154_51226960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58154_51226960_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer1_58_841_50828300;
   signalI->name = ":154";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58155_51570480_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI make_58155_51570480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58155_51570480_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer1_58_841_50828300;
   signalI->name = ":155";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI ack__layer_51570400_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makeack__layer_51570400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_51570400_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer1_58_841_50828300;
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

SignalI _58156_51570060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI make_58156_51570060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58156_51570060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer1_58_841_50828300;
   signalI->name = ":156";
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

SignalI _58120_53631060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI make_58120_53631060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58120_53631060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer1_58_841_50828300;
   signalI->name = ":120";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Block __66864900;

Block __66864680;

void code__66864680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78057880(),ack_62718980_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78057820(),ack__mac_62718960_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78057760(),ack__add_62718940_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__66864680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66864680 = block;
   block->owner = (Object)__66864900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66864680;

   return block;
};

void code__66864900() {
   {
      Value cond = rst_50845720_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__66864680();
   }
      }
   }
}

Block make__66864900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66864900 = block;
   block->owner = (Object)__66863720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66864900;

   return block;
};

Block __66863600;

Block __66887560;

Block __66887340;

void code__66887340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58373_63141700_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,value__z0_63188080_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78057580(),flag__z0_63422840_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__66887340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66887340 = block;
   block->owner = (Object)__66887560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66887340;

   return block;
};

void code__66887560() {
 code__66887340();
}

Block make__66887560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66887560 = block;
   block->owner = (Object)__66863600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66887560;

   return block;
};

Block __66863440;

void code__66863440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78057520(),flag__z0_63422840_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__66863440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66863440 = block;
   block->owner = (Object)__66863600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66863440;

   return block;
};

void code__66863600() {
   {
      Value cond = ack__add_62718940_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__66887560();
   }
   else {
  code__66863440();
   }
      }
   }
}

Block make__66863600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66863600 = block;
   block->owner = (Object)__48249880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66863600;

   return block;
};

Block __48249060;

Block __48247200;

void code__48247200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78057420(),ack__a0_63422820_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__48247200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48247200 = block;
   block->owner = (Object)__48249060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48247200;

   return block;
};

Block __48266980;

Block __48259140;

void code__48259140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_63422860_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,_58120_53631060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78057180(),ack__a0_63422820_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__48259140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48259140 = block;
   block->owner = (Object)__48266980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48259140;

   return block;
};

void code__48266980() {
 code__48259140();
}

Block make__48266980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48266980 = block;
   block->owner = (Object)__48249060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48266980;

   return block;
};

void code__48249060() {
   {
      Value cond = rst_50845720_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48247200();
   }
   else if (value2integer(flag__z0_63422840_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value)) {
  code__48266980();
   }
      }
   }
}

Block make__48249060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48249060 = block;
   block->owner = (Object)__50829000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48249060;

   return block;
};

Block __77859980;

void code__77859980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_50845680_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_62718960_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_62719000_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__77859980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77859980 = block;
   block->owner = (Object)__77859740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77859980;

   return block;
};

Block __77860220;

void code__77860220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_50845900_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,clk_63458060_counter_58_8400_63459900_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_62718980_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,ack_63458040_counter_58_8400_63459900_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_50845720_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,rst_63458020_counter_58_8400_63459900_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_63188080_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,z__value_66194280_func0_58_8400_66086220_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__a0_63422820_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,ack__layer_51570400_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__77860220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77860220 = block;
   block->owner = (Object)__77878400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77860220;

   return block;
};

Block __77860160;

void code__77860160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_63457980_counter_58_8400_63459900_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,ack__mac_62718960_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_50845720_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,_58361_62980780_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_66361340_func0_58_8400_66086220_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,value__a0_63422860_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__77860160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77860160 = block;
   block->owner = (Object)__77878220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77860160;

   return block;
};

Block __54010660;

void code__54010660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_51226480_channel__w0_58311_56680640_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
            idx = value2integer(abus__r_57020940_channel__w0_58311_56680640_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_57021060_channel__w0_58311_56680640_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__54010660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54010660 = block;
   block->owner = (Object)__55486660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54010660;

   return block;
};

Block __77877480;

void code__77877480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_57021060_channel__w0_58311_56680640_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,_58320_62839000_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__77877480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77877480 = block;
   block->owner = (Object)__77877280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77877480;

   return block;
};

Block __77877200;

void code__77877200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58320_62839000_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,dbus__r_57021060_channel__w0_58311_56680640_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__77877200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77877200 = block;
   block->owner = (Object)__77877040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77877200;

   return block;
};

Block __77876740;

void code__77876740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_56694420_channel__w0_58311_56680640_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,_58318_62838980_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__77876740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77876740 = block;
   block->owner = (Object)__77876580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77876740;

   return block;
};

Block __77876540;

void code__77876540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58318_62838980_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,trig__r_56694420_channel__w0_58311_56680640_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__77876540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77876540 = block;
   block->owner = (Object)__77876380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77876540;

   return block;
};

Block __77876060;

void code__77876060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_57020940_channel__w0_58311_56680640_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,_58319_62838900_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__77876060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77876060 = block;
   block->owner = (Object)__77875900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77876060;

   return block;
};

Block __77875860;

void code__77875860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58319_62838900_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,abus__r_57020940_channel__w0_58311_56680640_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__77875860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77875860 = block;
   block->owner = (Object)__77875700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77875860;

   return block;
};

Block __77874380;

void code__77874380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_56123700_channel__accum_58326_55486380_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,_58328_62901660_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__77874380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77874380 = block;
   block->owner = (Object)__77874220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77874380;

   return block;
};

Block __77874160;

void code__77874160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58328_62901660_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,reg__0_56123700_channel__accum_58326_55486380_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__77874160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77874160 = block;
   block->owner = (Object)__77874000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77874160;

   return block;
};

Block __51527360;

Block __51526640;

Block __51526060;

void code__51526060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78041500(),_58319_62838900_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__51526060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51526060 = block;
   block->owner = (Object)__51526640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51526060;

   return block;
};

void code__51526640() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_50845720_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78041580();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51526060();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78041440(),_58318_62838980_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__51526640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51526640 = block;
   block->owner = (Object)__51527360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51526640;

   return block;
};

Block __51523960;

Block __51520600;

void code__51520600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78041280(),_58156_51570060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__51520600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51520600 = block;
   block->owner = (Object)__51523960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51520600;

   return block;
};

void code__51523960() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_50845720_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78041360();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51520600();
   }
      }
   }
}

Block make__51523960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51523960 = block;
   block->owner = (Object)__51527360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51523960;

   return block;
};

Block __51489020;

void code__51489020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78041020(),rvok_51147500_mac__n1_58351_57351460_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78040960(),lvok0_51147580_mac__n1_58351_57351460_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78040900(),wok0_51147380_mac__n1_58351_57351460_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__51489020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51489020 = block;
   block->owner = (Object)__51527360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51489020;

   return block;
};

Block __53870040;

Block __53869520;

Block __53869200;

Block __53868520;

Block __53867760;

void code__53867760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58154_51226960_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,rv_51147740_mac__n1_58351_57351460_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__53867760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53867760 = block;
   block->owner = (Object)__53868520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53867760;

   return block;
};

Block __55124780;

void code__55124780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58155_51570480_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,rv_51147740_mac__n1_58351_57351460_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__55124780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55124780 = block;
   block->owner = (Object)__53868520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55124780;

   return block;
};

void code__53868520() {
{
      Value value = _58156_51570060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__78040460())) {
    code__53867760();
         }
         else if (value2integer(value) == value2integer(make__78040340())) {
    code__55124780();
         }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78040180(),rvok_51147500_mac__n1_58351_57351460_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
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
                  src0 = _58156_51570060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
                  src1 = make__78040040();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__78040000();
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
                        src0 = _58156_51570060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__78039760();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__78039700();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58156_51570060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__53868520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53868520 = block;
   block->owner = (Object)__53869200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53868520;

   return block;
};

void code__53869200() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_50845720_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78040600();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53868520();
   }
      }
   }
}

Block make__53869200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53869200 = block;
   block->owner = (Object)__53869520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53869200;

   return block;
};

void code__53869520() {
 code__53869200();
}

Block make__53869520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53869520 = block;
   block->owner = (Object)__53870040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53869520;

   return block;
};

Block __56113820;

Block __56113480;

Block __56112980;

Block __56109640;

Block __56109360;

void code__56109360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58320_62839000_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,lv0_47593660_mac__n1_58351_57351460_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__78039240(),lvok0_51147580_mac__n1_58351_57351460_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__56109360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56109360 = block;
   block->owner = (Object)__56109640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56109360;

   return block;
};

void code__56109640() {
 code__56109360();
}

Block make__56109640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56109640 = block;
   block->owner = (Object)__56112980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56109640;

   return block;
};

Block __56112580;

void code__56112580() {
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
                  src0 = _58319_62838900_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
                  src1 = make__78039120();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__78039080();
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
                        src0 = _58319_62838900_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__78038840();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__78038780();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58319_62838900_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78038660(),_58318_62838980_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__56112580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56112580 = block;
   block->owner = (Object)__56112980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56112580;

   return block;
};

void code__56112980() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58318_62838980_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78039400();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56109640();
   }
   else {
  code__56112580();
   }
      }
   }
}

Block make__56112980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56112980 = block;
   block->owner = (Object)__56113480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56112980;

   return block;
};

void code__56113480() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_50845720_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78039500();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56112980();
   }
      }
   }
}

Block make__56113480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56113480 = block;
   block->owner = (Object)__56113820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56113480;

   return block;
};

void code__56113820() {
 code__56113480();
}

Block make__56113820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56113820 = block;
   block->owner = (Object)__53870040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56113820;

   return block;
};

Block __57053800;

Block __57052700;

Block __57052540;

void code__57052540() {
}

Block make__57052540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57052540 = block;
   block->owner = (Object)__57052700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57052540;

   return block;
};

Block __50895280;

void code__50895280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_50159620_mac__n1_58351_57351460_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,_58328_62901660_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78037760(),wok0_51147380_mac__n1_58351_57351460_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__50895280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50895280 = block;
   block->owner = (Object)__57052700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50895280;

   return block;
};

void code__57052700() {
 code__57052540();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av0_50159620_mac__n1_58351_57351460_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
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
                              src0 = lv0_47593660_mac__n1_58351_57351460_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_51147740_mac__n1_58351_57351460_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__78037940();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_50159620_mac__n1_58351_57351460_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
 code__50895280();
}

Block make__57052700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57052700 = block;
   block->owner = (Object)__57053800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57052700;

   return block;
};

void code__57053800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78038420(),ack_62718980_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78038340(),run_51147260_mac__n1_58351_57351460_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
 code__57052700();
}

Block make__57053800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57053800 = block;
   block->owner = (Object)__53870040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57053800;

   return block;
};

Block __51538140;

void code__51538140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78037660(),wok0_51147380_mac__n1_58351_57351460_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78037600(),lvok0_51147580_mac__n1_58351_57351460_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78037540(),rvok_51147500_mac__n1_58351_57351460_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__51538140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51538140 = block;
   block->owner = (Object)__53870040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51538140;

   return block;
};

void code__53870040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78040740(),run_51147260_mac__n1_58351_57351460_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = rvok_51147500_mac__n1_58351_57351460_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53869520();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_51147580_mac__n1_58351_57351460_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56113820();
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
               src0 = lvok0_51147580_mac__n1_58351_57351460_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
               src1 = rvok_51147500_mac__n1_58351_57351460_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok0_51147380_mac__n1_58351_57351460_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57053800();
   }
      }
   }
   {
      Value cond = wok0_51147380_mac__n1_58351_57351460_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51538140();
   }
      }
   }
}

Block make__53870040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53870040 = block;
   block->owner = (Object)__51527360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53870040;

   return block;
};

Block __51461220;

void code__51461220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78037480(),av0_50159620_mac__n1_58351_57351460_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__51461220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51461220 = block;
   block->owner = (Object)__51527360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51461220;

   return block;
};

void code__51527360() {
 code__51526640();
 code__51523960();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78041200(),ack_62718980_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78041140(),run_51147260_mac__n1_58351_57351460_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = run_51147260_mac__n1_58351_57351460_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51489020();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_62719000_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
         src1 = run_51147260_mac__n1_58351_57351460_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53870040();
   }
   else {
  code__51461220();
   }
      }
   }
}

Block make__51527360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51527360 = block;
   block->owner = (Object)__51558660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51527360;

   return block;
};

Block __54942720;

void code__54942720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_54309340_channel__b0_58356_51558420_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
            idx = value2integer(abus__r_51888620_channel__b0_58356_51558420_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_51888940_channel__b0_58356_51558420_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__54942720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54942720 = block;
   block->owner = (Object)__55529660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54942720;

   return block;
};

Block __77896720;

void code__77896720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_51888940_channel__b0_58356_51558420_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,_58360_62980800_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__77896720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77896720 = block;
   block->owner = (Object)__77896540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77896720;

   return block;
};

Block __77896500;

void code__77896500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58360_62980800_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,dbus__r_51888940_channel__b0_58356_51558420_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__77896500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77896500 = block;
   block->owner = (Object)__77896340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77896500;

   return block;
};

Block __77896040;

void code__77896040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_51554640_channel__b0_58356_51558420_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,_58358_62980760_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__77896040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77896040 = block;
   block->owner = (Object)__77895880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77896040;

   return block;
};

Block __77895820;

void code__77895820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58358_62980760_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,trig__r_51554640_channel__b0_58356_51558420_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__77895820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77895820 = block;
   block->owner = (Object)__77895640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77895820;

   return block;
};

Block __77895280;

void code__77895280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_51888620_channel__b0_58356_51558420_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,_58359_62980680_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__77895280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77895280 = block;
   block->owner = (Object)__77895120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77895280;

   return block;
};

Block __77895080;

void code__77895080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58359_62980680_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,abus__r_51888620_channel__b0_58356_51558420_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__77895080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77895080 = block;
   block->owner = (Object)__77894920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77895080;

   return block;
};

Block __77893640;

void code__77893640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_55894580_channel__z_58371_55529380_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,_58373_63141700_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__77893640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77893640 = block;
   block->owner = (Object)__77893420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77893640;

   return block;
};

Block __77893380;

void code__77893380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58373_63141700_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,reg__0_55894580_channel__z_58371_55529380_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__77893380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77893380 = block;
   block->owner = (Object)__77893220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77893380;

   return block;
};

Block __57102080;

Block __57101700;

void code__57101700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78060780(),_58358_62980760_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__57101700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57101700 = block;
   block->owner = (Object)__57102080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57101700;

   return block;
};

Block __57099440;

Block __57098640;

void code__57098640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58328_62901660_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,lv0_56722460_add__n_58394_56562280_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78060060(),lvok0_57102600_add__n_58394_56562280_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__57098640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57098640 = block;
   block->owner = (Object)__57099440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57098640;

   return block;
};

Block __59159240;

Block __59158920;

Block __59158060;

void code__59158060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58360_62980800_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value,rv0_57102620_add__n_58394_56562280_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78059720(),_58358_62980760_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78059660(),rvok0_57102540_add__n_58394_56562280_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__59158060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59158060 = block;
   block->owner = (Object)__59158920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59158060;

   return block;
};

Block __59158760;

void code__59158760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78059600(),_58359_62980680_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78059540(),_58358_62980760_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__59158760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59158760 = block;
   block->owner = (Object)__59158920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59158760;

   return block;
};

void code__59158920() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58358_62980760_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78059880();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59158060();
   }
   else {
  code__59158760();
   }
      }
   }
}

Block make__59158920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59158920 = block;
   block->owner = (Object)__59159240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59158920;

   return block;
};

void code__59159240() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58361_62980780_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78059980();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59158920();
   }
      }
   }
}

Block make__59159240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59159240 = block;
   block->owner = (Object)__57099440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59159240;

   return block;
};

Block __62248180;

Block __62247700;

void code__62247700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_56722460_add__n_58394_56562280_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
      src1 = rv0_57102620_add__n_58394_56562280_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58373_63141700_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__62247700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62247700 = block;
   block->owner = (Object)__62248180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62247700;

   return block;
};

void code__62248180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78059380(),run_57102480_add__n_58394_56562280_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78059320(),ack__add_62718940_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
 code__62247700();
}

Block make__62248180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62248180 = block;
   block->owner = (Object)__57099440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62248180;

   return block;
};

void code__57099440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78060200(),run_57102480_add__n_58394_56562280_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
 code__57098640();
 code__59159240();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_57102600_add__n_58394_56562280_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
         src1 = rvok0_57102540_add__n_58394_56562280_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__62248180();
   }
      }
   }
}

Block make__57099440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57099440 = block;
   block->owner = (Object)__57102080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57099440;

   return block;
};

Block __57100520;

void code__57100520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78059060(),lvok0_57102600_add__n_58394_56562280_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78059000(),rvok0_57102540_add__n_58394_56562280_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
}

Block make__57100520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57100520 = block;
   block->owner = (Object)__57102080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57100520;

   return block;
};

void code__57102080() {
 code__57101700();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78060700(),ack__add_62718940_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78060640(),run_57102480_add__n_58394_56562280_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_62718960_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
         src1 = run_57102480_add__n_58394_56562280_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57099440();
   }
   else {
  code__57100520();
   }
      }
   }
}

Block make__57102080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57102080 = block;
   block->owner = (Object)__62719140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57102080;

   return block;
};

Value make__78042940() {
   static unsigned long long data[] = { 4294967244ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78042920() {
   static unsigned long long data[] = { 48ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78037460() {
   static unsigned long long data[] = { 4294967285ULL };
   return make_set_value(get_type_vector(get_type_vector(get_type_signed(),8),1),1,data);
}

Value make__78041580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78041500() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78041440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78041360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78041280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78041200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78041140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78041020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78040960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78040900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78040740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78040600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78040460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78040340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78040180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78040040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78040000() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78039760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78039700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78039500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78039400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78039240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78039120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78039080() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78038840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78038780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78038660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78038420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78038340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78037940() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78037760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78037660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78037600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78037540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78037480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78060780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78060700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78060640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78060200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78060060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78059980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78059880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78059720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78059660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78059600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78059540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78059380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78059320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78059060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78059000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78057880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78057820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78057760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78057580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78057520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78057420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78057180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope layer1_58_84_56681060;

SignalI req__mac_62719000_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makereq__mac_62719000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_62719000_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer1_58_84_56681060;
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

SignalI ack_62718980_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makeack_62718980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_62718980_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer1_58_84_56681060;
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

SignalI ack__mac_62718960_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makeack__mac_62718960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_62718960_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer1_58_84_56681060;
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

SignalI ack__add_62718940_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makeack__add_62718940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_62718940_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer1_58_84_56681060;
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

SignalI _58320_62839000_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI make_58320_62839000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58320_62839000_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer1_58_84_56681060;
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

SignalI _58318_62838980_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI make_58318_62838980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58318_62838980_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer1_58_84_56681060;
   signalI->name = ":318";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58319_62838900_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI make_58319_62838900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58319_62838900_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer1_58_84_56681060;
   signalI->name = ":319";
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

SignalI _58328_62901660_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI make_58328_62901660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58328_62901660_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer1_58_84_56681060;
   signalI->name = ":328";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58360_62980800_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI make_58360_62980800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58360_62980800_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer1_58_84_56681060;
   signalI->name = ":360";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58361_62980780_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI make_58361_62980780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58361_62980780_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer1_58_84_56681060;
   signalI->name = ":361";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58358_62980760_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI make_58358_62980760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58358_62980760_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer1_58_84_56681060;
   signalI->name = ":358";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58359_62980680_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI make_58359_62980680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58359_62980680_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer1_58_84_56681060;
   signalI->name = ":359";
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

SignalI _58373_63141700_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI make_58373_63141700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58373_63141700_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer1_58_84_56681060;
   signalI->name = ":373";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI value__z0_63188080_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makevalue__z0_63188080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_63188080_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer1_58_84_56681060;
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

SignalI value__a0_63422860_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makevalue__a0_63422860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_63422860_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer1_58_84_56681060;
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

SignalI flag__z0_63422840_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makeflag__z0_63422840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_63422840_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer1_58_84_56681060;
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

SignalI ack__a0_63422820_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makeack__a0_63422820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_63422820_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)layer1_58_84_56681060;
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

SystemI counter_63457840;

SystemI makecounter_63457840() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_63457840 = systemI;
   systemI->owner = (Object)layer1_58_84_56681060;
   systemI->name = "counter";
   systemI->system = counter_58_8400_63459900;

   return systemI;
};

SystemI func0_66361200;

SystemI makefunc0_66361200() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_66361200 = systemI;
   systemI->owner = (Object)layer1_58_84_56681060;
   systemI->name = "func0";
   systemI->system = func0_58_8400_66086220;

   return systemI;
};

Scope channel__w0_58311_56680640;

SignalI trig__r_56694420_channel__w0_58311_56680640_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI maketrig__r_56694420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_56694420_channel__w0_58311_56680640_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)channel__w0_58311_56680640;
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

SignalI dbus__r_57021060_channel__w0_58311_56680640_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makedbus__r_57021060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_57021060_channel__w0_58311_56680640_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)channel__w0_58311_56680640;
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

SignalI abus__r_57020940_channel__w0_58311_56680640_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makeabus__r_57020940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_57020940_channel__w0_58311_56680640_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)channel__w0_58311_56680640;
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

SignalI mem_51226480_channel__w0_58311_56680640_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makemem_51226480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_51226480_channel__w0_58311_56680640_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)channel__w0_58311_56680640;
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
         src0 = make__78042940();
         src1 = make__78042920();
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

Scope raddr_58312_56696160;

Scope makeraddr_58312_56696160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58312_56696160 = scope;
   scope->owner = (Object)channel__w0_58311_56680640;
   scope->name = "raddr:312";
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

Scope rinc_58317_56695580;

Scope makerinc_58317_56695580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58317_56695580 = scope;
   scope->owner = (Object)channel__w0_58311_56680640;
   scope->name = "rinc:317";
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

Scope rdec_58321_56694900;

Scope makerdec_58321_56694900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58321_56694900 = scope;
   scope->owner = (Object)channel__w0_58311_56680640;
   scope->name = "rdec:321";
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

Behavior __55486660;

Behavior make__55486660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55486660 = behavior;
   behavior->owner = (Object)channel__w0_58311_56680640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_50845900_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   clk_50845900_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_neg += 1;
   clk_50845900_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->neg = realloc(clk_50845900_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->neg,clk_50845900_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_neg*sizeof(Object));
clk_50845900_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->neg[clk_50845900_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_neg-1] = (Object)behavior;
   behavior->block = make__54010660();

   return behavior;
}

Behavior __77877280;

Behavior make__77877280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77877280 = behavior;
   behavior->owner = (Object)channel__w0_58311_56680640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_57021060_channel__w0_58311_56680640_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   dbus__r_57021060_channel__w0_58311_56680640_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   dbus__r_57021060_channel__w0_58311_56680640_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(dbus__r_57021060_channel__w0_58311_56680640_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,dbus__r_57021060_channel__w0_58311_56680640_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
dbus__r_57021060_channel__w0_58311_56680640_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[dbus__r_57021060_channel__w0_58311_56680640_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__77877480();

   return behavior;
}

Behavior __77877040;

Behavior make__77877040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77877040 = behavior;
   behavior->owner = (Object)channel__w0_58311_56680640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58320_62839000_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   _58320_62839000_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   _58320_62839000_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(_58320_62839000_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,_58320_62839000_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
_58320_62839000_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[_58320_62839000_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__77877200();

   return behavior;
}

Behavior __77876580;

Behavior make__77876580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77876580 = behavior;
   behavior->owner = (Object)channel__w0_58311_56680640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_56694420_channel__w0_58311_56680640_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   trig__r_56694420_channel__w0_58311_56680640_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   trig__r_56694420_channel__w0_58311_56680640_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(trig__r_56694420_channel__w0_58311_56680640_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,trig__r_56694420_channel__w0_58311_56680640_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
trig__r_56694420_channel__w0_58311_56680640_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[trig__r_56694420_channel__w0_58311_56680640_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__77876740();

   return behavior;
}

Behavior __77876380;

Behavior make__77876380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77876380 = behavior;
   behavior->owner = (Object)channel__w0_58311_56680640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58318_62838980_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   _58318_62838980_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   _58318_62838980_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(_58318_62838980_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,_58318_62838980_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
_58318_62838980_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[_58318_62838980_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__77876540();

   return behavior;
}

Behavior __77875900;

Behavior make__77875900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77875900 = behavior;
   behavior->owner = (Object)channel__w0_58311_56680640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_57020940_channel__w0_58311_56680640_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   abus__r_57020940_channel__w0_58311_56680640_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   abus__r_57020940_channel__w0_58311_56680640_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(abus__r_57020940_channel__w0_58311_56680640_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,abus__r_57020940_channel__w0_58311_56680640_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
abus__r_57020940_channel__w0_58311_56680640_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[abus__r_57020940_channel__w0_58311_56680640_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__77876060();

   return behavior;
}

Behavior __77875700;

Behavior make__77875700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77875700 = behavior;
   behavior->owner = (Object)channel__w0_58311_56680640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58319_62838900_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   _58319_62838900_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   _58319_62838900_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(_58319_62838900_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,_58319_62838900_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
_58319_62838900_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[_58319_62838900_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__77875860();

   return behavior;
}

Scope makechannel__w0_58311_56680640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58311_56680640 = scope;
   scope->owner = (Object)layer1_58_84_56681060;
   scope->name = "channel_w0:311";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_56694420();
   scope->inners[1] = makedbus__r_57021060();
   scope->inners[2] = makeabus__r_57020940();
   scope->inners[3] = makemem_51226480();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58312_56696160();
   scope->scopes[1] = makerinc_58317_56695580();
   scope->scopes[2] = makerdec_58321_56694900();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__55486660();
   scope->behaviors[1] = make__77877280();
   scope->behaviors[2] = make__77877040();
   scope->behaviors[3] = make__77876580();
   scope->behaviors[4] = make__77876380();
   scope->behaviors[5] = make__77875900();
   scope->behaviors[6] = make__77875700();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58326_55486380;

SignalI reg__0_56123700_channel__accum_58326_55486380_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makereg__0_56123700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_56123700_channel__accum_58326_55486380_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)channel__accum_58326_55486380;
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

Scope anum_58327_55485960;

Scope makeanum_58327_55485960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58327_55485960 = scope;
   scope->owner = (Object)channel__accum_58326_55486380;
   scope->name = "anum:327";
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

Scope raddr_58329_55485180;

Scope makeraddr_58329_55485180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58329_55485180 = scope;
   scope->owner = (Object)channel__accum_58326_55486380;
   scope->name = "raddr:329";
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

Scope waddr_58332_55484480;

Scope makewaddr_58332_55484480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58332_55484480 = scope;
   scope->owner = (Object)channel__accum_58326_55486380;
   scope->name = "waddr:332";
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

Scope rinc_58335_55532940;

SignalI abus__r_55532280_rinc_58335_55532940_channel__accum_58326_55486380_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makeabus__r_55532280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_55532280_rinc_58335_55532940_channel__accum_58326_55486380_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)rinc_58335_55532940;
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

Scope makerinc_58335_55532940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58335_55532940 = scope;
   scope->owner = (Object)channel__accum_58326_55486380;
   scope->name = "rinc:335";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_55532280();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58339_55531940;

SignalI abus__w_55531040_winc_58339_55531940_channel__accum_58326_55486380_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makeabus__w_55531040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_55531040_winc_58339_55531940_channel__accum_58326_55486380_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)winc_58339_55531940;
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

Scope makewinc_58339_55531940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58339_55531940 = scope;
   scope->owner = (Object)channel__accum_58326_55486380;
   scope->name = "winc:339";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_55531040();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58343_55530920;

SignalI abus__r_55530440_rdec_58343_55530920_channel__accum_58326_55486380_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makeabus__r_55530440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_55530440_rdec_58343_55530920_channel__accum_58326_55486380_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)rdec_58343_55530920;
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

Scope makerdec_58343_55530920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58343_55530920 = scope;
   scope->owner = (Object)channel__accum_58326_55486380;
   scope->name = "rdec:343";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_55530440();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58347_55530220;

SignalI abus__w_55529520_wdec_58347_55530220_channel__accum_58326_55486380_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makeabus__w_55529520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_55529520_wdec_58347_55530220_channel__accum_58326_55486380_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)wdec_58347_55530220;
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

Scope makewdec_58347_55530220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58347_55530220 = scope;
   scope->owner = (Object)channel__accum_58326_55486380;
   scope->name = "wdec:347";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_55529520();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __77874220;

Behavior make__77874220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77874220 = behavior;
   behavior->owner = (Object)channel__accum_58326_55486380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_56123700_channel__accum_58326_55486380_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   reg__0_56123700_channel__accum_58326_55486380_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   reg__0_56123700_channel__accum_58326_55486380_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(reg__0_56123700_channel__accum_58326_55486380_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,reg__0_56123700_channel__accum_58326_55486380_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
reg__0_56123700_channel__accum_58326_55486380_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[reg__0_56123700_channel__accum_58326_55486380_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__77874380();

   return behavior;
}

Behavior __77874000;

Behavior make__77874000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77874000 = behavior;
   behavior->owner = (Object)channel__accum_58326_55486380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58328_62901660_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   _58328_62901660_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   _58328_62901660_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(_58328_62901660_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,_58328_62901660_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
_58328_62901660_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[_58328_62901660_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__77874160();

   return behavior;
}

Scope makechannel__accum_58326_55486380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58326_55486380 = scope;
   scope->owner = (Object)layer1_58_84_56681060;
   scope->name = "channel_accum:326";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_56123700();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58327_55485960();
   scope->scopes[1] = makeraddr_58329_55485180();
   scope->scopes[2] = makewaddr_58332_55484480();
   scope->scopes[3] = makerinc_58335_55532940();
   scope->scopes[4] = makewinc_58339_55531940();
   scope->scopes[5] = makerdec_58343_55530920();
   scope->scopes[6] = makewdec_58347_55530220();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__77874220();
   scope->behaviors[1] = make__77874000();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58351_57351460;

SignalI lv0_47593660_mac__n1_58351_57351460_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makelv0_47593660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_47593660_mac__n1_58351_57351460_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)mac__n1_58351_57351460;
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

SignalI av0_50159620_mac__n1_58351_57351460_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makeav0_50159620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_50159620_mac__n1_58351_57351460_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)mac__n1_58351_57351460;
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

SignalI rv_51147740_mac__n1_58351_57351460_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makerv_51147740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_51147740_mac__n1_58351_57351460_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)mac__n1_58351_57351460;
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

SignalI lvok0_51147580_mac__n1_58351_57351460_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makelvok0_51147580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_51147580_mac__n1_58351_57351460_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)mac__n1_58351_57351460;
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

SignalI rvok_51147500_mac__n1_58351_57351460_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makervok_51147500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_51147500_mac__n1_58351_57351460_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)mac__n1_58351_57351460;
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

SignalI wok0_51147380_mac__n1_58351_57351460_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makewok0_51147380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok0_51147380_mac__n1_58351_57351460_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)mac__n1_58351_57351460;
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

SignalI run_51147260_mac__n1_58351_57351460_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makerun_51147260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_51147260_mac__n1_58351_57351460_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)mac__n1_58351_57351460;
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

Behavior __51558660;

Behavior make__51558660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51558660 = behavior;
   behavior->owner = (Object)mac__n1_58351_57351460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_50845900_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   clk_50845900_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_pos += 1;
   clk_50845900_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->pos = realloc(clk_50845900_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->pos,clk_50845900_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_pos*sizeof(Object));
clk_50845900_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->pos[clk_50845900_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_pos-1] = (Object)behavior;
   behavior->block = make__51527360();

   return behavior;
}

Scope makemac__n1_58351_57351460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58351_57351460 = scope;
   scope->owner = (Object)layer1_58_84_56681060;
   scope->name = "mac_n1:351";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_47593660();
   scope->inners[1] = makeav0_50159620();
   scope->inners[2] = makerv_51147740();
   scope->inners[3] = makelvok0_51147580();
   scope->inners[4] = makervok_51147500();
   scope->inners[5] = makewok0_51147380();
   scope->inners[6] = makerun_51147260();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51558660();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__b0_58356_51558420;

SignalI trig__r_51554640_channel__b0_58356_51558420_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI maketrig__r_51554640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_51554640_channel__b0_58356_51558420_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)channel__b0_58356_51558420;
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

SignalI dbus__r_51888940_channel__b0_58356_51558420_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makedbus__r_51888940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_51888940_channel__b0_58356_51558420_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)channel__b0_58356_51558420;
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

SignalI abus__r_51888620_channel__b0_58356_51558420_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makeabus__r_51888620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_51888620_channel__b0_58356_51558420_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)channel__b0_58356_51558420;
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

SignalI mem_54309340_channel__b0_58356_51558420_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makemem_54309340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_54309340_channel__b0_58356_51558420_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)channel__b0_58356_51558420;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(make__78037460(),signalI->c_value);
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope raddr_58357_51557900;

Scope makeraddr_58357_51557900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58357_51557900 = scope;
   scope->owner = (Object)channel__b0_58356_51558420;
   scope->name = "raddr:357";
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

Scope rinc_58362_51556540;

Scope makerinc_58362_51556540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58362_51556540 = scope;
   scope->owner = (Object)channel__b0_58356_51558420;
   scope->name = "rinc:362";
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

Scope rdec_58366_51555760;

Scope makerdec_58366_51555760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58366_51555760 = scope;
   scope->owner = (Object)channel__b0_58356_51558420;
   scope->name = "rdec:366";
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

Behavior __55529660;

Behavior make__55529660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55529660 = behavior;
   behavior->owner = (Object)channel__b0_58356_51558420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_50845900_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   clk_50845900_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_neg += 1;
   clk_50845900_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->neg = realloc(clk_50845900_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->neg,clk_50845900_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_neg*sizeof(Object));
clk_50845900_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->neg[clk_50845900_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_neg-1] = (Object)behavior;
   behavior->block = make__54942720();

   return behavior;
}

Behavior __77896540;

Behavior make__77896540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77896540 = behavior;
   behavior->owner = (Object)channel__b0_58356_51558420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_51888940_channel__b0_58356_51558420_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   dbus__r_51888940_channel__b0_58356_51558420_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   dbus__r_51888940_channel__b0_58356_51558420_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(dbus__r_51888940_channel__b0_58356_51558420_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,dbus__r_51888940_channel__b0_58356_51558420_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
dbus__r_51888940_channel__b0_58356_51558420_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[dbus__r_51888940_channel__b0_58356_51558420_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__77896720();

   return behavior;
}

Behavior __77896340;

Behavior make__77896340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77896340 = behavior;
   behavior->owner = (Object)channel__b0_58356_51558420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58360_62980800_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   _58360_62980800_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   _58360_62980800_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(_58360_62980800_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,_58360_62980800_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
_58360_62980800_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[_58360_62980800_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__77896500();

   return behavior;
}

Behavior __77895880;

Behavior make__77895880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77895880 = behavior;
   behavior->owner = (Object)channel__b0_58356_51558420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_51554640_channel__b0_58356_51558420_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   trig__r_51554640_channel__b0_58356_51558420_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   trig__r_51554640_channel__b0_58356_51558420_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(trig__r_51554640_channel__b0_58356_51558420_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,trig__r_51554640_channel__b0_58356_51558420_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
trig__r_51554640_channel__b0_58356_51558420_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[trig__r_51554640_channel__b0_58356_51558420_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__77896040();

   return behavior;
}

Behavior __77895640;

Behavior make__77895640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77895640 = behavior;
   behavior->owner = (Object)channel__b0_58356_51558420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58358_62980760_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   _58358_62980760_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   _58358_62980760_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(_58358_62980760_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,_58358_62980760_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
_58358_62980760_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[_58358_62980760_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__77895820();

   return behavior;
}

Behavior __77895120;

Behavior make__77895120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77895120 = behavior;
   behavior->owner = (Object)channel__b0_58356_51558420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_51888620_channel__b0_58356_51558420_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   abus__r_51888620_channel__b0_58356_51558420_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   abus__r_51888620_channel__b0_58356_51558420_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(abus__r_51888620_channel__b0_58356_51558420_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,abus__r_51888620_channel__b0_58356_51558420_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
abus__r_51888620_channel__b0_58356_51558420_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[abus__r_51888620_channel__b0_58356_51558420_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__77895280();

   return behavior;
}

Behavior __77894920;

Behavior make__77894920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77894920 = behavior;
   behavior->owner = (Object)channel__b0_58356_51558420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58359_62980680_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   _58359_62980680_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   _58359_62980680_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(_58359_62980680_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,_58359_62980680_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
_58359_62980680_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[_58359_62980680_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__77895080();

   return behavior;
}

Scope makechannel__b0_58356_51558420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__b0_58356_51558420 = scope;
   scope->owner = (Object)layer1_58_84_56681060;
   scope->name = "channel_b0:356";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_51554640();
   scope->inners[1] = makedbus__r_51888940();
   scope->inners[2] = makeabus__r_51888620();
   scope->inners[3] = makemem_54309340();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58357_51557900();
   scope->scopes[1] = makerinc_58362_51556540();
   scope->scopes[2] = makerdec_58366_51555760();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__55529660();
   scope->behaviors[1] = make__77896540();
   scope->behaviors[2] = make__77896340();
   scope->behaviors[3] = make__77895880();
   scope->behaviors[4] = make__77895640();
   scope->behaviors[5] = make__77895120();
   scope->behaviors[6] = make__77894920();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58371_55529380;

SignalI reg__0_55894580_channel__z_58371_55529380_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makereg__0_55894580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_55894580_channel__z_58371_55529380_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)channel__z_58371_55529380;
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

Scope anum_58372_55528400;

Scope makeanum_58372_55528400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58372_55528400 = scope;
   scope->owner = (Object)channel__z_58371_55529380;
   scope->name = "anum:372";
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

Scope raddr_58374_55527700;

Scope makeraddr_58374_55527700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58374_55527700 = scope;
   scope->owner = (Object)channel__z_58371_55529380;
   scope->name = "raddr:374";
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

Scope waddr_58377_55526820;

Scope makewaddr_58377_55526820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58377_55526820 = scope;
   scope->owner = (Object)channel__z_58371_55529380;
   scope->name = "waddr:377";
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

Scope rinc_58380_55526000;

SignalI abus__r_55549480_rinc_58380_55526000_channel__z_58371_55529380_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makeabus__r_55549480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_55549480_rinc_58380_55526000_channel__z_58371_55529380_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)rinc_58380_55526000;
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

Scope makerinc_58380_55526000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58380_55526000 = scope;
   scope->owner = (Object)channel__z_58371_55529380;
   scope->name = "rinc:380";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_55549480();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58383_55549060;

SignalI abus__w_55548500_winc_58383_55549060_channel__z_58371_55529380_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makeabus__w_55548500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_55548500_winc_58383_55549060_channel__z_58371_55529380_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)winc_58383_55549060;
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

Scope makewinc_58383_55549060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58383_55549060 = scope;
   scope->owner = (Object)channel__z_58371_55529380;
   scope->name = "winc:383";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_55548500();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58386_55548220;

SignalI abus__r_55547640_rdec_58386_55548220_channel__z_58371_55529380_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makeabus__r_55547640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_55547640_rdec_58386_55548220_channel__z_58371_55529380_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)rdec_58386_55548220;
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

Scope makerdec_58386_55548220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58386_55548220 = scope;
   scope->owner = (Object)channel__z_58371_55529380;
   scope->name = "rdec:386";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_55547640();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58390_55547400;

SignalI abus__w_55546420_wdec_58390_55547400_channel__z_58371_55529380_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makeabus__w_55546420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_55546420_wdec_58390_55547400_channel__z_58371_55529380_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)wdec_58390_55547400;
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

Scope makewdec_58390_55547400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58390_55547400 = scope;
   scope->owner = (Object)channel__z_58371_55529380;
   scope->name = "wdec:390";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_55546420();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __77893420;

Behavior make__77893420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77893420 = behavior;
   behavior->owner = (Object)channel__z_58371_55529380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_55894580_channel__z_58371_55529380_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   reg__0_55894580_channel__z_58371_55529380_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   reg__0_55894580_channel__z_58371_55529380_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(reg__0_55894580_channel__z_58371_55529380_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,reg__0_55894580_channel__z_58371_55529380_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
reg__0_55894580_channel__z_58371_55529380_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[reg__0_55894580_channel__z_58371_55529380_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__77893640();

   return behavior;
}

Behavior __77893220;

Behavior make__77893220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77893220 = behavior;
   behavior->owner = (Object)channel__z_58371_55529380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58373_63141700_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   _58373_63141700_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   _58373_63141700_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(_58373_63141700_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,_58373_63141700_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
_58373_63141700_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[_58373_63141700_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__77893380();

   return behavior;
}

Scope makechannel__z_58371_55529380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58371_55529380 = scope;
   scope->owner = (Object)layer1_58_84_56681060;
   scope->name = "channel_z:371";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_55894580();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58372_55528400();
   scope->scopes[1] = makeraddr_58374_55527700();
   scope->scopes[2] = makewaddr_58377_55526820();
   scope->scopes[3] = makerinc_58380_55526000();
   scope->scopes[4] = makewinc_58383_55549060();
   scope->scopes[5] = makerdec_58386_55548220();
   scope->scopes[6] = makewdec_58390_55547400();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__77893420();
   scope->behaviors[1] = make__77893220();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58394_56562280;

SignalI lv0_56722460_add__n_58394_56562280_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makelv0_56722460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_56722460_add__n_58394_56562280_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)add__n_58394_56562280;
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

SignalI rv0_57102620_add__n_58394_56562280_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makerv0_57102620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_57102620_add__n_58394_56562280_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)add__n_58394_56562280;
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

SignalI lvok0_57102600_add__n_58394_56562280_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makelvok0_57102600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_57102600_add__n_58394_56562280_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)add__n_58394_56562280;
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

SignalI rvok0_57102540_add__n_58394_56562280_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makervok0_57102540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_57102540_add__n_58394_56562280_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)add__n_58394_56562280;
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

SignalI run_57102480_add__n_58394_56562280_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060;

SignalI makerun_57102480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_57102480_add__n_58394_56562280_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060 = signalI;
   signalI->owner = (Object)add__n_58394_56562280;
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

Behavior __62719140;

Behavior make__62719140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62719140 = behavior;
   behavior->owner = (Object)add__n_58394_56562280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_50845900_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   clk_50845900_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_pos += 1;
   clk_50845900_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->pos = realloc(clk_50845900_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->pos,clk_50845900_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_pos*sizeof(Object));
clk_50845900_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->pos[clk_50845900_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_pos-1] = (Object)behavior;
   behavior->block = make__57102080();

   return behavior;
}

Scope makeadd__n_58394_56562280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58394_56562280 = scope;
   scope->owner = (Object)layer1_58_84_56681060;
   scope->name = "add_n:394";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_56722460();
   scope->inners[1] = makerv0_57102620();
   scope->inners[2] = makelvok0_57102600();
   scope->inners[3] = makervok0_57102540();
   scope->inners[4] = makerun_57102480();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__62719140();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __66863720;

Behavior make__66863720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __66863720 = behavior;
   behavior->owner = (Object)layer1_58_84_56681060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_50845900_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   clk_50845900_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_pos += 1;
   clk_50845900_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->pos = realloc(clk_50845900_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->pos,clk_50845900_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_pos*sizeof(Object));
clk_50845900_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->pos[clk_50845900_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_pos-1] = (Object)behavior;
   behavior->block = make__66864900();

   return behavior;
}

Behavior __48249880;

Behavior make__48249880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48249880 = behavior;
   behavior->owner = (Object)layer1_58_84_56681060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_50845900_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   clk_50845900_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_pos += 1;
   clk_50845900_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->pos = realloc(clk_50845900_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->pos,clk_50845900_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_pos*sizeof(Object));
clk_50845900_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->pos[clk_50845900_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_pos-1] = (Object)behavior;
   behavior->block = make__66863600();

   return behavior;
}

Behavior __50829000;

Behavior make__50829000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50829000 = behavior;
   behavior->owner = (Object)layer1_58_84_56681060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_50845900_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   clk_50845900_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_pos += 1;
   clk_50845900_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->pos = realloc(clk_50845900_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->pos,clk_50845900_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_pos*sizeof(Object));
clk_50845900_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->pos[clk_50845900_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_pos-1] = (Object)behavior;
   behavior->block = make__48249060();

   return behavior;
}

Behavior __77859740;

Behavior make__77859740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77859740 = behavior;
   behavior->owner = (Object)layer1_58_84_56681060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_50845680_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   req_50845680_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   req_50845680_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(req_50845680_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,req_50845680_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
req_50845680_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[req_50845680_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_62718960_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   ack__mac_62718960_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   ack__mac_62718960_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(ack__mac_62718960_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,ack__mac_62718960_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
ack__mac_62718960_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[ack__mac_62718960_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__77859980();

   return behavior;
}

Behavior __77878400;

Behavior make__77878400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77878400 = behavior;
   behavior->owner = (Object)layer1_58_84_56681060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_50845900_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   clk_50845900_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   clk_50845900_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(clk_50845900_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,clk_50845900_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
clk_50845900_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[clk_50845900_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_62718980_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   ack_62718980_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   ack_62718980_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(ack_62718980_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,ack_62718980_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
ack_62718980_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[ack_62718980_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_50845720_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   rst_50845720_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   rst_50845720_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(rst_50845720_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,rst_50845720_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
rst_50845720_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[rst_50845720_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_63188080_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   value__z0_63188080_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   value__z0_63188080_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(value__z0_63188080_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,value__z0_63188080_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
value__z0_63188080_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[value__z0_63188080_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__a0_63422820_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   ack__a0_63422820_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   ack__a0_63422820_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(ack__a0_63422820_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,ack__a0_63422820_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
ack__a0_63422820_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[ack__a0_63422820_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__77860220();

   return behavior;
}

Behavior __77878220;

Behavior make__77878220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77878220 = behavior;
   behavior->owner = (Object)layer1_58_84_56681060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_63457980_counter_58_8400_63459900_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   ack__mac_63457980_counter_58_8400_63459900_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   ack__mac_63457980_counter_58_8400_63459900_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(ack__mac_63457980_counter_58_8400_63459900_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,ack__mac_63457980_counter_58_8400_63459900_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
ack__mac_63457980_counter_58_8400_63459900_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[ack__mac_63457980_counter_58_8400_63459900_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_50845720_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   rst_50845720_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   rst_50845720_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(rst_50845720_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,rst_50845720_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
rst_50845720_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[rst_50845720_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,a_66361340_func0_58_8400_66086220_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060);
   a_66361340_func0_58_8400_66086220_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any += 1;
   a_66361340_func0_58_8400_66086220_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any = realloc(a_66361340_func0_58_8400_66086220_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any,a_66361340_func0_58_8400_66086220_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any*sizeof(Object));
a_66361340_func0_58_8400_66086220_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->any[a_66361340_func0_58_8400_66086220_layer1_58_84_56681060_layer1_58_841_50828300_sigmoid__neural__network_58_84_50246720_sigmoid__neural__network_58_840_56637980______58_84_51209660______58_840_76188060->num_any-1] = (Object)behavior;
   behavior->block = make__77860160();

   return behavior;
}

Scope makelayer1_58_84_56681060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer1_58_84_56681060 = scope;
   scope->owner = (Object)layer1_58_841_50828300;
   scope->name = "layer1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_63457840();
   scope->systemIs[1] = makefunc0_66361200();
   scope->num_inners = 17;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_62719000();
   scope->inners[1] = makeack_62718980();
   scope->inners[2] = makeack__mac_62718960();
   scope->inners[3] = makeack__add_62718940();
   scope->inners[4] = make_58320_62839000();
   scope->inners[5] = make_58318_62838980();
   scope->inners[6] = make_58319_62838900();
   scope->inners[7] = make_58328_62901660();
   scope->inners[8] = make_58360_62980800();
   scope->inners[9] = make_58361_62980780();
   scope->inners[10] = make_58358_62980760();
   scope->inners[11] = make_58359_62980680();
   scope->inners[12] = make_58373_63141700();
   scope->inners[13] = makevalue__z0_63188080();
   scope->inners[14] = makevalue__a0_63422860();
   scope->inners[15] = makeflag__z0_63422840();
   scope->inners[16] = makeack__a0_63422820();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58311_56680640();
   scope->scopes[1] = makechannel__accum_58326_55486380();
   scope->scopes[2] = makemac__n1_58351_57351460();
   scope->scopes[3] = makechannel__b0_58356_51558420();
   scope->scopes[4] = makechannel__z_58371_55529380();
   scope->scopes[5] = makeadd__n_58394_56562280();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__66863720();
   scope->behaviors[1] = make__48249880();
   scope->behaviors[2] = make__50829000();
   scope->behaviors[3] = make__77859740();
   scope->behaviors[4] = make__77878400();
   scope->behaviors[5] = make__77878220();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer1_58_841_50828300() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer1_58_841_50828300 = systemT;
systemT->owner = NULL;
   systemT->name = "layer1:T1";
   systemT->num_inputs = 5;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_50845900();
   systemT->inputs[1] = makerst_50845720();
   systemT->inputs[2] = makereq_50845680();
   systemT->inputs[3] = make_58154_51226960();
   systemT->inputs[4] = make_58155_51570480();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_51570400();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_58156_51570060();
   systemT->inouts[1] = make_58120_53631060();

   systemT->scope = makelayer1_58_84_56681060();

   return systemT;
}