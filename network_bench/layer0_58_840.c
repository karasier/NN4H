#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer0_58_840_57739940;

SignalI clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeclk_57738000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer0_58_840_57739940;
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

SignalI rst_57737980_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makerst_57737980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_57737980_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer0_58_840_57739940;
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

SignalI fill_57737960_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makefill_57737960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_57737960_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer0_58_840_57739940;
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

SignalI req_57737940_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makereq_57737940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_57737940_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer0_58_840_57739940;
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

SignalI _5815_57798120_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI make_5815_57798120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5815_57798120_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer0_58_840_57739940;
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

SignalI ack__layer_57798080_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeack__layer_57798080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_57798080_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer0_58_840_57739940;
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

SignalI _5813_57798060_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI make_5813_57798060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5813_57798060_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer0_58_840_57739940;
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

SignalI _5814_57797980_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI make_5814_57797980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5814_57797980_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer0_58_840_57739940;
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

SignalI _5855_57932400_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI make_5855_57932400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5855_57932400_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer0_58_840_57739940;
   signalI->name = ":55";
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

SignalI _5856_58034600_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI make_5856_58034600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5856_58034600_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer0_58_840_57739940;
   signalI->name = ":56";
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

Block __60172500;

Block __60172280;

void code__60172280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52788820(),ack_52516360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52788680(),ack__mac_52516340_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52788520(),ack__add_52516320_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__60172280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60172280 = block;
   block->owner = (Object)__60172500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60172280;

   return block;
};

void code__60172500() {
   {
      Value cond = rst_57737980_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60172280();
   }
      }
   }
}

Block make__60172500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60172500 = block;
   block->owner = (Object)__60171340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60172500;

   return block;
};

Block __60171220;

Block __60170520;

Block __60170360;

void code__60170360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58212_47933640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,value__z0_49261020_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52787960(),flag__z0_50030780_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__60170360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60170360 = block;
   block->owner = (Object)__60170520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60170360;

   return block;
};

Block __60352760;

void code__60352760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58213_48107960_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,value__z1_49514040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52787480(),flag__z1_50030680_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__60352760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60352760 = block;
   block->owner = (Object)__60170520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60352760;

   return block;
};

void code__60170520() {
 code__60170360();
 code__60352760();
}

Block make__60170520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60170520 = block;
   block->owner = (Object)__60171220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60170520;

   return block;
};

Block __60171060;

void code__60171060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52787300(),flag__z0_50030780_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52787080(),flag__z1_50030680_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__60171060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60171060 = block;
   block->owner = (Object)__60171220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60171060;

   return block;
};

void code__60171220() {
   {
      Value cond = ack__add_52516320_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60170520();
   }
   else {
  code__60171060();
   }
      }
   }
}

Block make__60171220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60171220 = block;
   block->owner = (Object)__60821600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60171220;

   return block;
};

Block __60821480;

Block __60821260;

void code__60821260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52786880(),ack__a0_50030660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52786780(),ack__a1_50030640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__60821260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60821260 = block;
   block->owner = (Object)__60821480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60821260;

   return block;
};

Block __60820560;

Block __60820400;

void code__60820400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_49766160_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,_5855_57932400_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52786380(),ack__a0_50030660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__60820400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60820400 = block;
   block->owner = (Object)__60820560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60820400;

   return block;
};

Block __47821980;

void code__47821980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a1_50030840_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,_5856_58034600_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52786240(),ack__a1_50030640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__47821980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47821980 = block;
   block->owner = (Object)__60820560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47821980;

   return block;
};

void code__60820560() {
 code__60820400();
 code__47821980();
}

Block make__60820560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60820560 = block;
   block->owner = (Object)__60821480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60820560;

   return block;
};

void code__60821480() {
   {
      Value cond = rst_57737980_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60821260();
   }
   else if (value2integer(({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = flag__z0_50030780_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
         src1 = flag__z1_50030680_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; }))) {
  code__60820560();
   }
      }
   }
}

Block make__60821480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60821480 = block;
   block->owner = (Object)__49496880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60821480;

   return block;
};

Block __49496660;

Block __49496360;

Block __49520200;

void code__49520200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52785940(),_58199_50227440_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__49520200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49520200 = block;
   block->owner = (Object)__49496360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49520200;

   return block;
};

void code__49496360() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57737980_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52786040();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49520200();
   }
      }
   }
}

Block make__49496360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49496360 = block;
   block->owner = (Object)__49496660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49496360;

   return block;
};

Block __49513640;

Block __49536820;

void code__49536820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52785180(),_58129_47789160_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__49536820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49536820 = block;
   block->owner = (Object)__49513640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49536820;

   return block;
};

void code__49513640() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57737980_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52785620();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49536820();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52784540(),_58128_47789320_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__49513640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49513640 = block;
   block->owner = (Object)__49496660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49513640;

   return block;
};

Block __49550800;

Block __49549480;

void code__49549480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52784100(),_58100_45851620_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__49549480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49549480 = block;
   block->owner = (Object)__49550800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49549480;

   return block;
};

void code__49550800() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57737980_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52784420();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49549480();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52783900(),_5899_45851760_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__49550800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49550800 = block;
   block->owner = (Object)__49496660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49550800;

   return block;
};

Block __49545880;

void code__49545880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52783460(),address__weights0_50030560_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52783380(),ack__weights0_50030240_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52783260(),address__weights1_50030480_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52782660(),ack__weights1_50030200_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52782500(),address__bias_50030260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52782380(),ack__bias_50030180_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__49545880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49545880 = block;
   block->owner = (Object)__49496660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49545880;

   return block;
};

Block __49564020;

Block __49562080;

Block __49561640;

Block __49617260;

void code__49617260() {
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
                  src0 = _58100_45851620_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__52781680();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58100_45851620_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52781520(),_5899_45851760_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
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
            ref = w0_51620120_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
            idx = value2integer(address__weights0_50030560_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),_58101_47789400_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__49617260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49617260 = block;
   block->owner = (Object)__49561640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49617260;

   return block;
};

void code__49561640() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57737980_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52781880();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49617260();
   }
      }
   }
}

Block make__49561640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49561640 = block;
   block->owner = (Object)__49562080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49561640;

   return block;
};

void code__49562080() {
 code__49561640();
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
                  src0 = address__weights0_50030560_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__52781060();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),address__weights0_50030560_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__49562080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49562080 = block;
   block->owner = (Object)__49564020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49562080;

   return block;
};

Block __50967040;

Block __50966780;

Block __50965960;

void code__50965960() {
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
                  src0 = _58129_47789160_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__52804260();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58129_47789160_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52803960(),_58128_47789320_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
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
            ref = w1_52518500_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
            idx = value2integer(address__weights1_50030480_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),_58130_48008940_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__50965960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50965960 = block;
   block->owner = (Object)__50966780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50965960;

   return block;
};

void code__50966780() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57737980_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52804720();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50965960();
   }
      }
   }
}

Block make__50966780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50966780 = block;
   block->owner = (Object)__50967040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50966780;

   return block;
};

void code__50967040() {
 code__50966780();
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
                  src0 = address__weights1_50030480_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__52803020();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),address__weights1_50030480_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__50967040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50967040 = block;
   block->owner = (Object)__49564020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50967040;

   return block;
};

Block __51895460;

Block __51895180;

Block __51894760;

Block __51894200;

void code__51894200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = b_45851800_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
            idx = value2integer(address__bias_50030260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),_58197_50321600_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51894200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51894200 = block;
   block->owner = (Object)__51894760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51894200;

   return block;
};

Block __52759360;

void code__52759360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = b_45851800_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
            idx = value2integer(address__bias_50030260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),_58198_50227520_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__52759360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52759360 = block;
   block->owner = (Object)__51894760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52759360;

   return block;
};

void code__51894760() {
{
      Value value = _58199_50227440_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__52801980())) {
    code__51894200();
         }
         else if (value2integer(value) == value2integer(make__52801660())) {
    code__52759360();
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
                  src0 = _58199_50227440_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__52801220();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58199_50227440_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51894760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51894760 = block;
   block->owner = (Object)__51895180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51894760;

   return block;
};

void code__51895180() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57737980_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52802500();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51894760();
   }
      }
   }
}

Block make__51895180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51895180 = block;
   block->owner = (Object)__51895460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51895180;

   return block;
};

void code__51895460() {
 code__51895180();
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
                  src0 = address__bias_50030260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__52800880();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),address__bias_50030260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51895460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51895460 = block;
   block->owner = (Object)__49564020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51895460;

   return block;
};

void code__49564020() {
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__weights0_50030240_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49562080();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__weights1_50030200_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50967040();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__bias_50030180_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51895460();
   }
      }
   }
}

Block make__49564020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49564020 = block;
   block->owner = (Object)__49496660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49564020;

   return block;
};

Block __57742220;

void code__57742220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52800320(),ack__weights0_50030240_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__57742220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57742220 = block;
   block->owner = (Object)__49496660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57742220;

   return block;
};

Block __57741600;

void code__57741600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52800000(),ack__weights1_50030200_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__57741600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57741600 = block;
   block->owner = (Object)__49496660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57741600;

   return block;
};

Block __57740980;

void code__57740980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52799140(),ack__bias_50030180_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__57740980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57740980 = block;
   block->owner = (Object)__49496660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57740980;

   return block;
};

void code__49496660() {
 code__49496360();
 code__49513640();
 code__49550800();
   {
      Value cond = rst_57737980_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49545880();
   }
      }
   }
   {
      Value cond = fill__channel_52516280_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49564020();
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
               src0 = address__weights0_50030560_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52800580();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57742220();
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
               src0 = address__weights1_50030480_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52800160();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57741600();
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
               src0 = address__bias_50030260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52799700();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57740980();
   }
      }
   }
}

Block make__49496660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49496660 = block;
   block->owner = (Object)__57740260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49496660;

   return block;
};

Block __51704180;

void code__51704180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_57737940_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_52516340_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_52516380_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51704180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51704180 = block;
   block->owner = (Object)__51703080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51704180;

   return block;
};

Block __51734460;

void code__51734460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = fill_57737960_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0,src1,dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = ack__weights0_50030240_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
                        src1 = ack__weights1_50030200_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
                        dst = and_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = ack__bias_50030180_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
                  dst = and_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),fill__channel_52516280_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51734460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51734460 = block;
   block->owner = (Object)__51733220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51734460;

   return block;
};

Block __51704840;

void code__51704840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,clk_48042140_counter_58_841_48022360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_52516360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,ack_48042060_counter_58_841_48022360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_57737980_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,rst_48041900_counter_58_841_48022360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_49261020_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,z__value_42658240_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z1_49514040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,z__value_59299060_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ack__a0_50030660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
      src1 = ack__a1_50030640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),ack__layer_57798080_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51704840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51704840 = block;
   block->owner = (Object)__51732660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51704840;

   return block;
};

