#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer1_58_840_57511240;

SignalI clk_57508980_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeclk_57508980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_57508980_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer1_58_840_57511240;
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

SignalI rst_57508960_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makerst_57508960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_57508960_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer1_58_840_57511240;
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

SignalI fill_57508940_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makefill_57508940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_57508940_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer1_58_840_57511240;
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

SignalI req_57508920_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makereq_57508920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_57508920_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer1_58_840_57511240;
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

SignalI _5866_57734960_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI make_5866_57734960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5866_57734960_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer1_58_840_57511240;
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

SignalI _5867_57799260_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI make_5867_57799260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5867_57799260_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer1_58_840_57511240;
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

SignalI ack__layer_57799220_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeack__layer_57799220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_57799220_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer1_58_840_57511240;
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

SignalI _5868_57799100_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI make_5868_57799100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5868_57799100_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer1_58_840_57511240;
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

SignalI _5832_57877880_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI make_5832_57877880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5832_57877880_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer1_58_840_57511240;
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

Block __52301440;

Block __52300440;

Block __52299460;

void code__52299460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58336_59756840_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,value__z0_59907880_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59657400(),flag__z0_60116540_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__52299460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52299460 = block;
   block->owner = (Object)__52300440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52299460;

   return block;
};

void code__52300440() {
 code__52299460();
}

Block make__52300440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52300440 = block;
   block->owner = (Object)__52301440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52300440;

   return block;
};

Block __52301240;

void code__52301240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59657300(),flag__z0_60116540_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__52301240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52301240 = block;
   block->owner = (Object)__52301440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52301240;

   return block;
};

void code__52301440() {
   {
      Value cond = ack__add_59391220_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52300440();
   }
   else {
  code__52301240();
   }
      }
   }
}

Block make__52301440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52301440 = block;
   block->owner = (Object)__52871580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52301440;

   return block;
};

Block __52871380;

Block __52894740;

Block __52894340;

void code__52894340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_60116560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,_5832_57877880_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59657080(),ack__a0_60116520_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__52894340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52894340 = block;
   block->owner = (Object)__52894740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52894340;

   return block;
};

void code__52894740() {
 code__52894340();
}

Block make__52894740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52894740 = block;
   block->owner = (Object)__52871380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52894740;

   return block;
};

void code__52871380() {
   {
      Value cond = flag__z0_60116540_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52894740();
   }
      }
   }
}

Block make__52871380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52871380 = block;
   block->owner = (Object)__57286600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52871380;

   return block;
};

Block __57286440;

Block __57286280;

Block __57285920;

void code__57285920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59656860(),_58325_60208720_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__57285920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57285920 = block;
   block->owner = (Object)__57286280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57285920;

   return block;
};

void code__57286280() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57508960_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59656980();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57285920();
   }
      }
   }
}

Block make__57286280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57286280 = block;
   block->owner = (Object)__57286440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57286280;

   return block;
};

Block __57285260;

Block __57284880;

void code__57284880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59656700(),_58269_60208580_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__57284880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57284880 = block;
   block->owner = (Object)__57285260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57284880;

   return block;
};

void code__57285260() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57508960_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59656780();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57284880();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59656640(),_58268_60208700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__57285260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57285260 = block;
   block->owner = (Object)__57286440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57285260;

   return block;
};

Block __57284100;

Block __57283900;

Block __57283520;

void code__57283520() {
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
                  src0 = _58269_60208580_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59656380();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58269_60208580_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59656280(),_58268_60208700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59656220(),_58270_60309200_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__57283520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57283520 = block;
   block->owner = (Object)__57283900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57283520;

   return block;
};

void code__57283900() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57508960_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59656520();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57283520();
   }
      }
   }
}

Block make__57283900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57283900 = block;
   block->owner = (Object)__57284100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57283900;

   return block;
};

Block __57394820;

Block __57394280;

Block __57393780;

void code__57393780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59655880(),_58324_60209040_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__57393780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57393780 = block;
   block->owner = (Object)__57394280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57393780;

   return block;
};

void code__57394280() {
{
      Value value = _58325_60208720_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__59655940())) {
    code__57393780();
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
                  src0 = _58325_60208720_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59655640();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),_58325_60208720_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__57394280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57394280 = block;
   block->owner = (Object)__57394820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57394280;

   return block;
};

void code__57394820() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57508960_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59656140();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57394280();
   }
      }
   }
}

Block make__57394820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57394820 = block;
   block->owner = (Object)__57284100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57394820;

   return block;
};

void code__57284100() {
 code__57283900();
 code__57394820();
}

Block make__57284100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57284100 = block;
   block->owner = (Object)__57286440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57284100;

   return block;
};

void code__57286440() {
 code__57286280();
 code__57285260();
   {
      Value cond = fill_57508940_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57284100();
   }
      }
   }
}

Block make__57286440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57286440 = block;
   block->owner = (Object)__57511560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57286440;

   return block;
};

Block __59490220;

void code__59490220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_57508920_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_59391240_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_59391280_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__59490220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59490220 = block;
   block->owner = (Object)__59489980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59490220;

   return block;
};

Block __59465900;

void code__59465900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_57508980_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,clk_60301760_counter_58_8400_60303700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_59391260_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,ack_60301740_counter_58_8400_60303700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_57508960_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,rst_60301720_counter_58_8400_60303700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_59907880_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,z__value_49521520_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__a0_60116520_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,ack__layer_57799220_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__59465900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59465900 = block;
   block->owner = (Object)__59483440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59465900;

   return block;
};

Block __59465840;

void code__59465840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_60301680_counter_58_8400_60303700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,ack__mac_59391240_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_49911000_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,value__a0_60116560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__59465840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59465840 = block;
   block->owner = (Object)__59483220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59465840;

   return block;
};

Block __58669260;

Block __59070000;

void code__59070000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_57980120_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,make_ref_rangeS(mem_58034440_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280,value2integer(abus__w_57979960_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value),value2integer(abus__w_57979960_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__59070000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59070000 = block;
   block->owner = (Object)__58669260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59070000;

   return block;
};

void code__58669260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_58034440_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
            idx = value2integer(abus__r_57980040_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_57900980_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_57813700_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59070000();
   }
      }
   }
}

Block make__58669260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58669260 = block;
   block->owner = (Object)__59503220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58669260;

   return block;
};

Block __59482360;

void code__59482360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_57900980_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,_58266_59485020_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__59482360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59482360 = block;
   block->owner = (Object)__59482120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59482360;

   return block;
};

Block __59506600;

void code__59506600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58266_59485020_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,dbus__r_57900980_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__59506600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59506600 = block;
   block->owner = (Object)__59506380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59506600;

   return block;
};

