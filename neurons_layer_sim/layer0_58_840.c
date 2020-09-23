#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer0_58_840_53385880;

SignalI clk_53382480_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makeclk_53382480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_53382480_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer0_58_840_53385880;
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

SignalI rst_53382460_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makerst_53382460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_53382460_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer0_58_840_53385880;
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

SignalI fill_53382400_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makefill_53382400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_53382400_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer0_58_840_53385880;
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

SignalI req_53382380_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makereq_53382380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_53382380_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer0_58_840_53385880;
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

SignalI _5815_43496800_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI make_5815_43496800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5815_43496800_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer0_58_840_53385880;
   signalI->name = ":15";
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

SignalI ack__layer_43496620_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makeack__layer_43496620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_43496620_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer0_58_840_53385880;
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

SignalI _5813_43526020_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI make_5813_43526020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5813_43526020_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer0_58_840_53385880;
   signalI->name = ":13";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _5814_43563960_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI make_5814_43563960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5814_43563960_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer0_58_840_53385880;
   signalI->name = ":14";
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

SignalI _5832_47526820_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI make_5832_47526820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5832_47526820_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer0_58_840_53385880;
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

SignalI _5833_48493040_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI make_5833_48493040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5833_48493040_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer0_58_840_53385880;
   signalI->name = ":33";
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

Block __49363460;

Block __49361540;

Block __49361100;

void code__49361100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58212_51848300_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,value__z0_52241500_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49604540(),flag__z0_52558760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__49361100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49361100 = block;
   block->owner = (Object)__49361540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49361100;

   return block;
};

Block __51781400;

void code__51781400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58213_52069460_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,value__z1_52298920_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49603820(),flag__z1_52558740_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__51781400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51781400 = block;
   block->owner = (Object)__49361540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51781400;

   return block;
};

void code__49361540() {
 code__49361100();
 code__51781400();
}

Block make__49361540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49361540 = block;
   block->owner = (Object)__49363460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49361540;

   return block;
};

Block __49362800;

void code__49362800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49603120(),flag__z0_52558760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49624760(),flag__z1_52558740_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__49362800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49362800 = block;
   block->owner = (Object)__49363460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49362800;

   return block;
};

void code__49363460() {
   {
      Value cond = ack__add_49593340_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49361540();
   }
   else {
  code__49362800();
   }
      }
   }
}

Block make__49363460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49363460 = block;
   block->owner = (Object)__52687960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49363460;

   return block;
};

Block __52687740;

Block __52687140;

Block __52686880;

void code__52686880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_52404420_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,_5832_47526820_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49642820(),ack__a0_52558720_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__52686880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52686880 = block;
   block->owner = (Object)__52687140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52686880;

   return block;
};

Block __47809300;

void code__47809300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a1_52558780_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,_5833_48493040_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49639080(),ack__a1_52558700_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__47809300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47809300 = block;
   block->owner = (Object)__52687140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47809300;

   return block;
};

void code__52687140() {
 code__52686880();
 code__47809300();
}

Block make__52687140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52687140 = block;
   block->owner = (Object)__52687740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52687140;

   return block;
};

void code__52687740() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = flag__z0_52558760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
         src1 = flag__z1_52558740_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52687140();
   }
      }
   }
}

Block make__52687740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52687740 = block;
   block->owner = (Object)__51099880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52687740;

   return block;
};

Block __51099760;

Block __51099540;

Block __51098540;

void code__51098540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49638160(),_58199_52991240_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__51098540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51098540 = block;
   block->owner = (Object)__51099540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51098540;

   return block;
};

void code__51099540() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_53382460_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49638520();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51098540();
   }
      }
   }
}

Block make__51099540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51099540 = block;
   block->owner = (Object)__51099760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51099540;

   return block;
};

Block __51097260;

Block __51095300;

void code__51095300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49637360(),_58129_53105180_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__51095300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51095300 = block;
   block->owner = (Object)__51097260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51095300;

   return block;
};

void code__51097260() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_53382460_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49637860();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51095300();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49637220(),_58128_53105260_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__51097260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51097260 = block;
   block->owner = (Object)__51099760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51097260;

   return block;
};

Block __51017280;

Block __51016220;

void code__51016220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49636860(),_58100_52991140_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__51016220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51016220 = block;
   block->owner = (Object)__51017280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51016220;

   return block;
};

void code__51017280() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_53382460_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49637000();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51016220();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49636680(),_5899_52991220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__51017280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51017280 = block;
   block->owner = (Object)__51099760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51017280;

   return block;
};

Block __51015240;

Block __51015060;

Block __51014280;

void code__51014280() {
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
                  src0 = _58100_52991140_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__49635760();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58100_52991140_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49635560(),_5899_52991220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49635420(),_58101_53105280_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__51014280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51014280 = block;
   block->owner = (Object)__51015060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51014280;

   return block;
};

void code__51015060() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_53382460_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49636340();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51014280();
   }
      }
   }
}

Block make__51015060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51015060 = block;
   block->owner = (Object)__51015240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51015060;

   return block;
};

Block __51727340;

Block __51726600;

void code__51726600() {
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
                  src0 = _58129_53105180_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__49659100();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58129_53105180_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49658820(),_58128_53105260_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49658420(),_58130_53244980_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__51726600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51726600 = block;
   block->owner = (Object)__51727340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51726600;

   return block;
};

void code__51727340() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_53382460_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49659700();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51726600();
   }
      }
   }
}

Block make__51727340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51727340 = block;
   block->owner = (Object)__51015240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51727340;

   return block;
};

Block __52211380;

Block __52210780;

Block __52210060;

void code__52210060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49656440(),_58197_52673780_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__52210060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52210060 = block;
   block->owner = (Object)__52210780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52210060;

   return block;
};

Block __52637620;

void code__52637620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49654180(),_58198_52991320_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__52637620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52637620 = block;
   block->owner = (Object)__52210780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52637620;

   return block;
};

void code__52210780() {
{
      Value value = _58199_52991240_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__49656980())) {
    code__52210060();
         }
         else if (value2integer(value) == value2integer(make__49656420())) {
    code__52637620();
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
                  src0 = _58199_52991240_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__49653380();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58199_52991240_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__52210780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52210780 = block;
   block->owner = (Object)__52211380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52210780;

   return block;
};

void code__52211380() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_53382460_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49657820();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52210780();
   }
      }
   }
}

Block make__52211380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52211380 = block;
   block->owner = (Object)__51015240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52211380;

   return block;
};

void code__51015240() {
 code__51015060();
 code__51727340();
 code__52211380();
}

Block make__51015240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51015240 = block;
   block->owner = (Object)__51099760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51015240;

   return block;
};

void code__51099760() {
 code__51099540();
 code__51097260();
 code__51017280();
   {
      Value cond = fill_53382400_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51015240();
   }
      }
   }
}

Block make__51099760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51099760 = block;
   block->owner = (Object)__53386780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51099760;

   return block;
};

Block __47641760;

void code__47641760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_53382380_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_49593420_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_49593720_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__47641760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47641760 = block;
   block->owner = (Object)__47640940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47641760;

   return block;
};

Block __47642660;

void code__47642660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_53382480_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,clk_53261080_counter_58_841_53263220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_49593640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,ack_53261060_counter_58_841_53263220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_53382460_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,rst_53261040_counter_58_841_53263220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_52241500_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,z__value_49376920_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z1_52298920_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,z__value_51868060_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ack__a0_52558720_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
      src1 = ack__a1_52558700_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),ack__layer_43496620_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__47642660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47642660 = block;
   block->owner = (Object)__47867400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47642660;

   return block;
};

Block __47642380;

void code__47642380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_53261000_counter_58_841_53263220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,ack__mac_49593420_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_49735240_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,value__a0_52404420_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_52247700_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,value__a1_52558780_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__47642380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47642380 = block;
   block->owner = (Object)__47866720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47642380;

   return block;
};

Block __48779660;

Block __49357060;

void code__49357060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_47318200_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,make_ref_rangeS(mem_47577480_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680,value2integer(abus__w_47317160_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value),value2integer(abus__w_47317160_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__49357060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49357060 = block;
   block->owner = (Object)__48779660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49357060;

   return block;
};

void code__48779660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_47577480_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
            idx = value2integer(abus__r_47317680_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_45606020_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_50871000_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49357060();
   }
      }
   }
}

Block make__48779660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48779660 = block;
   block->owner = (Object)__51098880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48779660;

   return block;
};

Block __47887860;

void code__47887860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_45606020_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,_5897_49770480_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__47887860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47887860 = block;
   block->owner = (Object)__47886560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47887860;

   return block;
};

Block __47884940;

void code__47884940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5897_49770480_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,dbus__r_45606020_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__47884940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47884940 = block;
   block->owner = (Object)__47906400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47884940;

   return block;
};

Block __47903040;

void code__47903040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_50871020_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,_5895_49770460_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__47903040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47903040 = block;
   block->owner = (Object)__47899560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47903040;

   return block;
};

Block __47899400;

void code__47899400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5895_49770460_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,trig__r_50871020_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__47899400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47899400 = block;
   block->owner = (Object)__47922520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47899400;

   return block;
};

Block __47919980;

void code__47919980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_47317680_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,_5896_49770140_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__47919980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47919980 = block;
   block->owner = (Object)__47916400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47919980;

   return block;
};

Block __47915020;

void code__47915020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5896_49770140_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,abus__r_47317680_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__47915020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47915020 = block;
   block->owner = (Object)__47934720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47915020;

   return block;
};

Block __47965640;

void code__47965640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_50871000_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,_5899_52991220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__47965640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47965640 = block;
   block->owner = (Object)__47985440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47965640;

   return block;
};

Block __47984340;

void code__47984340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5899_52991220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,trig__w_50871000_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__47984340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47984340 = block;
   block->owner = (Object)__47982620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47984340;

   return block;
};

Block __48021420;

void code__48021420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_47317160_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,_58100_52991140_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__48021420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48021420 = block;
   block->owner = (Object)__48036840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48021420;

   return block;
};

Block __48036600;

void code__48036600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58100_52991140_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,abus__w_47317160_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__48036600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48036600 = block;
   block->owner = (Object)__48036180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48036600;

   return block;
};

Block __48034740;

void code__48034740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_47318200_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,_58101_53105280_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__48034740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48034740 = block;
   block->owner = (Object)__48034220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48034740;

   return block;
};

