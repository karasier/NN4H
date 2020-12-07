#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer1_58_841_55740300;

SignalI clk_55776620_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makeclk_55776620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_55776620_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer1_58_841_55740300;
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

SignalI rst_55776560_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makerst_55776560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_55776560_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer1_58_841_55740300;
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

SignalI req_55776380_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makereq_55776380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_55776380_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer1_58_841_55740300;
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

SignalI _58165_56059740_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI make_58165_56059740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58165_56059740_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer1_58_841_55740300;
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

SignalI _58166_56259220_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI make_58166_56259220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58166_56259220_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer1_58_841_55740300;
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

SignalI ack__layer_56259160_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makeack__layer_56259160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_56259160_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer1_58_841_55740300;
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

SignalI _58167_56258780_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI make_58167_56258780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58167_56258780_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer1_58_841_55740300;
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

SignalI _58131_56595020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI make_58131_56595020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58131_56595020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer1_58_841_55740300;
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

Block __54347420;

Block __54346840;

void code__54346840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78802120(),ack_63874580_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78802060(),ack__mac_63874560_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78802000(),ack__add_63874540_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__54346840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54346840 = block;
   block->owner = (Object)__54347420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54346840;

   return block;
};

void code__54347420() {
   {
      Value cond = rst_55776560_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54346840();
   }
      }
   }
}

Block make__54347420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54347420 = block;
   block->owner = (Object)__54369000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54347420;

   return block;
};

Block __54368480;

Block __54367160;

Block __54366980;

void code__54366980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58384_64338200_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,value__z0_64400960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78801820(),flag__z0_64512860_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__54366980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54366980 = block;
   block->owner = (Object)__54367160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54366980;

   return block;
};

void code__54367160() {
 code__54366980();
}

Block make__54367160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54367160 = block;
   block->owner = (Object)__54368480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54367160;

   return block;
};

Block __54367780;

void code__54367780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78801760(),flag__z0_64512860_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__54367780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54367780 = block;
   block->owner = (Object)__54368480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54367780;

   return block;
};

void code__54368480() {
   {
      Value cond = ack__add_63874540_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54367160();
   }
   else {
  code__54367780();
   }
      }
   }
}

Block make__54368480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54368480 = block;
   block->owner = (Object)__55105220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54368480;

   return block;
};

Block __55104920;

Block __55104320;

void code__55104320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78801660(),ack__a0_64512840_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__55104320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55104320 = block;
   block->owner = (Object)__55104920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55104320;

   return block;
};

Block __55103100;

Block __55102800;

void code__55102800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_64512880_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,_58131_56595020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78801420(),ack__a0_64512840_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__55102800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55102800 = block;
   block->owner = (Object)__55103100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55102800;

   return block;
};

void code__55103100() {
 code__55102800();
}

Block make__55103100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55103100 = block;
   block->owner = (Object)__55104920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55103100;

   return block;
};

void code__55104920() {
   {
      Value cond = rst_55776560_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55104320();
   }
   else if (value2integer(flag__z0_64512860_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value)) {
  code__55103100();
   }
      }
   }
}

Block make__55104920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55104920 = block;
   block->owner = (Object)__55740860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55104920;

   return block;
};

Block __78522340;

void code__78522340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_55776380_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_63874560_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_63874600_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__78522340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78522340 = block;
   block->owner = (Object)__78522040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78522340;

   return block;
};

Block __78522600;

void code__78522600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_55776620_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,clk_64613600_counter_58_8400_64615440_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_63874580_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,ack_64613580_counter_58_8400_64615440_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_55776560_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,rst_64613560_counter_58_8400_64615440_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_64400960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,z__value_51264260_func0_58_8400_48722960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__a0_64512840_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,ack__layer_56259160_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__78522600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78522600 = block;
   block->owner = (Object)__78540740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78522600;

   return block;
};

Block __78522540;

void code__78522540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_64613520_counter_58_8400_64615440_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,ack__mac_63874560_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_55776560_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,_58372_64185500_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_51506440_func0_58_8400_48722960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,value__a0_64512880_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__78522540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78522540 = block;
   block->owner = (Object)__78540560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78522540;

   return block;
};

Block __54169960;

void code__54169960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_51578420_channel__w0_58322_55661420_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
            idx = value2integer(abus__r_56097300_channel__w0_58322_55661420_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_56097420_channel__w0_58322_55661420_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__54169960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54169960 = block;
   block->owner = (Object)__55494920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54169960;

   return block;
};

Block __78539780;

void code__78539780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_56097420_channel__w0_58322_55661420_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,_58331_63970000_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__78539780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78539780 = block;
   block->owner = (Object)__78539620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78539780;

   return block;
};

Block __78539580;

void code__78539580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58331_63970000_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,dbus__r_56097420_channel__w0_58322_55661420_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__78539580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78539580 = block;
   block->owner = (Object)__78539400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78539580;

   return block;
};

Block __78539100;

void code__78539100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_55658520_channel__w0_58322_55661420_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,_58329_63969980_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__78539100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78539100 = block;
   block->owner = (Object)__78538940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78539100;

   return block;
};

Block __78538900;

void code__78538900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58329_63969980_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,trig__r_55658520_channel__w0_58322_55661420_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__78538900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78538900 = block;
   block->owner = (Object)__78538740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78538900;

   return block;
};

Block __78538380;

void code__78538380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_56097300_channel__w0_58322_55661420_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,_58330_63969900_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__78538380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78538380 = block;
   block->owner = (Object)__78538180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78538380;

   return block;
};

Block __78538140;

void code__78538140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58330_63969900_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,abus__r_56097300_channel__w0_58322_55661420_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__78538140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78538140 = block;
   block->owner = (Object)__78537980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78538140;

   return block;
};

Block __78536740;

void code__78536740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_56042820_channel__accum_58337_55494320_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,_58339_64090000_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__78536740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78536740 = block;
   block->owner = (Object)__78561100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78536740;

   return block;
};

Block __78561060;

void code__78561060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58339_64090000_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,reg__0_56042820_channel__accum_58337_55494320_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__78561060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78561060 = block;
   block->owner = (Object)__78560860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78561060;

   return block;
};

Block __49894920;

Block __49894620;

Block __49891460;

void code__49891460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78769140(),_58330_63969900_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__49891460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49891460 = block;
   block->owner = (Object)__49894620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49891460;

   return block;
};