Block __59506080;

void code__59506080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_57813720_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,_58264_59485000_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__59506080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59506080 = block;
   block->owner = (Object)__59505880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59506080;

   return block;
};

Block __59505840;

void code__59505840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58264_59485000_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,trig__r_57813720_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__59505840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59505840 = block;
   block->owner = (Object)__59505620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59505840;

   return block;
};

Block __59505320;

void code__59505320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_57980040_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,_58265_59484920_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__59505320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59505320 = block;
   block->owner = (Object)__59505120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59505320;

   return block;
};

Block __59505080;

void code__59505080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58265_59484920_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,abus__r_57980040_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__59505080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59505080 = block;
   block->owner = (Object)__59504860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59505080;

   return block;
};

Block __59504460;

void code__59504460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_57813700_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,_58268_60208700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__59504460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59504460 = block;
   block->owner = (Object)__59504060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59504460;

   return block;
};

Block __59504000;

void code__59504000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58268_60208700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,trig__w_57813700_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__59504000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59504000 = block;
   block->owner = (Object)__59503740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59504000;

   return block;
};

Block __59503180;

void code__59503180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_57979960_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,_58269_60208580_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__59503180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59503180 = block;
   block->owner = (Object)__59502840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59503180;

   return block;
};

Block __59502620;

void code__59502620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58269_60208580_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,abus__w_57979960_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__59502620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59502620 = block;
   block->owner = (Object)__59502440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59502620;

   return block;
};

Block __59501700;

void code__59501700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_57980120_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,_58270_60309200_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__59501700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59501700 = block;
   block->owner = (Object)__59501360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59501700;

   return block;
};

Block __59501320;

void code__59501320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58270_60309200_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,dbus__w_57980120_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__59501320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59501320 = block;
   block->owner = (Object)__59501080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59501320;

   return block;
};

Block __59522960;

void code__59522960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_59611400_channel__accum_58281_59503100_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,_58283_59593560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__59522960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59522960 = block;
   block->owner = (Object)__59522800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59522960;

   return block;
};

Block __59522760;

void code__59522760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58283_59593560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,reg__0_59611400_channel__accum_58281_59503100_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__59522760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59522760 = block;
   block->owner = (Object)__59522580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59522760;

   return block;
};

Block __60211080;

Block __60210920;

Block __60210600;

void code__60210600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59639740(),_58265_59484920_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__60210600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60210600 = block;
   block->owner = (Object)__60210920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60210600;

   return block;
};

void code__60210920() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57508960_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59639840();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60210600();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59639680(),_58264_59485000_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__60210920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60210920 = block;
   block->owner = (Object)__60211080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60210920;

   return block;
};

Block __60209980;

Block __60209660;

void code__60209660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59639460(),_5868_57799100_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__60209660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60209660 = block;
   block->owner = (Object)__60209980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60209660;

   return block;
};

void code__60209980() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57508960_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59639540();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60209660();
   }
      }
   }
}

Block make__60209980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60209980 = block;
   block->owner = (Object)__60211080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60209980;

   return block;
};

Block __60208800;

void code__60208800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59639180(),rvok_60186680_mac__n1_58306_59753060_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59639120(),lvok0_60186700_mac__n1_58306_59753060_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59639060(),av0_60115780_mac__n1_58306_59753060_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__60208800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60208800 = block;
   block->owner = (Object)__60211080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60208800;

   return block;
};

Block __60254340;

Block __60254020;

Block __60253700;

Block __60253240;

void code__60253240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5866_57734960_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,rv_60186720_mac__n1_58306_59753060_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__60253240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60253240 = block;
   block->owner = (Object)__60253700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60253240;

   return block;
};

Block __60460280;

void code__60460280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5867_57799260_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,rv_60186720_mac__n1_58306_59753060_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__60460280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60460280 = block;
   block->owner = (Object)__60253700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60460280;

   return block;
};

void code__60253700() {
{
      Value value = _5868_57799100_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__59638640())) {
    code__60253240();
         }
         else if (value2integer(value) == value2integer(make__59638540())) {
    code__60460280();
         }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59638380(),rvok_60186680_mac__n1_58306_59753060_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
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
                  src0 = _5868_57799100_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59638240();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5868_57799100_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__60253700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60253700 = block;
   block->owner = (Object)__60254020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60253700;

   return block;
};

void code__60254020() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57508960_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59638760();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60253700();
   }
      }
   }
}

Block make__60254020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60254020 = block;
   block->owner = (Object)__60254340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60254020;

   return block;
};

Block __48798140;

Block __48797640;

Block __48796620;

void code__48796620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58266_59485020_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,lv0_59905580_mac__n1_58306_59753060_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59662220(),lvok0_60186700_mac__n1_58306_59753060_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__48796620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48796620 = block;
   block->owner = (Object)__48797640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48796620;

   return block;
};

void code__48797640() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58264_59485000_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59637940();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48796620();
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
                  src0 = _58265_59484920_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59662000();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58265_59484920_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59661900(),_58264_59485000_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__48797640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48797640 = block;
   block->owner = (Object)__48798140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48797640;

   return block;
};

void code__48798140() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57508960_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59638060();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48797640();
   }
      }
   }
}

Block make__48798140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48798140 = block;
   block->owner = (Object)__60254340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48798140;

   return block;
};

Block __49606560;

Block __49604980;

Block __49603220;

void code__49603220() {
}

Block make__49603220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49603220 = block;
   block->owner = (Object)__49604980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49603220;

   return block;
};

Block __52590960;

void code__52590960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_60115780_mac__n1_58306_59753060_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,_58283_59593560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__52590960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52590960 = block;
   block->owner = (Object)__49604980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52590960;

   return block;
};

void code__49604980() {
 code__49603220();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av0_60115780_mac__n1_58306_59753060_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
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
                              src0 = lv0_59905580_mac__n1_58306_59753060_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_60186720_mac__n1_58306_59753060_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59661240();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_60115780_mac__n1_58306_59753060_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
 code__52590960();
}

Block make__49604980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49604980 = block;
   block->owner = (Object)__49606560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49604980;

   return block;
};

void code__49606560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59661740(),ack_59391260_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59661680(),run_60186660_mac__n1_58306_59753060_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
 code__49604980();
}

Block make__49606560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49606560 = block;
   block->owner = (Object)__60254340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49606560;

   return block;
};

void code__60254340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59638840(),run_60186660_mac__n1_58306_59753060_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
 code__60254020();
 code__48798140();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_60186700_mac__n1_58306_59753060_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
         src1 = rvok_60186680_mac__n1_58306_59753060_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49606560();
   }
      }
   }
}