Block __51704640;

void code__51704640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_48041620_counter_58_841_48022360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,ack__mac_52516340_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_47733500_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,value__a0_49766160_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_59345400_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,value__a1_50030840_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51704640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51704640 = block;
   block->owner = (Object)__51764420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51704640;

   return block;
};

Block __50949580;

Block __51288040;

void code__51288040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_49874220_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,make_ref_rangeS(mem_50063680_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740,value2integer(abus__w_49874060_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value),value2integer(abus__w_49874060_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__51288040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51288040 = block;
   block->owner = (Object)__50949580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51288040;

   return block;
};

void code__50949580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_50063680_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
            idx = value2integer(abus__r_49874140_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_49646380_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_49503560_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51288040();
   }
      }
   }
}

Block make__50949580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50949580 = block;
   block->owner = (Object)__51765160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50949580;

   return block;
};

Block __51761520;

void code__51761520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_49646380_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,_5897_52694680_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51761520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51761520 = block;
   block->owner = (Object)__51761300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51761520;

   return block;
};

Block __51761100;

void code__51761100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5897_52694680_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,dbus__r_49646380_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51761100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51761100 = block;
   block->owner = (Object)__51760520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51761100;

   return block;
};

Block __51759060;

void code__51759060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_49503580_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,_5895_52694660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51759060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51759060 = block;
   block->owner = (Object)__51758700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51759060;

   return block;
};

Block __51758660;

void code__51758660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5895_52694660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,trig__r_49503580_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51758660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51758660 = block;
   block->owner = (Object)__51758420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51758660;

   return block;
};

Block __51757720;

void code__51757720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_49874140_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,_5896_52694540_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51757720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51757720 = block;
   block->owner = (Object)__51757180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51757720;

   return block;
};

Block __51757120;

void code__51757120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5896_52694540_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,abus__r_49874140_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51757120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51757120 = block;
   block->owner = (Object)__51814020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51757120;

   return block;
};

Block __51813400;

void code__51813400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_49503560_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,_5899_45851760_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51813400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51813400 = block;
   block->owner = (Object)__51812780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51813400;

   return block;
};

Block __51812660;

void code__51812660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5899_45851760_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,trig__w_49503560_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51812660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51812660 = block;
   block->owner = (Object)__51812020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51812660;

   return block;
};

Block __51811320;

void code__51811320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_49874060_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,_58100_45851620_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51811320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51811320 = block;
   block->owner = (Object)__51811100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51811320;

   return block;
};

Block __51811060;

void code__51811060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58100_45851620_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,abus__w_49874060_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51811060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51811060 = block;
   block->owner = (Object)__51810880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51811060;

   return block;
};

Block __51809880;

void code__51809880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_49874220_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,_58101_47789400_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51809880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51809880 = block;
   block->owner = (Object)__51809380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51809880;

   return block;
};

Block __51809260;

void code__51809260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58101_47789400_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,dbus__w_49874220_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51809260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51809260 = block;
   block->owner = (Object)__51808580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51809260;

   return block;
};

Block __52743420;

Block __53072820;

void code__53072820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_52055160_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,make_ref_rangeS(mem_52230180_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740,value2integer(abus__w_52054980_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value),value2integer(abus__w_52054980_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__53072820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53072820 = block;
   block->owner = (Object)__52743420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53072820;

   return block;
};

void code__52743420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_52230180_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
            idx = value2integer(abus__r_52055060_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_51888760_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_51761980_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53072820();
   }
      }
   }
}

Block make__52743420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52743420 = block;
   block->owner = (Object)__47833720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52743420;

   return block;
};

Block __51828820;

void code__51828820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_51888760_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,_58126_53073860_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51828820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51828820 = block;
   block->owner = (Object)__51828500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51828820;

   return block;
};

Block __51828400;

void code__51828400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58126_53073860_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,dbus__r_51888760_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51828400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51828400 = block;
   block->owner = (Object)__51827720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51828400;

   return block;
};

Block __51826780;

void code__51826780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_51762000_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,_58124_53073840_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51826780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51826780 = block;
   block->owner = (Object)__51826600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51826780;

   return block;
};

Block __51826520;

void code__51826520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58124_53073840_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,trig__r_51762000_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51826520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51826520 = block;
   block->owner = (Object)__51826000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51826520;

   return block;
};

Block __51825000;

void code__51825000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_52055060_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,_58125_53073700_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51825000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51825000 = block;
   block->owner = (Object)__51824620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51825000;

   return block;
};

Block __51824560;

void code__51824560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58125_53073700_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,abus__r_52055060_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51824560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51824560 = block;
   block->owner = (Object)__51824320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51824560;

   return block;
};

Block __51895720;

void code__51895720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_51761980_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,_58128_47789320_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51895720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51895720 = block;
   block->owner = (Object)__51894660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51895720;

   return block;
};

Block __51894120;

void code__51894120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58128_47789320_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,trig__w_51761980_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51894120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51894120 = block;
   block->owner = (Object)__51892540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51894120;

   return block;
};

Block __51891720;

void code__51891720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_52054980_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,_58129_47789160_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51891720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51891720 = block;
   block->owner = (Object)__51891460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51891720;

   return block;
};

Block __51891400;

void code__51891400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58129_47789160_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,abus__w_52054980_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51891400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51891400 = block;
   block->owner = (Object)__51891060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51891400;

   return block;
};

Block __51890200;

void code__51890200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_52055160_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,_58130_48008940_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51890200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51890200 = block;
   block->owner = (Object)__51889860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51890200;

   return block;
};

Block __51889800;

void code__51889800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58130_48008940_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,dbus__w_52055160_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51889800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51889800 = block;
   block->owner = (Object)__51889260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51889800;

   return block;
};

Block __51922360;

void code__51922360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_48007040_channel__accum_58141_47833600_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,_58143_52782980_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51922360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51922360 = block;
   block->owner = (Object)__51921940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51922360;

   return block;
};

Block __51921740;

void code__51921740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58143_52782980_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,reg__0_48007040_channel__accum_58141_47833600_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51921740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51921740 = block;
   block->owner = (Object)__51921020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51921740;

   return block;
};

Block __51944860;

void code__51944860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_48205980_channel__accum_58141_47833600_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,_58144_52846660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51944860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51944860 = block;
   block->owner = (Object)__51943880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51944860;

   return block;
};

Block __51943800;

void code__51943800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58144_52846660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,reg__1_48205980_channel__accum_58141_47833600_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51943800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51943800 = block;
   block->owner = (Object)__51943480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51943800;

   return block;
};

Block __50981580;

Block __50981420;

Block __50981100;

void code__50981100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52695940(),_58125_53073700_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__50981100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50981100 = block;
   block->owner = (Object)__50981420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50981100;

   return block;
};

void code__50981420() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57737980_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52696280();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50981100();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52695700(),_58124_53073840_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__50981420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50981420 = block;
   block->owner = (Object)__50981580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50981420;

   return block;
};

Block __50980380;

Block __50979960;

void code__50979960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52695400(),_5896_52694540_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__50979960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50979960 = block;
   block->owner = (Object)__50980380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50979960;

   return block;
};

void code__50980380() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57737980_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52695620();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50979960();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52695280(),_5895_52694660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__50980380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50980380 = block;
   block->owner = (Object)__50981580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50980380;

   return block;
};

Block __50979340;

Block __50979020;

void code__50979020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52694340(),_5814_57797980_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__50979020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50979020 = block;
   block->owner = (Object)__50979340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50979020;

   return block;
};

void code__50979340() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57737980_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52695140();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50979020();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52693940(),_5813_57798060_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__50979340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50979340 = block;
   block->owner = (Object)__50981580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50979340;

   return block;
};

Block __51002340;

void code__51002340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52693340(),rvok_50981720_mac__n1_58173_49983020_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52692780(),lvok0_50981760_mac__n1_58173_49983020_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52692680(),av0_50772820_mac__n1_58173_49983020_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52692600(),lvok1_50981740_mac__n1_58173_49983020_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52692520(),av1_50857100_mac__n1_58173_49983020_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51002340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51002340 = block;
   block->owner = (Object)__50981580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51002340;

   return block;
};

Block __51259320;

Block __51259000;

Block __51258640;

Block __51258260;

void code__51258260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5815_57798120_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,rv_50981780_mac__n1_58173_49983020_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52731740(),rvok_50981720_mac__n1_58173_49983020_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51258260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51258260 = block;
   block->owner = (Object)__51258640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51258260;

   return block;
};

void code__51258640() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5813_57798060_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52691200();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51258260();
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
                  src0 = _5814_57797980_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__52731220();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5814_57797980_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52731020(),_5813_57798060_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51258640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51258640 = block;
   block->owner = (Object)__51259000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51258640;

   return block;
};

void code__51259000() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57737980_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52691340();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51258640();
   }
      }
   }
}

Block make__51259000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51259000 = block;
   block->owner = (Object)__51259320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51259000;

   return block;
};

Block __51686740;

Block __51686340;

Block __51685940;

void code__51685940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5897_52694680_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,lv0_50099520_mac__n1_58173_49983020_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52729280(),lvok0_50981760_mac__n1_58173_49983020_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51685940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51685940 = block;
   block->owner = (Object)__51686340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51685940;

   return block;
};

void code__51686340() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5895_52694660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52730560();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51685940();
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
                  src0 = _5896_52694540_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__52728920();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5896_52694540_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52728760(),_5895_52694660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51686340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51686340 = block;
   block->owner = (Object)__51686740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51686340;

   return block;
};

void code__51686740() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57737980_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52730780();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51686340();
   }
      }
   }
}

Block make__51686740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51686740 = block;
   block->owner = (Object)__51259320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51686740;

   return block;
};

Block __51923100;

Block __51922620;

Block __51922420;

void code__51922420() {
}

Block make__51922420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51922420 = block;
   block->owner = (Object)__51922620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51922420;

   return block;
};

Block __52852680;

void code__52852680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_50772820_mac__n1_58173_49983020_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,_58143_52782980_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__52852680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52852680 = block;
   block->owner = (Object)__51922620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52852680;

   return block;
};

void code__51922620() {
 code__51922420();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av0_50772820_mac__n1_58173_49983020_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
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
                              src0 = lv0_50099520_mac__n1_58173_49983020_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_50981780_mac__n1_58173_49983020_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__52727580();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_50772820_mac__n1_58173_49983020_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
 code__52852680();
}

Block make__51922620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51922620 = block;
   block->owner = (Object)__51923100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51922620;

   return block;
};

void code__51923100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52728400(),ack_52516360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52728300(),run_50981700_mac__n1_58173_49983020_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
 code__51922620();
}

Block make__51923100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51923100 = block;
   block->owner = (Object)__51259320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51923100;

   return block;
};

Block __42375900;

Block __42373620;

Block __42371480;