void code__49894620() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_55776560_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78769220();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49891460();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78769080(),_58329_63969980_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__49894620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49894620 = block;
   block->owner = (Object)__49894920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49894620;

   return block;
};

Block __49923280;

Block __49944940;

void code__49944940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78768920(),_58167_56258780_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__49944940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49944940 = block;
   block->owner = (Object)__49923280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49944940;

   return block;
};

void code__49923280() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_55776560_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78769000();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49944940();
   }
      }
   }
}

Block make__49923280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49923280 = block;
   block->owner = (Object)__49894920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49923280;

   return block;
};

Block __49940800;

void code__49940800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78768620(),rvok_49895440_mac__n1_58362_57282820_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78768520(),lvok0_49895480_mac__n1_58362_57282820_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78768460(),wok0_49895360_mac__n1_58362_57282820_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__49940800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49940800 = block;
   block->owner = (Object)__49894920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49940800;

   return block;
};

Block __50858600;

Block __50856940;

Block __50856480;

Block __50879840;

Block __50877600;

void code__50877600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58165_56059740_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,rv_49895540_mac__n1_58362_57282820_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__50877600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50877600 = block;
   block->owner = (Object)__50879840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50877600;

   return block;
};

Block __51493840;

void code__51493840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58166_56259220_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,rv_49895540_mac__n1_58362_57282820_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__51493840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51493840 = block;
   block->owner = (Object)__50879840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51493840;

   return block;
};

void code__50879840() {
{
      Value value = _58167_56258780_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__78768040())) {
    code__50877600();
         }
         else if (value2integer(value) == value2integer(make__78767940())) {
    code__51493840();
         }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78767800(),rvok_49895440_mac__n1_58362_57282820_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
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
                  src0 = _58167_56258780_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
                  src1 = make__78767700();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__78767660();
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
                        src0 = _58167_56258780_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__78767400();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__78767340();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58167_56258780_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__50879840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50879840 = block;
   block->owner = (Object)__50856480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50879840;

   return block;
};

void code__50856480() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_55776560_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78768160();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50879840();
   }
      }
   }
}

Block make__50856480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50856480 = block;
   block->owner = (Object)__50856940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50856480;

   return block;
};

void code__50856940() {
 code__50856480();
}

Block make__50856940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50856940 = block;
   block->owner = (Object)__50858600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50856940;

   return block;
};

Block __53818460;

Block __53818020;

Block __53817640;

Block __53813420;

Block __53870320;

void code__53870320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58331_63970000_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,lv0_46364820_mac__n1_58362_57282820_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__78766880(),lvok0_49895480_mac__n1_58362_57282820_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__53870320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53870320 = block;
   block->owner = (Object)__53813420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53870320;

   return block;
};

void code__53813420() {
 code__53870320();
}

Block make__53813420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53813420 = block;
   block->owner = (Object)__53817640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53813420;

   return block;
};

Block __53817080;

void code__53817080() {
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
                  src0 = _58330_63969900_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
                  src1 = make__78766760();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__78766700();
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
                        src0 = _58330_63969900_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__78766400();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__78766340();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58330_63969900_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78766220(),_58329_63969980_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__53817080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53817080 = block;
   block->owner = (Object)__53817640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53817080;

   return block;
};

void code__53817640() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58329_63969980_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78767040();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53813420();
   }
   else {
  code__53817080();
   }
      }
   }
}

Block make__53817640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53817640 = block;
   block->owner = (Object)__53818020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53817640;

   return block;
};

void code__53818020() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_55776560_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78767140();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53817640();
   }
      }
   }
}

Block make__53818020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53818020 = block;
   block->owner = (Object)__53818460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53818020;

   return block;
};

void code__53818460() {
 code__53818020();
}

Block make__53818460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53818460 = block;
   block->owner = (Object)__50858600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53818460;

   return block;
};

Block __54250660;

Block __54250000;

Block __54249700;

void code__54249700() {
}

Block make__54249700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54249700 = block;
   block->owner = (Object)__54250000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54249700;

   return block;
};

Block __55657660;

void code__55657660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_48230000_mac__n1_58362_57282820_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,_58339_64090000_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78806320(),wok0_49895360_mac__n1_58362_57282820_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__55657660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55657660 = block;
   block->owner = (Object)__54250000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55657660;

   return block;
};

void code__54250000() {
 code__54249700();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av0_48230000_mac__n1_58362_57282820_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
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
                              src0 = lv0_46364820_mac__n1_58362_57282820_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_49895540_mac__n1_58362_57282820_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__78806520();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_48230000_mac__n1_58362_57282820_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
 code__55657660();
}

Block make__54250000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54250000 = block;
   block->owner = (Object)__54250660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54250000;

   return block;
};

void code__54250660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78806900(),ack_63874580_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78806840(),run_49895220_mac__n1_58362_57282820_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
 code__54250000();
}

Block make__54250660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54250660 = block;
   block->owner = (Object)__50858600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54250660;

   return block;
};

Block __56117720;

void code__56117720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78806220(),wok0_49895360_mac__n1_58362_57282820_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78806160(),lvok0_49895480_mac__n1_58362_57282820_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78806100(),rvok_49895440_mac__n1_58362_57282820_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__56117720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56117720 = block;
   block->owner = (Object)__50858600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56117720;

   return block;
};

void code__50858600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78768300(),run_49895220_mac__n1_58362_57282820_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = rvok_49895440_mac__n1_58362_57282820_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50856940();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_49895480_mac__n1_58362_57282820_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53818460();
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
               src0 = lvok0_49895480_mac__n1_58362_57282820_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
               src1 = rvok_49895440_mac__n1_58362_57282820_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok0_49895360_mac__n1_58362_57282820_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54250660();
   }
      }
   }
   {
      Value cond = wok0_49895360_mac__n1_58362_57282820_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56117720();
   }
      }
   }
}

Block make__50858600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50858600 = block;
   block->owner = (Object)__49894920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50858600;

   return block;
};

Block __49962220;

void code__49962220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78806040(),av0_48230000_mac__n1_58362_57282820_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__49962220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49962220 = block;
   block->owner = (Object)__49894920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49962220;

   return block;
};