Block __48034120;

void code__48034120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58101_53105280_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,dbus__w_47318200_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__48034120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48034120 = block;
   block->owner = (Object)__48033680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48034120;

   return block;
};

Block __52123520;

Block __52376800;

void code__52376800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_51499860_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,make_ref_rangeS(mem_51578800_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680,value2integer(abus__w_51499700_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value),value2integer(abus__w_51499700_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__52376800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52376800 = block;
   block->owner = (Object)__52123520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52376800;

   return block;
};

void code__52123520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_51578800_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
            idx = value2integer(abus__r_51499780_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_51338820_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_51095900_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52376800();
   }
      }
   }
}

Block make__52123520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52123520 = block;
   block->owner = (Object)__52670760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52123520;

   return block;
};

Block __48960500;

void code__48960500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_51338820_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,_58126_51495240_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__48960500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48960500 = block;
   block->owner = (Object)__48960300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48960500;

   return block;
};

Block __48960180;

void code__48960180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58126_51495240_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,dbus__r_51338820_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__48960180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48960180 = block;
   block->owner = (Object)__48959860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48960180;

   return block;
};

Block __48959340;

void code__48959340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_51095920_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,_58124_51495220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__48959340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48959340 = block;
   block->owner = (Object)__48958840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48959340;

   return block;
};

Block __48958720;

void code__48958720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58124_51495220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,trig__r_51095920_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__48958720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48958720 = block;
   block->owner = (Object)__48955860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48958720;

   return block;
};

Block __49151080;

void code__49151080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_51499780_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,_58125_51495140_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__49151080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49151080 = block;
   block->owner = (Object)__49150700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49151080;

   return block;
};

Block __49150600;

void code__49150600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58125_51495140_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,abus__r_51499780_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__49150600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49150600 = block;
   block->owner = (Object)__49150300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49150600;

   return block;
};

Block __49149620;

void code__49149620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_51095900_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,_58128_53105260_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__49149620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49149620 = block;
   block->owner = (Object)__49147000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49149620;

   return block;
};

Block __49146960;

void code__49146960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58128_53105260_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,trig__w_51095900_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__49146960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49146960 = block;
   block->owner = (Object)__49146760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49146960;

   return block;
};

Block __49145840;

void code__49145840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_51499700_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,_58129_53105180_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__49145840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49145840 = block;
   block->owner = (Object)__49145160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49145840;

   return block;
};

Block __49144840;

void code__49144840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58129_53105180_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,abus__w_51499700_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__49144840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49144840 = block;
   block->owner = (Object)__49144000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49144840;

   return block;
};

Block __48496040;

void code__48496040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_51499860_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,_58130_53244980_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__48496040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48496040 = block;
   block->owner = (Object)__48495720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48496040;

   return block;
};

Block __48495660;

void code__48495660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58130_53244980_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,dbus__w_51499860_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__48495660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48495660 = block;
   block->owner = (Object)__48495460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48495660;

   return block;
};

Block __48553840;

void code__48553840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_52991940_channel__accum_58141_52670640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,_58143_51045300_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__48553840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48553840 = block;
   block->owner = (Object)__48553560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48553840;

   return block;
};

Block __48553240;

void code__48553240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58143_51045300_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,reg__0_52991940_channel__accum_58141_52670640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__48553240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48553240 = block;
   block->owner = (Object)__48552520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48553240;

   return block;
};

Block __48550960;

void code__48550960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_53062860_channel__accum_58141_52670640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,_58144_51298560_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__48550960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48550960 = block;
   block->owner = (Object)__48550660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48550960;

   return block;
};

Block __48550440;

void code__48550440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58144_51298560_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,reg__1_53062860_channel__accum_58141_52670640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__48550440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48550440 = block;
   block->owner = (Object)__48550280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48550440;

   return block;
};

Block __48546780;

Block __48546560;

Block __48546220;

void code__48546220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49359560(),_58125_51495140_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__48546220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48546220 = block;
   block->owner = (Object)__48546560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48546220;

   return block;
};

void code__48546560() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_53382460_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49359700();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48546220();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49359460(),_58124_51495220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__48546560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48546560 = block;
   block->owner = (Object)__48546780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48546560;

   return block;
};

Block __49061400;

Block __49059320;

void code__49059320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49358320(),_5896_49770140_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__49059320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49059320 = block;
   block->owner = (Object)__49061400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49059320;

   return block;
};

void code__49061400() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_53382460_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49358500();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49059320();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49358060(),_5895_49770460_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__49061400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49061400 = block;
   block->owner = (Object)__48546780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49061400;

   return block;
};

Block __49058100;

Block __49057720;

void code__49057720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49357560(),_5814_43563960_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__49057720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49057720 = block;
   block->owner = (Object)__49058100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49057720;

   return block;
};

void code__49058100() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_53382460_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49357840();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49057720();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49357000(),_5813_43526020_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__49058100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49058100 = block;
   block->owner = (Object)__48546780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49058100;

   return block;
};

Block __49056560;

void code__49056560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49381080(),rvok_48546960_mac__n1_58173_53444640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49380980(),lvok0_48547040_mac__n1_58173_53444640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49380880(),av0_47624220_mac__n1_58173_53444640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49380640(),lvok1_48547020_mac__n1_58173_53444640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49380440(),av1_47981780_mac__n1_58173_53444640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__49056560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49056560 = block;
   block->owner = (Object)__48546780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49056560;

   return block;
};

Block __48832100;

Block __48831460;

Block __48830240;

Block __48829360;

void code__48829360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5815_43496800_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,rv_48547080_mac__n1_58173_53444640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49376140(),rvok_48546960_mac__n1_58173_53444640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__48829360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48829360 = block;
   block->owner = (Object)__48830240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48829360;

   return block;
};

void code__48830240() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5813_43526020_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49376500();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48829360();
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
                  src0 = _5814_43563960_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__49375940();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5814_43563960_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49375820(),_5813_43526020_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__48830240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48830240 = block;
   block->owner = (Object)__48831460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48830240;

   return block;
};

void code__48831460() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_53382460_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49377500();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48830240();
   }
      }
   }
}

Block make__48831460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48831460 = block;
   block->owner = (Object)__48832100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48831460;

   return block;
};

Block __49342920;

Block __49342580;

Block __49342140;

void code__49342140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5897_49770480_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,lv0_45629080_mac__n1_58173_53444640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49374720(),lvok0_48547040_mac__n1_58173_53444640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__49342140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49342140 = block;
   block->owner = (Object)__49342580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49342140;

   return block;
};

void code__49342580() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5895_49770460_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49375060();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49342140();
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
                  src0 = _5896_49770140_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__49374560();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5896_49770140_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49374320(),_5895_49770460_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__49342580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49342580 = block;
   block->owner = (Object)__49342920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49342580;

   return block;
};

void code__49342920() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_53382460_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49375420();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49342580();
   }
      }
   }
}

Block make__49342920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49342920 = block;
   block->owner = (Object)__48832100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49342920;

   return block;
};

Block __49771260;

Block __49770780;

Block __49770620;

void code__49770620() {
}

Block make__49770620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49770620 = block;
   block->owner = (Object)__49770780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49770620;

   return block;
};

Block __51865840;

void code__51865840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_47624220_mac__n1_58173_53444640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,_58143_51045300_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__51865840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51865840 = block;
   block->owner = (Object)__49770780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51865840;

   return block;
};

void code__49770780() {
 code__49770620();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av0_47624220_mac__n1_58173_53444640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
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
                              src0 = lv0_45629080_mac__n1_58173_53444640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_48547080_mac__n1_58173_53444640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__49397380();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_47624220_mac__n1_58173_53444640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
 code__51865840();
}

Block make__49770780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49770780 = block;
   block->owner = (Object)__49771260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49770780;

   return block;
};

void code__49771260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49373880(),ack_49593640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49373780(),run_48546920_mac__n1_58173_53444640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
 code__49770780();
}

Block make__49771260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49771260 = block;
   block->owner = (Object)__48832100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49771260;

   return block;
};

Block __52241620;

Block __52241240;

Block __52240880;

void code__52240880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58126_51495240_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,lv1_47351760_mac__n1_58173_53444640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49395640(),lvok1_48547020_mac__n1_58173_53444640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__52240880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52240880 = block;
   block->owner = (Object)__52241240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52240880;

   return block;
};

void code__52241240() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58124_51495220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49396320();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52240880();
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
                  src0 = _58125_51495140_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__49395420();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58125_51495140_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49395240(),_58124_51495220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__52241240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52241240 = block;
   block->owner = (Object)__52241620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52241240;

   return block;
};

void code__52241620() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_53382460_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49396760();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52241240();
   }
      }
   }
}

Block make__52241620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52241620 = block;
   block->owner = (Object)__48832100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52241620;

   return block;
};

Block __52410800;

Block __52410320;

Block __52410160;

void code__52410160() {
}

Block make__52410160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52410160 = block;
   block->owner = (Object)__52410320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52410160;

   return block;
};

Block __53343940;

void code__53343940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av1_47981780_mac__n1_58173_53444640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,_58144_51298560_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__53343940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53343940 = block;
   block->owner = (Object)__52410320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53343940;

   return block;
};

void code__52410320() {
 code__52410160();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av1_47981780_mac__n1_58173_53444640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
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
                              src0 = lv1_47351760_mac__n1_58173_53444640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_48547080_mac__n1_58173_53444640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__49391280();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av1_47981780_mac__n1_58173_53444640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
 code__53343940();
}

Block make__52410320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52410320 = block;
   block->owner = (Object)__52410800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52410320;

   return block;
};

void code__52410800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49395060(),ack_49593640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49394940(),run_48546920_mac__n1_58173_53444640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
 code__52410320();
}

Block make__52410800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52410800 = block;
   block->owner = (Object)__48832100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52410800;

   return block;
};

void code__48832100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49378700(),run_48546920_mac__n1_58173_53444640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
 code__48831460();
 code__49342920();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_48547040_mac__n1_58173_53444640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
         src1 = rvok_48546960_mac__n1_58173_53444640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49771260();
   }
      }
   }
 code__52241620();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_48547020_mac__n1_58173_53444640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
         src1 = rvok_48546960_mac__n1_58173_53444640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52410800();
   }
      }
   }
}

Block make__48832100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48832100 = block;
   block->owner = (Object)__48546780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48832100;

   return block;
};