Block make__60254340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60254340 = block;
   block->owner = (Object)__60211080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60254340;

   return block;
};

void code__60211080() {
 code__60210920();
 code__60209980();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59639400(),ack_59391260_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59639340(),run_60186660_mac__n1_58306_59753060_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = run_60186660_mac__n1_58306_59753060_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60208800();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_59391280_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
         src1 = run_60186660_mac__n1_58306_59753060_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60254340();
   }
      }
   }
}

Block make__60211080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60211080 = block;
   block->owner = (Object)__53024920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60211080;

   return block;
};

Block __59520480;

void code__59520480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_57227780_channel__bias_58311_53024760_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,_58313_59654740_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__59520480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59520480 = block;
   block->owner = (Object)__59520300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59520480;

   return block;
};

Block __59520260;

void code__59520260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58313_59654740_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,reg__0_57227780_channel__bias_58311_53024760_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__59520260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59520260 = block;
   block->owner = (Object)__59520060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59520260;

   return block;
};

Block __59519620;

void code__59519620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_57227780_channel__bias_58311_53024760_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,_58324_60209040_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__59519620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59519620 = block;
   block->owner = (Object)__59519440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59519620;

   return block;
};

Block __59519380;

void code__59519380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58324_60209040_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,reg__0_57227780_channel__bias_58311_53024760_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__59519380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59519380 = block;
   block->owner = (Object)__59519140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59519380;

   return block;
};

Block __59517280;

void code__59517280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_53019660_winc_58323_53020420_channel__bias_58311_53024760_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,_58325_60208720_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__59517280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59517280 = block;
   block->owner = (Object)__59517100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59517280;

   return block;
};

Block __59517060;

void code__59517060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58325_60208720_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,abus__w_53019660_winc_58323_53020420_channel__bias_58311_53024760_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__59517060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59517060 = block;
   block->owner = (Object)__59516820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59517060;

   return block;
};

Block __59515460;

void code__59515460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_57747080_channel__z_58334_57632360_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,_58336_59756840_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__59515460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59515460 = block;
   block->owner = (Object)__59515240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59515460;

   return block;
};

Block __59515200;

void code__59515200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58336_59756840_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,reg__0_57747080_channel__z_58334_57632360_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__59515200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59515200 = block;
   block->owner = (Object)__59515040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59515200;

   return block;
};

Block __58087380;

Block __58086240;

Block __58085920;

void code__58085920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58283_59593560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,lv0_57977280_add__n_58357_57900120_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59659420(),lvok0_58087580_add__n_58357_57900120_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__58085920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58085920 = block;
   block->owner = (Object)__58086240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58085920;

   return block;
};

Block __58469380;

void code__58469380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58313_59654740_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value,rv0_58087600_add__n_58357_57900120_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59659260(),rvok0_58087540_add__n_58357_57900120_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__58469380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58469380 = block;
   block->owner = (Object)__58086240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58469380;

   return block;
};

Block __58681200;

Block __58680660;

void code__58680660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_57977280_add__n_58357_57900120_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
      src1 = rv0_58087600_add__n_58357_57900120_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58336_59756840_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__58680660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58680660 = block;
   block->owner = (Object)__58681200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58680660;

   return block;
};

void code__58681200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59659040(),run_58087520_add__n_58357_57900120_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59658980(),ack__add_59391220_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
 code__58680660();
}

Block make__58681200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58681200 = block;
   block->owner = (Object)__58086240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58681200;

   return block;
};

void code__58086240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59659580(),run_58087520_add__n_58357_57900120_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
 code__58085920();
 code__58469380();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_58087580_add__n_58357_57900120_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
         src1 = rvok0_58087540_add__n_58357_57900120_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58681200();
   }
      }
   }
}

Block make__58086240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58086240 = block;
   block->owner = (Object)__58087380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58086240;

   return block;
};

Block __58086860;

void code__58086860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59658740(),lvok0_58087580_add__n_58357_57900120_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59658680(),rvok0_58087540_add__n_58357_57900120_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
}

Block make__58086860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58086860 = block;
   block->owner = (Object)__58087380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58086860;

   return block;
};

void code__58087380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59659860(),ack__add_59391220_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59659780(),run_58087520_add__n_58357_57900120_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_59391240_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
         src1 = run_58087520_add__n_58357_57900120_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58086240();
   }
   else {
  code__58086860();
   }
      }
   }
}

Block make__58087380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58087380 = block;
   block->owner = (Object)__59391420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58087380;

   return block;
};

Value make__59639840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59639740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59639680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59639540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59639460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59639400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59639340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59639180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59639120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59639060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__59638840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59638760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59638640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59638540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59638380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59638240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59638060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59637940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59662220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59662000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59661900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59661740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59661680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59661240() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59659860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59659780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59659580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59659420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59659260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59659040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59658980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59658740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59658680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59657400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59657300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59657080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59656980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59656860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__59656780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59656700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59656640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59656520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59656380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59656280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59656220() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__59656140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59655940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__59655880() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__59655640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope layer1_58_84_57816860;

SignalI req__mac_59391280_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makereq__mac_59391280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_59391280_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer1_58_84_57816860;
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

SignalI ack_59391260_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeack_59391260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_59391260_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer1_58_84_57816860;
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

SignalI ack__mac_59391240_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeack__mac_59391240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_59391240_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer1_58_84_57816860;
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

SignalI ack__add_59391220_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeack__add_59391220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_59391220_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer1_58_84_57816860;
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

SignalI _58266_59485020_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI make_58266_59485020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58266_59485020_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer1_58_84_57816860;
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

SignalI _58264_59485000_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI make_58264_59485000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58264_59485000_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer1_58_84_57816860;
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

SignalI _58265_59484920_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI make_58265_59484920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58265_59484920_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer1_58_84_57816860;
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

SignalI _58283_59593560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI make_58283_59593560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58283_59593560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer1_58_84_57816860;
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

SignalI _58313_59654740_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI make_58313_59654740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58313_59654740_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer1_58_84_57816860;
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

SignalI _58336_59756840_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI make_58336_59756840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58336_59756840_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer1_58_84_57816860;
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

SignalI value__z0_59907880_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makevalue__z0_59907880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_59907880_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer1_58_84_57816860;
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

SignalI value__a0_60116560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makevalue__a0_60116560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_60116560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer1_58_84_57816860;
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

SignalI flag__z0_60116540_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeflag__z0_60116540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_60116540_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer1_58_84_57816860;
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

SignalI ack__a0_60116520_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeack__a0_60116520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_60116520_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer1_58_84_57816860;
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

SignalI _58324_60209040_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI make_58324_60209040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58324_60209040_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer1_58_84_57816860;
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