void code__49894920() {
 code__49894620();
 code__49923280();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78768840(),ack_63874580_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78768760(),run_49895220_mac__n1_58362_57282820_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = run_49895220_mac__n1_58362_57282820_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49940800();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_63874600_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
         src1 = run_49895220_mac__n1_58362_57282820_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50858600();
   }
   else {
  code__49962220();
   }
      }
   }
}

Block make__49894920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49894920 = block;
   block->owner = (Object)__56139260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49894920;

   return block;
};

Block __54042300;

void code__54042300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_57034160_channel__b0_58367_56139020_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
            idx = value2integer(abus__r_56331000_channel__b0_58367_56139020_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_56331120_channel__b0_58367_56139020_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__54042300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54042300 = block;
   block->owner = (Object)__62339900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54042300;

   return block;
};

Block __78558860;

void code__78558860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_56331120_channel__b0_58367_56139020_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,_58371_64185520_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__78558860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78558860 = block;
   block->owner = (Object)__78558660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78558860;

   return block;
};

Block __78558620;

void code__78558620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58371_64185520_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,dbus__r_56331120_channel__b0_58367_56139020_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__78558620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78558620 = block;
   block->owner = (Object)__78558400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78558620;

   return block;
};

Block __78558100;

void code__78558100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_56136100_channel__b0_58367_56139020_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,_58369_64185480_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__78558100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78558100 = block;
   block->owner = (Object)__78557940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78558100;

   return block;
};

Block __78557900;

void code__78557900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58369_64185480_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,trig__r_56136100_channel__b0_58367_56139020_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__78557900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78557900 = block;
   block->owner = (Object)__78557740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78557900;

   return block;
};

Block __78557420;

void code__78557420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_56331000_channel__b0_58367_56139020_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,_58370_64185400_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__78557420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78557420 = block;
   block->owner = (Object)__78557260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78557420;

   return block;
};

Block __78557220;

void code__78557220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58370_64185400_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,abus__r_56331000_channel__b0_58367_56139020_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__78557220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78557220 = block;
   block->owner = (Object)__78557060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78557220;

   return block;
};

Block __78555740;

void code__78555740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_62398960_channel__z_58382_62339780_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,_58384_64338200_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__78555740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78555740 = block;
   block->owner = (Object)__78555580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78555740;

   return block;
};

Block __78555540;

void code__78555540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58384_64338200_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,reg__0_62398960_channel__z_58382_62339780_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__78555540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78555540 = block;
   block->owner = (Object)__78555360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78555540;

   return block;
};

Block __62780260;

Block __62780100;

void code__62780100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78804740(),_58369_64185480_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__62780100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62780100 = block;
   block->owner = (Object)__62780260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62780100;

   return block;
};

Block __62778840;

Block __62778520;

void code__62778520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58339_64090000_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,lv0_62701300_add__n_58405_62614300_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78804300(),lvok0_62780420_add__n_58405_62614300_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__62778520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62778520 = block;
   block->owner = (Object)__62778840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62778520;

   return block;
};

Block __63018220;

Block __63017900;

Block __63017040;

void code__63017040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58371_64185520_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,rv0_62780440_add__n_58405_62614300_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78803960(),_58369_64185480_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78803900(),rvok0_62780400_add__n_58405_62614300_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__63017040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63017040 = block;
   block->owner = (Object)__63017900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63017040;

   return block;
};

Block __63017740;

void code__63017740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78803840(),_58370_64185400_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78803780(),_58369_64185480_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__63017740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63017740 = block;
   block->owner = (Object)__63017900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63017740;

   return block;
};

void code__63017900() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58369_64185480_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78804120();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__63017040();
   }
   else {
  code__63017740();
   }
      }
   }
}

Block make__63017900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63017900 = block;
   block->owner = (Object)__63018220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63017900;

   return block;
};

void code__63018220() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58372_64185500_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78804220();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__63017900();
   }
      }
   }
}

Block make__63018220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63018220 = block;
   block->owner = (Object)__62778840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63018220;

   return block;
};

Block __63338220;

Block __63337740;

void code__63337740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_62701300_add__n_58405_62614300_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
      src1 = rv0_62780440_add__n_58405_62614300_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58384_64338200_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__63337740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63337740 = block;
   block->owner = (Object)__63338220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63337740;

   return block;
};

void code__63338220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78803620(),run_62780380_add__n_58405_62614300_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78803540(),ack__add_63874540_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
 code__63337740();
}

Block make__63338220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63338220 = block;
   block->owner = (Object)__62778840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63338220;

   return block;
};

void code__62778840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78804460(),run_62780380_add__n_58405_62614300_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
 code__62778520();
 code__63018220();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_62780420_add__n_58405_62614300_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
         src1 = rvok0_62780400_add__n_58405_62614300_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__63338220();
   }
      }
   }
}

Block make__62778840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62778840 = block;
   block->owner = (Object)__62780260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62778840;

   return block;
};

Block __62779460;

void code__62779460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78803220(),lvok0_62780420_add__n_58405_62614300_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78803160(),rvok0_62780400_add__n_58405_62614300_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__62779460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62779460 = block;
   block->owner = (Object)__62780260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62779460;

   return block;
};

void code__62780260() {
 code__62780100();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78804680(),ack__add_63874540_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78804620(),run_62780380_add__n_58405_62614300_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_63874560_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
         src1 = run_62780380_add__n_58405_62614300_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__62778840();
   }
   else {
  code__62779460();
   }
      }
   }
}

Block make__62780260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62780260 = block;
   block->owner = (Object)__63874740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62780260;

   return block;
};