void code__48546780() {
 code__48546560();
 code__49061400();
 code__49058100();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49356940(),ack_49593640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49381240(),run_48546920_mac__n1_58173_53444640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = run_48546920_mac__n1_58173_53444640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49056560();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_49593720_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
         src1 = run_48546920_mac__n1_58173_53444640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48832100();
   }
      }
   }
}

Block make__48546780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48546780 = block;
   block->owner = (Object)__45627880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48546780;

   return block;
};

Block __49055700;

void code__49055700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_47444020_channel__bias_58180_45627580_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,_58182_51593980_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__49055700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49055700 = block;
   block->owner = (Object)__49055220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49055700;

   return block;
};

Block __49055140;

void code__49055140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58182_51593980_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,reg__0_47444020_channel__bias_58180_45627580_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__49055140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49055140 = block;
   block->owner = (Object)__49054280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49055140;

   return block;
};

Block __48619080;

void code__48619080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_47655300_channel__bias_58180_45627580_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,_58183_51709100_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__48619080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48619080 = block;
   block->owner = (Object)__48618760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48619080;

   return block;
};

Block __48618720;

void code__48618720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58183_51709100_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,reg__1_47655300_channel__bias_58180_45627580_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__48618720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48618720 = block;
   block->owner = (Object)__48618400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48618720;

   return block;
};

Block __48617980;

void code__48617980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_47444020_channel__bias_58180_45627580_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,_58197_52673780_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__48617980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48617980 = block;
   block->owner = (Object)__48617100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48617980;

   return block;
};

Block __48616920;

void code__48616920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58197_52673780_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,reg__0_47444020_channel__bias_58180_45627580_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__48616920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48616920 = block;
   block->owner = (Object)__48613460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48616920;

   return block;
};

Block __48635260;

void code__48635260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_47655300_channel__bias_58180_45627580_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,_58198_52991320_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__48635260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48635260 = block;
   block->owner = (Object)__48634980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48635260;

   return block;
};

Block __48634940;

void code__48634940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58198_52991320_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,reg__1_47655300_channel__bias_58180_45627580_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__48634940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48634940 = block;
   block->owner = (Object)__48634560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48634940;

   return block;
};

Block __48629320;

void code__48629320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_45710620_winc_58196_45639860_channel__bias_58180_45627580_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,_58199_52991240_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__48629320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48629320 = block;
   block->owner = (Object)__48629000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48629320;

   return block;
};

Block __48628900;

void code__48628900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58199_52991240_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,abus__w_45710620_winc_58196_45639860_channel__bias_58180_45627580_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__48628900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48628900 = block;
   block->owner = (Object)__48652140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48628900;

   return block;
};

Block __48648940;

void code__48648940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_51287660_channel__z_58210_50979520_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,_58212_51848300_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__48648940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48648940 = block;
   block->owner = (Object)__48648300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48648940;

   return block;
};

Block __48648260;

void code__48648260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58212_51848300_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,reg__0_51287660_channel__z_58210_50979520_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__48648260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48648260 = block;
   block->owner = (Object)__48647660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48648260;

   return block;
};

Block __48668200;

void code__48668200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_51470120_channel__z_58210_50979520_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,_58213_52069460_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__48668200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48668200 = block;
   block->owner = (Object)__48667740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48668200;

   return block;
};

Block __48667700;

void code__48667700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58213_52069460_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,reg__1_51470120_channel__z_58210_50979520_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__48667700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48667700 = block;
   block->owner = (Object)__48667220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48667700;

   return block;
};

Block __52425440;

Block __52423960;

Block __52423600;

void code__52423600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58143_51045300_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,lv0_52118100_add__n_58240_51993440_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49558060(),lvok0_52425720_add__n_58240_51993440_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__52423600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52423600 = block;
   block->owner = (Object)__52423960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52423600;

   return block;
};

Block __52673120;

void code__52673120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58182_51593980_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,rv0_52335080_add__n_58240_51993440_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49555780(),rvok0_52425620_add__n_58240_51993440_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__52673120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52673120 = block;
   block->owner = (Object)__52423960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52673120;

   return block;
};

Block __53060080;

Block __53059600;

void code__53059600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_52118100_add__n_58240_51993440_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
      src1 = rv0_52335080_add__n_58240_51993440_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58212_51848300_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__53059600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53059600 = block;
   block->owner = (Object)__53060080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53059600;

   return block;
};

void code__53060080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49555200(),run_52425580_add__n_58240_51993440_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49555040(),ack__add_49593340_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
 code__53059600();
}

Block make__53060080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53060080 = block;
   block->owner = (Object)__52423960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53060080;

   return block;
};

Block __45595480;

void code__45595480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58144_51298560_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,lv1_52259100_add__n_58240_51993440_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49554120(),lvok1_52425700_add__n_58240_51993440_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__45595480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45595480 = block;
   block->owner = (Object)__52423960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45595480;

   return block;
};

Block __47659780;

void code__47659780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58183_51709100_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,rv1_52425760_add__n_58240_51993440_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49577940(),rvok1_52425600_add__n_58240_51993440_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__47659780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47659780 = block;
   block->owner = (Object)__52423960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47659780;

   return block;
};

Block __48627740;

Block __48651760;

void code__48651760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv1_52259100_add__n_58240_51993440_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
      src1 = rv1_52425760_add__n_58240_51993440_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58213_52069460_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__48651760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48651760 = block;
   block->owner = (Object)__48627740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48651760;

   return block;
};

void code__48627740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49577540(),run_52425580_add__n_58240_51993440_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49577460(),ack__add_49593340_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
 code__48651760();
}

Block make__48627740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48627740 = block;
   block->owner = (Object)__52423960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48627740;

   return block;
};

void code__52423960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49561320(),run_52425580_add__n_58240_51993440_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
 code__52423600();
 code__52673120();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_52425720_add__n_58240_51993440_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
         src1 = rvok0_52425620_add__n_58240_51993440_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53060080();
   }
      }
   }
 code__45595480();
 code__47659780();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_52425700_add__n_58240_51993440_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
         src1 = rvok1_52425600_add__n_58240_51993440_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48627740();
   }
      }
   }
}

Block make__52423960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52423960 = block;
   block->owner = (Object)__52425440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52423960;

   return block;
};

Block __52424900;

void code__52424900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49576120(),lvok0_52425720_add__n_58240_51993440_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49575620(),rvok0_52425620_add__n_58240_51993440_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49574740(),lvok1_52425700_add__n_58240_51993440_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49574660(),rvok1_52425600_add__n_58240_51993440_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__52424900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52424900 = block;
   block->owner = (Object)__52425440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52424900;

   return block;
};

void code__52425440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49540060(),ack__add_49593340_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49539940(),run_52425580_add__n_58240_51993440_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_49593420_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
         src1 = run_52425580_add__n_58240_51993440_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52423960();
   }
   else {
  code__52424900();
   }
      }
   }
}

Block make__52425440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52425440 = block;
   block->owner = (Object)__49594180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52425440;

   return block;
};

Value make__49359700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49359560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49359460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49358500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49358320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49358060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49357840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49357560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49357000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49356940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49381240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49381080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49380980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49380880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49380640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49380440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49378700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49377500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49376500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49376140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49375940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49375820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49375420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49375060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49374720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49374560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49374320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49373880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49373780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49397380() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49396760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49396320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49395640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49395420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49395240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49395060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49394940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49391280() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49540060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49539940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49561320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49558060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49555780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49555200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49555040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49554120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49577940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49577540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49577460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49576120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49575620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49574740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49574660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49604540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49603820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49603120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49624760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49642820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49639080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49638520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49638160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49637860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49637360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49637220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49637000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49636860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49636680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49636340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49635760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49635560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49635420() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49659700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49659100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49658820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49658420() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49657820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49656980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49656440() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49656420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49654180() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__49653380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope layer0_58_84_49736220;

SignalI req__mac_49593720_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makereq__mac_49593720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_49593720_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer0_58_84_49736220;
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

SignalI ack_49593640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makeack_49593640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_49593640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer0_58_84_49736220;
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

SignalI ack__mac_49593420_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makeack__mac_49593420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_49593420_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer0_58_84_49736220;
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

SignalI ack__add_49593340_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makeack__add_49593340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_49593340_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer0_58_84_49736220;
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

SignalI _5897_49770480_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI make_5897_49770480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5897_49770480_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer0_58_84_49736220;
   signalI->name = ":97";
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

SignalI _5895_49770460_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI make_5895_49770460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5895_49770460_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer0_58_84_49736220;
   signalI->name = ":95";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _5896_49770140_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI make_5896_49770140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5896_49770140_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer0_58_84_49736220;
   signalI->name = ":96";
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

SignalI _58143_51045300_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI make_58143_51045300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58143_51045300_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer0_58_84_49736220;
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

SignalI _58144_51298560_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI make_58144_51298560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58144_51298560_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer0_58_84_49736220;
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

SignalI _58126_51495240_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI make_58126_51495240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58126_51495240_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer0_58_84_49736220;
   signalI->name = ":126";
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

SignalI _58124_51495220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI make_58124_51495220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58124_51495220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer0_58_84_49736220;
   signalI->name = ":124";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58125_51495140_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI make_58125_51495140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58125_51495140_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer0_58_84_49736220;
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

SignalI _58182_51593980_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI make_58182_51593980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58182_51593980_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer0_58_84_49736220;
   signalI->name = ":182";
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

SignalI _58183_51709100_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI make_58183_51709100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58183_51709100_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer0_58_84_49736220;
   signalI->name = ":183";
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

SignalI _58212_51848300_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI make_58212_51848300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58212_51848300_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer0_58_84_49736220;
   signalI->name = ":212";
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

SignalI _58213_52069460_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI make_58213_52069460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58213_52069460_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer0_58_84_49736220;
   signalI->name = ":213";
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

SignalI value__z0_52241500_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makevalue__z0_52241500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_52241500_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer0_58_84_49736220;
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

SignalI value__z1_52298920_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makevalue__z1_52298920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z1_52298920_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer0_58_84_49736220;
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

SignalI value__a0_52404420_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makevalue__a0_52404420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_52404420_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer0_58_84_49736220;
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

SignalI value__a1_52558780_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makevalue__a1_52558780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a1_52558780_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer0_58_84_49736220;
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

SignalI flag__z0_52558760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makeflag__z0_52558760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_52558760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer0_58_84_49736220;
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