void code__42371480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58126_53073860_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,lv1_50681460_mac__n1_58173_49983020_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52726120(),lvok1_50981740_mac__n1_58173_49983020_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__42371480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42371480 = block;
   block->owner = (Object)__42373620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42371480;

   return block;
};

void code__42373620() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58124_53073840_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52726880();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__42371480();
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
                  src0 = _58125_53073700_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__52725840();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58125_53073700_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52725680(),_58124_53073840_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__42373620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42373620 = block;
   block->owner = (Object)__42375900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42373620;

   return block;
};

void code__42375900() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57737980_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__52727200();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__42373620();
   }
      }
   }
}

Block make__42375900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42375900 = block;
   block->owner = (Object)__51259320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42375900;

   return block;
};

Block __47836160;

Block __47835460;

Block __47835260;

void code__47835260() {
}

Block make__47835260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47835260 = block;
   block->owner = (Object)__47835460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47835260;

   return block;
};

Block __50130980;

void code__50130980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av1_50857100_mac__n1_58173_49983020_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,_58144_52846660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__50130980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50130980 = block;
   block->owner = (Object)__47835460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50130980;

   return block;
};

void code__47835460() {
 code__47835260();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av1_50857100_mac__n1_58173_49983020_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
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
                              src0 = lv1_50681460_mac__n1_58173_49983020_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_50981780_mac__n1_58173_49983020_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__52723900();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av1_50857100_mac__n1_58173_49983020_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
 code__50130980();
}

Block make__47835460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47835460 = block;
   block->owner = (Object)__47836160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47835460;

   return block;
};

void code__47836160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52725140(),ack_52516360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52725020(),run_50981700_mac__n1_58173_49983020_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
 code__47835460();
}

Block make__47836160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47836160 = block;
   block->owner = (Object)__51259320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47836160;

   return block;
};

void code__51259320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52691520(),run_50981700_mac__n1_58173_49983020_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
 code__51259000();
 code__51686740();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_50981760_mac__n1_58173_49983020_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
         src1 = rvok_50981720_mac__n1_58173_49983020_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51923100();
   }
      }
   }
 code__42375900();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_50981740_mac__n1_58173_49983020_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
         src1 = rvok_50981720_mac__n1_58173_49983020_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47836160();
   }
      }
   }
}

Block make__51259320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51259320 = block;
   block->owner = (Object)__50981580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51259320;

   return block;
};

void code__50981580() {
 code__50981420();
 code__50980380();
 code__50979340();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52693800(),ack_52516360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52693700(),run_50981700_mac__n1_58173_49983020_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = run_50981700_mac__n1_58173_49983020_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51002340();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_52516380_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
         src1 = run_50981700_mac__n1_58173_49983020_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51259320();
   }
      }
   }
}

Block make__50981580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50981580 = block;
   block->owner = (Object)__50825440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50981580;

   return block;
};

Block __51938960;

void code__51938960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_50968480_channel__bias_58180_50825260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,_58182_43439460_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51938960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51938960 = block;
   block->owner = (Object)__51938540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51938960;

   return block;
};

Block __51938360;

void code__51938360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58182_43439460_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,reg__0_50968480_channel__bias_58180_50825260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51938360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51938360 = block;
   block->owner = (Object)__51938120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51938360;

   return block;
};

Block __51937400;

void code__51937400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_51138220_channel__bias_58180_50825260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,_58183_47690660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51937400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51937400 = block;
   block->owner = (Object)__52027220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51937400;

   return block;
};

Block __52026860;

void code__52026860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58183_47690660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,reg__1_51138220_channel__bias_58180_50825260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__52026860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52026860 = block;
   block->owner = (Object)__52026260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52026860;

   return block;
};

Block __52024140;

void code__52024140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_50968480_channel__bias_58180_50825260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,_58197_50321600_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__52024140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52024140 = block;
   block->owner = (Object)__52023440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52024140;

   return block;
};

Block __52023320;

void code__52023320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58197_50321600_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,reg__0_50968480_channel__bias_58180_50825260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__52023320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52023320 = block;
   block->owner = (Object)__52022840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52023320;

   return block;
};

Block __52022340;

void code__52022340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_51138220_channel__bias_58180_50825260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,_58198_50227520_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__52022340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52022340 = block;
   block->owner = (Object)__52021900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52022340;

   return block;
};

Block __52021580;

void code__52021580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58198_50227520_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,reg__1_51138220_channel__bias_58180_50825260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__52021580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52021580 = block;
   block->owner = (Object)__52021040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52021580;

   return block;
};

Block __52053460;

void code__52053460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_50846880_winc_58196_50847260_channel__bias_58180_50825260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,_58199_50227440_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__52053460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52053460 = block;
   block->owner = (Object)__52053140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52053460;

   return block;
};

Block __52053100;

void code__52053100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58199_50227440_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,abus__w_50846880_winc_58196_50847260_channel__bias_58180_50825260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__52053100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52053100 = block;
   block->owner = (Object)__52052880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52053100;

   return block;
};

Block __52115300;

void code__52115300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_52545560_channel__z_58210_52459640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,_58212_47933640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__52115300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52115300 = block;
   block->owner = (Object)__52114600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52115300;

   return block;
};

Block __52114560;

void code__52114560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58212_47933640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,reg__0_52545560_channel__z_58210_52459640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__52114560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52114560 = block;
   block->owner = (Object)__52114340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52114560;

   return block;
};

Block __52113740;

void code__52113740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_52725420_channel__z_58210_52459640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,_58213_48107960_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__52113740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52113740 = block;
   block->owner = (Object)__52113480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52113740;

   return block;
};

Block __52113200;

void code__52113200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58213_48107960_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,reg__1_52725420_channel__z_58210_52459640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__52113200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52113200 = block;
   block->owner = (Object)__52112540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52113200;

   return block;
};

Block __49200100;

Block __49209640;

Block __49229320;

void code__49229320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58143_52782980_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,lv0_47688240_add__n_58240_45634640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52742500(),lvok0_49200800_add__n_58240_45634640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__49229320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49229320 = block;
   block->owner = (Object)__49209640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49229320;

   return block;
};

Block __49695380;

void code__49695380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58182_43439460_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,rv0_48092460_add__n_58240_45634640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52741620(),rvok0_49200720_add__n_58240_45634640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__49695380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49695380 = block;
   block->owner = (Object)__49209640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49695380;

   return block;
};

Block __50129180;

Block __50128700;

void code__50128700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_47688240_add__n_58240_45634640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
      src1 = rv0_48092460_add__n_58240_45634640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58212_47933640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__50128700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50128700 = block;
   block->owner = (Object)__50129180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50128700;

   return block;
};

void code__50129180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52741300(),run_49200680_add__n_58240_45634640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52741120(),ack__add_52516320_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
 code__50128700();
}

Block make__50129180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50129180 = block;
   block->owner = (Object)__49209640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50129180;

   return block;
};

Block __51173340;

void code__51173340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58144_52846660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,lv1_47935300_add__n_58240_45634640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52764520(),lvok1_49200740_add__n_58240_45634640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51173340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51173340 = block;
   block->owner = (Object)__49209640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51173340;

   return block;
};

Block __51553280;

void code__51553280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58183_47690660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,rv1_49200900_add__n_58240_45634640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52764080(),rvok1_49200700_add__n_58240_45634640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51553280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51553280 = block;
   block->owner = (Object)__49209640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51553280;

   return block;
};

Block __51808500;

Block __51807900;

void code__51807900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv1_47935300_add__n_58240_45634640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
      src1 = rv1_49200900_add__n_58240_45634640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58213_48107960_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__51807900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51807900 = block;
   block->owner = (Object)__51808500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51807900;

   return block;
};

void code__51808500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52763860(),run_49200680_add__n_58240_45634640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52763720(),ack__add_52516320_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
 code__51807900();
}

Block make__51808500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51808500 = block;
   block->owner = (Object)__49209640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51808500;

   return block;
};

void code__49209640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52742860(),run_49200680_add__n_58240_45634640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
 code__49229320();
 code__49695380();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_49200800_add__n_58240_45634640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
         src1 = rvok0_49200720_add__n_58240_45634640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50129180();
   }
      }
   }
 code__51173340();
 code__51553280();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_49200740_add__n_58240_45634640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
         src1 = rvok1_49200700_add__n_58240_45634640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51808500();
   }
      }
   }
}

Block make__49209640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49209640 = block;
   block->owner = (Object)__49200100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49209640;

   return block;
};

Block __49194780;

void code__49194780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52763260(),lvok0_49200800_add__n_58240_45634640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52763080(),rvok0_49200720_add__n_58240_45634640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52762920(),lvok1_49200740_add__n_58240_45634640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52762800(),rvok1_49200700_add__n_58240_45634640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__49194780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49194780 = block;
   block->owner = (Object)__49200100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49194780;

   return block;
};

void code__49200100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52743600(),ack__add_52516320_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__52743280(),run_49200680_add__n_58240_45634640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_52516340_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
         src1 = run_49200680_add__n_58240_45634640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49209640();
   }
   else {
  code__49194780();
   }
      }
   }
}

Block make__49200100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49200100 = block;
   block->owner = (Object)__52516540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49200100;

   return block;
};

