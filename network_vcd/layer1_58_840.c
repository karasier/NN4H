#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer1_58_840_58633240;

SignalI clk_58727020_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makeclk_58727020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_58727020_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)layer1_58_840_58633240;
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

SignalI rst_58727000_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makerst_58727000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_58727000_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)layer1_58_840_58633240;
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

SignalI fill_58726620_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makefill_58726620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_58726620_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)layer1_58_840_58633240;
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

SignalI req_58726560_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makereq_58726560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_58726560_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)layer1_58_840_58633240;
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

SignalI _5866_58963520_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI make_5866_58963520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5866_58963520_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)layer1_58_840_58633240;
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

SignalI _5867_59166380_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI make_5867_59166380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5867_59166380_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)layer1_58_840_58633240;
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

SignalI ack__layer_59166280_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makeack__layer_59166280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_59166280_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)layer1_58_840_58633240;
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

SignalI _5868_59166120_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI make_5868_59166120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5868_59166120_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)layer1_58_840_58633240;
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

SignalI _5832_47566320_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI make_5832_47566320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5832_47566320_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)layer1_58_840_58633240;
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

Block __56612440;

Block __56612160;

void code__56612160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56937060(),ack_59045840_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56937000(),ack__mac_59045820_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56936920(),ack__add_59045800_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__56612160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56612160 = block;
   block->owner = (Object)__56612440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56612160;

   return block;
};

void code__56612440() {
   {
      Value cond = rst_58727000_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56612160();
   }
      }
   }
}

Block make__56612440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56612440 = block;
   block->owner = (Object)__56610840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56612440;

   return block;
};

Block __56610640;

Block __56609640;

Block __56609200;

void code__56609200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58336_48988920_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,value__z0_49596100_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56936620(),flag__z0_50310260_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__56609200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56609200 = block;
   block->owner = (Object)__56609640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56609200;

   return block;
};

void code__56609640() {
 code__56609200();
}

Block make__56609640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56609640 = block;
   block->owner = (Object)__56610640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56609640;

   return block;
};

Block __56610360;

void code__56610360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56936560(),flag__z0_50310260_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__56610360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56610360 = block;
   block->owner = (Object)__56610640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56610360;

   return block;
};

void code__56610640() {
   {
      Value cond = ack__add_59045800_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56609640();
   }
   else {
  code__56610360();
   }
      }
   }
}

Block make__56610640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56610640 = block;
   block->owner = (Object)__56853780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56610640;

   return block;
};

Block __56853660;

Block __56853440;

void code__56853440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56936340(),ack__a0_50310240_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__56853440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56853440 = block;
   block->owner = (Object)__56853660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56853440;

   return block;
};

Block __56852740;

Block __56926160;

void code__56926160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_50310420_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,_5832_47566320_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56936080(),ack__a0_50310240_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__56926160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56926160 = block;
   block->owner = (Object)__56852740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56926160;

   return block;
};

void code__56852740() {
 code__56926160();
}

Block make__56852740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56852740 = block;
   block->owner = (Object)__56853660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56852740;

   return block;
};

void code__56853660() {
   {
      Value cond = rst_58727000_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56853440();
   }
   else if (value2integer(flag__z0_50310260_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value)) {
  code__56852740();
   }
      }
   }
}

Block make__56853660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56853660 = block;
   block->owner = (Object)__57385900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56853660;

   return block;
};

Block __57385780;

Block __57385600;

Block __57425880;

void code__57425880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56935820(),_58325_50472640_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__57425880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57425880 = block;
   block->owner = (Object)__57385600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57425880;

   return block;
};

void code__57385600() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58727000_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56935960();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57425880();
   }
      }
   }
}

Block make__57385600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57385600 = block;
   block->owner = (Object)__57385780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57385600;

   return block;
};

Block __57425140;

Block __57424640;

void code__57424640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56935540(),_58269_56331840_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__57424640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57424640 = block;
   block->owner = (Object)__57425140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57424640;

   return block;
};

void code__57425140() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58727000_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56935640();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57424640();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56935400(),_58268_56331960_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__57425140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57425140 = block;
   block->owner = (Object)__57385780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57425140;

   return block;
};

Block __57423860;

void code__57423860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56935240(),address__weights0_50309900_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56935140(),ack__weights0_50309660_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56935080(),address__bias_50309700_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56935020(),ack__bias_50309640_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__57423860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57423860 = block;
   block->owner = (Object)__57385780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57423860;

   return block;
};

Block __57422020;

Block __57421680;

Block __57421500;

Block __57421020;

void code__57421020() {
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
                  src0 = _58269_56331840_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__56934480();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58269_56331840_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57007960(),_58268_56331960_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
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
            ref = w0_51353180_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
            idx = value2integer(address__weights0_50309900_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),_58270_56385820_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__57421020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57421020 = block;
   block->owner = (Object)__57421500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57421020;

   return block;
};

void code__57421500() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58727000_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56934720();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57421020();
   }
      }
   }
}

Block make__57421500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57421500 = block;
   block->owner = (Object)__57421680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57421500;

   return block;
};

void code__57421680() {
 code__57421500();
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
                  src0 = address__weights0_50309900_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57007560();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),address__weights0_50309900_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__57421680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57421680 = block;
   block->owner = (Object)__57422020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57421680;

   return block;
};

Block __58174820;

Block __58174660;

Block __58174240;

Block __58173420;

void code__58173420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = b_56331980_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
            idx = value2integer(address__bias_50309700_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),_58324_50472840_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__58173420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58173420 = block;
   block->owner = (Object)__58174240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58173420;

   return block;
};

void code__58174240() {
{
      Value value = _58325_50472640_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__57007080())) {
    code__58173420();
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
                  src0 = _58325_50472640_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57006620();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),_58325_50472640_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__58174240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58174240 = block;
   block->owner = (Object)__58174660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58174240;

   return block;
};

void code__58174660() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58727000_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57007260();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58174240();
   }
      }
   }
}

Block make__58174660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58174660 = block;
   block->owner = (Object)__58174820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58174660;

   return block;
};

void code__58174820() {
 code__58174660();
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
                  src0 = address__bias_50309700_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57006420();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),address__bias_50309700_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__58174820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58174820 = block;
   block->owner = (Object)__57422020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58174820;

   return block;
};

void code__57422020() {
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__weights0_50309660_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57421680();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__bias_50309640_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58174820();
   }
      }
   }
}

Block make__57422020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57422020 = block;
   block->owner = (Object)__57385780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57422020;

   return block;
};

Block __58636520;

void code__58636520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57006060(),ack__weights0_50309660_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__58636520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58636520 = block;
   block->owner = (Object)__57385780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58636520;

   return block;
};

Block __58634780;

void code__58634780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57005600(),ack__bias_50309640_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__58634780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58634780 = block;
   block->owner = (Object)__57385780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58634780;

   return block;
};

void code__57385780() {
 code__57385600();
 code__57425140();
   {
      Value cond = rst_58727000_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57423860();
   }
      }
   }
   {
      Value cond = fill__channel_59045780_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57422020();
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
               src0 = address__weights0_50309900_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57006300();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58636520();
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
               src0 = address__bias_50309700_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57005700();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58634780();
   }
      }
   }
}

Block make__57385780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57385780 = block;
   block->owner = (Object)__58633560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57385780;

   return block;
};

Block __56660480;