SignalI flag__z1_52558740_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makeflag__z1_52558740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z1_52558740_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer0_58_84_49736220;
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

SignalI ack__a0_52558720_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makeack__a0_52558720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_52558720_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer0_58_84_49736220;
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

SignalI ack__a1_52558700_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makeack__a1_52558700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a1_52558700_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer0_58_84_49736220;
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

SignalI _58197_52673780_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI make_58197_52673780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58197_52673780_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer0_58_84_49736220;
   signalI->name = ":197";
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

SignalI _58198_52991320_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI make_58198_52991320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58198_52991320_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer0_58_84_49736220;
   signalI->name = ":198";
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

SignalI _58199_52991240_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI make_58199_52991240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58199_52991240_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer0_58_84_49736220;
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

SignalI _5899_52991220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI make_5899_52991220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5899_52991220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer0_58_84_49736220;
   signalI->name = ":99";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58100_52991140_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI make_58100_52991140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58100_52991140_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer0_58_84_49736220;
   signalI->name = ":100";
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

SignalI _58101_53105280_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI make_58101_53105280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58101_53105280_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer0_58_84_49736220;
   signalI->name = ":101";
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

SignalI _58128_53105260_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI make_58128_53105260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58128_53105260_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer0_58_84_49736220;
   signalI->name = ":128";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58129_53105180_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI make_58129_53105180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58129_53105180_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer0_58_84_49736220;
   signalI->name = ":129";
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

SignalI _58130_53244980_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI make_58130_53244980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58130_53244980_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)layer0_58_84_49736220;
   signalI->name = ":130";
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

SystemI counter_53260860;

SystemI makecounter_53260860() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_53260860 = systemI;
   systemI->owner = (Object)layer0_58_84_49736220;
   systemI->name = "counter";
   systemI->system = counter_58_841_53263220;

   return systemI;
};

SystemI func0_49734800;

SystemI makefunc0_49734800() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_49734800 = systemI;
   systemI->owner = (Object)layer0_58_84_49736220;
   systemI->name = "func0";
   systemI->system = func0_58_841_49211120;

   return systemI;
};

SystemI func1_52246960;

SystemI makefunc1_52246960() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func1_52246960 = systemI;
   systemI->owner = (Object)layer0_58_84_49736220;
   systemI->name = "func1";
   systemI->system = func1_58_840_51651680;

   return systemI;
};

Scope channel__w0_5883_49735900;

SignalI trig__r_50871020_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI maketrig__r_50871020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_50871020_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)channel__w0_5883_49735900;
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

SignalI trig__w_50871000_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI maketrig__w_50871000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_50871000_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)channel__w0_5883_49735900;
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

SignalI dbus__r_45606020_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makedbus__r_45606020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_45606020_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)channel__w0_5883_49735900;
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

SignalI dbus__w_47318200_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makedbus__w_47318200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_47318200_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)channel__w0_5883_49735900;
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

SignalI abus__r_47317680_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makeabus__r_47317680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47317680_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)channel__w0_5883_49735900;
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

SignalI abus__w_47317160_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makeabus__w_47317160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47317160_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)channel__w0_5883_49735900;
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

SignalI mem_47577480_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makemem_47577480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_47577480_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)channel__w0_5883_49735900;
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

Scope raddr_5884_49735520;

Scope makeraddr_5884_49735520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5884_49735520 = scope;
   scope->owner = (Object)channel__w0_5883_49735900;
   scope->name = "raddr:84";
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

Scope waddr_5889_49735100;

Scope makewaddr_5889_49735100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5889_49735100 = scope;
   scope->owner = (Object)channel__w0_5883_49735900;
   scope->name = "waddr:89";
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

Scope rinc_5894_49734680;

Scope makerinc_5894_49734680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5894_49734680 = scope;
   scope->owner = (Object)channel__w0_5883_49735900;
   scope->name = "rinc:94";
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

Scope winc_5898_49733640;

Scope makewinc_5898_49733640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5898_49733640 = scope;
   scope->owner = (Object)channel__w0_5883_49735900;
   scope->name = "winc:98";
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

Scope rdec_58102_50871880;

Scope makerdec_58102_50871880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58102_50871880 = scope;
   scope->owner = (Object)channel__w0_5883_49735900;
   scope->name = "rdec:102";
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

Scope wdec_58107_50871460;

Scope makewdec_58107_50871460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58107_50871460 = scope;
   scope->owner = (Object)channel__w0_5883_49735900;
   scope->name = "wdec:107";
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

Behavior __51098880;

Behavior make__51098880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51098880 = behavior;
   behavior->owner = (Object)channel__w0_5883_49735900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_53382480_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   clk_53382480_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_neg += 1;
   clk_53382480_layer0_58_840_53385880______58_84_49346360______58_840_60561680->neg = realloc(clk_53382480_layer0_58_840_53385880______58_84_49346360______58_840_60561680->neg,clk_53382480_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_neg*sizeof(Object));
clk_53382480_layer0_58_840_53385880______58_84_49346360______58_840_60561680->neg[clk_53382480_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_neg-1] = (Object)behavior;
   behavior->block = make__48779660();

   return behavior;
}

Behavior __47886560;