SignalI _58325_60208720_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI make_58325_60208720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58325_60208720_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer1_58_84_57816860;
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

SignalI _58268_60208700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI make_58268_60208700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58268_60208700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer1_58_84_57816860;
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

SignalI _58269_60208580_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI make_58269_60208580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58269_60208580_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer1_58_84_57816860;
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

SignalI _58270_60309200_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI make_58270_60309200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58270_60309200_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)layer1_58_84_57816860;
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

SystemI counter_60301540;

SystemI makecounter_60301540() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_60301540 = systemI;
   systemI->owner = (Object)layer1_58_84_57816860;
   systemI->name = "counter";
   systemI->system = counter_58_8400_60303700;

   return systemI;
};

SystemI func0_49910720;

SystemI makefunc0_49910720() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_49910720 = systemI;
   systemI->owner = (Object)layer1_58_84_57816860;
   systemI->name = "func0";
   systemI->system = func0_58_8400_49135800;

   return systemI;
};

Scope channel__w0_58252_57816560;

SignalI trig__r_57813720_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI maketrig__r_57813720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_57813720_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)channel__w0_58252_57816560;
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

SignalI trig__w_57813700_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI maketrig__w_57813700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_57813700_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)channel__w0_58252_57816560;
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

SignalI dbus__r_57900980_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makedbus__r_57900980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_57900980_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)channel__w0_58252_57816560;
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

SignalI dbus__w_57980120_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makedbus__w_57980120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_57980120_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)channel__w0_58252_57816560;
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

SignalI abus__r_57980040_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeabus__r_57980040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_57980040_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)channel__w0_58252_57816560;
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

SignalI abus__w_57979960_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeabus__w_57979960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_57979960_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)channel__w0_58252_57816560;
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

SignalI mem_58034440_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makemem_58034440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_58034440_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)channel__w0_58252_57816560;
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

Scope raddr_58253_57816260;

Scope makeraddr_58253_57816260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58253_57816260 = scope;
   scope->owner = (Object)channel__w0_58252_57816560;
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

Scope waddr_58258_57815840;

Scope makewaddr_58258_57815840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58258_57815840 = scope;
   scope->owner = (Object)channel__w0_58252_57816560;
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

Scope rinc_58263_57815420;

Scope makerinc_58263_57815420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58263_57815420 = scope;
   scope->owner = (Object)channel__w0_58252_57816560;
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

Scope winc_58267_57815000;

Scope makewinc_58267_57815000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58267_57815000 = scope;
   scope->owner = (Object)channel__w0_58252_57816560;
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

Scope rdec_58271_57814580;

Scope makerdec_58271_57814580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58271_57814580 = scope;
   scope->owner = (Object)channel__w0_58252_57816560;
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

Scope wdec_58276_57814160;

Scope makewdec_58276_57814160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58276_57814160 = scope;
   scope->owner = (Object)channel__w0_58252_57816560;
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

Behavior __59503220;

Behavior make__59503220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59503220 = behavior;
   behavior->owner = (Object)channel__w0_58252_57816560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_57508980_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   clk_57508980_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_neg += 1;
   clk_57508980_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->neg = realloc(clk_57508980_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->neg,clk_57508980_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_neg*sizeof(Object));
clk_57508980_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->neg[clk_57508980_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_neg-1] = (Object)behavior;
   behavior->block = make__58669260();

   return behavior;
}

Behavior __59482120;