void code__56660480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_58726560_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_59045820_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_59045860_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__56660480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56660480 = block;
   block->owner = (Object)__56660200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56660480;

   return block;
};

Block __56676000;

void code__56676000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = fill_58726620_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ack__weights0_50309660_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
                  src1 = ack__bias_50309640_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
                  dst = and_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),fill__channel_59045780_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__56676000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56676000 = block;
   block->owner = (Object)__56675700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56676000;

   return block;
};

Block __56660820;

void code__56660820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_58727020_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,clk_56564140_counter_58_8400_56509220_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_59045840_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,ack_56564120_counter_58_8400_56509220_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_58727000_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,rst_56564100_counter_58_8400_56509220_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_49596100_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,z__value_51069500_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__a0_50310240_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,ack__layer_59166280_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__56660820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56660820 = block;
   block->owner = (Object)__56675540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56660820;

   return block;
};

Block __56660740;

void code__56660740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_56564060_counter_58_8400_56509220_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,ack__mac_59045820_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_51249520_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,value__a0_50310420_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__56660740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56660740 = block;
   block->owner = (Object)__56675320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56660740;

   return block;
};

Block __56794260;

Block __57253360;

void code__57253360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_56127780_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,make_ref_rangeS(mem_56296460_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480,value2integer(abus__w_56127600_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value),value2integer(abus__w_56127600_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__57253360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57253360 = block;
   block->owner = (Object)__56794260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57253360;

   return block;
};

void code__56794260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_56296460_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
            idx = value2integer(abus__r_56127700_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_55840520_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_55291220_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57253360();
   }
      }
   }
}

Block make__56794260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56794260 = block;
   block->owner = (Object)__57806860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56794260;

   return block;
};

Block __56673920;

void code__56673920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_55840520_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,_58266_59167300_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__56673920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56673920 = block;
   block->owner = (Object)__56673700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56673920;

   return block;
};

Block __56673660;

void code__56673660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58266_59167300_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,dbus__r_55840520_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__56673660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56673660 = block;
   block->owner = (Object)__56673480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56673660;

   return block;
};

Block __56673060;

void code__56673060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_55291240_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,_58264_59167280_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__56673060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56673060 = block;
   block->owner = (Object)__56672840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56673060;

   return block;
};

Block __56672780;

void code__56672780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58264_59167280_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,trig__r_55291240_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__56672780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56672780 = block;
   block->owner = (Object)__56672540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56672780;

   return block;
};

Block __56696480;

void code__56696480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_56127700_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,_58265_59167200_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__56696480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56696480 = block;
   block->owner = (Object)__56696140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56696480;

   return block;
};

Block __56696080;

void code__56696080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58265_59167200_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,abus__r_56127700_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__56696080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56696080 = block;
   block->owner = (Object)__56695640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56696080;

   return block;
};

Block __56695260;

void code__56695260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_55291220_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,_58268_56331960_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__56695260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56695260 = block;
   block->owner = (Object)__56695040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56695260;

   return block;
};

Block __56694980;

void code__56694980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58268_56331960_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,trig__w_55291220_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__56694980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56694980 = block;
   block->owner = (Object)__56694720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56694980;

   return block;
};

Block __56694280;

void code__56694280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_56127600_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,_58269_56331840_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__56694280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56694280 = block;
   block->owner = (Object)__56694100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56694280;

   return block;
};

Block __56694060;

void code__56694060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58269_56331840_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,abus__w_56127600_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__56694060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56694060 = block;
   block->owner = (Object)__56693800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56694060;

   return block;
};

Block __56693060;

void code__56693060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_56127780_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,_58270_56385820_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__56693060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56693060 = block;
   block->owner = (Object)__56692500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56693060;

   return block;
};

Block __56692460;

void code__56692460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58270_56385820_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,dbus__w_56127780_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__56692460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56692460 = block;
   block->owner = (Object)__56692240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56692460;

   return block;
};

Block __56689820;

void code__56689820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_58032000_channel__accum_58281_57806700_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,_58283_46184440_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__56689820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56689820 = block;
   block->owner = (Object)__56689660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56689820;

   return block;
};

Block __56689620;

void code__56689620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58283_46184440_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,reg__0_58032000_channel__accum_58281_57806700_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__56689620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56689620 = block;
   block->owner = (Object)__56689460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56689620;

   return block;
};

Block __58613920;

Block __58638260;

Block __58637880;

void code__58637880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56923180(),_58265_59167200_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__58637880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58637880 = block;
   block->owner = (Object)__58638260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58637880;

   return block;
};

void code__58638260() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58727000_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56923300();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58637880();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56923020(),_58264_59167280_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__58638260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58638260 = block;
   block->owner = (Object)__58613920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58638260;

   return block;
};

Block __58637160;

Block __58636840;

void code__58636840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56922480(),_5868_59166120_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__58636840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58636840 = block;
   block->owner = (Object)__58637160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58636840;

   return block;
};

void code__58637160() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58727000_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56922820();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58636840();
   }
      }
   }
}

Block make__58637160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58637160 = block;
   block->owner = (Object)__58613920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58637160;

   return block;
};

Block __58635780;

void code__58635780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56921960(),rvok_58614140_mac__n1_58306_58277600_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56921840(),lvok0_58614160_mac__n1_58306_58277600_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56921780(),av0_58466420_mac__n1_58306_58277600_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__58635780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58635780 = block;
   block->owner = (Object)__58613920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58635780;

   return block;
};

Block __58891160;

Block __58890740;

Block __58890320;

Block __58889860;

void code__58889860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5866_58963520_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,rv_58614180_mac__n1_58306_58277600_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__58889860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58889860 = block;
   block->owner = (Object)__58890320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58889860;

   return block;
};

Block __59201480;

void code__59201480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5867_59166380_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,rv_58614180_mac__n1_58306_58277600_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__59201480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59201480 = block;
   block->owner = (Object)__58890320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59201480;

   return block;
};

void code__58890320() {
{
      Value value = _5868_59166120_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__56921320())) {
    code__58889860();
         }
         else if (value2integer(value) == value2integer(make__56921200())) {
    code__59201480();
         }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56920980(),rvok_58614140_mac__n1_58306_58277600_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
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
                  src0 = _5868_59166120_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__56920860();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5868_59166120_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__58890320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58890320 = block;
   block->owner = (Object)__58890740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58890320;

   return block;
};

void code__58890740() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58727000_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56921460();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58890320();
   }
      }
   }
}

Block make__58890740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58890740 = block;
   block->owner = (Object)__58891160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58890740;

   return block;
};

Block __47991180;

Block __48008780;

Block __48005700;

void code__48005700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58266_59167300_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,lv0_58359680_mac__n1_58306_58277600_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56920300(),lvok0_58614160_mac__n1_58306_58277600_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__48005700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48005700 = block;
   block->owner = (Object)__48008780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48005700;

   return block;
};

void code__48008780() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58264_59167280_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56920580();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48005700();
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
                  src0 = _58265_59167200_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__56920000();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58265_59167200_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56919760(),_58264_59167280_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__48008780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48008780 = block;
   block->owner = (Object)__47991180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48008780;

   return block;
};

void code__47991180() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_58727000_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56920680();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48008780();
   }
      }
   }
}

Block make__47991180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47991180 = block;
   block->owner = (Object)__58891160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47991180;

   return block;
};