Value make__52761820() {
   static unsigned long long data[] = { 21ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__52761720() {
   static unsigned long long data[] = { 247ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__52761220() {
   static unsigned long long data[] = { 30ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__52761160() {
   static unsigned long long data[] = { 227ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__52760480() {
   static unsigned long long data[] = { 255ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__52760460() {
   static unsigned long long data[] = { 19ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__52696280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52695940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52695700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52695620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52695400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52695280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52695140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52694340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52693940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52693800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52693700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52693340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52692780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52692680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__52692600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52692520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__52691520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52691340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52691200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52731740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52731220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52731020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52730780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52730560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52729280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52728920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52728760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52728400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52728300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52727580() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52727200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52726880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52726120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52725840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52725680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52725140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52725020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52723900() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52743600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52743280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52742860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52742500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52741620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52741300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52741120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52764520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52764080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52763860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52763720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52763260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52763080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52762920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52762800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52788820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52788680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52788520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52787960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52787480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52787300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52787080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52786880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52786780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52786380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52786240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52786040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52785940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52785620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52785180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52784540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52784420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52784100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52783900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52783460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__52783380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52783260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__52782660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52782500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__52782380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52781880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52781680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52781520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52781060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52804720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52804260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52803960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52803020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52802500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52801980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52801660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__52801220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52800880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52800580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52800320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52800160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52800000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__52799700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__52799140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope layer0_58_84_49484760;

SignalI req__mac_52516380_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makereq__mac_52516380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_52516380_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer0_58_84_49484760;
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

SignalI ack_52516360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeack_52516360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_52516360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer0_58_84_49484760;
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

SignalI ack__mac_52516340_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeack__mac_52516340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_52516340_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer0_58_84_49484760;
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

SignalI ack__add_52516320_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeack__add_52516320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_52516320_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer0_58_84_49484760;
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

SignalI fill__channel_52516280_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makefill__channel_52516280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill__channel_52516280_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer0_58_84_49484760;
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

SignalI _5897_52694680_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI make_5897_52694680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5897_52694680_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer0_58_84_49484760;
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

SignalI _5895_52694660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI make_5895_52694660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5895_52694660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer0_58_84_49484760;
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

SignalI _5896_52694540_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI make_5896_52694540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5896_52694540_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer0_58_84_49484760;
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

SignalI _58143_52782980_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI make_58143_52782980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58143_52782980_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer0_58_84_49484760;
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

SignalI _58144_52846660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI make_58144_52846660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58144_52846660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer0_58_84_49484760;
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

SignalI _58126_53073860_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI make_58126_53073860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58126_53073860_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer0_58_84_49484760;
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

SignalI _58124_53073840_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI make_58124_53073840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58124_53073840_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer0_58_84_49484760;
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

SignalI _58125_53073700_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI make_58125_53073700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58125_53073700_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer0_58_84_49484760;
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

SignalI _58182_43439460_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI make_58182_43439460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58182_43439460_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer0_58_84_49484760;
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

SignalI _58183_47690660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI make_58183_47690660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58183_47690660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer0_58_84_49484760;
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

SignalI _58212_47933640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI make_58212_47933640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58212_47933640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer0_58_84_49484760;
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

SignalI _58213_48107960_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI make_58213_48107960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58213_48107960_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer0_58_84_49484760;
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

SignalI value__z0_49261020_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makevalue__z0_49261020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_49261020_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer0_58_84_49484760;
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

SignalI value__z1_49514040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makevalue__z1_49514040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z1_49514040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer0_58_84_49484760;
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

SignalI value__a0_49766160_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makevalue__a0_49766160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_49766160_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer0_58_84_49484760;
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

SignalI value__a1_50030840_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makevalue__a1_50030840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a1_50030840_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer0_58_84_49484760;
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

SignalI flag__z0_50030780_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeflag__z0_50030780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_50030780_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer0_58_84_49484760;
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

SignalI flag__z1_50030680_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeflag__z1_50030680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z1_50030680_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer0_58_84_49484760;
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

SignalI ack__a0_50030660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeack__a0_50030660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_50030660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer0_58_84_49484760;
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

SignalI ack__a1_50030640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeack__a1_50030640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a1_50030640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer0_58_84_49484760;
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

SignalI address__weights0_50030560_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeaddress__weights0_50030560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address__weights0_50030560_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer0_58_84_49484760;
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

SignalI address__weights1_50030480_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeaddress__weights1_50030480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address__weights1_50030480_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer0_58_84_49484760;
   signalI->name = "address_weights1";
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

SignalI address__bias_50030260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeaddress__bias_50030260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address__bias_50030260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer0_58_84_49484760;
   signalI->name = "address_bias";
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

SignalI ack__weights0_50030240_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeack__weights0_50030240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__weights0_50030240_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer0_58_84_49484760;
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

SignalI ack__weights1_50030200_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeack__weights1_50030200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__weights1_50030200_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer0_58_84_49484760;
   signalI->name = "ack_weights1";
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

SignalI ack__bias_50030180_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeack__bias_50030180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__bias_50030180_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer0_58_84_49484760;
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

SignalI _58197_50321600_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI make_58197_50321600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58197_50321600_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer0_58_84_49484760;
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

SignalI _58198_50227520_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI make_58198_50227520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58198_50227520_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer0_58_84_49484760;
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

SignalI _58199_50227440_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI make_58199_50227440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58199_50227440_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer0_58_84_49484760;
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

SignalI w0_51620120_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makew0_51620120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   w0_51620120_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer0_58_84_49484760;
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
         src0 = make__52761820();
         src1 = make__52761720();
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

SignalI w1_52518500_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makew1_52518500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   w1_52518500_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer0_58_84_49484760;
   signalI->name = "w1";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),2);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(({
         Value src0,src1;
         Value dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = make__52761220();
         src1 = make__52761160();
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

SignalI b_45851800_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeb_45851800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   b_45851800_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer0_58_84_49484760;
   signalI->name = "b";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),2);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(({
         Value src0,src1;
         Value dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = make__52760480();
         src1 = make__52760460();
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

SignalI _5899_45851760_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI make_5899_45851760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5899_45851760_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer0_58_84_49484760;
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

SignalI _58100_45851620_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI make_58100_45851620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58100_45851620_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer0_58_84_49484760;
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

SignalI _58101_47789400_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI make_58101_47789400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58101_47789400_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer0_58_84_49484760;
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

SignalI _58128_47789320_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI make_58128_47789320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58128_47789320_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer0_58_84_49484760;
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

SignalI _58129_47789160_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI make_58129_47789160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58129_47789160_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer0_58_84_49484760;
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

SignalI _58130_48008940_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI make_58130_48008940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58130_48008940_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer0_58_84_49484760;
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

SystemI counter_48041160;

SystemI makecounter_48041160() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_48041160 = systemI;
   systemI->owner = (Object)layer0_58_84_49484760;
   systemI->name = "counter";
   systemI->system = counter_58_841_48022360;

   return systemI;
};

SystemI func0_47731800;

SystemI makefunc0_47731800() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_47731800 = systemI;
   systemI->owner = (Object)layer0_58_84_49484760;
   systemI->name = "func0";
   systemI->system = func0_58_841_52897920;

   return systemI;
};

SystemI func1_59345260;

SystemI makefunc1_59345260() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func1_59345260 = systemI;
   systemI->owner = (Object)layer0_58_84_49484760;
   systemI->name = "func1";
   systemI->system = func1_58_840_59180820;

   return systemI;
};

Scope channel__w0_5883_49482660;

SignalI trig__r_49503580_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI maketrig__r_49503580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_49503580_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)channel__w0_5883_49482660;
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

SignalI trig__w_49503560_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI maketrig__w_49503560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_49503560_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)channel__w0_5883_49482660;
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

SignalI dbus__r_49646380_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makedbus__r_49646380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_49646380_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)channel__w0_5883_49482660;
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

SignalI dbus__w_49874220_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makedbus__w_49874220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_49874220_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)channel__w0_5883_49482660;
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

SignalI abus__r_49874140_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeabus__r_49874140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49874140_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)channel__w0_5883_49482660;
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

SignalI abus__w_49874060_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeabus__w_49874060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49874060_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)channel__w0_5883_49482660;
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

SignalI mem_50063680_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makemem_50063680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_50063680_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)channel__w0_5883_49482660;
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

Scope raddr_5884_49481780;

Scope makeraddr_5884_49481780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5884_49481780 = scope;
   scope->owner = (Object)channel__w0_5883_49482660;
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

Scope waddr_5889_49481300;

Scope makewaddr_5889_49481300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5889_49481300 = scope;
   scope->owner = (Object)channel__w0_5883_49482660;
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

Scope rinc_5894_49480880;

Scope makerinc_5894_49480880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5894_49480880 = scope;
   scope->owner = (Object)channel__w0_5883_49482660;
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

Scope winc_5898_49480460;

Scope makewinc_5898_49480460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5898_49480460 = scope;
   scope->owner = (Object)channel__w0_5883_49482660;
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

Scope rdec_58102_49479920;

Scope makerdec_58102_49479920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58102_49479920 = scope;
   scope->owner = (Object)channel__w0_5883_49482660;
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

Scope wdec_58107_49504020;

Scope makewdec_58107_49504020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58107_49504020 = scope;
   scope->owner = (Object)channel__w0_5883_49482660;
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

Behavior __51765160;

Behavior make__51765160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51765160 = behavior;
   behavior->owner = (Object)channel__w0_5883_49482660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_neg += 1;
   clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->neg = realloc(clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->neg,clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_neg*sizeof(Object));
clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->neg[clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_neg-1] = (Object)behavior;
   behavior->block = make__50949580();

   return behavior;
}

Behavior __51761300;

Behavior make__51761300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51761300 = behavior;
   behavior->owner = (Object)channel__w0_5883_49482660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_49646380_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   dbus__r_49646380_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   dbus__r_49646380_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(dbus__r_49646380_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,dbus__r_49646380_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
dbus__r_49646380_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[dbus__r_49646380_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__51761520();

   return behavior;
}

Behavior __51760520;

Behavior make__51760520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51760520 = behavior;
   behavior->owner = (Object)channel__w0_5883_49482660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5897_52694680_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   _5897_52694680_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   _5897_52694680_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(_5897_52694680_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,_5897_52694680_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
_5897_52694680_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[_5897_52694680_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__51761100();

   return behavior;
}

Behavior __51758700;

Behavior make__51758700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51758700 = behavior;
   behavior->owner = (Object)channel__w0_5883_49482660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_49503580_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   trig__r_49503580_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   trig__r_49503580_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(trig__r_49503580_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,trig__r_49503580_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
trig__r_49503580_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[trig__r_49503580_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__51759060();

   return behavior;
}

Behavior __51758420;

Behavior make__51758420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51758420 = behavior;
   behavior->owner = (Object)channel__w0_5883_49482660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5895_52694660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   _5895_52694660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   _5895_52694660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(_5895_52694660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,_5895_52694660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
_5895_52694660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[_5895_52694660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__51758660();

   return behavior;
}

Behavior __51757180;

Behavior make__51757180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51757180 = behavior;
   behavior->owner = (Object)channel__w0_5883_49482660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_49874140_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   abus__r_49874140_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   abus__r_49874140_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(abus__r_49874140_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,abus__r_49874140_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
abus__r_49874140_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[abus__r_49874140_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__51757720();

   return behavior;
}

Behavior __51814020;

Behavior make__51814020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51814020 = behavior;
   behavior->owner = (Object)channel__w0_5883_49482660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5896_52694540_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   _5896_52694540_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   _5896_52694540_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(_5896_52694540_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,_5896_52694540_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
_5896_52694540_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[_5896_52694540_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__51757120();

   return behavior;
}

Behavior __51812780;

Behavior make__51812780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51812780 = behavior;
   behavior->owner = (Object)channel__w0_5883_49482660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_49503560_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   trig__w_49503560_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   trig__w_49503560_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(trig__w_49503560_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,trig__w_49503560_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
trig__w_49503560_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[trig__w_49503560_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__51813400();

   return behavior;
}

Behavior __51812020;

Behavior make__51812020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51812020 = behavior;
   behavior->owner = (Object)channel__w0_5883_49482660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5899_45851760_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   _5899_45851760_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   _5899_45851760_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(_5899_45851760_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,_5899_45851760_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
_5899_45851760_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[_5899_45851760_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__51812660();

   return behavior;
}

Behavior __51811100;

Behavior make__51811100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51811100 = behavior;
   behavior->owner = (Object)channel__w0_5883_49482660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_49874060_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   abus__w_49874060_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   abus__w_49874060_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(abus__w_49874060_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,abus__w_49874060_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
abus__w_49874060_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[abus__w_49874060_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__51811320();

   return behavior;
}

Behavior __51810880;

Behavior make__51810880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51810880 = behavior;
   behavior->owner = (Object)channel__w0_5883_49482660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58100_45851620_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   _58100_45851620_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   _58100_45851620_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(_58100_45851620_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,_58100_45851620_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
_58100_45851620_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[_58100_45851620_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__51811060();

   return behavior;
}

Behavior __51809380;

Behavior make__51809380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51809380 = behavior;
   behavior->owner = (Object)channel__w0_5883_49482660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_49874220_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   dbus__w_49874220_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   dbus__w_49874220_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(dbus__w_49874220_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,dbus__w_49874220_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
dbus__w_49874220_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[dbus__w_49874220_channel__w0_5883_49482660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__51809880();

   return behavior;
}

Behavior __51808580;

Behavior make__51808580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51808580 = behavior;
   behavior->owner = (Object)channel__w0_5883_49482660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58101_47789400_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   _58101_47789400_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   _58101_47789400_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(_58101_47789400_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,_58101_47789400_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
_58101_47789400_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[_58101_47789400_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__51809260();

   return behavior;
}

Scope makechannel__w0_5883_49482660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_5883_49482660 = scope;
   scope->owner = (Object)layer0_58_84_49484760;
   scope->name = "channel_w0:83";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_49503580();
   scope->inners[1] = maketrig__w_49503560();
   scope->inners[2] = makedbus__r_49646380();
   scope->inners[3] = makedbus__w_49874220();
   scope->inners[4] = makeabus__r_49874140();
   scope->inners[5] = makeabus__w_49874060();
   scope->inners[6] = makemem_50063680();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_5884_49481780();
   scope->scopes[1] = makewaddr_5889_49481300();
   scope->scopes[2] = makerinc_5894_49480880();
   scope->scopes[3] = makewinc_5898_49480460();
   scope->scopes[4] = makerdec_58102_49479920();
   scope->scopes[5] = makewdec_58107_49504020();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51765160();
   scope->behaviors[1] = make__51761300();
   scope->behaviors[2] = make__51760520();
   scope->behaviors[3] = make__51758700();
   scope->behaviors[4] = make__51758420();
   scope->behaviors[5] = make__51757180();
   scope->behaviors[6] = make__51814020();
   scope->behaviors[7] = make__51812780();
   scope->behaviors[8] = make__51812020();
   scope->behaviors[9] = make__51811100();
   scope->behaviors[10] = make__51810880();
   scope->behaviors[11] = make__51809380();
   scope->behaviors[12] = make__51808580();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__w1_58112_51765040;

SignalI trig__r_51762000_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI maketrig__r_51762000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_51762000_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)channel__w1_58112_51765040;
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

SignalI trig__w_51761980_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI maketrig__w_51761980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_51761980_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)channel__w1_58112_51765040;
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

SignalI dbus__r_51888760_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makedbus__r_51888760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_51888760_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)channel__w1_58112_51765040;
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

SignalI dbus__w_52055160_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makedbus__w_52055160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_52055160_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)channel__w1_58112_51765040;
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

SignalI abus__r_52055060_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeabus__r_52055060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_52055060_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)channel__w1_58112_51765040;
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

SignalI abus__w_52054980_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeabus__w_52054980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_52054980_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)channel__w1_58112_51765040;
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

SignalI mem_52230180_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makemem_52230180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_52230180_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)channel__w1_58112_51765040;
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

Scope raddr_58113_51764700;

Scope makeraddr_58113_51764700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58113_51764700 = scope;
   scope->owner = (Object)channel__w1_58112_51765040;
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

Scope waddr_58118_51764220;

Scope makewaddr_58118_51764220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58118_51764220 = scope;
   scope->owner = (Object)channel__w1_58112_51765040;
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

Scope rinc_58123_51763800;

Scope makerinc_58123_51763800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58123_51763800 = scope;
   scope->owner = (Object)channel__w1_58112_51765040;
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

Scope winc_58127_51763380;

Scope makewinc_58127_51763380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58127_51763380 = scope;
   scope->owner = (Object)channel__w1_58112_51765040;
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

Scope rdec_58131_51762960;

Scope makerdec_58131_51762960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58131_51762960 = scope;
   scope->owner = (Object)channel__w1_58112_51765040;
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

Scope wdec_58136_51762440;

Scope makewdec_58136_51762440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58136_51762440 = scope;
   scope->owner = (Object)channel__w1_58112_51765040;
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

Behavior __47833720;

Behavior make__47833720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47833720 = behavior;
   behavior->owner = (Object)channel__w1_58112_51765040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_neg += 1;
   clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->neg = realloc(clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->neg,clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_neg*sizeof(Object));
clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->neg[clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_neg-1] = (Object)behavior;
   behavior->block = make__52743420();

   return behavior;
}

Behavior __51828500;

Behavior make__51828500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51828500 = behavior;
   behavior->owner = (Object)channel__w1_58112_51765040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_51888760_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   dbus__r_51888760_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   dbus__r_51888760_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(dbus__r_51888760_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,dbus__r_51888760_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
dbus__r_51888760_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[dbus__r_51888760_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__51828820();

   return behavior;
}

Behavior __51827720;

Behavior make__51827720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51827720 = behavior;
   behavior->owner = (Object)channel__w1_58112_51765040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58126_53073860_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   _58126_53073860_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   _58126_53073860_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(_58126_53073860_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,_58126_53073860_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
_58126_53073860_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[_58126_53073860_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__51828400();

   return behavior;
}

Behavior __51826600;

Behavior make__51826600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51826600 = behavior;
   behavior->owner = (Object)channel__w1_58112_51765040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_51762000_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   trig__r_51762000_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   trig__r_51762000_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(trig__r_51762000_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,trig__r_51762000_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
trig__r_51762000_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[trig__r_51762000_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__51826780();

   return behavior;
}

Behavior __51826000;

Behavior make__51826000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51826000 = behavior;
   behavior->owner = (Object)channel__w1_58112_51765040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58124_53073840_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   _58124_53073840_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   _58124_53073840_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(_58124_53073840_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,_58124_53073840_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
_58124_53073840_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[_58124_53073840_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__51826520();

   return behavior;
}

Behavior __51824620;

Behavior make__51824620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51824620 = behavior;
   behavior->owner = (Object)channel__w1_58112_51765040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_52055060_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   abus__r_52055060_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   abus__r_52055060_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(abus__r_52055060_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,abus__r_52055060_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
abus__r_52055060_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[abus__r_52055060_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__51825000();

   return behavior;
}

Behavior __51824320;

Behavior make__51824320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51824320 = behavior;
   behavior->owner = (Object)channel__w1_58112_51765040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58125_53073700_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   _58125_53073700_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   _58125_53073700_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(_58125_53073700_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,_58125_53073700_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
_58125_53073700_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[_58125_53073700_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__51824560();

   return behavior;
}

Behavior __51894660;

Behavior make__51894660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51894660 = behavior;
   behavior->owner = (Object)channel__w1_58112_51765040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_51761980_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   trig__w_51761980_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   trig__w_51761980_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(trig__w_51761980_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,trig__w_51761980_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
trig__w_51761980_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[trig__w_51761980_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__51895720();

   return behavior;
}

Behavior __51892540;

Behavior make__51892540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51892540 = behavior;
   behavior->owner = (Object)channel__w1_58112_51765040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58128_47789320_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   _58128_47789320_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   _58128_47789320_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(_58128_47789320_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,_58128_47789320_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
_58128_47789320_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[_58128_47789320_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__51894120();

   return behavior;
}

Behavior __51891460;

Behavior make__51891460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51891460 = behavior;
   behavior->owner = (Object)channel__w1_58112_51765040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_52054980_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   abus__w_52054980_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   abus__w_52054980_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(abus__w_52054980_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,abus__w_52054980_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
abus__w_52054980_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[abus__w_52054980_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__51891720();

   return behavior;
}

Behavior __51891060;

Behavior make__51891060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51891060 = behavior;
   behavior->owner = (Object)channel__w1_58112_51765040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58129_47789160_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   _58129_47789160_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   _58129_47789160_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(_58129_47789160_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,_58129_47789160_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
_58129_47789160_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[_58129_47789160_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__51891400();

   return behavior;
}

Behavior __51889860;

Behavior make__51889860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51889860 = behavior;
   behavior->owner = (Object)channel__w1_58112_51765040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_52055160_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   dbus__w_52055160_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   dbus__w_52055160_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(dbus__w_52055160_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,dbus__w_52055160_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
dbus__w_52055160_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[dbus__w_52055160_channel__w1_58112_51765040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__51890200();

   return behavior;
}

Behavior __51889260;

Behavior make__51889260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51889260 = behavior;
   behavior->owner = (Object)channel__w1_58112_51765040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58130_48008940_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   _58130_48008940_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   _58130_48008940_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(_58130_48008940_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,_58130_48008940_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
_58130_48008940_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[_58130_48008940_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__51889800();

   return behavior;
}

Scope makechannel__w1_58112_51765040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w1_58112_51765040 = scope;
   scope->owner = (Object)layer0_58_84_49484760;
   scope->name = "channel_w1:112";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_51762000();
   scope->inners[1] = maketrig__w_51761980();
   scope->inners[2] = makedbus__r_51888760();
   scope->inners[3] = makedbus__w_52055160();
   scope->inners[4] = makeabus__r_52055060();
   scope->inners[5] = makeabus__w_52054980();
   scope->inners[6] = makemem_52230180();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58113_51764700();
   scope->scopes[1] = makewaddr_58118_51764220();
   scope->scopes[2] = makerinc_58123_51763800();
   scope->scopes[3] = makewinc_58127_51763380();
   scope->scopes[4] = makerdec_58131_51762960();
   scope->scopes[5] = makewdec_58136_51762440();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47833720();
   scope->behaviors[1] = make__51828500();
   scope->behaviors[2] = make__51827720();
   scope->behaviors[3] = make__51826600();
   scope->behaviors[4] = make__51826000();
   scope->behaviors[5] = make__51824620();
   scope->behaviors[6] = make__51824320();
   scope->behaviors[7] = make__51894660();
   scope->behaviors[8] = make__51892540();
   scope->behaviors[9] = make__51891460();
   scope->behaviors[10] = make__51891060();
   scope->behaviors[11] = make__51889860();
   scope->behaviors[12] = make__51889260();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58141_47833600;

SignalI reg__0_48007040_channel__accum_58141_47833600_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makereg__0_48007040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_48007040_channel__accum_58141_47833600_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)channel__accum_58141_47833600;
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

SignalI reg__1_48205980_channel__accum_58141_47833600_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makereg__1_48205980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_48205980_channel__accum_58141_47833600_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)channel__accum_58141_47833600;
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

Scope anum_58142_47856180;

Scope makeanum_58142_47856180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58142_47856180 = scope;
   scope->owner = (Object)channel__accum_58141_47833600;
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

Scope raddr_58145_47854160;

Scope makeraddr_58145_47854160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58145_47854160 = scope;
   scope->owner = (Object)channel__accum_58141_47833600;
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

Scope waddr_58149_47853320;

Scope makewaddr_58149_47853320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58149_47853320 = scope;
   scope->owner = (Object)channel__accum_58141_47833600;
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

Scope rinc_58153_47851980;

SignalI abus__r_47851160_rinc_58153_47851980_channel__accum_58141_47833600_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeabus__r_47851160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47851160_rinc_58153_47851980_channel__accum_58141_47833600_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)rinc_58153_47851980;
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

Scope makerinc_58153_47851980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58153_47851980 = scope;
   scope->owner = (Object)channel__accum_58141_47833600;
   scope->name = "rinc:153";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47851160();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58158_47851040;

SignalI abus__w_47850420_winc_58158_47851040_channel__accum_58141_47833600_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeabus__w_47850420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47850420_winc_58158_47851040_channel__accum_58141_47833600_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)winc_58158_47851040;
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

Scope makewinc_58158_47851040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58158_47851040 = scope;
   scope->owner = (Object)channel__accum_58141_47833600;
   scope->name = "winc:158";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47850420();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58163_47850220;

SignalI abus__r_47869020_rdec_58163_47850220_channel__accum_58141_47833600_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeabus__r_47869020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47869020_rdec_58163_47850220_channel__accum_58141_47833600_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)rdec_58163_47850220;
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

Scope makerdec_58163_47850220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58163_47850220 = scope;
   scope->owner = (Object)channel__accum_58141_47833600;
   scope->name = "rdec:163";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47869020();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58168_47866260;

SignalI abus__w_47883840_wdec_58168_47866260_channel__accum_58141_47833600_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeabus__w_47883840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47883840_wdec_58168_47866260_channel__accum_58141_47833600_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)wdec_58168_47866260;
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

Scope makewdec_58168_47866260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58168_47866260 = scope;
   scope->owner = (Object)channel__accum_58141_47833600;
   scope->name = "wdec:168";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47883840();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __51921940;

Behavior make__51921940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51921940 = behavior;
   behavior->owner = (Object)channel__accum_58141_47833600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_48007040_channel__accum_58141_47833600_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   reg__0_48007040_channel__accum_58141_47833600_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   reg__0_48007040_channel__accum_58141_47833600_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(reg__0_48007040_channel__accum_58141_47833600_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,reg__0_48007040_channel__accum_58141_47833600_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
reg__0_48007040_channel__accum_58141_47833600_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[reg__0_48007040_channel__accum_58141_47833600_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__51922360();

   return behavior;
}

Behavior __51921020;

Behavior make__51921020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51921020 = behavior;
   behavior->owner = (Object)channel__accum_58141_47833600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58143_52782980_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   _58143_52782980_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   _58143_52782980_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(_58143_52782980_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,_58143_52782980_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
_58143_52782980_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[_58143_52782980_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__51921740();

   return behavior;
}

Behavior __51943880;

Behavior make__51943880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51943880 = behavior;
   behavior->owner = (Object)channel__accum_58141_47833600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_48205980_channel__accum_58141_47833600_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   reg__1_48205980_channel__accum_58141_47833600_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   reg__1_48205980_channel__accum_58141_47833600_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(reg__1_48205980_channel__accum_58141_47833600_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,reg__1_48205980_channel__accum_58141_47833600_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
reg__1_48205980_channel__accum_58141_47833600_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[reg__1_48205980_channel__accum_58141_47833600_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__51944860();

   return behavior;
}

Behavior __51943480;

Behavior make__51943480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51943480 = behavior;
   behavior->owner = (Object)channel__accum_58141_47833600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58144_52846660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   _58144_52846660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   _58144_52846660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(_58144_52846660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,_58144_52846660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
_58144_52846660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[_58144_52846660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__51943800();

   return behavior;
}

Scope makechannel__accum_58141_47833600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58141_47833600 = scope;
   scope->owner = (Object)layer0_58_84_49484760;
   scope->name = "channel_accum:141";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_48007040();
   scope->inners[1] = makereg__1_48205980();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58142_47856180();
   scope->scopes[1] = makeraddr_58145_47854160();
   scope->scopes[2] = makewaddr_58149_47853320();
   scope->scopes[3] = makerinc_58153_47851980();
   scope->scopes[4] = makewinc_58158_47851040();
   scope->scopes[5] = makerdec_58163_47850220();
   scope->scopes[6] = makewdec_58168_47866260();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51921940();
   scope->behaviors[1] = make__51921020();
   scope->behaviors[2] = make__51943880();
   scope->behaviors[3] = make__51943480();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58173_49983020;

SignalI lv0_50099520_mac__n1_58173_49983020_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makelv0_50099520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_50099520_mac__n1_58173_49983020_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)mac__n1_58173_49983020;
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

SignalI lv1_50681460_mac__n1_58173_49983020_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makelv1_50681460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_50681460_mac__n1_58173_49983020_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)mac__n1_58173_49983020;
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

SignalI av0_50772820_mac__n1_58173_49983020_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeav0_50772820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_50772820_mac__n1_58173_49983020_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)mac__n1_58173_49983020;
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

SignalI av1_50857100_mac__n1_58173_49983020_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeav1_50857100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av1_50857100_mac__n1_58173_49983020_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)mac__n1_58173_49983020;
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

SignalI rv_50981780_mac__n1_58173_49983020_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makerv_50981780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_50981780_mac__n1_58173_49983020_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)mac__n1_58173_49983020;
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

SignalI lvok0_50981760_mac__n1_58173_49983020_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makelvok0_50981760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_50981760_mac__n1_58173_49983020_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)mac__n1_58173_49983020;
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

SignalI lvok1_50981740_mac__n1_58173_49983020_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makelvok1_50981740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_50981740_mac__n1_58173_49983020_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)mac__n1_58173_49983020;
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

SignalI rvok_50981720_mac__n1_58173_49983020_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makervok_50981720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_50981720_mac__n1_58173_49983020_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)mac__n1_58173_49983020;
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

SignalI run_50981700_mac__n1_58173_49983020_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makerun_50981700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_50981700_mac__n1_58173_49983020_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)mac__n1_58173_49983020;
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

Behavior __50825440;

Behavior make__50825440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50825440 = behavior;
   behavior->owner = (Object)mac__n1_58173_49983020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_pos += 1;
   clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->pos = realloc(clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->pos,clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_pos*sizeof(Object));
clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->pos[clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_pos-1] = (Object)behavior;
   behavior->block = make__50981580();

   return behavior;
}

Scope makemac__n1_58173_49983020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58173_49983020 = scope;
   scope->owner = (Object)layer0_58_84_49484760;
   scope->name = "mac_n1:173";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_50099520();
   scope->inners[1] = makelv1_50681460();
   scope->inners[2] = makeav0_50772820();
   scope->inners[3] = makeav1_50857100();
   scope->inners[4] = makerv_50981780();
   scope->inners[5] = makelvok0_50981760();
   scope->inners[6] = makelvok1_50981740();
   scope->inners[7] = makervok_50981720();
   scope->inners[8] = makerun_50981700();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50825440();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__bias_58180_50825260;

SignalI reg__0_50968480_channel__bias_58180_50825260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makereg__0_50968480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_50968480_channel__bias_58180_50825260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)channel__bias_58180_50825260;
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

SignalI reg__1_51138220_channel__bias_58180_50825260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makereg__1_51138220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_51138220_channel__bias_58180_50825260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)channel__bias_58180_50825260;
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

Scope anum_58181_50824960;

Scope makeanum_58181_50824960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58181_50824960 = scope;
   scope->owner = (Object)channel__bias_58180_50825260;
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

Scope raddr_58184_50824500;

Scope makeraddr_58184_50824500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58184_50824500 = scope;
   scope->owner = (Object)channel__bias_58180_50825260;
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

Scope waddr_58188_50823920;

Scope makewaddr_58188_50823920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58188_50823920 = scope;
   scope->owner = (Object)channel__bias_58180_50825260;
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

Scope rinc_58192_50823500;

SignalI abus__r_50847380_rinc_58192_50823500_channel__bias_58180_50825260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeabus__r_50847380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50847380_rinc_58192_50823500_channel__bias_58180_50825260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)rinc_58192_50823500;
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

Scope makerinc_58192_50823500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58192_50823500 = scope;
   scope->owner = (Object)channel__bias_58180_50825260;
   scope->name = "rinc:192";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_50847380();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58196_50847260;

SignalI abus__w_50846880_winc_58196_50847260_channel__bias_58180_50825260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeabus__w_50846880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50846880_winc_58196_50847260_channel__bias_58180_50825260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)winc_58196_50847260;
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

Behavior __52053140;

Behavior make__52053140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52053140 = behavior;
   behavior->owner = (Object)winc_58196_50847260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_50846880_winc_58196_50847260_channel__bias_58180_50825260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   abus__w_50846880_winc_58196_50847260_channel__bias_58180_50825260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   abus__w_50846880_winc_58196_50847260_channel__bias_58180_50825260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(abus__w_50846880_winc_58196_50847260_channel__bias_58180_50825260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,abus__w_50846880_winc_58196_50847260_channel__bias_58180_50825260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
abus__w_50846880_winc_58196_50847260_channel__bias_58180_50825260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[abus__w_50846880_winc_58196_50847260_channel__bias_58180_50825260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__52053460();

   return behavior;
}

Behavior __52052880;

Behavior make__52052880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52052880 = behavior;
   behavior->owner = (Object)winc_58196_50847260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58199_50227440_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   _58199_50227440_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   _58199_50227440_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(_58199_50227440_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,_58199_50227440_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
_58199_50227440_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[_58199_50227440_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__52053100();

   return behavior;
}

Scope makewinc_58196_50847260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58196_50847260 = scope;
   scope->owner = (Object)channel__bias_58180_50825260;
   scope->name = "winc:196";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_50846880();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52053140();
   scope->behaviors[1] = make__52052880();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58200_50846360;

SignalI abus__r_50845920_rdec_58200_50846360_channel__bias_58180_50825260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeabus__r_50845920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50845920_rdec_58200_50846360_channel__bias_58180_50825260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)rdec_58200_50846360;
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

Scope makerdec_58200_50846360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58200_50846360 = scope;
   scope->owner = (Object)channel__bias_58180_50825260;
   scope->name = "rdec:200";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_50845920();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58205_50845800;

SignalI abus__w_50845380_wdec_58205_50845800_channel__bias_58180_50825260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeabus__w_50845380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50845380_wdec_58205_50845800_channel__bias_58180_50825260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)wdec_58205_50845800;
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

Scope makewdec_58205_50845800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58205_50845800 = scope;
   scope->owner = (Object)channel__bias_58180_50825260;
   scope->name = "wdec:205";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_50845380();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __51938540;

Behavior make__51938540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51938540 = behavior;
   behavior->owner = (Object)channel__bias_58180_50825260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_50968480_channel__bias_58180_50825260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   reg__0_50968480_channel__bias_58180_50825260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   reg__0_50968480_channel__bias_58180_50825260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(reg__0_50968480_channel__bias_58180_50825260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,reg__0_50968480_channel__bias_58180_50825260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
reg__0_50968480_channel__bias_58180_50825260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[reg__0_50968480_channel__bias_58180_50825260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__51938960();

   return behavior;
}

Behavior __51938120;

Behavior make__51938120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51938120 = behavior;
   behavior->owner = (Object)channel__bias_58180_50825260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58182_43439460_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   _58182_43439460_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   _58182_43439460_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(_58182_43439460_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,_58182_43439460_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
_58182_43439460_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[_58182_43439460_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__51938360();

   return behavior;
}

Behavior __52027220;

Behavior make__52027220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52027220 = behavior;
   behavior->owner = (Object)channel__bias_58180_50825260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_51138220_channel__bias_58180_50825260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   reg__1_51138220_channel__bias_58180_50825260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   reg__1_51138220_channel__bias_58180_50825260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(reg__1_51138220_channel__bias_58180_50825260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,reg__1_51138220_channel__bias_58180_50825260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
reg__1_51138220_channel__bias_58180_50825260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[reg__1_51138220_channel__bias_58180_50825260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__51937400();

   return behavior;
}

Behavior __52026260;

Behavior make__52026260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52026260 = behavior;
   behavior->owner = (Object)channel__bias_58180_50825260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58183_47690660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   _58183_47690660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   _58183_47690660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(_58183_47690660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,_58183_47690660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
_58183_47690660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[_58183_47690660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__52026860();

   return behavior;
}

Behavior __52023440;

Behavior make__52023440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52023440 = behavior;
   behavior->owner = (Object)channel__bias_58180_50825260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_50968480_channel__bias_58180_50825260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   reg__0_50968480_channel__bias_58180_50825260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   reg__0_50968480_channel__bias_58180_50825260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(reg__0_50968480_channel__bias_58180_50825260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,reg__0_50968480_channel__bias_58180_50825260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
reg__0_50968480_channel__bias_58180_50825260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[reg__0_50968480_channel__bias_58180_50825260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__52024140();

   return behavior;
}

Behavior __52022840;

Behavior make__52022840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52022840 = behavior;
   behavior->owner = (Object)channel__bias_58180_50825260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58197_50321600_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   _58197_50321600_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   _58197_50321600_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(_58197_50321600_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,_58197_50321600_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
_58197_50321600_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[_58197_50321600_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__52023320();

   return behavior;
}

Behavior __52021900;

Behavior make__52021900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52021900 = behavior;
   behavior->owner = (Object)channel__bias_58180_50825260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_51138220_channel__bias_58180_50825260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   reg__1_51138220_channel__bias_58180_50825260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   reg__1_51138220_channel__bias_58180_50825260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(reg__1_51138220_channel__bias_58180_50825260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,reg__1_51138220_channel__bias_58180_50825260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
reg__1_51138220_channel__bias_58180_50825260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[reg__1_51138220_channel__bias_58180_50825260_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__52022340();

   return behavior;
}

Behavior __52021040;

Behavior make__52021040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52021040 = behavior;
   behavior->owner = (Object)channel__bias_58180_50825260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58198_50227520_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   _58198_50227520_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   _58198_50227520_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(_58198_50227520_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,_58198_50227520_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
_58198_50227520_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[_58198_50227520_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__52021580();

   return behavior;
}

Scope makechannel__bias_58180_50825260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__bias_58180_50825260 = scope;
   scope->owner = (Object)layer0_58_84_49484760;
   scope->name = "channel_bias:180";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_50968480();
   scope->inners[1] = makereg__1_51138220();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58181_50824960();
   scope->scopes[1] = makeraddr_58184_50824500();
   scope->scopes[2] = makewaddr_58188_50823920();
   scope->scopes[3] = makerinc_58192_50823500();
   scope->scopes[4] = makewinc_58196_50847260();
   scope->scopes[5] = makerdec_58200_50846360();
   scope->scopes[6] = makewdec_58205_50845800();
   scope->num_behaviors = 8;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51938540();
   scope->behaviors[1] = make__51938120();
   scope->behaviors[2] = make__52027220();
   scope->behaviors[3] = make__52026260();
   scope->behaviors[4] = make__52023440();
   scope->behaviors[5] = make__52022840();
   scope->behaviors[6] = make__52021900();
   scope->behaviors[7] = make__52021040();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58210_52459640;

SignalI reg__0_52545560_channel__z_58210_52459640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makereg__0_52545560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_52545560_channel__z_58210_52459640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)channel__z_58210_52459640;
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

SignalI reg__1_52725420_channel__z_58210_52459640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makereg__1_52725420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_52725420_channel__z_58210_52459640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)channel__z_58210_52459640;
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

Scope anum_58211_52459280;

Scope makeanum_58211_52459280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58211_52459280 = scope;
   scope->owner = (Object)channel__z_58210_52459640;
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

Scope raddr_58214_52458860;

Scope makeraddr_58214_52458860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58214_52458860 = scope;
   scope->owner = (Object)channel__z_58210_52459640;
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

Scope waddr_58218_52458380;

Scope makewaddr_58218_52458380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58218_52458380 = scope;
   scope->owner = (Object)channel__z_58210_52459640;
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

Scope rinc_58222_52457820;

SignalI abus__r_52457380_rinc_58222_52457820_channel__z_58210_52459640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeabus__r_52457380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_52457380_rinc_58222_52457820_channel__z_58210_52459640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)rinc_58222_52457820;
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

Scope makerinc_58222_52457820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58222_52457820 = scope;
   scope->owner = (Object)channel__z_58210_52459640;
   scope->name = "rinc:222";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_52457380();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58226_52457220;

SignalI abus__w_52456840_winc_58226_52457220_channel__z_58210_52459640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeabus__w_52456840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_52456840_winc_58226_52457220_channel__z_58210_52459640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)winc_58226_52457220;
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

Scope makewinc_58226_52457220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58226_52457220 = scope;
   scope->owner = (Object)channel__z_58210_52459640;
   scope->name = "winc:226";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_52456840();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58230_52456720;

SignalI abus__r_52456340_rdec_58230_52456720_channel__z_58210_52459640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeabus__r_52456340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_52456340_rdec_58230_52456720_channel__z_58210_52459640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)rdec_58230_52456720;
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

Scope makerdec_58230_52456720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58230_52456720 = scope;
   scope->owner = (Object)channel__z_58210_52459640;
   scope->name = "rdec:230";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_52456340();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58235_52456140;

SignalI abus__w_52455640_wdec_58235_52456140_channel__z_58210_52459640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeabus__w_52455640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_52455640_wdec_58235_52456140_channel__z_58210_52459640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)wdec_58235_52456140;
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

Scope makewdec_58235_52456140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58235_52456140 = scope;
   scope->owner = (Object)channel__z_58210_52459640;
   scope->name = "wdec:235";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_52455640();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __52114600;

Behavior make__52114600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52114600 = behavior;
   behavior->owner = (Object)channel__z_58210_52459640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_52545560_channel__z_58210_52459640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   reg__0_52545560_channel__z_58210_52459640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   reg__0_52545560_channel__z_58210_52459640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(reg__0_52545560_channel__z_58210_52459640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,reg__0_52545560_channel__z_58210_52459640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
reg__0_52545560_channel__z_58210_52459640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[reg__0_52545560_channel__z_58210_52459640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__52115300();

   return behavior;
}

Behavior __52114340;

Behavior make__52114340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52114340 = behavior;
   behavior->owner = (Object)channel__z_58210_52459640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58212_47933640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   _58212_47933640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   _58212_47933640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(_58212_47933640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,_58212_47933640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
_58212_47933640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[_58212_47933640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__52114560();

   return behavior;
}

Behavior __52113480;

Behavior make__52113480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52113480 = behavior;
   behavior->owner = (Object)channel__z_58210_52459640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_52725420_channel__z_58210_52459640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   reg__1_52725420_channel__z_58210_52459640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   reg__1_52725420_channel__z_58210_52459640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(reg__1_52725420_channel__z_58210_52459640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,reg__1_52725420_channel__z_58210_52459640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
reg__1_52725420_channel__z_58210_52459640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[reg__1_52725420_channel__z_58210_52459640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__52113740();

   return behavior;
}

Behavior __52112540;

Behavior make__52112540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52112540 = behavior;
   behavior->owner = (Object)channel__z_58210_52459640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58213_48107960_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   _58213_48107960_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   _58213_48107960_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(_58213_48107960_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,_58213_48107960_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
_58213_48107960_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[_58213_48107960_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__52113200();

   return behavior;
}

Scope makechannel__z_58210_52459640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58210_52459640 = scope;
   scope->owner = (Object)layer0_58_84_49484760;
   scope->name = "channel_z:210";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_52545560();
   scope->inners[1] = makereg__1_52725420();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58211_52459280();
   scope->scopes[1] = makeraddr_58214_52458860();
   scope->scopes[2] = makewaddr_58218_52458380();
   scope->scopes[3] = makerinc_58222_52457820();
   scope->scopes[4] = makewinc_58226_52457220();
   scope->scopes[5] = makerdec_58230_52456720();
   scope->scopes[6] = makewdec_58235_52456140();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52114600();
   scope->behaviors[1] = make__52114340();
   scope->behaviors[2] = make__52113480();
   scope->behaviors[3] = make__52112540();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58240_45634640;

SignalI lv0_47688240_add__n_58240_45634640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makelv0_47688240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_47688240_add__n_58240_45634640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)add__n_58240_45634640;
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

SignalI lv1_47935300_add__n_58240_45634640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makelv1_47935300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_47935300_add__n_58240_45634640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)add__n_58240_45634640;
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

SignalI rv0_48092460_add__n_58240_45634640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makerv0_48092460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_48092460_add__n_58240_45634640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)add__n_58240_45634640;
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

SignalI rv1_49200900_add__n_58240_45634640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makerv1_49200900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv1_49200900_add__n_58240_45634640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)add__n_58240_45634640;
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

SignalI lvok0_49200800_add__n_58240_45634640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makelvok0_49200800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_49200800_add__n_58240_45634640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)add__n_58240_45634640;
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

SignalI lvok1_49200740_add__n_58240_45634640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makelvok1_49200740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_49200740_add__n_58240_45634640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)add__n_58240_45634640;
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

SignalI rvok0_49200720_add__n_58240_45634640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makervok0_49200720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_49200720_add__n_58240_45634640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)add__n_58240_45634640;
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

SignalI rvok1_49200700_add__n_58240_45634640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makervok1_49200700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok1_49200700_add__n_58240_45634640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)add__n_58240_45634640;
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

SignalI run_49200680_add__n_58240_45634640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makerun_49200680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_49200680_add__n_58240_45634640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)add__n_58240_45634640;
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