Behavior make__47886560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47886560 = behavior;
   behavior->owner = (Object)channel__w0_5883_49735900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_45606020_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   dbus__r_45606020_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   dbus__r_45606020_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(dbus__r_45606020_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,dbus__r_45606020_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
dbus__r_45606020_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[dbus__r_45606020_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__47887860();

   return behavior;
}

Behavior __47906400;

Behavior make__47906400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47906400 = behavior;
   behavior->owner = (Object)channel__w0_5883_49735900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5897_49770480_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   _5897_49770480_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   _5897_49770480_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(_5897_49770480_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,_5897_49770480_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
_5897_49770480_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[_5897_49770480_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__47884940();

   return behavior;
}

Behavior __47899560;

Behavior make__47899560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47899560 = behavior;
   behavior->owner = (Object)channel__w0_5883_49735900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_50871020_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   trig__r_50871020_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   trig__r_50871020_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(trig__r_50871020_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,trig__r_50871020_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
trig__r_50871020_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[trig__r_50871020_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__47903040();

   return behavior;
}

Behavior __47922520;

Behavior make__47922520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47922520 = behavior;
   behavior->owner = (Object)channel__w0_5883_49735900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5895_49770460_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   _5895_49770460_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   _5895_49770460_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(_5895_49770460_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,_5895_49770460_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
_5895_49770460_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[_5895_49770460_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__47899400();

   return behavior;
}

Behavior __47916400;

Behavior make__47916400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47916400 = behavior;
   behavior->owner = (Object)channel__w0_5883_49735900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_47317680_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   abus__r_47317680_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   abus__r_47317680_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(abus__r_47317680_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,abus__r_47317680_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
abus__r_47317680_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[abus__r_47317680_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__47919980();

   return behavior;
}

Behavior __47934720;

Behavior make__47934720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47934720 = behavior;
   behavior->owner = (Object)channel__w0_5883_49735900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5896_49770140_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   _5896_49770140_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   _5896_49770140_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(_5896_49770140_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,_5896_49770140_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
_5896_49770140_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[_5896_49770140_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__47915020();

   return behavior;
}

Behavior __47985440;

Behavior make__47985440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47985440 = behavior;
   behavior->owner = (Object)channel__w0_5883_49735900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_50871000_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   trig__w_50871000_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   trig__w_50871000_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(trig__w_50871000_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,trig__w_50871000_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
trig__w_50871000_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[trig__w_50871000_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__47965640();

   return behavior;
}

Behavior __47982620;

Behavior make__47982620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47982620 = behavior;
   behavior->owner = (Object)channel__w0_5883_49735900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5899_52991220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   _5899_52991220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   _5899_52991220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(_5899_52991220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,_5899_52991220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
_5899_52991220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[_5899_52991220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__47984340();

   return behavior;
}

Behavior __48036840;

Behavior make__48036840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48036840 = behavior;
   behavior->owner = (Object)channel__w0_5883_49735900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_47317160_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   abus__w_47317160_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   abus__w_47317160_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(abus__w_47317160_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,abus__w_47317160_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
abus__w_47317160_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[abus__w_47317160_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__48021420();

   return behavior;
}

Behavior __48036180;

Behavior make__48036180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48036180 = behavior;
   behavior->owner = (Object)channel__w0_5883_49735900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58100_52991140_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   _58100_52991140_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   _58100_52991140_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(_58100_52991140_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,_58100_52991140_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
_58100_52991140_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[_58100_52991140_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__48036600();

   return behavior;
}

Behavior __48034220;

Behavior make__48034220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48034220 = behavior;
   behavior->owner = (Object)channel__w0_5883_49735900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_47318200_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   dbus__w_47318200_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   dbus__w_47318200_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(dbus__w_47318200_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,dbus__w_47318200_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
dbus__w_47318200_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[dbus__w_47318200_channel__w0_5883_49735900_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__48034740();

   return behavior;
}

Behavior __48033680;

Behavior make__48033680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48033680 = behavior;
   behavior->owner = (Object)channel__w0_5883_49735900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58101_53105280_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   _58101_53105280_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   _58101_53105280_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(_58101_53105280_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,_58101_53105280_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
_58101_53105280_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[_58101_53105280_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__48034120();

   return behavior;
}

Scope makechannel__w0_5883_49735900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_5883_49735900 = scope;
   scope->owner = (Object)layer0_58_84_49736220;
   scope->name = "channel_w0:83";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_50871020();
   scope->inners[1] = maketrig__w_50871000();
   scope->inners[2] = makedbus__r_45606020();
   scope->inners[3] = makedbus__w_47318200();
   scope->inners[4] = makeabus__r_47317680();
   scope->inners[5] = makeabus__w_47317160();
   scope->inners[6] = makemem_47577480();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_5884_49735520();
   scope->scopes[1] = makewaddr_5889_49735100();
   scope->scopes[2] = makerinc_5894_49734680();
   scope->scopes[3] = makewinc_5898_49733640();
   scope->scopes[4] = makerdec_58102_50871880();
   scope->scopes[5] = makewdec_58107_50871460();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51098880();
   scope->behaviors[1] = make__47886560();
   scope->behaviors[2] = make__47906400();
   scope->behaviors[3] = make__47899560();
   scope->behaviors[4] = make__47922520();
   scope->behaviors[5] = make__47916400();
   scope->behaviors[6] = make__47934720();
   scope->behaviors[7] = make__47985440();
   scope->behaviors[8] = make__47982620();
   scope->behaviors[9] = make__48036840();
   scope->behaviors[10] = make__48036180();
   scope->behaviors[11] = make__48034220();
   scope->behaviors[12] = make__48033680();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__w1_58112_51098760;

SignalI trig__r_51095920_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI maketrig__r_51095920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_51095920_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)channel__w1_58112_51098760;
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

SignalI trig__w_51095900_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI maketrig__w_51095900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_51095900_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)channel__w1_58112_51098760;
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

SignalI dbus__r_51338820_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makedbus__r_51338820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_51338820_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)channel__w1_58112_51098760;
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

SignalI dbus__w_51499860_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makedbus__w_51499860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_51499860_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)channel__w1_58112_51098760;
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

SignalI abus__r_51499780_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makeabus__r_51499780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_51499780_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)channel__w1_58112_51098760;
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

SignalI abus__w_51499700_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makeabus__w_51499700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_51499700_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)channel__w1_58112_51098760;
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

SignalI mem_51578800_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makemem_51578800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_51578800_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)channel__w1_58112_51098760;
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

Scope raddr_58113_51098460;

Scope makeraddr_58113_51098460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58113_51098460 = scope;
   scope->owner = (Object)channel__w1_58112_51098760;
   scope->name = "raddr:113";
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

Scope waddr_58118_51098040;

Scope makewaddr_58118_51098040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58118_51098040 = scope;
   scope->owner = (Object)channel__w1_58112_51098760;
   scope->name = "waddr:118";
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

Scope rinc_58123_51097620;

Scope makerinc_58123_51097620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58123_51097620 = scope;
   scope->owner = (Object)channel__w1_58112_51098760;
   scope->name = "rinc:123";
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

Scope winc_58127_51097200;

Scope makewinc_58127_51097200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58127_51097200 = scope;
   scope->owner = (Object)channel__w1_58112_51098760;
   scope->name = "winc:127";
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

Scope rdec_58131_51096780;

Scope makerdec_58131_51096780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58131_51096780 = scope;
   scope->owner = (Object)channel__w1_58112_51098760;
   scope->name = "rdec:131";
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

Scope wdec_58136_51096360;

Scope makewdec_58136_51096360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58136_51096360 = scope;
   scope->owner = (Object)channel__w1_58112_51098760;
   scope->name = "wdec:136";
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

Behavior __52670760;

Behavior make__52670760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52670760 = behavior;
   behavior->owner = (Object)channel__w1_58112_51098760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_53382480_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   clk_53382480_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_neg += 1;
   clk_53382480_layer0_58_840_53385880______58_84_49346360______58_840_60561680->neg = realloc(clk_53382480_layer0_58_840_53385880______58_84_49346360______58_840_60561680->neg,clk_53382480_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_neg*sizeof(Object));
clk_53382480_layer0_58_840_53385880______58_84_49346360______58_840_60561680->neg[clk_53382480_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_neg-1] = (Object)behavior;
   behavior->block = make__52123520();

   return behavior;
}

Behavior __48960300;

Behavior make__48960300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48960300 = behavior;
   behavior->owner = (Object)channel__w1_58112_51098760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_51338820_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   dbus__r_51338820_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   dbus__r_51338820_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(dbus__r_51338820_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,dbus__r_51338820_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
dbus__r_51338820_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[dbus__r_51338820_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__48960500();

   return behavior;
}

Behavior __48959860;

Behavior make__48959860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48959860 = behavior;
   behavior->owner = (Object)channel__w1_58112_51098760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58126_51495240_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   _58126_51495240_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   _58126_51495240_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(_58126_51495240_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,_58126_51495240_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
_58126_51495240_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[_58126_51495240_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__48960180();

   return behavior;
}

Behavior __48958840;

Behavior make__48958840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48958840 = behavior;
   behavior->owner = (Object)channel__w1_58112_51098760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_51095920_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   trig__r_51095920_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   trig__r_51095920_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(trig__r_51095920_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,trig__r_51095920_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
trig__r_51095920_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[trig__r_51095920_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__48959340();

   return behavior;
}

Behavior __48955860;

Behavior make__48955860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48955860 = behavior;
   behavior->owner = (Object)channel__w1_58112_51098760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58124_51495220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   _58124_51495220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   _58124_51495220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(_58124_51495220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,_58124_51495220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
_58124_51495220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[_58124_51495220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__48958720();

   return behavior;
}

Behavior __49150700;

Behavior make__49150700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49150700 = behavior;
   behavior->owner = (Object)channel__w1_58112_51098760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_51499780_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   abus__r_51499780_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   abus__r_51499780_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(abus__r_51499780_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,abus__r_51499780_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
abus__r_51499780_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[abus__r_51499780_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__49151080();

   return behavior;
}

Behavior __49150300;

Behavior make__49150300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49150300 = behavior;
   behavior->owner = (Object)channel__w1_58112_51098760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58125_51495140_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   _58125_51495140_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   _58125_51495140_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(_58125_51495140_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,_58125_51495140_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
_58125_51495140_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[_58125_51495140_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__49150600();

   return behavior;
}

Behavior __49147000;

Behavior make__49147000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49147000 = behavior;
   behavior->owner = (Object)channel__w1_58112_51098760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_51095900_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   trig__w_51095900_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   trig__w_51095900_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(trig__w_51095900_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,trig__w_51095900_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
trig__w_51095900_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[trig__w_51095900_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__49149620();

   return behavior;
}

Behavior __49146760;

Behavior make__49146760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49146760 = behavior;
   behavior->owner = (Object)channel__w1_58112_51098760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58128_53105260_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   _58128_53105260_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   _58128_53105260_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(_58128_53105260_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,_58128_53105260_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
_58128_53105260_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[_58128_53105260_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__49146960();

   return behavior;
}

Behavior __49145160;

Behavior make__49145160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49145160 = behavior;
   behavior->owner = (Object)channel__w1_58112_51098760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_51499700_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   abus__w_51499700_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   abus__w_51499700_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(abus__w_51499700_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,abus__w_51499700_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
abus__w_51499700_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[abus__w_51499700_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__49145840();

   return behavior;
}

Behavior __49144000;

Behavior make__49144000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49144000 = behavior;
   behavior->owner = (Object)channel__w1_58112_51098760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58129_53105180_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   _58129_53105180_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   _58129_53105180_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(_58129_53105180_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,_58129_53105180_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
_58129_53105180_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[_58129_53105180_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__49144840();

   return behavior;
}

Behavior __48495720;

Behavior make__48495720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48495720 = behavior;
   behavior->owner = (Object)channel__w1_58112_51098760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_51499860_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   dbus__w_51499860_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   dbus__w_51499860_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(dbus__w_51499860_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,dbus__w_51499860_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
dbus__w_51499860_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[dbus__w_51499860_channel__w1_58112_51098760_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__48496040();

   return behavior;
}

Behavior __48495460;

Behavior make__48495460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48495460 = behavior;
   behavior->owner = (Object)channel__w1_58112_51098760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58130_53244980_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   _58130_53244980_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   _58130_53244980_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(_58130_53244980_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,_58130_53244980_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
_58130_53244980_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[_58130_53244980_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__48495660();

   return behavior;
}

Scope makechannel__w1_58112_51098760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w1_58112_51098760 = scope;
   scope->owner = (Object)layer0_58_84_49736220;
   scope->name = "channel_w1:112";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_51095920();
   scope->inners[1] = maketrig__w_51095900();
   scope->inners[2] = makedbus__r_51338820();
   scope->inners[3] = makedbus__w_51499860();
   scope->inners[4] = makeabus__r_51499780();
   scope->inners[5] = makeabus__w_51499700();
   scope->inners[6] = makemem_51578800();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58113_51098460();
   scope->scopes[1] = makewaddr_58118_51098040();
   scope->scopes[2] = makerinc_58123_51097620();
   scope->scopes[3] = makewinc_58127_51097200();
   scope->scopes[4] = makerdec_58131_51096780();
   scope->scopes[5] = makewdec_58136_51096360();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52670760();
   scope->behaviors[1] = make__48960300();
   scope->behaviors[2] = make__48959860();
   scope->behaviors[3] = make__48958840();
   scope->behaviors[4] = make__48955860();
   scope->behaviors[5] = make__49150700();
   scope->behaviors[6] = make__49150300();
   scope->behaviors[7] = make__49147000();
   scope->behaviors[8] = make__49146760();
   scope->behaviors[9] = make__49145160();
   scope->behaviors[10] = make__49144000();
   scope->behaviors[11] = make__48495720();
   scope->behaviors[12] = make__48495460();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58141_52670640;

SignalI reg__0_52991940_channel__accum_58141_52670640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makereg__0_52991940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_52991940_channel__accum_58141_52670640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)channel__accum_58141_52670640;
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

SignalI reg__1_53062860_channel__accum_58141_52670640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makereg__1_53062860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_53062860_channel__accum_58141_52670640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)channel__accum_58141_52670640;
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

Scope anum_58142_52670340;

Scope makeanum_58142_52670340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58142_52670340 = scope;
   scope->owner = (Object)channel__accum_58141_52670640;
   scope->name = "anum:142";
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

Scope raddr_58145_52669920;

Scope makeraddr_58145_52669920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58145_52669920 = scope;
   scope->owner = (Object)channel__accum_58141_52670640;
   scope->name = "raddr:145";
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

Scope waddr_58149_52669500;

Scope makewaddr_58149_52669500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58149_52669500 = scope;
   scope->owner = (Object)channel__accum_58141_52670640;
   scope->name = "waddr:149";
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

Scope rinc_58153_52669080;

SignalI abus__r_52668700_rinc_58153_52669080_channel__accum_58141_52670640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makeabus__r_52668700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_52668700_rinc_58153_52669080_channel__accum_58141_52670640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)rinc_58153_52669080;
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

Scope makerinc_58153_52669080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58153_52669080 = scope;
   scope->owner = (Object)channel__accum_58141_52670640;
   scope->name = "rinc:153";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_52668700();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58158_52668580;

SignalI abus__w_52668200_winc_58158_52668580_channel__accum_58141_52670640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makeabus__w_52668200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_52668200_winc_58158_52668580_channel__accum_58141_52670640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)winc_58158_52668580;
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

Scope makewinc_58158_52668580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58158_52668580 = scope;
   scope->owner = (Object)channel__accum_58141_52670640;
   scope->name = "winc:158";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_52668200();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58163_52668080;

SignalI abus__r_52667700_rdec_58163_52668080_channel__accum_58141_52670640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makeabus__r_52667700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_52667700_rdec_58163_52668080_channel__accum_58141_52670640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)rdec_58163_52668080;
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

Scope makerdec_58163_52668080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58163_52668080 = scope;
   scope->owner = (Object)channel__accum_58141_52670640;
   scope->name = "rdec:163";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_52667700();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58168_52667580;

SignalI abus__w_52667200_wdec_58168_52667580_channel__accum_58141_52670640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makeabus__w_52667200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_52667200_wdec_58168_52667580_channel__accum_58141_52670640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)wdec_58168_52667580;
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

Scope makewdec_58168_52667580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58168_52667580 = scope;
   scope->owner = (Object)channel__accum_58141_52670640;
   scope->name = "wdec:168";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_52667200();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __48553560;

Behavior make__48553560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48553560 = behavior;
   behavior->owner = (Object)channel__accum_58141_52670640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_52991940_channel__accum_58141_52670640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   reg__0_52991940_channel__accum_58141_52670640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   reg__0_52991940_channel__accum_58141_52670640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(reg__0_52991940_channel__accum_58141_52670640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,reg__0_52991940_channel__accum_58141_52670640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
reg__0_52991940_channel__accum_58141_52670640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[reg__0_52991940_channel__accum_58141_52670640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__48553840();

   return behavior;
}

Behavior __48552520;

Behavior make__48552520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48552520 = behavior;
   behavior->owner = (Object)channel__accum_58141_52670640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58143_51045300_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   _58143_51045300_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   _58143_51045300_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(_58143_51045300_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,_58143_51045300_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
_58143_51045300_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[_58143_51045300_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__48553240();

   return behavior;
}

Behavior __48550660;

Behavior make__48550660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48550660 = behavior;
   behavior->owner = (Object)channel__accum_58141_52670640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_53062860_channel__accum_58141_52670640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   reg__1_53062860_channel__accum_58141_52670640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   reg__1_53062860_channel__accum_58141_52670640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(reg__1_53062860_channel__accum_58141_52670640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,reg__1_53062860_channel__accum_58141_52670640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
reg__1_53062860_channel__accum_58141_52670640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[reg__1_53062860_channel__accum_58141_52670640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__48550960();

   return behavior;
}

Behavior __48550280;

Behavior make__48550280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48550280 = behavior;
   behavior->owner = (Object)channel__accum_58141_52670640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58144_51298560_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   _58144_51298560_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   _58144_51298560_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(_58144_51298560_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,_58144_51298560_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
_58144_51298560_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[_58144_51298560_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__48550440();

   return behavior;
}

Scope makechannel__accum_58141_52670640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58141_52670640 = scope;
   scope->owner = (Object)layer0_58_84_49736220;
   scope->name = "channel_accum:141";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_52991940();
   scope->inners[1] = makereg__1_53062860();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58142_52670340();
   scope->scopes[1] = makeraddr_58145_52669920();
   scope->scopes[2] = makewaddr_58149_52669500();
   scope->scopes[3] = makerinc_58153_52669080();
   scope->scopes[4] = makewinc_58158_52668580();
   scope->scopes[5] = makerdec_58163_52668080();
   scope->scopes[6] = makewdec_58168_52667580();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48553560();
   scope->behaviors[1] = make__48552520();
   scope->behaviors[2] = make__48550660();
   scope->behaviors[3] = make__48550280();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58173_53444640;

SignalI lv0_45629080_mac__n1_58173_53444640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makelv0_45629080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_45629080_mac__n1_58173_53444640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)mac__n1_58173_53444640;
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

SignalI lv1_47351760_mac__n1_58173_53444640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makelv1_47351760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_47351760_mac__n1_58173_53444640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)mac__n1_58173_53444640;
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

SignalI av0_47624220_mac__n1_58173_53444640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makeav0_47624220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_47624220_mac__n1_58173_53444640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)mac__n1_58173_53444640;
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

SignalI av1_47981780_mac__n1_58173_53444640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makeav1_47981780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av1_47981780_mac__n1_58173_53444640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)mac__n1_58173_53444640;
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

SignalI rv_48547080_mac__n1_58173_53444640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makerv_48547080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_48547080_mac__n1_58173_53444640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)mac__n1_58173_53444640;
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

SignalI lvok0_48547040_mac__n1_58173_53444640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makelvok0_48547040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_48547040_mac__n1_58173_53444640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)mac__n1_58173_53444640;
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

SignalI lvok1_48547020_mac__n1_58173_53444640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makelvok1_48547020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_48547020_mac__n1_58173_53444640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)mac__n1_58173_53444640;
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

SignalI rvok_48546960_mac__n1_58173_53444640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makervok_48546960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_48546960_mac__n1_58173_53444640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)mac__n1_58173_53444640;
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

SignalI run_48546920_mac__n1_58173_53444640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makerun_48546920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_48546920_mac__n1_58173_53444640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)mac__n1_58173_53444640;
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

Behavior __45627880;

Behavior make__45627880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45627880 = behavior;
   behavior->owner = (Object)mac__n1_58173_53444640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_53382480_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   clk_53382480_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_pos += 1;
   clk_53382480_layer0_58_840_53385880______58_84_49346360______58_840_60561680->pos = realloc(clk_53382480_layer0_58_840_53385880______58_84_49346360______58_840_60561680->pos,clk_53382480_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_pos*sizeof(Object));
clk_53382480_layer0_58_840_53385880______58_84_49346360______58_840_60561680->pos[clk_53382480_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_pos-1] = (Object)behavior;
   behavior->block = make__48546780();

   return behavior;
}

Scope makemac__n1_58173_53444640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58173_53444640 = scope;
   scope->owner = (Object)layer0_58_84_49736220;
   scope->name = "mac_n1:173";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_45629080();
   scope->inners[1] = makelv1_47351760();
   scope->inners[2] = makeav0_47624220();
   scope->inners[3] = makeav1_47981780();
   scope->inners[4] = makerv_48547080();
   scope->inners[5] = makelvok0_48547040();
   scope->inners[6] = makelvok1_48547020();
   scope->inners[7] = makervok_48546960();
   scope->inners[8] = makerun_48546920();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__45627880();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__bias_58180_45627580;

SignalI reg__0_47444020_channel__bias_58180_45627580_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makereg__0_47444020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_47444020_channel__bias_58180_45627580_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)channel__bias_58180_45627580;
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

SignalI reg__1_47655300_channel__bias_58180_45627580_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makereg__1_47655300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_47655300_channel__bias_58180_45627580_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)channel__bias_58180_45627580;
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

Scope anum_58181_45626880;

Scope makeanum_58181_45626880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58181_45626880 = scope;
   scope->owner = (Object)channel__bias_58180_45627580;
   scope->name = "anum:181";
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

Scope raddr_58184_45626040;

Scope makeraddr_58184_45626040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58184_45626040 = scope;
   scope->owner = (Object)channel__bias_58180_45627580;
   scope->name = "raddr:184";
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

Scope waddr_58188_45625440;

Scope makewaddr_58188_45625440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58188_45625440 = scope;
   scope->owner = (Object)channel__bias_58180_45627580;
   scope->name = "waddr:188";
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

Scope rinc_58192_45644600;

SignalI abus__r_45640640_rinc_58192_45644600_channel__bias_58180_45627580_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makeabus__r_45640640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_45640640_rinc_58192_45644600_channel__bias_58180_45627580_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)rinc_58192_45644600;
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

Scope makerinc_58192_45644600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58192_45644600 = scope;
   scope->owner = (Object)channel__bias_58180_45627580;
   scope->name = "rinc:192";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_45640640();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58196_45639860;

SignalI abus__w_45710620_winc_58196_45639860_channel__bias_58180_45627580_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makeabus__w_45710620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_45710620_winc_58196_45639860_channel__bias_58180_45627580_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)winc_58196_45639860;
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