Block __49615100;

Block __49631380;

Block __49630440;

void code__49630440() {
}

Block make__49630440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49630440 = block;
   block->owner = (Object)__49631380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49630440;

   return block;
};

Block __51256700;

void code__51256700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_58466420_mac__n1_58306_58277600_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,_58283_46184440_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__51256700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51256700 = block;
   block->owner = (Object)__49631380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51256700;

   return block;
};

void code__49631380() {
 code__49630440();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av0_58466420_mac__n1_58306_58277600_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
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
                              src0 = lv0_58359680_mac__n1_58306_58277600_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_58614180_mac__n1_58306_58277600_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__56919020();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_58466420_mac__n1_58306_58277600_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
 code__51256700();
}

Block make__49631380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49631380 = block;
   block->owner = (Object)__49615100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49631380;

   return block;
};

void code__49615100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56919520(),ack_59045840_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56919440(),run_58614120_mac__n1_58306_58277600_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
 code__49631380();
}

Block make__49615100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49615100 = block;
   block->owner = (Object)__58891160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49615100;

   return block;
};

void code__58891160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56921560(),run_58614120_mac__n1_58306_58277600_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
 code__58890740();
 code__47991180();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_58614160_mac__n1_58306_58277600_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
         src1 = rvok_58614140_mac__n1_58306_58277600_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49615100();
   }
      }
   }
}

Block make__58891160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58891160 = block;
   block->owner = (Object)__58613920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58891160;

   return block;
};

void code__58613920() {
 code__58638260();
 code__58637160();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56922320(),ack_59045840_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56922200(),run_58614120_mac__n1_58306_58277600_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = run_58614120_mac__n1_58306_58277600_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58635780();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_59045860_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
         src1 = run_58614120_mac__n1_58306_58277600_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58891160();
   }
      }
   }
}

Block make__58613920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58613920 = block;
   block->owner = (Object)__55940820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58613920;

   return block;
};

Block __56711300;

void code__56711300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_56209280_channel__bias_58311_55940660_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,_58313_47930180_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__56711300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56711300 = block;
   block->owner = (Object)__56711060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56711300;

   return block;
};

Block __56711000;

void code__56711000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58313_47930180_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,reg__0_56209280_channel__bias_58311_55940660_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__56711000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56711000 = block;
   block->owner = (Object)__56710760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56711000;

   return block;
};

Block __56710220;

void code__56710220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_56209280_channel__bias_58311_55940660_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,_58324_50472840_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__56710220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56710220 = block;
   block->owner = (Object)__56709940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56710220;

   return block;
};

Block __56709740;

void code__56709740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58324_50472840_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,reg__0_56209280_channel__bias_58311_55940660_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__56709740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56709740 = block;
   block->owner = (Object)__56709520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56709740;

   return block;
};

Block __56745380;

void code__56745380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_55937560_winc_58323_55938040_channel__bias_58311_55940660_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,_58325_50472640_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__56745380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56745380 = block;
   block->owner = (Object)__56745040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56745380;

   return block;
};

Block __56745000;

void code__56745000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58325_50472640_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,abus__w_55937560_winc_58323_55938040_channel__bias_58311_55940660_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__56745000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56745000 = block;
   block->owner = (Object)__56744840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56745000;

   return block;
};

Block __56742640;

void code__56742640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_56922920_channel__z_58334_56757300_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,_58336_48988920_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__56742640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56742640 = block;
   block->owner = (Object)__56742480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56742640;

   return block;
};

Block __56742440;

void code__56742440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58336_48988920_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,reg__0_56922920_channel__z_58334_56757300_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__56742440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56742440 = block;
   block->owner = (Object)__56742280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56742440;

   return block;
};

Block __57706620;

Block __57705340;

Block __57705020;

void code__57705020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58283_46184440_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,lv0_57464760_add__n_58357_57376140_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56941040(),lvok0_57706940_add__n_58357_57376140_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__57705020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57705020 = block;
   block->owner = (Object)__57705340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57705020;

   return block;
};

Block __58092600;

void code__58092600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58313_47930180_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value,rv0_57706960_add__n_58357_57376140_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56940880(),rvok0_57706920_add__n_58357_57376140_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__58092600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58092600 = block;
   block->owner = (Object)__57705340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58092600;

   return block;
};

Block __58309160;

Block __58308440;

void code__58308440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_57464760_add__n_58357_57376140_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
      src1 = rv0_57706960_add__n_58357_57376140_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58336_48988920_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__58308440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58308440 = block;
   block->owner = (Object)__58309160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58308440;

   return block;
};

void code__58309160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56940580(),run_57706880_add__n_58357_57376140_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56940480(),ack__add_59045800_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
 code__58308440();
}

Block make__58309160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58309160 = block;
   block->owner = (Object)__57705340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58309160;

   return block;
};

void code__57705340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56941240(),run_57706880_add__n_58357_57376140_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
 code__57705020();
 code__58092600();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_57706940_add__n_58357_57376140_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
         src1 = rvok0_57706920_add__n_58357_57376140_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58309160();
   }
      }
   }
}

Block make__57705340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57705340 = block;
   block->owner = (Object)__57706620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57705340;

   return block;
};

Block __57706020;

void code__57706020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56939580(),lvok0_57706940_add__n_58357_57376140_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56939480(),rvok0_57706920_add__n_58357_57376140_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__57706020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57706020 = block;
   block->owner = (Object)__57706620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57706020;

   return block;
};

void code__57706620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56941500(),ack__add_59045800_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56941440(),run_57706880_add__n_58357_57376140_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_59045820_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
         src1 = run_57706880_add__n_58357_57376140_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57705340();
   }
   else {
  code__57706020();
   }
      }
   }
}

Block make__57706620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57706620 = block;
   block->owner = (Object)__59046000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57706620;

   return block;
};

Value make__56939200() {
   static unsigned long long data[] = { 26ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56939160() {
   static unsigned long long data[] = { 231ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56938900() {
   static unsigned long long data[] = { 34ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56923300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56923180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56923020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56922820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56922480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56922320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56922200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56921960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56921840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56921780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__56921560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56921460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56921320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56921200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56920980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56920860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56920680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56920580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56920300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56920000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56919760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56919520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56919440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56919020() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56941500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56941440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56941240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56941040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56940880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56940580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56940480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56939580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56939480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56937060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56937000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56936920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56936620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56936560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56936340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56936080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56935960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56935820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__56935640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56935540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56935400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56935240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__56935140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56935080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56935020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56934720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56934480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57007960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57007560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57007260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57007080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__57006620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57006420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57006300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57006060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57005700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57005600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope layer1_58_84_55294780;

SignalI req__mac_59045860_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makereq__mac_59045860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_59045860_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)layer1_58_84_55294780;
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

SignalI ack_59045840_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makeack_59045840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_59045840_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)layer1_58_84_55294780;
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

SignalI ack__mac_59045820_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makeack__mac_59045820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_59045820_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)layer1_58_84_55294780;
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

SignalI ack__add_59045800_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makeack__add_59045800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_59045800_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)layer1_58_84_55294780;
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

SignalI fill__channel_59045780_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makefill__channel_59045780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill__channel_59045780_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)layer1_58_84_55294780;
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

SignalI _58266_59167300_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI make_58266_59167300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58266_59167300_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)layer1_58_84_55294780;
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