Behavior make__59482120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59482120 = behavior;
   behavior->owner = (Object)channel__w0_58252_57816560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_57900980_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   dbus__r_57900980_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   dbus__r_57900980_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(dbus__r_57900980_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,dbus__r_57900980_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
dbus__r_57900980_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[dbus__r_57900980_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__59482360();

   return behavior;
}

Behavior __59506380;

Behavior make__59506380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59506380 = behavior;
   behavior->owner = (Object)channel__w0_58252_57816560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58266_59485020_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   _58266_59485020_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   _58266_59485020_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(_58266_59485020_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,_58266_59485020_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
_58266_59485020_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[_58266_59485020_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__59506600();

   return behavior;
}

Behavior __59505880;

Behavior make__59505880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59505880 = behavior;
   behavior->owner = (Object)channel__w0_58252_57816560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_57813720_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   trig__r_57813720_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   trig__r_57813720_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(trig__r_57813720_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,trig__r_57813720_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
trig__r_57813720_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[trig__r_57813720_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__59506080();

   return behavior;
}

Behavior __59505620;

Behavior make__59505620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59505620 = behavior;
   behavior->owner = (Object)channel__w0_58252_57816560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58264_59485000_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   _58264_59485000_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   _58264_59485000_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(_58264_59485000_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,_58264_59485000_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
_58264_59485000_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[_58264_59485000_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__59505840();

   return behavior;
}

Behavior __59505120;

Behavior make__59505120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59505120 = behavior;
   behavior->owner = (Object)channel__w0_58252_57816560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_57980040_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   abus__r_57980040_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   abus__r_57980040_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(abus__r_57980040_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,abus__r_57980040_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
abus__r_57980040_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[abus__r_57980040_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__59505320();

   return behavior;
}

Behavior __59504860;

Behavior make__59504860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59504860 = behavior;
   behavior->owner = (Object)channel__w0_58252_57816560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58265_59484920_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   _58265_59484920_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   _58265_59484920_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(_58265_59484920_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,_58265_59484920_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
_58265_59484920_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[_58265_59484920_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__59505080();

   return behavior;
}

Behavior __59504060;

Behavior make__59504060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59504060 = behavior;
   behavior->owner = (Object)channel__w0_58252_57816560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_57813700_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   trig__w_57813700_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   trig__w_57813700_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(trig__w_57813700_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,trig__w_57813700_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
trig__w_57813700_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[trig__w_57813700_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__59504460();

   return behavior;
}

Behavior __59503740;

Behavior make__59503740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59503740 = behavior;
   behavior->owner = (Object)channel__w0_58252_57816560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58268_60208700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   _58268_60208700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   _58268_60208700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(_58268_60208700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,_58268_60208700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
_58268_60208700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[_58268_60208700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__59504000();

   return behavior;
}

Behavior __59502840;

Behavior make__59502840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59502840 = behavior;
   behavior->owner = (Object)channel__w0_58252_57816560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_57979960_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   abus__w_57979960_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   abus__w_57979960_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(abus__w_57979960_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,abus__w_57979960_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
abus__w_57979960_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[abus__w_57979960_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__59503180();

   return behavior;
}

Behavior __59502440;

Behavior make__59502440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59502440 = behavior;
   behavior->owner = (Object)channel__w0_58252_57816560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58269_60208580_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   _58269_60208580_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   _58269_60208580_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(_58269_60208580_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,_58269_60208580_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
_58269_60208580_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[_58269_60208580_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__59502620();

   return behavior;
}

Behavior __59501360;

Behavior make__59501360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59501360 = behavior;
   behavior->owner = (Object)channel__w0_58252_57816560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_57980120_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   dbus__w_57980120_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   dbus__w_57980120_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(dbus__w_57980120_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,dbus__w_57980120_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
dbus__w_57980120_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[dbus__w_57980120_channel__w0_58252_57816560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__59501700();

   return behavior;
}

Behavior __59501080;

Behavior make__59501080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59501080 = behavior;
   behavior->owner = (Object)channel__w0_58252_57816560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58270_60309200_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   _58270_60309200_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   _58270_60309200_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(_58270_60309200_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,_58270_60309200_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
_58270_60309200_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[_58270_60309200_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__59501320();

   return behavior;
}

Scope makechannel__w0_58252_57816560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58252_57816560 = scope;
   scope->owner = (Object)layer1_58_84_57816860;
   scope->name = "channel_w0:252";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_57813720();
   scope->inners[1] = maketrig__w_57813700();
   scope->inners[2] = makedbus__r_57900980();
   scope->inners[3] = makedbus__w_57980120();
   scope->inners[4] = makeabus__r_57980040();
   scope->inners[5] = makeabus__w_57979960();
   scope->inners[6] = makemem_58034440();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58253_57816260();
   scope->scopes[1] = makewaddr_58258_57815840();
   scope->scopes[2] = makerinc_58263_57815420();
   scope->scopes[3] = makewinc_58267_57815000();
   scope->scopes[4] = makerdec_58271_57814580();
   scope->scopes[5] = makewdec_58276_57814160();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59503220();
   scope->behaviors[1] = make__59482120();
   scope->behaviors[2] = make__59506380();
   scope->behaviors[3] = make__59505880();
   scope->behaviors[4] = make__59505620();
   scope->behaviors[5] = make__59505120();
   scope->behaviors[6] = make__59504860();
   scope->behaviors[7] = make__59504060();
   scope->behaviors[8] = make__59503740();
   scope->behaviors[9] = make__59502840();
   scope->behaviors[10] = make__59502440();
   scope->behaviors[11] = make__59501360();
   scope->behaviors[12] = make__59501080();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58281_59503100;

SignalI reg__0_59611400_channel__accum_58281_59503100_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makereg__0_59611400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_59611400_channel__accum_58281_59503100_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)channel__accum_58281_59503100;
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

Scope anum_58282_59502800;

Scope makeanum_58282_59502800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58282_59502800 = scope;
   scope->owner = (Object)channel__accum_58281_59503100;
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

Scope raddr_58284_59502380;

Scope makeraddr_58284_59502380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58284_59502380 = scope;
   scope->owner = (Object)channel__accum_58281_59503100;
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

Scope waddr_58287_59501960;

Scope makewaddr_58287_59501960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58287_59501960 = scope;
   scope->owner = (Object)channel__accum_58281_59503100;
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

Scope rinc_58290_59501540;

SignalI abus__r_59501160_rinc_58290_59501540_channel__accum_58281_59503100_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeabus__r_59501160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_59501160_rinc_58290_59501540_channel__accum_58281_59503100_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)rinc_58290_59501540;
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

Scope makerinc_58290_59501540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58290_59501540 = scope;
   scope->owner = (Object)channel__accum_58281_59503100;
   scope->name = "rinc:290";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_59501160();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58294_59501040;

SignalI abus__w_59500660_winc_58294_59501040_channel__accum_58281_59503100_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeabus__w_59500660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_59500660_winc_58294_59501040_channel__accum_58281_59503100_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)winc_58294_59501040;
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

Scope makewinc_58294_59501040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58294_59501040 = scope;
   scope->owner = (Object)channel__accum_58281_59503100;
   scope->name = "winc:294";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_59500660();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58298_59500540;

SignalI abus__r_59500160_rdec_58298_59500540_channel__accum_58281_59503100_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeabus__r_59500160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_59500160_rdec_58298_59500540_channel__accum_58281_59503100_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)rdec_58298_59500540;
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

Scope makerdec_58298_59500540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58298_59500540 = scope;
   scope->owner = (Object)channel__accum_58281_59503100;
   scope->name = "rdec:298";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_59500160();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58302_59500040;

SignalI abus__w_59499660_wdec_58302_59500040_channel__accum_58281_59503100_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeabus__w_59499660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_59499660_wdec_58302_59500040_channel__accum_58281_59503100_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)wdec_58302_59500040;
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

Scope makewdec_58302_59500040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58302_59500040 = scope;
   scope->owner = (Object)channel__accum_58281_59503100;
   scope->name = "wdec:302";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_59499660();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __59522800;

Behavior make__59522800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59522800 = behavior;
   behavior->owner = (Object)channel__accum_58281_59503100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_59611400_channel__accum_58281_59503100_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   reg__0_59611400_channel__accum_58281_59503100_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   reg__0_59611400_channel__accum_58281_59503100_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(reg__0_59611400_channel__accum_58281_59503100_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,reg__0_59611400_channel__accum_58281_59503100_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
reg__0_59611400_channel__accum_58281_59503100_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[reg__0_59611400_channel__accum_58281_59503100_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__59522960();

   return behavior;
}

Behavior __59522580;

Behavior make__59522580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59522580 = behavior;
   behavior->owner = (Object)channel__accum_58281_59503100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58283_59593560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   _58283_59593560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   _58283_59593560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(_58283_59593560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,_58283_59593560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
_58283_59593560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[_58283_59593560_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__59522760();

   return behavior;
}

Scope makechannel__accum_58281_59503100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58281_59503100 = scope;
   scope->owner = (Object)layer1_58_84_57816860;
   scope->name = "channel_accum:281";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_59611400();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58282_59502800();
   scope->scopes[1] = makeraddr_58284_59502380();
   scope->scopes[2] = makewaddr_58287_59501960();
   scope->scopes[3] = makerinc_58290_59501540();
   scope->scopes[4] = makewinc_58294_59501040();
   scope->scopes[5] = makerdec_58298_59500540();
   scope->scopes[6] = makewdec_58302_59500040();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59522800();
   scope->behaviors[1] = make__59522580();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58306_59753060;

SignalI lv0_59905580_mac__n1_58306_59753060_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makelv0_59905580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_59905580_mac__n1_58306_59753060_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)mac__n1_58306_59753060;
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

SignalI av0_60115780_mac__n1_58306_59753060_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeav0_60115780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_60115780_mac__n1_58306_59753060_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)mac__n1_58306_59753060;
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

SignalI rv_60186720_mac__n1_58306_59753060_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makerv_60186720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_60186720_mac__n1_58306_59753060_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)mac__n1_58306_59753060;
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

SignalI lvok0_60186700_mac__n1_58306_59753060_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makelvok0_60186700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_60186700_mac__n1_58306_59753060_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)mac__n1_58306_59753060;
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

SignalI rvok_60186680_mac__n1_58306_59753060_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makervok_60186680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_60186680_mac__n1_58306_59753060_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)mac__n1_58306_59753060;
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

SignalI run_60186660_mac__n1_58306_59753060_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makerun_60186660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_60186660_mac__n1_58306_59753060_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)mac__n1_58306_59753060;
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

Behavior __53024920;

Behavior make__53024920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53024920 = behavior;
   behavior->owner = (Object)mac__n1_58306_59753060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_57508980_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   clk_57508980_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_pos += 1;
   clk_57508980_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->pos = realloc(clk_57508980_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->pos,clk_57508980_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_pos*sizeof(Object));
clk_57508980_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->pos[clk_57508980_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_pos-1] = (Object)behavior;
   behavior->block = make__60211080();

   return behavior;
}

Scope makemac__n1_58306_59753060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58306_59753060 = scope;
   scope->owner = (Object)layer1_58_84_57816860;
   scope->name = "mac_n1:306";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 6;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_59905580();
   scope->inners[1] = makeav0_60115780();
   scope->inners[2] = makerv_60186720();
   scope->inners[3] = makelvok0_60186700();
   scope->inners[4] = makervok_60186680();
   scope->inners[5] = makerun_60186660();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53024920();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__bias_58311_53024760;

SignalI reg__0_57227780_channel__bias_58311_53024760_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makereg__0_57227780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_57227780_channel__bias_58311_53024760_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)channel__bias_58311_53024760;
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

Scope anum_58312_53024120;

Scope makeanum_58312_53024120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58312_53024120 = scope;
   scope->owner = (Object)channel__bias_58311_53024760;
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

Scope raddr_58314_53023320;

Scope makeraddr_58314_53023320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58314_53023320 = scope;
   scope->owner = (Object)channel__bias_58311_53024760;
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

Scope waddr_58317_53022500;

Scope makewaddr_58317_53022500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58317_53022500 = scope;
   scope->owner = (Object)channel__bias_58311_53024760;
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

Scope rinc_58320_53021540;

SignalI abus__r_53020660_rinc_58320_53021540_channel__bias_58311_53024760_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeabus__r_53020660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_53020660_rinc_58320_53021540_channel__bias_58311_53024760_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)rinc_58320_53021540;
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