Value make__78770500() {
   static unsigned long long data[] = { 4294967244ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78770480() {
   static unsigned long long data[] = { 48ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78806020() {
   static unsigned long long data[] = { 4294967285ULL };
   return make_set_value(get_type_vector(get_type_vector(get_type_signed(),8),1),1,data);
}

Value make__78769220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78769140() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78769080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78769000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78768920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78768840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78768760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78768620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78768520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78768460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78768300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78768160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78768040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78767940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78767800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78767700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78767660() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78767400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78767340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78767140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78767040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78766880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78766760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78766700() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78766400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78766340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78766220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78806900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78806840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78806520() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78806320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78806220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78806160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78806100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78806040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__78804740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78804680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78804620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78804460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78804300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78804220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78804120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78803960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78803900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78803840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78803780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78803620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78803540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78803220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78803160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78802120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78802060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78802000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78801820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78801760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78801660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78801420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope layer1_58_84_55662020;

SignalI req__mac_63874600_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makereq__mac_63874600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_63874600_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer1_58_84_55662020;
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

SignalI ack_63874580_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makeack_63874580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_63874580_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer1_58_84_55662020;
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

SignalI ack__mac_63874560_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makeack__mac_63874560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_63874560_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer1_58_84_55662020;
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

SignalI ack__add_63874540_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makeack__add_63874540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_63874540_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer1_58_84_55662020;
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

SignalI _58331_63970000_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI make_58331_63970000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58331_63970000_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer1_58_84_55662020;
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

SignalI _58329_63969980_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI make_58329_63969980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58329_63969980_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer1_58_84_55662020;
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

SignalI _58330_63969900_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI make_58330_63969900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58330_63969900_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer1_58_84_55662020;
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

SignalI _58339_64090000_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI make_58339_64090000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58339_64090000_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer1_58_84_55662020;
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

SignalI _58371_64185520_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI make_58371_64185520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58371_64185520_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer1_58_84_55662020;
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

SignalI _58372_64185500_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI make_58372_64185500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58372_64185500_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer1_58_84_55662020;
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

SignalI _58369_64185480_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI make_58369_64185480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58369_64185480_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer1_58_84_55662020;
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

SignalI _58370_64185400_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI make_58370_64185400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58370_64185400_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer1_58_84_55662020;
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

SignalI _58384_64338200_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI make_58384_64338200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58384_64338200_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer1_58_84_55662020;
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

SignalI value__z0_64400960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makevalue__z0_64400960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_64400960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer1_58_84_55662020;
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

SignalI value__a0_64512880_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makevalue__a0_64512880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_64512880_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer1_58_84_55662020;
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

SignalI flag__z0_64512860_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makeflag__z0_64512860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_64512860_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer1_58_84_55662020;
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

SignalI ack__a0_64512840_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makeack__a0_64512840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_64512840_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)layer1_58_84_55662020;
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

SystemI counter_64613380;

SystemI makecounter_64613380() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_64613380 = systemI;
   systemI->owner = (Object)layer1_58_84_55662020;
   systemI->name = "counter";
   systemI->system = counter_58_8400_64615440;

   return systemI;
};

SystemI func0_51505580;

SystemI makefunc0_51505580() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_51505580 = systemI;
   systemI->owner = (Object)layer1_58_84_55662020;
   systemI->name = "func0";
   systemI->system = func0_58_8400_48722960;

   return systemI;
};

Scope channel__w0_58322_55661420;

SignalI trig__r_55658520_channel__w0_58322_55661420_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI maketrig__r_55658520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_55658520_channel__w0_58322_55661420_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)channel__w0_58322_55661420;
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

SignalI dbus__r_56097420_channel__w0_58322_55661420_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makedbus__r_56097420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_56097420_channel__w0_58322_55661420_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)channel__w0_58322_55661420;
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

SignalI abus__r_56097300_channel__w0_58322_55661420_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makeabus__r_56097300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_56097300_channel__w0_58322_55661420_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)channel__w0_58322_55661420;
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

SignalI mem_51578420_channel__w0_58322_55661420_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makemem_51578420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_51578420_channel__w0_58322_55661420_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)channel__w0_58322_55661420;
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
         src0 = make__78770500();
         src1 = make__78770480();
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

Scope raddr_58323_55660900;

Scope makeraddr_58323_55660900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58323_55660900 = scope;
   scope->owner = (Object)channel__w0_58322_55661420;
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

Scope rinc_58328_55660040;

Scope makerinc_58328_55660040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58328_55660040 = scope;
   scope->owner = (Object)channel__w0_58322_55661420;
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

Scope rdec_58332_55659400;

Scope makerdec_58332_55659400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58332_55659400 = scope;
   scope->owner = (Object)channel__w0_58322_55661420;
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

Behavior __55494920;

Behavior make__55494920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55494920 = behavior;
   behavior->owner = (Object)channel__w0_58322_55661420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_55776620_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   clk_55776620_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_neg += 1;
   clk_55776620_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->neg = realloc(clk_55776620_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->neg,clk_55776620_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_neg*sizeof(Object));
clk_55776620_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->neg[clk_55776620_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_neg-1] = (Object)behavior;
   behavior->block = make__54169960();

   return behavior;
}

Behavior __78539620;