SignalI _58264_59167280_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI make_58264_59167280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58264_59167280_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)layer1_58_84_55294780;
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

SignalI _58265_59167200_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI make_58265_59167200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58265_59167200_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)layer1_58_84_55294780;
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

SignalI _58283_46184440_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI make_58283_46184440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58283_46184440_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)layer1_58_84_55294780;
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

SignalI _58313_47930180_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI make_58313_47930180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58313_47930180_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)layer1_58_84_55294780;
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

SignalI _58336_48988920_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI make_58336_48988920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58336_48988920_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)layer1_58_84_55294780;
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

SignalI value__z0_49596100_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makevalue__z0_49596100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_49596100_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)layer1_58_84_55294780;
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

SignalI value__a0_50310420_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makevalue__a0_50310420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_50310420_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)layer1_58_84_55294780;
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

SignalI flag__z0_50310260_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makeflag__z0_50310260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_50310260_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)layer1_58_84_55294780;
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

SignalI ack__a0_50310240_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makeack__a0_50310240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_50310240_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)layer1_58_84_55294780;
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

SignalI address__weights0_50309900_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makeaddress__weights0_50309900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address__weights0_50309900_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)layer1_58_84_55294780;
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

SignalI address__bias_50309700_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makeaddress__bias_50309700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address__bias_50309700_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)layer1_58_84_55294780;
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

SignalI ack__weights0_50309660_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makeack__weights0_50309660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__weights0_50309660_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)layer1_58_84_55294780;
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

SignalI ack__bias_50309640_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makeack__bias_50309640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__bias_50309640_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)layer1_58_84_55294780;
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

SignalI _58324_50472840_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI make_58324_50472840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58324_50472840_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)layer1_58_84_55294780;
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

SignalI _58325_50472640_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI make_58325_50472640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58325_50472640_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)layer1_58_84_55294780;
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

SignalI w0_51353180_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makew0_51353180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   w0_51353180_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)layer1_58_84_55294780;
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
         src0 = make__56939200();
         src1 = make__56939160();
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

SignalI b_56331980_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makeb_56331980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   b_56331980_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)layer1_58_84_55294780;
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
         src0 = make__56938900();
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

SignalI _58268_56331960_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI make_58268_56331960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58268_56331960_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)layer1_58_84_55294780;
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

SignalI _58269_56331840_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI make_58269_56331840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58269_56331840_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)layer1_58_84_55294780;
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

SignalI _58270_56385820_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI make_58270_56385820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58270_56385820_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)layer1_58_84_55294780;
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

SystemI counter_56563920;

SystemI makecounter_56563920() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_56563920 = systemI;
   systemI->owner = (Object)layer1_58_84_55294780;
   systemI->name = "counter";
   systemI->system = counter_58_8400_56509220;

   return systemI;
};

SystemI func0_51249220;

SystemI makefunc0_51249220() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_51249220 = systemI;
   systemI->owner = (Object)layer1_58_84_55294780;
   systemI->name = "func0";
   systemI->system = func0_58_8400_50831380;

   return systemI;
};

Scope channel__w0_58252_55294480;

SignalI trig__r_55291240_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI maketrig__r_55291240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_55291240_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)channel__w0_58252_55294480;
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

SignalI trig__w_55291220_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI maketrig__w_55291220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_55291220_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)channel__w0_58252_55294480;
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

SignalI dbus__r_55840520_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makedbus__r_55840520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_55840520_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)channel__w0_58252_55294480;
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

SignalI dbus__w_56127780_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makedbus__w_56127780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_56127780_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)channel__w0_58252_55294480;
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

SignalI abus__r_56127700_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makeabus__r_56127700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_56127700_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)channel__w0_58252_55294480;
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

SignalI abus__w_56127600_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makeabus__w_56127600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_56127600_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)channel__w0_58252_55294480;
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

SignalI mem_56296460_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makemem_56296460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_56296460_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)channel__w0_58252_55294480;
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

Scope raddr_58253_55294160;

Scope makeraddr_58253_55294160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58253_55294160 = scope;
   scope->owner = (Object)channel__w0_58252_55294480;
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

Scope waddr_58258_55293660;

Scope makewaddr_58258_55293660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58258_55293660 = scope;
   scope->owner = (Object)channel__w0_58252_55294480;
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

Scope rinc_58263_55293240;

Scope makerinc_58263_55293240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58263_55293240 = scope;
   scope->owner = (Object)channel__w0_58252_55294480;
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

Scope winc_58267_55292620;

Scope makewinc_58267_55292620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58267_55292620 = scope;
   scope->owner = (Object)channel__w0_58252_55294480;
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

Scope rdec_58271_55292200;

Scope makerdec_58271_55292200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58271_55292200 = scope;
   scope->owner = (Object)channel__w0_58252_55294480;
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

Scope wdec_58276_55291740;

Scope makewdec_58276_55291740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58276_55291740 = scope;
   scope->owner = (Object)channel__w0_58252_55294480;
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

Behavior __57806860;

Behavior make__57806860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57806860 = behavior;
   behavior->owner = (Object)channel__w0_58252_55294480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_58727020_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   clk_58727020_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_neg += 1;
   clk_58727020_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->neg = realloc(clk_58727020_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->neg,clk_58727020_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_neg*sizeof(Object));
clk_58727020_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->neg[clk_58727020_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_neg-1] = (Object)behavior;
   behavior->block = make__56794260();

   return behavior;
}

Behavior __56673700;