Behavior __48629000;

Behavior make__48629000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48629000 = behavior;
   behavior->owner = (Object)winc_58196_45639860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_45710620_winc_58196_45639860_channel__bias_58180_45627580_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   abus__w_45710620_winc_58196_45639860_channel__bias_58180_45627580_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   abus__w_45710620_winc_58196_45639860_channel__bias_58180_45627580_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(abus__w_45710620_winc_58196_45639860_channel__bias_58180_45627580_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,abus__w_45710620_winc_58196_45639860_channel__bias_58180_45627580_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
abus__w_45710620_winc_58196_45639860_channel__bias_58180_45627580_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[abus__w_45710620_winc_58196_45639860_channel__bias_58180_45627580_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__48629320();

   return behavior;
}

Behavior __48652140;

Behavior make__48652140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48652140 = behavior;
   behavior->owner = (Object)winc_58196_45639860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58199_52991240_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   _58199_52991240_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   _58199_52991240_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(_58199_52991240_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,_58199_52991240_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
_58199_52991240_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[_58199_52991240_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__48628900();

   return behavior;
}

Scope makewinc_58196_45639860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58196_45639860 = scope;
   scope->owner = (Object)channel__bias_58180_45627580;
   scope->name = "winc:196";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_45710620();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48629000();
   scope->behaviors[1] = make__48652140();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58200_45706460;

SignalI abus__r_45755100_rdec_58200_45706460_channel__bias_58180_45627580_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makeabus__r_45755100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_45755100_rdec_58200_45706460_channel__bias_58180_45627580_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)rdec_58200_45706460;
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

Scope makerdec_58200_45706460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58200_45706460 = scope;
   scope->owner = (Object)channel__bias_58180_45627580;
   scope->name = "rdec:200";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_45755100();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58205_45754780;

SignalI abus__w_45753720_wdec_58205_45754780_channel__bias_58180_45627580_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makeabus__w_45753720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_45753720_wdec_58205_45754780_channel__bias_58180_45627580_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)wdec_58205_45754780;
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

Scope makewdec_58205_45754780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58205_45754780 = scope;
   scope->owner = (Object)channel__bias_58180_45627580;
   scope->name = "wdec:205";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_45753720();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __49055220;