Behavior make__78539620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78539620 = behavior;
   behavior->owner = (Object)channel__w0_58322_55661420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_56097420_channel__w0_58322_55661420_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   dbus__r_56097420_channel__w0_58322_55661420_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   dbus__r_56097420_channel__w0_58322_55661420_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(dbus__r_56097420_channel__w0_58322_55661420_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,dbus__r_56097420_channel__w0_58322_55661420_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
dbus__r_56097420_channel__w0_58322_55661420_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[dbus__r_56097420_channel__w0_58322_55661420_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__78539780();

   return behavior;
}

Behavior __78539400;

Behavior make__78539400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78539400 = behavior;
   behavior->owner = (Object)channel__w0_58322_55661420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58331_63970000_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   _58331_63970000_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   _58331_63970000_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(_58331_63970000_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,_58331_63970000_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
_58331_63970000_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[_58331_63970000_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__78539580();

   return behavior;
}

Behavior __78538940;

Behavior make__78538940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78538940 = behavior;
   behavior->owner = (Object)channel__w0_58322_55661420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_55658520_channel__w0_58322_55661420_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   trig__r_55658520_channel__w0_58322_55661420_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   trig__r_55658520_channel__w0_58322_55661420_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(trig__r_55658520_channel__w0_58322_55661420_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,trig__r_55658520_channel__w0_58322_55661420_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
trig__r_55658520_channel__w0_58322_55661420_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[trig__r_55658520_channel__w0_58322_55661420_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__78539100();

   return behavior;
}

Behavior __78538740;

Behavior make__78538740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78538740 = behavior;
   behavior->owner = (Object)channel__w0_58322_55661420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58329_63969980_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   _58329_63969980_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   _58329_63969980_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(_58329_63969980_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,_58329_63969980_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
_58329_63969980_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[_58329_63969980_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__78538900();

   return behavior;
}

Behavior __78538180;

Behavior make__78538180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78538180 = behavior;
   behavior->owner = (Object)channel__w0_58322_55661420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_56097300_channel__w0_58322_55661420_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   abus__r_56097300_channel__w0_58322_55661420_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   abus__r_56097300_channel__w0_58322_55661420_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(abus__r_56097300_channel__w0_58322_55661420_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,abus__r_56097300_channel__w0_58322_55661420_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
abus__r_56097300_channel__w0_58322_55661420_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[abus__r_56097300_channel__w0_58322_55661420_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__78538380();

   return behavior;
}

Behavior __78537980;

Behavior make__78537980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78537980 = behavior;
   behavior->owner = (Object)channel__w0_58322_55661420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58330_63969900_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   _58330_63969900_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   _58330_63969900_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(_58330_63969900_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,_58330_63969900_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
_58330_63969900_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[_58330_63969900_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__78538140();

   return behavior;
}

Scope makechannel__w0_58322_55661420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58322_55661420 = scope;
   scope->owner = (Object)layer1_58_84_55662020;
   scope->name = "channel_w0:322";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_55658520();
   scope->inners[1] = makedbus__r_56097420();
   scope->inners[2] = makeabus__r_56097300();
   scope->inners[3] = makemem_51578420();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58323_55660900();
   scope->scopes[1] = makerinc_58328_55660040();
   scope->scopes[2] = makerdec_58332_55659400();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__55494920();
   scope->behaviors[1] = make__78539620();
   scope->behaviors[2] = make__78539400();
   scope->behaviors[3] = make__78538940();
   scope->behaviors[4] = make__78538740();
   scope->behaviors[5] = make__78538180();
   scope->behaviors[6] = make__78537980();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58337_55494320;

SignalI reg__0_56042820_channel__accum_58337_55494320_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makereg__0_56042820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_56042820_channel__accum_58337_55494320_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)channel__accum_58337_55494320;
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

Scope anum_58338_55493820;

Scope makeanum_58338_55493820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58338_55493820 = scope;
   scope->owner = (Object)channel__accum_58337_55494320;
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

Scope raddr_58340_55492780;

Scope makeraddr_58340_55492780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58340_55492780 = scope;
   scope->owner = (Object)channel__accum_58337_55494320;
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

Scope waddr_58343_55803080;

Scope makewaddr_58343_55803080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58343_55803080 = scope;
   scope->owner = (Object)channel__accum_58337_55494320;
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

Scope rinc_58346_55802300;

SignalI abus__r_55801680_rinc_58346_55802300_channel__accum_58337_55494320_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makeabus__r_55801680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_55801680_rinc_58346_55802300_channel__accum_58337_55494320_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)rinc_58346_55802300;
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

Scope makerinc_58346_55802300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58346_55802300 = scope;
   scope->owner = (Object)channel__accum_58337_55494320;
   scope->name = "rinc:346";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_55801680();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58350_55801440;

SignalI abus__w_55800820_winc_58350_55801440_channel__accum_58337_55494320_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makeabus__w_55800820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_55800820_winc_58350_55801440_channel__accum_58337_55494320_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)winc_58350_55801440;
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

Scope makewinc_58350_55801440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58350_55801440 = scope;
   scope->owner = (Object)channel__accum_58337_55494320;
   scope->name = "winc:350";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_55800820();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58354_55800620;

SignalI abus__r_55799800_rdec_58354_55800620_channel__accum_58337_55494320_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makeabus__r_55799800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_55799800_rdec_58354_55800620_channel__accum_58337_55494320_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)rdec_58354_55800620;
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

Scope makerdec_58354_55800620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58354_55800620 = scope;
   scope->owner = (Object)channel__accum_58337_55494320;
   scope->name = "rdec:354";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_55799800();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58358_55799540;

SignalI abus__w_55798760_wdec_58358_55799540_channel__accum_58337_55494320_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makeabus__w_55798760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_55798760_wdec_58358_55799540_channel__accum_58337_55494320_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)wdec_58358_55799540;
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

Scope makewdec_58358_55799540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58358_55799540 = scope;
   scope->owner = (Object)channel__accum_58337_55494320;
   scope->name = "wdec:358";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_55798760();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __78561100;

Behavior make__78561100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78561100 = behavior;
   behavior->owner = (Object)channel__accum_58337_55494320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_56042820_channel__accum_58337_55494320_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   reg__0_56042820_channel__accum_58337_55494320_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   reg__0_56042820_channel__accum_58337_55494320_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(reg__0_56042820_channel__accum_58337_55494320_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,reg__0_56042820_channel__accum_58337_55494320_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
reg__0_56042820_channel__accum_58337_55494320_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[reg__0_56042820_channel__accum_58337_55494320_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__78536740();

   return behavior;
}

Behavior __78560860;

Behavior make__78560860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78560860 = behavior;
   behavior->owner = (Object)channel__accum_58337_55494320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58339_64090000_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   _58339_64090000_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   _58339_64090000_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(_58339_64090000_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,_58339_64090000_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
_58339_64090000_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[_58339_64090000_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__78561060();

   return behavior;
}

Scope makechannel__accum_58337_55494320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58337_55494320 = scope;
   scope->owner = (Object)layer1_58_84_55662020;
   scope->name = "channel_accum:337";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_56042820();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58338_55493820();
   scope->scopes[1] = makeraddr_58340_55492780();
   scope->scopes[2] = makewaddr_58343_55803080();
   scope->scopes[3] = makerinc_58346_55802300();
   scope->scopes[4] = makewinc_58350_55801440();
   scope->scopes[5] = makerdec_58354_55800620();
   scope->scopes[6] = makewdec_58358_55799540();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__78561100();
   scope->behaviors[1] = make__78560860();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58362_57282820;

SignalI lv0_46364820_mac__n1_58362_57282820_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makelv0_46364820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_46364820_mac__n1_58362_57282820_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)mac__n1_58362_57282820;
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

SignalI av0_48230000_mac__n1_58362_57282820_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makeav0_48230000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_48230000_mac__n1_58362_57282820_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)mac__n1_58362_57282820;
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

SignalI rv_49895540_mac__n1_58362_57282820_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makerv_49895540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_49895540_mac__n1_58362_57282820_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)mac__n1_58362_57282820;
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