Scope makerinc_58320_53021540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58320_53021540 = scope;
   scope->owner = (Object)channel__bias_58311_53024760;
   scope->name = "rinc:320";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_53020660();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58323_53020420;

SignalI abus__w_53019660_winc_58323_53020420_channel__bias_58311_53024760_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeabus__w_53019660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_53019660_winc_58323_53020420_channel__bias_58311_53024760_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)winc_58323_53020420;
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

Behavior __59517100;

Behavior make__59517100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59517100 = behavior;
   behavior->owner = (Object)winc_58323_53020420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_53019660_winc_58323_53020420_channel__bias_58311_53024760_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   abus__w_53019660_winc_58323_53020420_channel__bias_58311_53024760_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   abus__w_53019660_winc_58323_53020420_channel__bias_58311_53024760_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(abus__w_53019660_winc_58323_53020420_channel__bias_58311_53024760_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,abus__w_53019660_winc_58323_53020420_channel__bias_58311_53024760_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
abus__w_53019660_winc_58323_53020420_channel__bias_58311_53024760_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[abus__w_53019660_winc_58323_53020420_channel__bias_58311_53024760_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__59517280();

   return behavior;
}

Behavior __59516820;

Behavior make__59516820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59516820 = behavior;
   behavior->owner = (Object)winc_58323_53020420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58325_60208720_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   _58325_60208720_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   _58325_60208720_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(_58325_60208720_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,_58325_60208720_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
_58325_60208720_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[_58325_60208720_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__59517060();

   return behavior;
}

Scope makewinc_58323_53020420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58323_53020420 = scope;
   scope->owner = (Object)channel__bias_58311_53024760;
   scope->name = "winc:323";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_53019660();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59517100();
   scope->behaviors[1] = make__59516820();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58326_53051320;

SignalI abus__r_53049880_rdec_58326_53051320_channel__bias_58311_53024760_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeabus__r_53049880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_53049880_rdec_58326_53051320_channel__bias_58311_53024760_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)rdec_58326_53051320;
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

Scope makerdec_58326_53051320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58326_53051320 = scope;
   scope->owner = (Object)channel__bias_58311_53024760;
   scope->name = "rdec:326";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_53049880();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58330_53049400;

SignalI abus__w_53047380_wdec_58330_53049400_channel__bias_58311_53024760_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeabus__w_53047380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_53047380_wdec_58330_53049400_channel__bias_58311_53024760_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)wdec_58330_53049400;
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

Scope makewdec_58330_53049400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58330_53049400 = scope;
   scope->owner = (Object)channel__bias_58311_53024760;
   scope->name = "wdec:330";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_53047380();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __59520300;