Behavior make__49055220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49055220 = behavior;
   behavior->owner = (Object)channel__bias_58180_45627580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_47444020_channel__bias_58180_45627580_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   reg__0_47444020_channel__bias_58180_45627580_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   reg__0_47444020_channel__bias_58180_45627580_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(reg__0_47444020_channel__bias_58180_45627580_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,reg__0_47444020_channel__bias_58180_45627580_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
reg__0_47444020_channel__bias_58180_45627580_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[reg__0_47444020_channel__bias_58180_45627580_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__49055700();

   return behavior;
}

Behavior __49054280;

Behavior make__49054280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49054280 = behavior;
   behavior->owner = (Object)channel__bias_58180_45627580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58182_51593980_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   _58182_51593980_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   _58182_51593980_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(_58182_51593980_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,_58182_51593980_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
_58182_51593980_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[_58182_51593980_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__49055140();

   return behavior;
}

Behavior __48618760;

Behavior make__48618760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48618760 = behavior;
   behavior->owner = (Object)channel__bias_58180_45627580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_47655300_channel__bias_58180_45627580_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   reg__1_47655300_channel__bias_58180_45627580_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   reg__1_47655300_channel__bias_58180_45627580_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(reg__1_47655300_channel__bias_58180_45627580_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,reg__1_47655300_channel__bias_58180_45627580_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
reg__1_47655300_channel__bias_58180_45627580_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[reg__1_47655300_channel__bias_58180_45627580_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__48619080();

   return behavior;
}

Behavior __48618400;

Behavior make__48618400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48618400 = behavior;
   behavior->owner = (Object)channel__bias_58180_45627580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58183_51709100_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   _58183_51709100_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   _58183_51709100_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(_58183_51709100_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,_58183_51709100_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
_58183_51709100_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[_58183_51709100_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__48618720();

   return behavior;
}

Behavior __48617100;

Behavior make__48617100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48617100 = behavior;
   behavior->owner = (Object)channel__bias_58180_45627580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_47444020_channel__bias_58180_45627580_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   reg__0_47444020_channel__bias_58180_45627580_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   reg__0_47444020_channel__bias_58180_45627580_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(reg__0_47444020_channel__bias_58180_45627580_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,reg__0_47444020_channel__bias_58180_45627580_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
reg__0_47444020_channel__bias_58180_45627580_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[reg__0_47444020_channel__bias_58180_45627580_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__48617980();

   return behavior;
}

Behavior __48613460;

Behavior make__48613460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48613460 = behavior;
   behavior->owner = (Object)channel__bias_58180_45627580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58197_52673780_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   _58197_52673780_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   _58197_52673780_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(_58197_52673780_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,_58197_52673780_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
_58197_52673780_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[_58197_52673780_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__48616920();

   return behavior;
}

Behavior __48634980;

Behavior make__48634980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48634980 = behavior;
   behavior->owner = (Object)channel__bias_58180_45627580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_47655300_channel__bias_58180_45627580_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   reg__1_47655300_channel__bias_58180_45627580_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   reg__1_47655300_channel__bias_58180_45627580_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(reg__1_47655300_channel__bias_58180_45627580_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,reg__1_47655300_channel__bias_58180_45627580_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
reg__1_47655300_channel__bias_58180_45627580_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[reg__1_47655300_channel__bias_58180_45627580_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__48635260();

   return behavior;
}

Behavior __48634560;

Behavior make__48634560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48634560 = behavior;
   behavior->owner = (Object)channel__bias_58180_45627580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58198_52991320_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   _58198_52991320_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   _58198_52991320_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(_58198_52991320_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,_58198_52991320_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
_58198_52991320_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[_58198_52991320_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__48634940();

   return behavior;
}

Scope makechannel__bias_58180_45627580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__bias_58180_45627580 = scope;
   scope->owner = (Object)layer0_58_84_49736220;
   scope->name = "channel_bias:180";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_47444020();
   scope->inners[1] = makereg__1_47655300();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58181_45626880();
   scope->scopes[1] = makeraddr_58184_45626040();
   scope->scopes[2] = makewaddr_58188_45625440();
   scope->scopes[3] = makerinc_58192_45644600();
   scope->scopes[4] = makewinc_58196_45639860();
   scope->scopes[5] = makerdec_58200_45706460();
   scope->scopes[6] = makewdec_58205_45754780();
   scope->num_behaviors = 8;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49055220();
   scope->behaviors[1] = make__49054280();
   scope->behaviors[2] = make__48618760();
   scope->behaviors[3] = make__48618400();
   scope->behaviors[4] = make__48617100();
   scope->behaviors[5] = make__48613460();
   scope->behaviors[6] = make__48634980();
   scope->behaviors[7] = make__48634560();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58210_50979520;

SignalI reg__0_51287660_channel__z_58210_50979520_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makereg__0_51287660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_51287660_channel__z_58210_50979520_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)channel__z_58210_50979520;
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

SignalI reg__1_51470120_channel__z_58210_50979520_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makereg__1_51470120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_51470120_channel__z_58210_50979520_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)channel__z_58210_50979520;
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

Scope anum_58211_50979220;

Scope makeanum_58211_50979220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58211_50979220 = scope;
   scope->owner = (Object)channel__z_58210_50979520;
   scope->name = "anum:211";
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

Scope raddr_58214_51019620;

Scope makeraddr_58214_51019620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58214_51019620 = scope;
   scope->owner = (Object)channel__z_58210_50979520;
   scope->name = "raddr:214";
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

Scope waddr_58218_51019200;

Scope makewaddr_58218_51019200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58218_51019200 = scope;
   scope->owner = (Object)channel__z_58210_50979520;
   scope->name = "waddr:218";
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

Scope rinc_58222_51018740;

SignalI abus__r_51018300_rinc_58222_51018740_channel__z_58210_50979520_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makeabus__r_51018300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_51018300_rinc_58222_51018740_channel__z_58210_50979520_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)rinc_58222_51018740;
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

Scope makerinc_58222_51018740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58222_51018740 = scope;
   scope->owner = (Object)channel__z_58210_50979520;
   scope->name = "rinc:222";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_51018300();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58226_51018180;

SignalI abus__w_51017740_winc_58226_51018180_channel__z_58210_50979520_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makeabus__w_51017740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_51017740_winc_58226_51018180_channel__z_58210_50979520_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)winc_58226_51018180;
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

Scope makewinc_58226_51018180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58226_51018180 = scope;
   scope->owner = (Object)channel__z_58210_50979520;
   scope->name = "winc:226";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_51017740();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58230_51017580;

SignalI abus__r_51017200_rdec_58230_51017580_channel__z_58210_50979520_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makeabus__r_51017200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_51017200_rdec_58230_51017580_channel__z_58210_50979520_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)rdec_58230_51017580;
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

Scope makerdec_58230_51017580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58230_51017580 = scope;
   scope->owner = (Object)channel__z_58210_50979520;
   scope->name = "rdec:230";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_51017200();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58235_51017080;

SignalI abus__w_51016700_wdec_58235_51017080_channel__z_58210_50979520_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makeabus__w_51016700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_51016700_wdec_58235_51017080_channel__z_58210_50979520_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)wdec_58235_51017080;
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

Scope makewdec_58235_51017080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58235_51017080 = scope;
   scope->owner = (Object)channel__z_58210_50979520;
   scope->name = "wdec:235";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_51016700();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __48648300;

Behavior make__48648300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48648300 = behavior;
   behavior->owner = (Object)channel__z_58210_50979520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_51287660_channel__z_58210_50979520_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   reg__0_51287660_channel__z_58210_50979520_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   reg__0_51287660_channel__z_58210_50979520_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(reg__0_51287660_channel__z_58210_50979520_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,reg__0_51287660_channel__z_58210_50979520_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
reg__0_51287660_channel__z_58210_50979520_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[reg__0_51287660_channel__z_58210_50979520_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__48648940();

   return behavior;
}

Behavior __48647660;

Behavior make__48647660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48647660 = behavior;
   behavior->owner = (Object)channel__z_58210_50979520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58212_51848300_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   _58212_51848300_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   _58212_51848300_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(_58212_51848300_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,_58212_51848300_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
_58212_51848300_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[_58212_51848300_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__48648260();

   return behavior;
}

Behavior __48667740;

Behavior make__48667740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48667740 = behavior;
   behavior->owner = (Object)channel__z_58210_50979520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_51470120_channel__z_58210_50979520_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   reg__1_51470120_channel__z_58210_50979520_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   reg__1_51470120_channel__z_58210_50979520_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(reg__1_51470120_channel__z_58210_50979520_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,reg__1_51470120_channel__z_58210_50979520_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
reg__1_51470120_channel__z_58210_50979520_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[reg__1_51470120_channel__z_58210_50979520_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__48668200();

   return behavior;
}

Behavior __48667220;

Behavior make__48667220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48667220 = behavior;
   behavior->owner = (Object)channel__z_58210_50979520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58213_52069460_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   _58213_52069460_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   _58213_52069460_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(_58213_52069460_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,_58213_52069460_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
_58213_52069460_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[_58213_52069460_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__48667700();

   return behavior;
}

Scope makechannel__z_58210_50979520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58210_50979520 = scope;
   scope->owner = (Object)layer0_58_84_49736220;
   scope->name = "channel_z:210";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_51287660();
   scope->inners[1] = makereg__1_51470120();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58211_50979220();
   scope->scopes[1] = makeraddr_58214_51019620();
   scope->scopes[2] = makewaddr_58218_51019200();
   scope->scopes[3] = makerinc_58222_51018740();
   scope->scopes[4] = makewinc_58226_51018180();
   scope->scopes[5] = makerdec_58230_51017580();
   scope->scopes[6] = makewdec_58235_51017080();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48648300();
   scope->behaviors[1] = make__48647660();
   scope->behaviors[2] = make__48667740();
   scope->behaviors[3] = make__48667220();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58240_51993440;

SignalI lv0_52118100_add__n_58240_51993440_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makelv0_52118100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_52118100_add__n_58240_51993440_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)add__n_58240_51993440;
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

SignalI lv1_52259100_add__n_58240_51993440_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makelv1_52259100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_52259100_add__n_58240_51993440_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)add__n_58240_51993440;
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

SignalI rv0_52335080_add__n_58240_51993440_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makerv0_52335080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_52335080_add__n_58240_51993440_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)add__n_58240_51993440;
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

SignalI rv1_52425760_add__n_58240_51993440_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makerv1_52425760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv1_52425760_add__n_58240_51993440_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)add__n_58240_51993440;
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

SignalI lvok0_52425720_add__n_58240_51993440_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makelvok0_52425720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_52425720_add__n_58240_51993440_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)add__n_58240_51993440;
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

SignalI lvok1_52425700_add__n_58240_51993440_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makelvok1_52425700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_52425700_add__n_58240_51993440_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)add__n_58240_51993440;
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