SignalI lvok0_49895480_mac__n1_58362_57282820_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makelvok0_49895480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_49895480_mac__n1_58362_57282820_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)mac__n1_58362_57282820;
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

SignalI rvok_49895440_mac__n1_58362_57282820_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makervok_49895440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_49895440_mac__n1_58362_57282820_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)mac__n1_58362_57282820;
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

SignalI wok0_49895360_mac__n1_58362_57282820_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makewok0_49895360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok0_49895360_mac__n1_58362_57282820_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)mac__n1_58362_57282820;
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

SignalI run_49895220_mac__n1_58362_57282820_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makerun_49895220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_49895220_mac__n1_58362_57282820_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)mac__n1_58362_57282820;
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

Behavior __56139260;

Behavior make__56139260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56139260 = behavior;
   behavior->owner = (Object)mac__n1_58362_57282820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_55776620_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   clk_55776620_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_pos += 1;
   clk_55776620_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->pos = realloc(clk_55776620_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->pos,clk_55776620_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_pos*sizeof(Object));
clk_55776620_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->pos[clk_55776620_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_pos-1] = (Object)behavior;
   behavior->block = make__49894920();

   return behavior;
}

Scope makemac__n1_58362_57282820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58362_57282820 = scope;
   scope->owner = (Object)layer1_58_84_55662020;
   scope->name = "mac_n1:362";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_46364820();
   scope->inners[1] = makeav0_48230000();
   scope->inners[2] = makerv_49895540();
   scope->inners[3] = makelvok0_49895480();
   scope->inners[4] = makervok_49895440();
   scope->inners[5] = makewok0_49895360();
   scope->inners[6] = makerun_49895220();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__56139260();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__b0_58367_56139020;

SignalI trig__r_56136100_channel__b0_58367_56139020_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI maketrig__r_56136100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_56136100_channel__b0_58367_56139020_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)channel__b0_58367_56139020;
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

SignalI dbus__r_56331120_channel__b0_58367_56139020_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makedbus__r_56331120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_56331120_channel__b0_58367_56139020_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)channel__b0_58367_56139020;
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

SignalI abus__r_56331000_channel__b0_58367_56139020_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makeabus__r_56331000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_56331000_channel__b0_58367_56139020_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)channel__b0_58367_56139020;
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

SignalI mem_57034160_channel__b0_58367_56139020_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makemem_57034160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_57034160_channel__b0_58367_56139020_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)channel__b0_58367_56139020;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(make__78806020(),signalI->c_value);
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope raddr_58368_56138500;

Scope makeraddr_58368_56138500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58368_56138500 = scope;
   scope->owner = (Object)channel__b0_58367_56139020;
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

Scope rinc_58373_56137300;

Scope makerinc_58373_56137300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58373_56137300 = scope;
   scope->owner = (Object)channel__b0_58367_56139020;
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

Scope rdec_58377_56136740;

Scope makerdec_58377_56136740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58377_56136740 = scope;
   scope->owner = (Object)channel__b0_58367_56139020;
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

Behavior __62339900;

Behavior make__62339900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62339900 = behavior;
   behavior->owner = (Object)channel__b0_58367_56139020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_55776620_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   clk_55776620_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_neg += 1;
   clk_55776620_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->neg = realloc(clk_55776620_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->neg,clk_55776620_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_neg*sizeof(Object));
clk_55776620_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->neg[clk_55776620_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_neg-1] = (Object)behavior;
   behavior->block = make__54042300();

   return behavior;
}

Behavior __78558660;