Behavior make__56673700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56673700 = behavior;
   behavior->owner = (Object)channel__w0_58252_55294480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_55840520_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   dbus__r_55840520_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   dbus__r_55840520_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(dbus__r_55840520_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,dbus__r_55840520_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
dbus__r_55840520_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[dbus__r_55840520_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__56673920();

   return behavior;
}

Behavior __56673480;

Behavior make__56673480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56673480 = behavior;
   behavior->owner = (Object)channel__w0_58252_55294480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58266_59167300_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   _58266_59167300_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   _58266_59167300_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(_58266_59167300_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,_58266_59167300_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
_58266_59167300_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[_58266_59167300_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__56673660();

   return behavior;
}

Behavior __56672840;

Behavior make__56672840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56672840 = behavior;
   behavior->owner = (Object)channel__w0_58252_55294480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_55291240_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   trig__r_55291240_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   trig__r_55291240_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(trig__r_55291240_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,trig__r_55291240_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
trig__r_55291240_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[trig__r_55291240_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__56673060();

   return behavior;
}

Behavior __56672540;

Behavior make__56672540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56672540 = behavior;
   behavior->owner = (Object)channel__w0_58252_55294480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58264_59167280_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   _58264_59167280_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   _58264_59167280_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(_58264_59167280_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,_58264_59167280_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
_58264_59167280_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[_58264_59167280_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__56672780();

   return behavior;
}

Behavior __56696140;

Behavior make__56696140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56696140 = behavior;
   behavior->owner = (Object)channel__w0_58252_55294480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_56127700_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   abus__r_56127700_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   abus__r_56127700_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(abus__r_56127700_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,abus__r_56127700_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
abus__r_56127700_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[abus__r_56127700_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__56696480();

   return behavior;
}

Behavior __56695640;

Behavior make__56695640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56695640 = behavior;
   behavior->owner = (Object)channel__w0_58252_55294480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58265_59167200_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   _58265_59167200_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   _58265_59167200_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(_58265_59167200_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,_58265_59167200_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
_58265_59167200_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[_58265_59167200_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__56696080();

   return behavior;
}

Behavior __56695040;

Behavior make__56695040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56695040 = behavior;
   behavior->owner = (Object)channel__w0_58252_55294480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_55291220_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   trig__w_55291220_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   trig__w_55291220_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(trig__w_55291220_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,trig__w_55291220_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
trig__w_55291220_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[trig__w_55291220_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__56695260();

   return behavior;
}

Behavior __56694720;

Behavior make__56694720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56694720 = behavior;
   behavior->owner = (Object)channel__w0_58252_55294480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58268_56331960_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   _58268_56331960_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   _58268_56331960_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(_58268_56331960_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,_58268_56331960_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
_58268_56331960_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[_58268_56331960_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__56694980();

   return behavior;
}

Behavior __56694100;

Behavior make__56694100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56694100 = behavior;
   behavior->owner = (Object)channel__w0_58252_55294480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_56127600_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   abus__w_56127600_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   abus__w_56127600_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(abus__w_56127600_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,abus__w_56127600_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
abus__w_56127600_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[abus__w_56127600_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__56694280();

   return behavior;
}

Behavior __56693800;

Behavior make__56693800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56693800 = behavior;
   behavior->owner = (Object)channel__w0_58252_55294480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58269_56331840_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   _58269_56331840_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   _58269_56331840_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(_58269_56331840_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,_58269_56331840_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
_58269_56331840_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[_58269_56331840_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__56694060();

   return behavior;
}

Behavior __56692500;

Behavior make__56692500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56692500 = behavior;
   behavior->owner = (Object)channel__w0_58252_55294480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_56127780_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   dbus__w_56127780_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   dbus__w_56127780_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(dbus__w_56127780_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,dbus__w_56127780_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
dbus__w_56127780_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[dbus__w_56127780_channel__w0_58252_55294480_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__56693060();

   return behavior;
}

Behavior __56692240;

Behavior make__56692240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56692240 = behavior;
   behavior->owner = (Object)channel__w0_58252_55294480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58270_56385820_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   _58270_56385820_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   _58270_56385820_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(_58270_56385820_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,_58270_56385820_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
_58270_56385820_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[_58270_56385820_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__56692460();

   return behavior;
}

Scope makechannel__w0_58252_55294480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58252_55294480 = scope;
   scope->owner = (Object)layer1_58_84_55294780;
   scope->name = "channel_w0:252";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_55291240();
   scope->inners[1] = maketrig__w_55291220();
   scope->inners[2] = makedbus__r_55840520();
   scope->inners[3] = makedbus__w_56127780();
   scope->inners[4] = makeabus__r_56127700();
   scope->inners[5] = makeabus__w_56127600();
   scope->inners[6] = makemem_56296460();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58253_55294160();
   scope->scopes[1] = makewaddr_58258_55293660();
   scope->scopes[2] = makerinc_58263_55293240();
   scope->scopes[3] = makewinc_58267_55292620();
   scope->scopes[4] = makerdec_58271_55292200();
   scope->scopes[5] = makewdec_58276_55291740();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57806860();
   scope->behaviors[1] = make__56673700();
   scope->behaviors[2] = make__56673480();
   scope->behaviors[3] = make__56672840();
   scope->behaviors[4] = make__56672540();
   scope->behaviors[5] = make__56696140();
   scope->behaviors[6] = make__56695640();
   scope->behaviors[7] = make__56695040();
   scope->behaviors[8] = make__56694720();
   scope->behaviors[9] = make__56694100();
   scope->behaviors[10] = make__56693800();
   scope->behaviors[11] = make__56692500();
   scope->behaviors[12] = make__56692240();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58281_57806700;

SignalI reg__0_58032000_channel__accum_58281_57806700_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makereg__0_58032000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_58032000_channel__accum_58281_57806700_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)channel__accum_58281_57806700;
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

Scope anum_58282_57806240;

Scope makeanum_58282_57806240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58282_57806240 = scope;
   scope->owner = (Object)channel__accum_58281_57806700;
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

Scope raddr_58284_57805780;

Scope makeraddr_58284_57805780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58284_57805780 = scope;
   scope->owner = (Object)channel__accum_58281_57806700;
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

Scope waddr_58287_57805300;

Scope makewaddr_58287_57805300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58287_57805300 = scope;
   scope->owner = (Object)channel__accum_58281_57806700;
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

Scope rinc_58290_57804880;

SignalI abus__r_57804420_rinc_58290_57804880_channel__accum_58281_57806700_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makeabus__r_57804420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_57804420_rinc_58290_57804880_channel__accum_58281_57806700_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)rinc_58290_57804880;
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

Scope makerinc_58290_57804880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58290_57804880 = scope;
   scope->owner = (Object)channel__accum_58281_57806700;
   scope->name = "rinc:290";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_57804420();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58294_57804220;

SignalI abus__w_57803800_winc_58294_57804220_channel__accum_58281_57806700_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makeabus__w_57803800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_57803800_winc_58294_57804220_channel__accum_58281_57806700_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)winc_58294_57804220;
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

Scope makewinc_58294_57804220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58294_57804220 = scope;
   scope->owner = (Object)channel__accum_58281_57806700;
   scope->name = "winc:294";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_57803800();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58298_57803680;

SignalI abus__r_57803200_rdec_58298_57803680_channel__accum_58281_57806700_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makeabus__r_57803200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_57803200_rdec_58298_57803680_channel__accum_58281_57806700_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)rdec_58298_57803680;
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

Scope makerdec_58298_57803680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58298_57803680 = scope;
   scope->owner = (Object)channel__accum_58281_57806700;
   scope->name = "rdec:298";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_57803200();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58302_57803080;

SignalI abus__w_57917360_wdec_58302_57803080_channel__accum_58281_57806700_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makeabus__w_57917360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_57917360_wdec_58302_57803080_channel__accum_58281_57806700_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)wdec_58302_57803080;
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

Scope makewdec_58302_57803080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58302_57803080 = scope;
   scope->owner = (Object)channel__accum_58281_57806700;
   scope->name = "wdec:302";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_57917360();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __56689660;

Behavior make__56689660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56689660 = behavior;
   behavior->owner = (Object)channel__accum_58281_57806700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_58032000_channel__accum_58281_57806700_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   reg__0_58032000_channel__accum_58281_57806700_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   reg__0_58032000_channel__accum_58281_57806700_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(reg__0_58032000_channel__accum_58281_57806700_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,reg__0_58032000_channel__accum_58281_57806700_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
reg__0_58032000_channel__accum_58281_57806700_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[reg__0_58032000_channel__accum_58281_57806700_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__56689820();

   return behavior;
}

Behavior __56689460;

Behavior make__56689460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56689460 = behavior;
   behavior->owner = (Object)channel__accum_58281_57806700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58283_46184440_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   _58283_46184440_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   _58283_46184440_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(_58283_46184440_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,_58283_46184440_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
_58283_46184440_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[_58283_46184440_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__56689620();

   return behavior;
}

Scope makechannel__accum_58281_57806700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58281_57806700 = scope;
   scope->owner = (Object)layer1_58_84_55294780;
   scope->name = "channel_accum:281";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_58032000();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58282_57806240();
   scope->scopes[1] = makeraddr_58284_57805780();
   scope->scopes[2] = makewaddr_58287_57805300();
   scope->scopes[3] = makerinc_58290_57804880();
   scope->scopes[4] = makewinc_58294_57804220();
   scope->scopes[5] = makerdec_58298_57803680();
   scope->scopes[6] = makewdec_58302_57803080();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__56689660();
   scope->behaviors[1] = make__56689460();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58306_58277600;

SignalI lv0_58359680_mac__n1_58306_58277600_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makelv0_58359680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_58359680_mac__n1_58306_58277600_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)mac__n1_58306_58277600;
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

SignalI av0_58466420_mac__n1_58306_58277600_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makeav0_58466420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_58466420_mac__n1_58306_58277600_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)mac__n1_58306_58277600;
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

SignalI rv_58614180_mac__n1_58306_58277600_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makerv_58614180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_58614180_mac__n1_58306_58277600_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)mac__n1_58306_58277600;
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

SignalI lvok0_58614160_mac__n1_58306_58277600_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makelvok0_58614160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_58614160_mac__n1_58306_58277600_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)mac__n1_58306_58277600;
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

SignalI rvok_58614140_mac__n1_58306_58277600_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makervok_58614140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_58614140_mac__n1_58306_58277600_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)mac__n1_58306_58277600;
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

SignalI run_58614120_mac__n1_58306_58277600_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makerun_58614120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_58614120_mac__n1_58306_58277600_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)mac__n1_58306_58277600;
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

Behavior __55940820;

Behavior make__55940820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55940820 = behavior;
   behavior->owner = (Object)mac__n1_58306_58277600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_58727020_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   clk_58727020_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_pos += 1;
   clk_58727020_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->pos = realloc(clk_58727020_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->pos,clk_58727020_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_pos*sizeof(Object));
clk_58727020_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->pos[clk_58727020_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_pos-1] = (Object)behavior;
   behavior->block = make__58613920();

   return behavior;
}

Scope makemac__n1_58306_58277600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58306_58277600 = scope;
   scope->owner = (Object)layer1_58_84_55294780;
   scope->name = "mac_n1:306";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 6;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_58359680();
   scope->inners[1] = makeav0_58466420();
   scope->inners[2] = makerv_58614180();
   scope->inners[3] = makelvok0_58614160();
   scope->inners[4] = makervok_58614140();
   scope->inners[5] = makerun_58614120();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__55940820();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__bias_58311_55940660;

SignalI reg__0_56209280_channel__bias_58311_55940660_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makereg__0_56209280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_56209280_channel__bias_58311_55940660_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)channel__bias_58311_55940660;
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

Scope anum_58312_55940100;

Scope makeanum_58312_55940100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58312_55940100 = scope;
   scope->owner = (Object)channel__bias_58311_55940660;
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

Scope raddr_58314_55939680;

Scope makeraddr_58314_55939680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58314_55939680 = scope;
   scope->owner = (Object)channel__bias_58311_55940660;
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

Scope waddr_58317_55939260;

Scope makewaddr_58317_55939260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58317_55939260 = scope;
   scope->owner = (Object)channel__bias_58311_55940660;
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

Scope rinc_58320_55938800;

SignalI abus__r_55938200_rinc_58320_55938800_channel__bias_58311_55940660_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makeabus__r_55938200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_55938200_rinc_58320_55938800_channel__bias_58311_55940660_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)rinc_58320_55938800;
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