Behavior __52516540;

Behavior make__52516540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52516540 = behavior;
   behavior->owner = (Object)add__n_58240_45634640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_pos += 1;
   clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->pos = realloc(clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->pos,clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_pos*sizeof(Object));
clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->pos[clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_pos-1] = (Object)behavior;
   behavior->block = make__49200100();

   return behavior;
}

Scope makeadd__n_58240_45634640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58240_45634640 = scope;
   scope->owner = (Object)layer0_58_84_49484760;
   scope->name = "add_n:240";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_47688240();
   scope->inners[1] = makelv1_47935300();
   scope->inners[2] = makerv0_48092460();
   scope->inners[3] = makerv1_49200900();
   scope->inners[4] = makelvok0_49200800();
   scope->inners[5] = makelvok1_49200740();
   scope->inners[6] = makervok0_49200720();
   scope->inners[7] = makervok1_49200700();
   scope->inners[8] = makerun_49200680();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52516540();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __60171340;

Behavior make__60171340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60171340 = behavior;
   behavior->owner = (Object)layer0_58_84_49484760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_pos += 1;
   clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->pos = realloc(clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->pos,clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_pos*sizeof(Object));
clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->pos[clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_pos-1] = (Object)behavior;
   behavior->block = make__60172500();

   return behavior;
}