Behavior make__78558660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78558660 = behavior;
   behavior->owner = (Object)channel__b0_58367_56139020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_56331120_channel__b0_58367_56139020_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   dbus__r_56331120_channel__b0_58367_56139020_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   dbus__r_56331120_channel__b0_58367_56139020_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(dbus__r_56331120_channel__b0_58367_56139020_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,dbus__r_56331120_channel__b0_58367_56139020_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
dbus__r_56331120_channel__b0_58367_56139020_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[dbus__r_56331120_channel__b0_58367_56139020_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__78558860();

   return behavior;
}

Behavior __78558400;

Behavior make__78558400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78558400 = behavior;
   behavior->owner = (Object)channel__b0_58367_56139020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58371_64185520_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   _58371_64185520_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   _58371_64185520_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(_58371_64185520_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,_58371_64185520_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
_58371_64185520_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[_58371_64185520_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__78558620();

   return behavior;
}

Behavior __78557940;

Behavior make__78557940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78557940 = behavior;
   behavior->owner = (Object)channel__b0_58367_56139020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_56136100_channel__b0_58367_56139020_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   trig__r_56136100_channel__b0_58367_56139020_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   trig__r_56136100_channel__b0_58367_56139020_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(trig__r_56136100_channel__b0_58367_56139020_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,trig__r_56136100_channel__b0_58367_56139020_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
trig__r_56136100_channel__b0_58367_56139020_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[trig__r_56136100_channel__b0_58367_56139020_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__78558100();

   return behavior;
}

Behavior __78557740;

Behavior make__78557740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78557740 = behavior;
   behavior->owner = (Object)channel__b0_58367_56139020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58369_64185480_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   _58369_64185480_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   _58369_64185480_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(_58369_64185480_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,_58369_64185480_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
_58369_64185480_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[_58369_64185480_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__78557900();

   return behavior;
}

Behavior __78557260;

Behavior make__78557260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78557260 = behavior;
   behavior->owner = (Object)channel__b0_58367_56139020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_56331000_channel__b0_58367_56139020_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   abus__r_56331000_channel__b0_58367_56139020_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   abus__r_56331000_channel__b0_58367_56139020_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(abus__r_56331000_channel__b0_58367_56139020_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,abus__r_56331000_channel__b0_58367_56139020_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
abus__r_56331000_channel__b0_58367_56139020_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[abus__r_56331000_channel__b0_58367_56139020_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__78557420();

   return behavior;
}

Behavior __78557060;

Behavior make__78557060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78557060 = behavior;
   behavior->owner = (Object)channel__b0_58367_56139020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58370_64185400_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   _58370_64185400_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   _58370_64185400_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(_58370_64185400_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,_58370_64185400_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
_58370_64185400_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[_58370_64185400_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__78557220();

   return behavior;
}

Scope makechannel__b0_58367_56139020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__b0_58367_56139020 = scope;
   scope->owner = (Object)layer1_58_84_55662020;
   scope->name = "channel_b0:367";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_56136100();
   scope->inners[1] = makedbus__r_56331120();
   scope->inners[2] = makeabus__r_56331000();
   scope->inners[3] = makemem_57034160();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58368_56138500();
   scope->scopes[1] = makerinc_58373_56137300();
   scope->scopes[2] = makerdec_58377_56136740();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__62339900();
   scope->behaviors[1] = make__78558660();
   scope->behaviors[2] = make__78558400();
   scope->behaviors[3] = make__78557940();
   scope->behaviors[4] = make__78557740();
   scope->behaviors[5] = make__78557260();
   scope->behaviors[6] = make__78557060();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58382_62339780;

SignalI reg__0_62398960_channel__z_58382_62339780_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makereg__0_62398960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_62398960_channel__z_58382_62339780_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)channel__z_58382_62339780;
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

Scope anum_58383_62339480;

Scope makeanum_58383_62339480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58383_62339480 = scope;
   scope->owner = (Object)channel__z_58382_62339780;
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

Scope raddr_58385_62339060;

Scope makeraddr_58385_62339060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58385_62339060 = scope;
   scope->owner = (Object)channel__z_58382_62339780;
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

Scope waddr_58388_62338640;

Scope makewaddr_58388_62338640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58388_62338640 = scope;
   scope->owner = (Object)channel__z_58382_62339780;
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

Scope rinc_58391_62338220;

SignalI abus__r_62337840_rinc_58391_62338220_channel__z_58382_62339780_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makeabus__r_62337840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_62337840_rinc_58391_62338220_channel__z_58382_62339780_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)rinc_58391_62338220;
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

Scope makerinc_58391_62338220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58391_62338220 = scope;
   scope->owner = (Object)channel__z_58382_62339780;
   scope->name = "rinc:391";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_62337840();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58394_62337720;

SignalI abus__w_62337340_winc_58394_62337720_channel__z_58382_62339780_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makeabus__w_62337340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_62337340_winc_58394_62337720_channel__z_58382_62339780_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)winc_58394_62337720;
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

Scope makewinc_58394_62337720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58394_62337720 = scope;
   scope->owner = (Object)channel__z_58382_62339780;
   scope->name = "winc:394";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_62337340();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58397_62337220;

SignalI abus__r_62336840_rdec_58397_62337220_channel__z_58382_62339780_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makeabus__r_62336840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_62336840_rdec_58397_62337220_channel__z_58382_62339780_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)rdec_58397_62337220;
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

Scope makerdec_58397_62337220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58397_62337220 = scope;
   scope->owner = (Object)channel__z_58382_62339780;
   scope->name = "rdec:397";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_62336840();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58401_62336720;

SignalI abus__w_62336340_wdec_58401_62336720_channel__z_58382_62339780_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makeabus__w_62336340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_62336340_wdec_58401_62336720_channel__z_58382_62339780_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)wdec_58401_62336720;
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

Scope makewdec_58401_62336720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58401_62336720 = scope;
   scope->owner = (Object)channel__z_58382_62339780;
   scope->name = "wdec:401";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_62336340();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __78555580;

Behavior make__78555580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78555580 = behavior;
   behavior->owner = (Object)channel__z_58382_62339780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_62398960_channel__z_58382_62339780_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   reg__0_62398960_channel__z_58382_62339780_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   reg__0_62398960_channel__z_58382_62339780_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(reg__0_62398960_channel__z_58382_62339780_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,reg__0_62398960_channel__z_58382_62339780_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
reg__0_62398960_channel__z_58382_62339780_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[reg__0_62398960_channel__z_58382_62339780_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__78555740();

   return behavior;
}

Behavior __78555360;

Behavior make__78555360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78555360 = behavior;
   behavior->owner = (Object)channel__z_58382_62339780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58384_64338200_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   _58384_64338200_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   _58384_64338200_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(_58384_64338200_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,_58384_64338200_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
_58384_64338200_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[_58384_64338200_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__78555540();

   return behavior;
}

Scope makechannel__z_58382_62339780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58382_62339780 = scope;
   scope->owner = (Object)layer1_58_84_55662020;
   scope->name = "channel_z:382";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_62398960();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58383_62339480();
   scope->scopes[1] = makeraddr_58385_62339060();
   scope->scopes[2] = makewaddr_58388_62338640();
   scope->scopes[3] = makerinc_58391_62338220();
   scope->scopes[4] = makewinc_58394_62337720();
   scope->scopes[5] = makerdec_58397_62337220();
   scope->scopes[6] = makewdec_58401_62336720();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__78555580();
   scope->behaviors[1] = make__78555360();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58405_62614300;

SignalI lv0_62701300_add__n_58405_62614300_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makelv0_62701300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_62701300_add__n_58405_62614300_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)add__n_58405_62614300;
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

SignalI rv0_62780440_add__n_58405_62614300_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makerv0_62780440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_62780440_add__n_58405_62614300_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)add__n_58405_62614300;
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

SignalI lvok0_62780420_add__n_58405_62614300_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makelvok0_62780420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_62780420_add__n_58405_62614300_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)add__n_58405_62614300;
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

SignalI rvok0_62780400_add__n_58405_62614300_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makervok0_62780400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_62780400_add__n_58405_62614300_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)add__n_58405_62614300;
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

SignalI run_62780380_add__n_58405_62614300_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makerun_62780380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_62780380_add__n_58405_62614300_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)add__n_58405_62614300;
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

Behavior __63874740;

Behavior make__63874740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63874740 = behavior;
   behavior->owner = (Object)add__n_58405_62614300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_55776620_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   clk_55776620_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_pos += 1;
   clk_55776620_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->pos = realloc(clk_55776620_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->pos,clk_55776620_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_pos*sizeof(Object));
clk_55776620_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->pos[clk_55776620_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_pos-1] = (Object)behavior;
   behavior->block = make__62780260();

   return behavior;
}

Scope makeadd__n_58405_62614300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58405_62614300 = scope;
   scope->owner = (Object)layer1_58_84_55662020;
   scope->name = "add_n:405";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_62701300();
   scope->inners[1] = makerv0_62780440();
   scope->inners[2] = makelvok0_62780420();
   scope->inners[3] = makervok0_62780400();
   scope->inners[4] = makerun_62780380();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__63874740();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __54369000;