Scope makerinc_58320_55938800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58320_55938800 = scope;
   scope->owner = (Object)channel__bias_58311_55940660;
   scope->name = "rinc:320";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_55938200();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58323_55938040;

SignalI abus__w_55937560_winc_58323_55938040_channel__bias_58311_55940660_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makeabus__w_55937560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_55937560_winc_58323_55938040_channel__bias_58311_55940660_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)winc_58323_55938040;
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

Behavior __56745040;

Behavior make__56745040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56745040 = behavior;
   behavior->owner = (Object)winc_58323_55938040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_55937560_winc_58323_55938040_channel__bias_58311_55940660_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   abus__w_55937560_winc_58323_55938040_channel__bias_58311_55940660_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   abus__w_55937560_winc_58323_55938040_channel__bias_58311_55940660_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(abus__w_55937560_winc_58323_55938040_channel__bias_58311_55940660_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,abus__w_55937560_winc_58323_55938040_channel__bias_58311_55940660_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
abus__w_55937560_winc_58323_55938040_channel__bias_58311_55940660_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[abus__w_55937560_winc_58323_55938040_channel__bias_58311_55940660_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__56745380();

   return behavior;
}

Behavior __56744840;

Behavior make__56744840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56744840 = behavior;
   behavior->owner = (Object)winc_58323_55938040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58325_50472640_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   _58325_50472640_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   _58325_50472640_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(_58325_50472640_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,_58325_50472640_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
_58325_50472640_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[_58325_50472640_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__56745000();

   return behavior;
}

Scope makewinc_58323_55938040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58323_55938040 = scope;
   scope->owner = (Object)channel__bias_58311_55940660;
   scope->name = "winc:323";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_55937560();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__56745040();
   scope->behaviors[1] = make__56744840();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58326_55937180;

SignalI abus__r_55936800_rdec_58326_55937180_channel__bias_58311_55940660_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makeabus__r_55936800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_55936800_rdec_58326_55937180_channel__bias_58311_55940660_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)rdec_58326_55937180;
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

Scope makerdec_58326_55937180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58326_55937180 = scope;
   scope->owner = (Object)channel__bias_58311_55940660;
   scope->name = "rdec:326";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_55936800();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58330_55936640;

SignalI abus__w_55935860_wdec_58330_55936640_channel__bias_58311_55940660_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makeabus__w_55935860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_55935860_wdec_58330_55936640_channel__bias_58311_55940660_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)wdec_58330_55936640;
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

Scope makewdec_58330_55936640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58330_55936640 = scope;
   scope->owner = (Object)channel__bias_58311_55940660;
   scope->name = "wdec:330";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_55935860();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __56711060;