Behavior make__59520300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59520300 = behavior;
   behavior->owner = (Object)channel__bias_58311_53024760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_57227780_channel__bias_58311_53024760_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   reg__0_57227780_channel__bias_58311_53024760_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   reg__0_57227780_channel__bias_58311_53024760_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(reg__0_57227780_channel__bias_58311_53024760_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,reg__0_57227780_channel__bias_58311_53024760_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
reg__0_57227780_channel__bias_58311_53024760_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[reg__0_57227780_channel__bias_58311_53024760_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__59520480();

   return behavior;
}

Behavior __59520060;

Behavior make__59520060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59520060 = behavior;
   behavior->owner = (Object)channel__bias_58311_53024760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58313_59654740_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   _58313_59654740_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   _58313_59654740_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(_58313_59654740_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,_58313_59654740_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
_58313_59654740_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[_58313_59654740_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__59520260();

   return behavior;
}

Behavior __59519440;

Behavior make__59519440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59519440 = behavior;
   behavior->owner = (Object)channel__bias_58311_53024760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_57227780_channel__bias_58311_53024760_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   reg__0_57227780_channel__bias_58311_53024760_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   reg__0_57227780_channel__bias_58311_53024760_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(reg__0_57227780_channel__bias_58311_53024760_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,reg__0_57227780_channel__bias_58311_53024760_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
reg__0_57227780_channel__bias_58311_53024760_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[reg__0_57227780_channel__bias_58311_53024760_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__59519620();

   return behavior;
}

Behavior __59519140;

Behavior make__59519140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59519140 = behavior;
   behavior->owner = (Object)channel__bias_58311_53024760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58324_60209040_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   _58324_60209040_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   _58324_60209040_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(_58324_60209040_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,_58324_60209040_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
_58324_60209040_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[_58324_60209040_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__59519380();

   return behavior;
}

Scope makechannel__bias_58311_53024760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__bias_58311_53024760 = scope;
   scope->owner = (Object)layer1_58_84_57816860;
   scope->name = "channel_bias:311";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_57227780();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58312_53024120();
   scope->scopes[1] = makeraddr_58314_53023320();
   scope->scopes[2] = makewaddr_58317_53022500();
   scope->scopes[3] = makerinc_58320_53021540();
   scope->scopes[4] = makewinc_58323_53020420();
   scope->scopes[5] = makerdec_58326_53051320();
   scope->scopes[6] = makewdec_58330_53049400();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59520300();
   scope->behaviors[1] = make__59520060();
   scope->behaviors[2] = make__59519440();
   scope->behaviors[3] = make__59519140();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58334_57632360;

SignalI reg__0_57747080_channel__z_58334_57632360_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makereg__0_57747080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_57747080_channel__z_58334_57632360_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)channel__z_58334_57632360;
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

Scope anum_58335_57632060;

Scope makeanum_58335_57632060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58335_57632060 = scope;
   scope->owner = (Object)channel__z_58334_57632360;
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

Scope raddr_58337_57631640;

Scope makeraddr_58337_57631640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58337_57631640 = scope;
   scope->owner = (Object)channel__z_58334_57632360;
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

Scope waddr_58340_57631220;

Scope makewaddr_58340_57631220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58340_57631220 = scope;
   scope->owner = (Object)channel__z_58334_57632360;
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

Scope rinc_58343_57655220;

SignalI abus__r_57654840_rinc_58343_57655220_channel__z_58334_57632360_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeabus__r_57654840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_57654840_rinc_58343_57655220_channel__z_58334_57632360_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)rinc_58343_57655220;
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

Scope makerinc_58343_57655220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58343_57655220 = scope;
   scope->owner = (Object)channel__z_58334_57632360;
   scope->name = "rinc:343";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_57654840();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58346_57654720;

SignalI abus__w_57654340_winc_58346_57654720_channel__z_58334_57632360_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeabus__w_57654340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_57654340_winc_58346_57654720_channel__z_58334_57632360_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)winc_58346_57654720;
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

Scope makewinc_58346_57654720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58346_57654720 = scope;
   scope->owner = (Object)channel__z_58334_57632360;
   scope->name = "winc:346";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_57654340();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58349_57654220;

SignalI abus__r_57653840_rdec_58349_57654220_channel__z_58334_57632360_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeabus__r_57653840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_57653840_rdec_58349_57654220_channel__z_58334_57632360_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)rdec_58349_57654220;
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

Scope makerdec_58349_57654220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58349_57654220 = scope;
   scope->owner = (Object)channel__z_58334_57632360;
   scope->name = "rdec:349";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_57653840();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58353_57653720;

SignalI abus__w_57653300_wdec_58353_57653720_channel__z_58334_57632360_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makeabus__w_57653300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_57653300_wdec_58353_57653720_channel__z_58334_57632360_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)wdec_58353_57653720;
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

Scope makewdec_58353_57653720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58353_57653720 = scope;
   scope->owner = (Object)channel__z_58334_57632360;
   scope->name = "wdec:353";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_57653300();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __59515240;

Behavior make__59515240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59515240 = behavior;
   behavior->owner = (Object)channel__z_58334_57632360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_57747080_channel__z_58334_57632360_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   reg__0_57747080_channel__z_58334_57632360_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   reg__0_57747080_channel__z_58334_57632360_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(reg__0_57747080_channel__z_58334_57632360_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,reg__0_57747080_channel__z_58334_57632360_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
reg__0_57747080_channel__z_58334_57632360_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[reg__0_57747080_channel__z_58334_57632360_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__59515460();

   return behavior;
}

Behavior __59515040;

Behavior make__59515040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59515040 = behavior;
   behavior->owner = (Object)channel__z_58334_57632360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58336_59756840_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   _58336_59756840_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   _58336_59756840_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(_58336_59756840_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,_58336_59756840_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
_58336_59756840_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[_58336_59756840_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__59515200();

   return behavior;
}

Scope makechannel__z_58334_57632360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58334_57632360 = scope;
   scope->owner = (Object)layer1_58_84_57816860;
   scope->name = "channel_z:334";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_57747080();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58335_57632060();
   scope->scopes[1] = makeraddr_58337_57631640();
   scope->scopes[2] = makewaddr_58340_57631220();
   scope->scopes[3] = makerinc_58343_57655220();
   scope->scopes[4] = makewinc_58346_57654720();
   scope->scopes[5] = makerdec_58349_57654220();
   scope->scopes[6] = makewdec_58353_57653720();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59515240();
   scope->behaviors[1] = make__59515040();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58357_57900120;

SignalI lv0_57977280_add__n_58357_57900120_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makelv0_57977280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_57977280_add__n_58357_57900120_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)add__n_58357_57900120;
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

SignalI rv0_58087600_add__n_58357_57900120_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makerv0_58087600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_58087600_add__n_58357_57900120_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)add__n_58357_57900120;
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

SignalI lvok0_58087580_add__n_58357_57900120_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makelvok0_58087580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_58087580_add__n_58357_57900120_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)add__n_58357_57900120;
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

SignalI rvok0_58087540_add__n_58357_57900120_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makervok0_58087540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_58087540_add__n_58357_57900120_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)add__n_58357_57900120;
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

SignalI run_58087520_add__n_58357_57900120_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280;

SignalI makerun_58087520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_58087520_add__n_58357_57900120_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280 = signalI;
   signalI->owner = (Object)add__n_58357_57900120;
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

Behavior __59391420;

Behavior make__59391420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59391420 = behavior;
   behavior->owner = (Object)add__n_58357_57900120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_57508980_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   clk_57508980_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_pos += 1;
   clk_57508980_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->pos = realloc(clk_57508980_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->pos,clk_57508980_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_pos*sizeof(Object));
clk_57508980_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->pos[clk_57508980_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_pos-1] = (Object)behavior;
   behavior->block = make__58087380();

   return behavior;
}