Behavior __60821600;

Behavior make__60821600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60821600 = behavior;
   behavior->owner = (Object)layer0_58_84_49484760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_pos += 1;
   clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->pos = realloc(clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->pos,clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_pos*sizeof(Object));
clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->pos[clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_pos-1] = (Object)behavior;
   behavior->block = make__60171220();

   return behavior;
}

Behavior __49496880;

Behavior make__49496880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49496880 = behavior;
   behavior->owner = (Object)layer0_58_84_49484760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_pos += 1;
   clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->pos = realloc(clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->pos,clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_pos*sizeof(Object));
clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->pos[clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_pos-1] = (Object)behavior;
   behavior->block = make__60821480();

   return behavior;
}

Behavior __57740260;

Behavior make__57740260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57740260 = behavior;
   behavior->owner = (Object)layer0_58_84_49484760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_pos += 1;
   clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->pos = realloc(clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->pos,clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_pos*sizeof(Object));
clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->pos[clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_pos-1] = (Object)behavior;
   behavior->block = make__49496660();

   return behavior;
}

Behavior __51703080;

Behavior make__51703080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51703080 = behavior;
   behavior->owner = (Object)layer0_58_84_49484760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_57737940_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   req_57737940_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   req_57737940_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(req_57737940_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,req_57737940_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
req_57737940_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[req_57737940_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_52516340_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   ack__mac_52516340_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   ack__mac_52516340_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(ack__mac_52516340_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,ack__mac_52516340_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
ack__mac_52516340_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[ack__mac_52516340_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__51704180();

   return behavior;
}

Behavior __51733220;

Behavior make__51733220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51733220 = behavior;
   behavior->owner = (Object)layer0_58_84_49484760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 4;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,fill_57737960_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   fill_57737960_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   fill_57737960_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(fill_57737960_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,fill_57737960_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
fill_57737960_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[fill_57737960_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__weights0_50030240_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   ack__weights0_50030240_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   ack__weights0_50030240_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(ack__weights0_50030240_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,ack__weights0_50030240_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
ack__weights0_50030240_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[ack__weights0_50030240_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,ack__weights1_50030200_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   ack__weights1_50030200_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   ack__weights1_50030200_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(ack__weights1_50030200_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,ack__weights1_50030200_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
ack__weights1_50030200_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[ack__weights1_50030200_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,ack__bias_50030180_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   ack__bias_50030180_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   ack__bias_50030180_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(ack__bias_50030180_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,ack__bias_50030180_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
ack__bias_50030180_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[ack__bias_50030180_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__51734460();

   return behavior;
}

Behavior __51732660;

Behavior make__51732660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51732660 = behavior;
   behavior->owner = (Object)layer0_58_84_49484760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 7;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[clk_57738000_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_52516360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   ack_52516360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   ack_52516360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(ack_52516360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,ack_52516360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
ack_52516360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[ack_52516360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_57737980_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   rst_57737980_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   rst_57737980_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(rst_57737980_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,rst_57737980_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
rst_57737980_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[rst_57737980_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_49261020_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   value__z0_49261020_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   value__z0_49261020_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(value__z0_49261020_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,value__z0_49261020_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
value__z0_49261020_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[value__z0_49261020_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,value__z1_49514040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   value__z1_49514040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   value__z1_49514040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(value__z1_49514040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,value__z1_49514040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
value__z1_49514040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[value__z1_49514040_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,ack__a0_50030660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   ack__a0_50030660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   ack__a0_50030660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(ack__a0_50030660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,ack__a0_50030660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
ack__a0_50030660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[ack__a0_50030660_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->events[6] = make_event(ANYEDGE,ack__a1_50030640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   ack__a1_50030640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   ack__a1_50030640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(ack__a1_50030640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,ack__a1_50030640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
ack__a1_50030640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[ack__a1_50030640_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__51704840();

   return behavior;
}

Behavior __51764420;

Behavior make__51764420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51764420 = behavior;
   behavior->owner = (Object)layer0_58_84_49484760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_48041620_counter_58_841_48022360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   ack__mac_48041620_counter_58_841_48022360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   ack__mac_48041620_counter_58_841_48022360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(ack__mac_48041620_counter_58_841_48022360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,ack__mac_48041620_counter_58_841_48022360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
ack__mac_48041620_counter_58_841_48022360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[ack__mac_48041620_counter_58_841_48022360_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,a_47733500_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   a_47733500_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   a_47733500_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(a_47733500_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,a_47733500_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
a_47733500_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[a_47733500_func0_58_841_52897920_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,a_59345400_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   a_59345400_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   a_59345400_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(a_59345400_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,a_59345400_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
a_59345400_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[a_59345400_func1_58_840_59180820_layer0_58_84_49484760_layer0_58_840_57739940_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__51704640();

   return behavior;
}

Scope makelayer0_58_84_49484760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer0_58_84_49484760 = scope;
   scope->owner = (Object)layer0_58_840_57739940;
   scope->name = "layer0:T";
   scope->num_systemIs = 3;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_48041160();
   scope->systemIs[1] = makefunc0_47731800();
   scope->systemIs[2] = makefunc1_59345260();
   scope->num_inners = 43;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_52516380();
   scope->inners[1] = makeack_52516360();
   scope->inners[2] = makeack__mac_52516340();
   scope->inners[3] = makeack__add_52516320();
   scope->inners[4] = makefill__channel_52516280();
   scope->inners[5] = make_5897_52694680();
   scope->inners[6] = make_5895_52694660();
   scope->inners[7] = make_5896_52694540();
   scope->inners[8] = make_58143_52782980();
   scope->inners[9] = make_58144_52846660();
   scope->inners[10] = make_58126_53073860();
   scope->inners[11] = make_58124_53073840();
   scope->inners[12] = make_58125_53073700();
   scope->inners[13] = make_58182_43439460();
   scope->inners[14] = make_58183_47690660();
   scope->inners[15] = make_58212_47933640();
   scope->inners[16] = make_58213_48107960();
   scope->inners[17] = makevalue__z0_49261020();
   scope->inners[18] = makevalue__z1_49514040();
   scope->inners[19] = makevalue__a0_49766160();
   scope->inners[20] = makevalue__a1_50030840();
   scope->inners[21] = makeflag__z0_50030780();
   scope->inners[22] = makeflag__z1_50030680();
   scope->inners[23] = makeack__a0_50030660();
   scope->inners[24] = makeack__a1_50030640();
   scope->inners[25] = makeaddress__weights0_50030560();
   scope->inners[26] = makeaddress__weights1_50030480();
   scope->inners[27] = makeaddress__bias_50030260();
   scope->inners[28] = makeack__weights0_50030240();
   scope->inners[29] = makeack__weights1_50030200();
   scope->inners[30] = makeack__bias_50030180();
   scope->inners[31] = make_58197_50321600();
   scope->inners[32] = make_58198_50227520();
   scope->inners[33] = make_58199_50227440();
   scope->inners[34] = makew0_51620120();
   scope->inners[35] = makew1_52518500();
   scope->inners[36] = makeb_45851800();
   scope->inners[37] = make_5899_45851760();
   scope->inners[38] = make_58100_45851620();
   scope->inners[39] = make_58101_47789400();
   scope->inners[40] = make_58128_47789320();
   scope->inners[41] = make_58129_47789160();
   scope->inners[42] = make_58130_48008940();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_5883_49482660();
   scope->scopes[1] = makechannel__w1_58112_51765040();
   scope->scopes[2] = makechannel__accum_58141_47833600();
   scope->scopes[3] = makemac__n1_58173_49983020();
   scope->scopes[4] = makechannel__bias_58180_50825260();
   scope->scopes[5] = makechannel__z_58210_52459640();
   scope->scopes[6] = makeadd__n_58240_45634640();
   scope->num_behaviors = 8;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60171340();
   scope->behaviors[1] = make__60821600();
   scope->behaviors[2] = make__49496880();
   scope->behaviors[3] = make__57740260();
   scope->behaviors[4] = make__51703080();
   scope->behaviors[5] = make__51733220();
   scope->behaviors[6] = make__51732660();
   scope->behaviors[7] = make__51764420();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer0_58_840_57739940() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer0_58_840_57739940 = systemT;
systemT->owner = NULL;
   systemT->name = "layer0:T0";
   systemT->num_inputs = 5;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_57738000();
   systemT->inputs[1] = makerst_57737980();
   systemT->inputs[2] = makefill_57737960();
   systemT->inputs[3] = makereq_57737940();
   systemT->inputs[4] = make_5815_57798120();
   systemT->num_outputs = 3;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_57798080();
   systemT->outputs[1] = make_5813_57798060();
   systemT->outputs[2] = make_5814_57797980();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_5855_57932400();
   systemT->inouts[1] = make_5856_58034600();

   systemT->scope = makelayer0_58_84_49484760();

   return systemT;
}