SignalI rvok0_52425620_add__n_58240_51993440_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makervok0_52425620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_52425620_add__n_58240_51993440_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)add__n_58240_51993440;
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

SignalI rvok1_52425600_add__n_58240_51993440_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makervok1_52425600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok1_52425600_add__n_58240_51993440_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)add__n_58240_51993440;
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

SignalI run_52425580_add__n_58240_51993440_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680;

SignalI makerun_52425580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_52425580_add__n_58240_51993440_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)add__n_58240_51993440;
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

Behavior __49594180;

Behavior make__49594180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49594180 = behavior;
   behavior->owner = (Object)add__n_58240_51993440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_53382480_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   clk_53382480_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_pos += 1;
   clk_53382480_layer0_58_840_53385880______58_84_49346360______58_840_60561680->pos = realloc(clk_53382480_layer0_58_840_53385880______58_84_49346360______58_840_60561680->pos,clk_53382480_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_pos*sizeof(Object));
clk_53382480_layer0_58_840_53385880______58_84_49346360______58_840_60561680->pos[clk_53382480_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_pos-1] = (Object)behavior;
   behavior->block = make__52425440();

   return behavior;
}

Scope makeadd__n_58240_51993440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58240_51993440 = scope;
   scope->owner = (Object)layer0_58_84_49736220;
   scope->name = "add_n:240";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_52118100();
   scope->inners[1] = makelv1_52259100();
   scope->inners[2] = makerv0_52335080();
   scope->inners[3] = makerv1_52425760();
   scope->inners[4] = makelvok0_52425720();
   scope->inners[5] = makelvok1_52425700();
   scope->inners[6] = makervok0_52425620();
   scope->inners[7] = makervok1_52425600();
   scope->inners[8] = makerun_52425580();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49594180();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __52687960;

Behavior make__52687960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52687960 = behavior;
   behavior->owner = (Object)layer0_58_84_49736220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_53382480_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   clk_53382480_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_pos += 1;
   clk_53382480_layer0_58_840_53385880______58_84_49346360______58_840_60561680->pos = realloc(clk_53382480_layer0_58_840_53385880______58_84_49346360______58_840_60561680->pos,clk_53382480_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_pos*sizeof(Object));
clk_53382480_layer0_58_840_53385880______58_84_49346360______58_840_60561680->pos[clk_53382480_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_pos-1] = (Object)behavior;
   behavior->block = make__49363460();

   return behavior;
}

Behavior __51099880;

Behavior make__51099880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51099880 = behavior;
   behavior->owner = (Object)layer0_58_84_49736220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_53382480_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   clk_53382480_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_pos += 1;
   clk_53382480_layer0_58_840_53385880______58_84_49346360______58_840_60561680->pos = realloc(clk_53382480_layer0_58_840_53385880______58_84_49346360______58_840_60561680->pos,clk_53382480_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_pos*sizeof(Object));
clk_53382480_layer0_58_840_53385880______58_84_49346360______58_840_60561680->pos[clk_53382480_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_pos-1] = (Object)behavior;
   behavior->block = make__52687740();

   return behavior;
}

Behavior __53386780;

Behavior make__53386780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53386780 = behavior;
   behavior->owner = (Object)layer0_58_84_49736220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_53382480_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   clk_53382480_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_pos += 1;
   clk_53382480_layer0_58_840_53385880______58_84_49346360______58_840_60561680->pos = realloc(clk_53382480_layer0_58_840_53385880______58_84_49346360______58_840_60561680->pos,clk_53382480_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_pos*sizeof(Object));
clk_53382480_layer0_58_840_53385880______58_84_49346360______58_840_60561680->pos[clk_53382480_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_pos-1] = (Object)behavior;
   behavior->block = make__51099760();

   return behavior;
}

Behavior __47640940;

Behavior make__47640940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47640940 = behavior;
   behavior->owner = (Object)layer0_58_84_49736220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_53382380_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   req_53382380_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   req_53382380_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(req_53382380_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,req_53382380_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
req_53382380_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[req_53382380_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_49593420_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   ack__mac_49593420_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   ack__mac_49593420_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(ack__mac_49593420_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,ack__mac_49593420_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
ack__mac_49593420_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[ack__mac_49593420_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__47641760();

   return behavior;
}

Behavior __47867400;

Behavior make__47867400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47867400 = behavior;
   behavior->owner = (Object)layer0_58_84_49736220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 7;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_53382480_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   clk_53382480_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   clk_53382480_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(clk_53382480_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,clk_53382480_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
clk_53382480_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[clk_53382480_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_49593640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   ack_49593640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   ack_49593640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(ack_49593640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,ack_49593640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
ack_49593640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[ack_49593640_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_53382460_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   rst_53382460_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   rst_53382460_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(rst_53382460_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,rst_53382460_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
rst_53382460_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[rst_53382460_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_52241500_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   value__z0_52241500_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   value__z0_52241500_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(value__z0_52241500_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,value__z0_52241500_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
value__z0_52241500_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[value__z0_52241500_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,value__z1_52298920_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   value__z1_52298920_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   value__z1_52298920_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(value__z1_52298920_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,value__z1_52298920_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
value__z1_52298920_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[value__z1_52298920_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,ack__a0_52558720_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   ack__a0_52558720_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   ack__a0_52558720_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(ack__a0_52558720_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,ack__a0_52558720_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
ack__a0_52558720_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[ack__a0_52558720_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->events[6] = make_event(ANYEDGE,ack__a1_52558700_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   ack__a1_52558700_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   ack__a1_52558700_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(ack__a1_52558700_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,ack__a1_52558700_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
ack__a1_52558700_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[ack__a1_52558700_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__47642660();

   return behavior;
}

Behavior __47866720;

Behavior make__47866720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47866720 = behavior;
   behavior->owner = (Object)layer0_58_84_49736220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_53261000_counter_58_841_53263220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   ack__mac_53261000_counter_58_841_53263220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   ack__mac_53261000_counter_58_841_53263220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(ack__mac_53261000_counter_58_841_53263220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,ack__mac_53261000_counter_58_841_53263220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
ack__mac_53261000_counter_58_841_53263220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[ack__mac_53261000_counter_58_841_53263220_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,a_49735240_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   a_49735240_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   a_49735240_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(a_49735240_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,a_49735240_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
a_49735240_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[a_49735240_func0_58_841_49211120_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,a_52247700_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   a_52247700_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   a_52247700_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(a_52247700_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,a_52247700_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
a_52247700_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[a_52247700_func1_58_840_51651680_layer0_58_84_49736220_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__47642380();

   return behavior;
}

Scope makelayer0_58_84_49736220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer0_58_84_49736220 = scope;
   scope->owner = (Object)layer0_58_840_53385880;
   scope->name = "layer0:T";
   scope->num_systemIs = 3;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_53260860();
   scope->systemIs[1] = makefunc0_49734800();
   scope->systemIs[2] = makefunc1_52246960();
   scope->num_inners = 33;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_49593720();
   scope->inners[1] = makeack_49593640();
   scope->inners[2] = makeack__mac_49593420();
   scope->inners[3] = makeack__add_49593340();
   scope->inners[4] = make_5897_49770480();
   scope->inners[5] = make_5895_49770460();
   scope->inners[6] = make_5896_49770140();
   scope->inners[7] = make_58143_51045300();
   scope->inners[8] = make_58144_51298560();
   scope->inners[9] = make_58126_51495240();
   scope->inners[10] = make_58124_51495220();
   scope->inners[11] = make_58125_51495140();
   scope->inners[12] = make_58182_51593980();
   scope->inners[13] = make_58183_51709100();
   scope->inners[14] = make_58212_51848300();
   scope->inners[15] = make_58213_52069460();
   scope->inners[16] = makevalue__z0_52241500();
   scope->inners[17] = makevalue__z1_52298920();
   scope->inners[18] = makevalue__a0_52404420();
   scope->inners[19] = makevalue__a1_52558780();
   scope->inners[20] = makeflag__z0_52558760();
   scope->inners[21] = makeflag__z1_52558740();
   scope->inners[22] = makeack__a0_52558720();
   scope->inners[23] = makeack__a1_52558700();
   scope->inners[24] = make_58197_52673780();
   scope->inners[25] = make_58198_52991320();
   scope->inners[26] = make_58199_52991240();
   scope->inners[27] = make_5899_52991220();
   scope->inners[28] = make_58100_52991140();
   scope->inners[29] = make_58101_53105280();
   scope->inners[30] = make_58128_53105260();
   scope->inners[31] = make_58129_53105180();
   scope->inners[32] = make_58130_53244980();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_5883_49735900();
   scope->scopes[1] = makechannel__w1_58112_51098760();
   scope->scopes[2] = makechannel__accum_58141_52670640();
   scope->scopes[3] = makemac__n1_58173_53444640();
   scope->scopes[4] = makechannel__bias_58180_45627580();
   scope->scopes[5] = makechannel__z_58210_50979520();
   scope->scopes[6] = makeadd__n_58240_51993440();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52687960();
   scope->behaviors[1] = make__51099880();
   scope->behaviors[2] = make__53386780();
   scope->behaviors[3] = make__47640940();
   scope->behaviors[4] = make__47867400();
   scope->behaviors[5] = make__47866720();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer0_58_840_53385880() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer0_58_840_53385880 = systemT;
systemT->owner = NULL;
   systemT->name = "layer0:T0";
   systemT->num_inputs = 5;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_53382480();
   systemT->inputs[1] = makerst_53382460();
   systemT->inputs[2] = makefill_53382400();
   systemT->inputs[3] = makereq_53382380();
   systemT->inputs[4] = make_5815_43496800();
   systemT->num_outputs = 3;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_43496620();
   systemT->outputs[1] = make_5813_43526020();
   systemT->outputs[2] = make_5814_43563960();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_5832_47526820();
   systemT->inouts[1] = make_5833_48493040();

   systemT->scope = makelayer0_58_84_49736220();

   return systemT;
}