Scope makeadd__n_58357_57900120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58357_57900120 = scope;
   scope->owner = (Object)layer1_58_84_57816860;
   scope->name = "add_n:357";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_57977280();
   scope->inners[1] = makerv0_58087600();
   scope->inners[2] = makelvok0_58087580();
   scope->inners[3] = makervok0_58087540();
   scope->inners[4] = makerun_58087520();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59391420();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __52871580;

Behavior make__52871580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52871580 = behavior;
   behavior->owner = (Object)layer1_58_84_57816860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_57508980_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   clk_57508980_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_pos += 1;
   clk_57508980_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->pos = realloc(clk_57508980_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->pos,clk_57508980_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_pos*sizeof(Object));
clk_57508980_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->pos[clk_57508980_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_pos-1] = (Object)behavior;
   behavior->block = make__52301440();

   return behavior;
}

Behavior __57286600;

Behavior make__57286600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57286600 = behavior;
   behavior->owner = (Object)layer1_58_84_57816860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_57508980_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   clk_57508980_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_pos += 1;
   clk_57508980_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->pos = realloc(clk_57508980_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->pos,clk_57508980_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_pos*sizeof(Object));
clk_57508980_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->pos[clk_57508980_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_pos-1] = (Object)behavior;
   behavior->block = make__52871380();

   return behavior;
}

Behavior __57511560;

Behavior make__57511560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57511560 = behavior;
   behavior->owner = (Object)layer1_58_84_57816860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_57508980_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   clk_57508980_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_pos += 1;
   clk_57508980_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->pos = realloc(clk_57508980_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->pos,clk_57508980_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_pos*sizeof(Object));
clk_57508980_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->pos[clk_57508980_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_pos-1] = (Object)behavior;
   behavior->block = make__57286440();

   return behavior;
}

Behavior __59489980;

Behavior make__59489980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59489980 = behavior;
   behavior->owner = (Object)layer1_58_84_57816860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_57508920_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   req_57508920_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   req_57508920_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(req_57508920_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,req_57508920_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
req_57508920_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[req_57508920_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_59391240_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   ack__mac_59391240_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   ack__mac_59391240_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(ack__mac_59391240_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,ack__mac_59391240_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
ack__mac_59391240_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[ack__mac_59391240_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__59490220();

   return behavior;
}

Behavior __59483440;

Behavior make__59483440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59483440 = behavior;
   behavior->owner = (Object)layer1_58_84_57816860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_57508980_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   clk_57508980_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   clk_57508980_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(clk_57508980_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,clk_57508980_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
clk_57508980_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[clk_57508980_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_59391260_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   ack_59391260_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   ack_59391260_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(ack_59391260_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,ack_59391260_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
ack_59391260_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[ack_59391260_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_57508960_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   rst_57508960_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   rst_57508960_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(rst_57508960_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,rst_57508960_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
rst_57508960_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[rst_57508960_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_59907880_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   value__z0_59907880_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   value__z0_59907880_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(value__z0_59907880_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,value__z0_59907880_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
value__z0_59907880_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[value__z0_59907880_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__a0_60116520_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   ack__a0_60116520_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   ack__a0_60116520_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(ack__a0_60116520_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,ack__a0_60116520_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
ack__a0_60116520_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[ack__a0_60116520_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__59465900();

   return behavior;
}

Behavior __59483220;

Behavior make__59483220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59483220 = behavior;
   behavior->owner = (Object)layer1_58_84_57816860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_60301680_counter_58_8400_60303700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   ack__mac_60301680_counter_58_8400_60303700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   ack__mac_60301680_counter_58_8400_60303700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(ack__mac_60301680_counter_58_8400_60303700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,ack__mac_60301680_counter_58_8400_60303700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
ack__mac_60301680_counter_58_8400_60303700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[ack__mac_60301680_counter_58_8400_60303700_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,a_49911000_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280);
   a_49911000_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any += 1;
   a_49911000_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any = realloc(a_49911000_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any,a_49911000_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any*sizeof(Object));
a_49911000_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->any[a_49911000_func0_58_8400_49135800_layer1_58_84_57816860_layer1_58_840_57511240_neural__network_58_84_49867820_neural__network_58_840_58023080______58_84_49868860______58_840_58138280->num_any-1] = (Object)behavior;
   behavior->block = make__59465840();

   return behavior;
}

Scope makelayer1_58_84_57816860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer1_58_84_57816860 = scope;
   scope->owner = (Object)layer1_58_840_57511240;
   scope->name = "layer1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_60301540();
   scope->systemIs[1] = makefunc0_49910720();
   scope->num_inners = 19;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_59391280();
   scope->inners[1] = makeack_59391260();
   scope->inners[2] = makeack__mac_59391240();
   scope->inners[3] = makeack__add_59391220();
   scope->inners[4] = make_58266_59485020();
   scope->inners[5] = make_58264_59485000();
   scope->inners[6] = make_58265_59484920();
   scope->inners[7] = make_58283_59593560();
   scope->inners[8] = make_58313_59654740();
   scope->inners[9] = make_58336_59756840();
   scope->inners[10] = makevalue__z0_59907880();
   scope->inners[11] = makevalue__a0_60116560();
   scope->inners[12] = makeflag__z0_60116540();
   scope->inners[13] = makeack__a0_60116520();
   scope->inners[14] = make_58324_60209040();
   scope->inners[15] = make_58325_60208720();
   scope->inners[16] = make_58268_60208700();
   scope->inners[17] = make_58269_60208580();
   scope->inners[18] = make_58270_60309200();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58252_57816560();
   scope->scopes[1] = makechannel__accum_58281_59503100();
   scope->scopes[2] = makemac__n1_58306_59753060();
   scope->scopes[3] = makechannel__bias_58311_53024760();
   scope->scopes[4] = makechannel__z_58334_57632360();
   scope->scopes[5] = makeadd__n_58357_57900120();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52871580();
   scope->behaviors[1] = make__57286600();
   scope->behaviors[2] = make__57511560();
   scope->behaviors[3] = make__59489980();
   scope->behaviors[4] = make__59483440();
   scope->behaviors[5] = make__59483220();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer1_58_840_57511240() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer1_58_840_57511240 = systemT;
systemT->owner = NULL;
   systemT->name = "layer1:T0";
   systemT->num_inputs = 6;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_57508980();
   systemT->inputs[1] = makerst_57508960();
   systemT->inputs[2] = makefill_57508940();
   systemT->inputs[3] = makereq_57508920();
   systemT->inputs[4] = make_5866_57734960();
   systemT->inputs[5] = make_5867_57799260();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_57799220();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_5868_57799100();
   systemT->inouts[1] = make_5832_57877880();

   systemT->scope = makelayer1_58_84_57816860();

   return systemT;
}