Behavior make__54369000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54369000 = behavior;
   behavior->owner = (Object)layer1_58_84_55662020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_55776620_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   clk_55776620_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_pos += 1;
   clk_55776620_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->pos = realloc(clk_55776620_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->pos,clk_55776620_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_pos*sizeof(Object));
clk_55776620_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->pos[clk_55776620_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_pos-1] = (Object)behavior;
   behavior->block = make__54347420();

   return behavior;
}

Behavior __55105220;

Behavior make__55105220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55105220 = behavior;
   behavior->owner = (Object)layer1_58_84_55662020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_55776620_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   clk_55776620_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_pos += 1;
   clk_55776620_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->pos = realloc(clk_55776620_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->pos,clk_55776620_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_pos*sizeof(Object));
clk_55776620_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->pos[clk_55776620_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_pos-1] = (Object)behavior;
   behavior->block = make__54368480();

   return behavior;
}

Behavior __55740860;

Behavior make__55740860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55740860 = behavior;
   behavior->owner = (Object)layer1_58_84_55662020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_55776620_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   clk_55776620_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_pos += 1;
   clk_55776620_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->pos = realloc(clk_55776620_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->pos,clk_55776620_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_pos*sizeof(Object));
clk_55776620_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->pos[clk_55776620_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_pos-1] = (Object)behavior;
   behavior->block = make__55104920();

   return behavior;
}

Behavior __78522040;

Behavior make__78522040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78522040 = behavior;
   behavior->owner = (Object)layer1_58_84_55662020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_55776380_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   req_55776380_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   req_55776380_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(req_55776380_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,req_55776380_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
req_55776380_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[req_55776380_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_63874560_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   ack__mac_63874560_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   ack__mac_63874560_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(ack__mac_63874560_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,ack__mac_63874560_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
ack__mac_63874560_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[ack__mac_63874560_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__78522340();

   return behavior;
}

Behavior __78540740;

Behavior make__78540740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78540740 = behavior;
   behavior->owner = (Object)layer1_58_84_55662020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_55776620_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   clk_55776620_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   clk_55776620_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(clk_55776620_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,clk_55776620_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
clk_55776620_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[clk_55776620_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_63874580_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   ack_63874580_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   ack_63874580_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(ack_63874580_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,ack_63874580_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
ack_63874580_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[ack_63874580_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_55776560_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   rst_55776560_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   rst_55776560_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(rst_55776560_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,rst_55776560_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
rst_55776560_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[rst_55776560_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_64400960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   value__z0_64400960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   value__z0_64400960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(value__z0_64400960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,value__z0_64400960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
value__z0_64400960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[value__z0_64400960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__a0_64512840_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   ack__a0_64512840_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   ack__a0_64512840_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(ack__a0_64512840_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,ack__a0_64512840_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
ack__a0_64512840_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[ack__a0_64512840_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__78522600();

   return behavior;
}

Behavior __78540560;

Behavior make__78540560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78540560 = behavior;
   behavior->owner = (Object)layer1_58_84_55662020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_64613520_counter_58_8400_64615440_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   ack__mac_64613520_counter_58_8400_64615440_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   ack__mac_64613520_counter_58_8400_64615440_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(ack__mac_64613520_counter_58_8400_64615440_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,ack__mac_64613520_counter_58_8400_64615440_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
ack__mac_64613520_counter_58_8400_64615440_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[ack__mac_64613520_counter_58_8400_64615440_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_55776560_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   rst_55776560_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   rst_55776560_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(rst_55776560_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,rst_55776560_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
rst_55776560_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[rst_55776560_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,a_51506440_func0_58_8400_48722960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   a_51506440_func0_58_8400_48722960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   a_51506440_func0_58_8400_48722960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(a_51506440_func0_58_8400_48722960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,a_51506440_func0_58_8400_48722960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
a_51506440_func0_58_8400_48722960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[a_51506440_func0_58_8400_48722960_layer1_58_84_55662020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__78522540();

   return behavior;
}

Scope makelayer1_58_84_55662020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer1_58_84_55662020 = scope;
   scope->owner = (Object)layer1_58_841_55740300;
   scope->name = "layer1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_64613380();
   scope->systemIs[1] = makefunc0_51505580();
   scope->num_inners = 17;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_63874600();
   scope->inners[1] = makeack_63874580();
   scope->inners[2] = makeack__mac_63874560();
   scope->inners[3] = makeack__add_63874540();
   scope->inners[4] = make_58331_63970000();
   scope->inners[5] = make_58329_63969980();
   scope->inners[6] = make_58330_63969900();
   scope->inners[7] = make_58339_64090000();
   scope->inners[8] = make_58371_64185520();
   scope->inners[9] = make_58372_64185500();
   scope->inners[10] = make_58369_64185480();
   scope->inners[11] = make_58370_64185400();
   scope->inners[12] = make_58384_64338200();
   scope->inners[13] = makevalue__z0_64400960();
   scope->inners[14] = makevalue__a0_64512880();
   scope->inners[15] = makeflag__z0_64512860();
   scope->inners[16] = makeack__a0_64512840();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58322_55661420();
   scope->scopes[1] = makechannel__accum_58337_55494320();
   scope->scopes[2] = makemac__n1_58362_57282820();
   scope->scopes[3] = makechannel__b0_58367_56139020();
   scope->scopes[4] = makechannel__z_58382_62339780();
   scope->scopes[5] = makeadd__n_58405_62614300();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54369000();
   scope->behaviors[1] = make__55105220();
   scope->behaviors[2] = make__55740860();
   scope->behaviors[3] = make__78522040();
   scope->behaviors[4] = make__78540740();
   scope->behaviors[5] = make__78540560();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer1_58_841_55740300() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer1_58_841_55740300 = systemT;
systemT->owner = NULL;
   systemT->name = "layer1:T1";
   systemT->num_inputs = 5;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_55776620();
   systemT->inputs[1] = makerst_55776560();
   systemT->inputs[2] = makereq_55776380();
   systemT->inputs[3] = make_58165_56059740();
   systemT->inputs[4] = make_58166_56259220();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_56259160();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_58167_56258780();
   systemT->inouts[1] = make_58131_56595020();

   systemT->scope = makelayer1_58_84_55662020();

   return systemT;
}