Behavior make__56711060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56711060 = behavior;
   behavior->owner = (Object)channel__bias_58311_55940660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_56209280_channel__bias_58311_55940660_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   reg__0_56209280_channel__bias_58311_55940660_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   reg__0_56209280_channel__bias_58311_55940660_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(reg__0_56209280_channel__bias_58311_55940660_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,reg__0_56209280_channel__bias_58311_55940660_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
reg__0_56209280_channel__bias_58311_55940660_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[reg__0_56209280_channel__bias_58311_55940660_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__56711300();

   return behavior;
}

Behavior __56710760;

Behavior make__56710760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56710760 = behavior;
   behavior->owner = (Object)channel__bias_58311_55940660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58313_47930180_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   _58313_47930180_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   _58313_47930180_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(_58313_47930180_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,_58313_47930180_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
_58313_47930180_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[_58313_47930180_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__56711000();

   return behavior;
}

Behavior __56709940;

Behavior make__56709940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56709940 = behavior;
   behavior->owner = (Object)channel__bias_58311_55940660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_56209280_channel__bias_58311_55940660_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   reg__0_56209280_channel__bias_58311_55940660_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   reg__0_56209280_channel__bias_58311_55940660_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(reg__0_56209280_channel__bias_58311_55940660_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,reg__0_56209280_channel__bias_58311_55940660_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
reg__0_56209280_channel__bias_58311_55940660_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[reg__0_56209280_channel__bias_58311_55940660_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__56710220();

   return behavior;
}

Behavior __56709520;

Behavior make__56709520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56709520 = behavior;
   behavior->owner = (Object)channel__bias_58311_55940660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58324_50472840_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   _58324_50472840_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   _58324_50472840_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(_58324_50472840_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,_58324_50472840_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
_58324_50472840_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[_58324_50472840_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__56709740();

   return behavior;
}

Scope makechannel__bias_58311_55940660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__bias_58311_55940660 = scope;
   scope->owner = (Object)layer1_58_84_55294780;
   scope->name = "channel_bias:311";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_56209280();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58312_55940100();
   scope->scopes[1] = makeraddr_58314_55939680();
   scope->scopes[2] = makewaddr_58317_55939260();
   scope->scopes[3] = makerinc_58320_55938800();
   scope->scopes[4] = makewinc_58323_55938040();
   scope->scopes[5] = makerdec_58326_55937180();
   scope->scopes[6] = makewdec_58330_55936640();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__56711060();
   scope->behaviors[1] = make__56710760();
   scope->behaviors[2] = make__56709940();
   scope->behaviors[3] = make__56709520();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58334_56757300;

SignalI reg__0_56922920_channel__z_58334_56757300_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makereg__0_56922920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_56922920_channel__z_58334_56757300_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)channel__z_58334_56757300;
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

Scope anum_58335_56756940;

Scope makeanum_58335_56756940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58335_56756940 = scope;
   scope->owner = (Object)channel__z_58334_56757300;
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

Scope raddr_58337_56756500;

Scope makeraddr_58337_56756500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58337_56756500 = scope;
   scope->owner = (Object)channel__z_58334_56757300;
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

Scope waddr_58340_56755800;

Scope makewaddr_58340_56755800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58340_56755800 = scope;
   scope->owner = (Object)channel__z_58334_56757300;
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

Scope rinc_58343_56755380;

SignalI abus__r_56754900_rinc_58343_56755380_channel__z_58334_56757300_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makeabus__r_56754900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_56754900_rinc_58343_56755380_channel__z_58334_56757300_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)rinc_58343_56755380;
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

Scope makerinc_58343_56755380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58343_56755380 = scope;
   scope->owner = (Object)channel__z_58334_56757300;
   scope->name = "rinc:343";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_56754900();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58346_56754780;

SignalI abus__w_56754400_winc_58346_56754780_channel__z_58334_56757300_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makeabus__w_56754400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_56754400_winc_58346_56754780_channel__z_58334_56757300_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)winc_58346_56754780;
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

Scope makewinc_58346_56754780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58346_56754780 = scope;
   scope->owner = (Object)channel__z_58334_56757300;
   scope->name = "winc:346";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_56754400();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58349_56754260;

SignalI abus__r_56794580_rdec_58349_56754260_channel__z_58334_56757300_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makeabus__r_56794580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_56794580_rdec_58349_56754260_channel__z_58334_56757300_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)rdec_58349_56754260;
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

Scope makerdec_58349_56754260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58349_56754260 = scope;
   scope->owner = (Object)channel__z_58334_56757300;
   scope->name = "rdec:349";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_56794580();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58353_56794440;

SignalI abus__w_56793660_wdec_58353_56794440_channel__z_58334_56757300_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makeabus__w_56793660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_56793660_wdec_58353_56794440_channel__z_58334_56757300_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)wdec_58353_56794440;
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

Scope makewdec_58353_56794440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58353_56794440 = scope;
   scope->owner = (Object)channel__z_58334_56757300;
   scope->name = "wdec:353";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_56793660();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __56742480;

Behavior make__56742480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56742480 = behavior;
   behavior->owner = (Object)channel__z_58334_56757300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_56922920_channel__z_58334_56757300_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   reg__0_56922920_channel__z_58334_56757300_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   reg__0_56922920_channel__z_58334_56757300_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(reg__0_56922920_channel__z_58334_56757300_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,reg__0_56922920_channel__z_58334_56757300_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
reg__0_56922920_channel__z_58334_56757300_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[reg__0_56922920_channel__z_58334_56757300_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__56742640();

   return behavior;
}

Behavior __56742280;

Behavior make__56742280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56742280 = behavior;
   behavior->owner = (Object)channel__z_58334_56757300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58336_48988920_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   _58336_48988920_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   _58336_48988920_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(_58336_48988920_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,_58336_48988920_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
_58336_48988920_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[_58336_48988920_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__56742440();

   return behavior;
}

Scope makechannel__z_58334_56757300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58334_56757300 = scope;
   scope->owner = (Object)layer1_58_84_55294780;
   scope->name = "channel_z:334";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_56922920();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58335_56756940();
   scope->scopes[1] = makeraddr_58337_56756500();
   scope->scopes[2] = makewaddr_58340_56755800();
   scope->scopes[3] = makerinc_58343_56755380();
   scope->scopes[4] = makewinc_58346_56754780();
   scope->scopes[5] = makerdec_58349_56754260();
   scope->scopes[6] = makewdec_58353_56794440();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__56742480();
   scope->behaviors[1] = make__56742280();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58357_57376140;

SignalI lv0_57464760_add__n_58357_57376140_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makelv0_57464760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_57464760_add__n_58357_57376140_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)add__n_58357_57376140;
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

SignalI rv0_57706960_add__n_58357_57376140_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makerv0_57706960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_57706960_add__n_58357_57376140_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)add__n_58357_57376140;
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

SignalI lvok0_57706940_add__n_58357_57376140_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makelvok0_57706940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_57706940_add__n_58357_57376140_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)add__n_58357_57376140;
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

SignalI rvok0_57706920_add__n_58357_57376140_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makervok0_57706920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_57706920_add__n_58357_57376140_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)add__n_58357_57376140;
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

SignalI run_57706880_add__n_58357_57376140_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makerun_57706880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_57706880_add__n_58357_57376140_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)add__n_58357_57376140;
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

Behavior __59046000;

Behavior make__59046000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59046000 = behavior;
   behavior->owner = (Object)add__n_58357_57376140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_58727020_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   clk_58727020_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_pos += 1;
   clk_58727020_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->pos = realloc(clk_58727020_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->pos,clk_58727020_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_pos*sizeof(Object));
clk_58727020_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->pos[clk_58727020_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_pos-1] = (Object)behavior;
   behavior->block = make__57706620();

   return behavior;
}

Scope makeadd__n_58357_57376140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58357_57376140 = scope;
   scope->owner = (Object)layer1_58_84_55294780;
   scope->name = "add_n:357";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_57464760();
   scope->inners[1] = makerv0_57706960();
   scope->inners[2] = makelvok0_57706940();
   scope->inners[3] = makervok0_57706920();
   scope->inners[4] = makerun_57706880();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59046000();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __56610840;

Behavior make__56610840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56610840 = behavior;
   behavior->owner = (Object)layer1_58_84_55294780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_58727020_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   clk_58727020_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_pos += 1;
   clk_58727020_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->pos = realloc(clk_58727020_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->pos,clk_58727020_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_pos*sizeof(Object));
clk_58727020_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->pos[clk_58727020_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_pos-1] = (Object)behavior;
   behavior->block = make__56612440();

   return behavior;
}

Behavior __56853780;

Behavior make__56853780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56853780 = behavior;
   behavior->owner = (Object)layer1_58_84_55294780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_58727020_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   clk_58727020_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_pos += 1;
   clk_58727020_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->pos = realloc(clk_58727020_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->pos,clk_58727020_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_pos*sizeof(Object));
clk_58727020_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->pos[clk_58727020_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_pos-1] = (Object)behavior;
   behavior->block = make__56610640();

   return behavior;
}

Behavior __57385900;

Behavior make__57385900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57385900 = behavior;
   behavior->owner = (Object)layer1_58_84_55294780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_58727020_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   clk_58727020_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_pos += 1;
   clk_58727020_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->pos = realloc(clk_58727020_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->pos,clk_58727020_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_pos*sizeof(Object));
clk_58727020_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->pos[clk_58727020_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_pos-1] = (Object)behavior;
   behavior->block = make__56853660();

   return behavior;
}

Behavior __58633560;

Behavior make__58633560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58633560 = behavior;
   behavior->owner = (Object)layer1_58_84_55294780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_58727020_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   clk_58727020_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_pos += 1;
   clk_58727020_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->pos = realloc(clk_58727020_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->pos,clk_58727020_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_pos*sizeof(Object));
clk_58727020_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->pos[clk_58727020_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_pos-1] = (Object)behavior;
   behavior->block = make__57385780();

   return behavior;
}

Behavior __56660200;

Behavior make__56660200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56660200 = behavior;
   behavior->owner = (Object)layer1_58_84_55294780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_58726560_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   req_58726560_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   req_58726560_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(req_58726560_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,req_58726560_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
req_58726560_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[req_58726560_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_59045820_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   ack__mac_59045820_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   ack__mac_59045820_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(ack__mac_59045820_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,ack__mac_59045820_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
ack__mac_59045820_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[ack__mac_59045820_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__56660480();

   return behavior;
}

Behavior __56675700;

Behavior make__56675700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56675700 = behavior;
   behavior->owner = (Object)layer1_58_84_55294780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,fill_58726620_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   fill_58726620_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   fill_58726620_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(fill_58726620_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,fill_58726620_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
fill_58726620_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[fill_58726620_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__weights0_50309660_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   ack__weights0_50309660_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   ack__weights0_50309660_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(ack__weights0_50309660_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,ack__weights0_50309660_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
ack__weights0_50309660_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[ack__weights0_50309660_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,ack__bias_50309640_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   ack__bias_50309640_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   ack__bias_50309640_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(ack__bias_50309640_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,ack__bias_50309640_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
ack__bias_50309640_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[ack__bias_50309640_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__56676000();

   return behavior;
}

Behavior __56675540;

Behavior make__56675540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56675540 = behavior;
   behavior->owner = (Object)layer1_58_84_55294780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_58727020_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   clk_58727020_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   clk_58727020_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(clk_58727020_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,clk_58727020_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
clk_58727020_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[clk_58727020_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_59045840_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   ack_59045840_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   ack_59045840_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(ack_59045840_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,ack_59045840_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
ack_59045840_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[ack_59045840_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_58727000_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   rst_58727000_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   rst_58727000_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(rst_58727000_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,rst_58727000_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
rst_58727000_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[rst_58727000_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_49596100_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   value__z0_49596100_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   value__z0_49596100_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(value__z0_49596100_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,value__z0_49596100_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
value__z0_49596100_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[value__z0_49596100_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__a0_50310240_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   ack__a0_50310240_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   ack__a0_50310240_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(ack__a0_50310240_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,ack__a0_50310240_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
ack__a0_50310240_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[ack__a0_50310240_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__56660820();

   return behavior;
}

Behavior __56675320;

Behavior make__56675320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56675320 = behavior;
   behavior->owner = (Object)layer1_58_84_55294780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_56564060_counter_58_8400_56509220_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   ack__mac_56564060_counter_58_8400_56509220_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   ack__mac_56564060_counter_58_8400_56509220_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(ack__mac_56564060_counter_58_8400_56509220_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,ack__mac_56564060_counter_58_8400_56509220_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
ack__mac_56564060_counter_58_8400_56509220_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[ack__mac_56564060_counter_58_8400_56509220_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,a_51249520_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   a_51249520_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   a_51249520_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(a_51249520_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,a_51249520_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
a_51249520_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[a_51249520_func0_58_8400_50831380_layer1_58_84_55294780_layer1_58_840_58633240_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__56660740();

   return behavior;
}

Scope makelayer1_58_84_55294780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer1_58_84_55294780 = scope;
   scope->owner = (Object)layer1_58_840_58633240;
   scope->name = "layer1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_56563920();
   scope->systemIs[1] = makefunc0_51249220();
   scope->num_inners = 26;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_59045860();
   scope->inners[1] = makeack_59045840();
   scope->inners[2] = makeack__mac_59045820();
   scope->inners[3] = makeack__add_59045800();
   scope->inners[4] = makefill__channel_59045780();
   scope->inners[5] = make_58266_59167300();
   scope->inners[6] = make_58264_59167280();
   scope->inners[7] = make_58265_59167200();
   scope->inners[8] = make_58283_46184440();
   scope->inners[9] = make_58313_47930180();
   scope->inners[10] = make_58336_48988920();
   scope->inners[11] = makevalue__z0_49596100();
   scope->inners[12] = makevalue__a0_50310420();
   scope->inners[13] = makeflag__z0_50310260();
   scope->inners[14] = makeack__a0_50310240();
   scope->inners[15] = makeaddress__weights0_50309900();
   scope->inners[16] = makeaddress__bias_50309700();
   scope->inners[17] = makeack__weights0_50309660();
   scope->inners[18] = makeack__bias_50309640();
   scope->inners[19] = make_58324_50472840();
   scope->inners[20] = make_58325_50472640();
   scope->inners[21] = makew0_51353180();
   scope->inners[22] = makeb_56331980();
   scope->inners[23] = make_58268_56331960();
   scope->inners[24] = make_58269_56331840();
   scope->inners[25] = make_58270_56385820();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58252_55294480();
   scope->scopes[1] = makechannel__accum_58281_57806700();
   scope->scopes[2] = makemac__n1_58306_58277600();
   scope->scopes[3] = makechannel__bias_58311_55940660();
   scope->scopes[4] = makechannel__z_58334_56757300();
   scope->scopes[5] = makeadd__n_58357_57376140();
   scope->num_behaviors = 8;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__56610840();
   scope->behaviors[1] = make__56853780();
   scope->behaviors[2] = make__57385900();
   scope->behaviors[3] = make__58633560();
   scope->behaviors[4] = make__56660200();
   scope->behaviors[5] = make__56675700();
   scope->behaviors[6] = make__56675540();
   scope->behaviors[7] = make__56675320();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer1_58_840_58633240() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer1_58_840_58633240 = systemT;
systemT->owner = NULL;
   systemT->name = "layer1:T0";
   systemT->num_inputs = 6;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_58727020();
   systemT->inputs[1] = makerst_58727000();
   systemT->inputs[2] = makefill_58726620();
   systemT->inputs[3] = makereq_58726560();
   systemT->inputs[4] = make_5866_58963520();
   systemT->inputs[5] = make_5867_59166380();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_59166280();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_5868_59166120();
   systemT->inouts[1] = make_5832_47566320();

   systemT->scope = makelayer1_58_84_55294780();

   return systemT;
}