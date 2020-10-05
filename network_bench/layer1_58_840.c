#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer1_58_840_60127080;

SignalI clk_60124780_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeclk_60124780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_60124780_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer1_58_840_60127080;
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

SignalI rst_60124760_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makerst_60124760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_60124760_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer1_58_840_60127080;
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

SignalI fill_60124720_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makefill_60124720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_60124720_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer1_58_840_60127080;
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

SignalI req_60124680_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makereq_60124680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_60124680_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer1_58_840_60127080;
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

SignalI _5866_60289820_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI make_5866_60289820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5866_60289820_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer1_58_840_60127080;
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

SignalI _5867_60407180_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI make_5867_60407180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5867_60407180_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer1_58_840_60127080;
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

SignalI ack__layer_60407100_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeack__layer_60407100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_60407100_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer1_58_840_60127080;
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

SignalI _5868_60406940_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI make_5868_60406940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5868_60406940_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer1_58_840_60127080;
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

SignalI _5832_60786660_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI make_5832_60786660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5832_60786660_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer1_58_840_60127080;
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

Block __58493040;

Block __58492800;

void code__58492800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57928300(),ack_59638200_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57928220(),ack__mac_59638180_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57928080(),ack__add_59638160_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__58492800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58492800 = block;
   block->owner = (Object)__58493040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58492800;

   return block;
};

void code__58493040() {
   {
      Value cond = rst_60124760_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58492800();
   }
      }
   }
}

Block make__58493040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58493040 = block;
   block->owner = (Object)__58491640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58493040;

   return block;
};

Block __58491460;

Block __58514840;

Block __58514320;

void code__58514320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58336_60072320_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,value__z0_60234600_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57927840(),flag__z0_60325680_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__58514320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58514320 = block;
   block->owner = (Object)__58514840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58514320;

   return block;
};

void code__58514840() {
 code__58514320();
}

Block make__58514840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58514840 = block;
   block->owner = (Object)__58491460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58514840;

   return block;
};

Block __58491280;

void code__58491280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57927780(),flag__z0_60325680_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__58491280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58491280 = block;
   block->owner = (Object)__58491460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58491280;

   return block;
};

void code__58491460() {
   {
      Value cond = ack__add_59638160_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58514840();
   }
   else {
  code__58491280();
   }
      }
   }
}

Block make__58491460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58491460 = block;
   block->owner = (Object)__58784560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58491460;

   return block;
};

Block __58784440;

Block __58783780;

void code__58783780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57927680(),ack__a0_60325660_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__58783780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58783780 = block;
   block->owner = (Object)__58784440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58783780;

   return block;
};

Block __58783320;

Block __58783120;

void code__58783120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_60325700_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,_5832_60786660_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57927420(),ack__a0_60325660_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__58783120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58783120 = block;
   block->owner = (Object)__58783320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58783120;

   return block;
};

void code__58783320() {
 code__58783120();
}

Block make__58783320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58783320 = block;
   block->owner = (Object)__58784440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58783320;

   return block;
};

void code__58784440() {
   {
      Value cond = rst_60124760_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58783780();
   }
   else if (value2integer(flag__z0_60325680_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value)) {
  code__58783320();
   }
      }
   }
}

Block make__58784440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58784440 = block;
   block->owner = (Object)__59297420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58784440;

   return block;
};

Block __59297300;

Block __59297080;

Block __59296560;

void code__59296560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57926960(),_58325_60401060_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__59296560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59296560 = block;
   block->owner = (Object)__59297080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59296560;

   return block;
};

void code__59297080() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_60124760_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57927280();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59296560();
   }
      }
   }
}

Block make__59297080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59297080 = block;
   block->owner = (Object)__59297300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59297080;

   return block;
};

Block __59296060;

Block __59295640;

void code__59295640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57926660(),_58269_50320500_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__59295640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59295640 = block;
   block->owner = (Object)__59296060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59295640;

   return block;
};

void code__59296060() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_60124760_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57926780();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59295640();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57926520(),_58268_50320680_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__59296060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59296060 = block;
   block->owner = (Object)__59297300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59296060;

   return block;
};

Block __59294760;

void code__59294760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57926260(),address__weights0_60325580_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57926160(),ack__weights0_60325480_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57926100(),address__bias_60325500_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57926040(),ack__bias_60325460_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__59294760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59294760 = block;
   block->owner = (Object)__59297300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59294760;

   return block;
};

Block __59317980;

Block __59317700;

Block __59317540;

Block __59317020;

void code__59317020() {
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
                  src0 = _58269_50320500_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57925680();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58269_50320500_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57950020(),_58268_50320680_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
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
            ref = w0_47917760_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
            idx = value2integer(address__weights0_60325580_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),_58270_50911400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__59317020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59317020 = block;
   block->owner = (Object)__59317540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59317020;

   return block;
};

void code__59317540() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_60124760_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57925860();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59317020();
   }
      }
   }
}

Block make__59317540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59317540 = block;
   block->owner = (Object)__59317700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59317540;

   return block;
};

void code__59317700() {
 code__59317540();
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
                  src0 = address__weights0_60325580_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57949680();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),address__weights0_60325580_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__59317700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59317700 = block;
   block->owner = (Object)__59317980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59317700;

   return block;
};

Block __59694660;

Block __59694500;

Block __59694120;

Block __59693520;

void code__59693520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = b_50320720_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
            idx = value2integer(address__bias_60325500_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),_58324_60401140_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__59693520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59693520 = block;
   block->owner = (Object)__59694120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59693520;

   return block;
};

void code__59694120() {
{
      Value value = _58325_60401060_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__57949380())) {
    code__59693520();
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
                  src0 = _58325_60401060_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57948800();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),_58325_60401060_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__59694120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59694120 = block;
   block->owner = (Object)__59694500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59694120;

   return block;
};

void code__59694500() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_60124760_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57949500();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59694120();
   }
      }
   }
}

Block make__59694500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59694500 = block;
   block->owner = (Object)__59694660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59694500;

   return block;
};

void code__59694660() {
 code__59694500();
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
                  src0 = address__bias_60325500_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57948640();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),address__bias_60325500_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__59694660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59694660 = block;
   block->owner = (Object)__59317980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59694660;

   return block;
};

void code__59317980() {
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__weights0_60325480_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59317700();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__bias_60325460_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59694660();
   }
      }
   }
}

Block make__59317980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59317980 = block;
   block->owner = (Object)__59297300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59317980;

   return block;
};

Block __60129120;

void code__60129120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57948400(),ack__weights0_60325480_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__60129120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60129120 = block;
   block->owner = (Object)__59297300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60129120;

   return block;
};

Block __60128120;

void code__60128120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57948220(),ack__bias_60325460_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__60128120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60128120 = block;
   block->owner = (Object)__59297300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60128120;

   return block;
};

void code__59297300() {
 code__59297080();
 code__59296060();
   {
      Value cond = rst_60124760_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59294760();
   }
      }
   }
   {
      Value cond = fill__channel_59638140_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59317980();
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
               src0 = address__weights0_60325580_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57948500();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60129120();
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
               src0 = address__bias_60325500_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57948320();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60128120();
   }
      }
   }
}

Block make__59297300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59297300 = block;
   block->owner = (Object)__60127480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59297300;

   return block;
};

Block __50569340;

void code__50569340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_60124680_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_59638180_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_59638220_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__50569340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50569340 = block;
   block->owner = (Object)__56082180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50569340;

   return block;
};

Block __56075460;

void code__56075460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = fill_60124720_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ack__weights0_60325480_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
                  src1 = ack__bias_60325460_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
                  dst = and_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),fill__channel_59638140_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__56075460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56075460 = block;
   block->owner = (Object)__56074960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56075460;

   return block;
};

Block __50569760;

void code__50569760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_60124780_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,clk_50966420_counter_58_8400_50948020_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_59638200_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,ack_50966400_counter_58_8400_50948020_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_60124760_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,rst_50966320_counter_58_8400_50948020_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_60234600_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,z__value_57913360_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__a0_60325660_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,ack__layer_60407100_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__50569760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50569760 = block;
   block->owner = (Object)__56074720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50569760;

   return block;
};

Block __50569680;

void code__50569680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_50965820_counter_58_8400_50948020_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,ack__mac_59638180_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_58053560_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,value__a0_60325700_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__50569680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50569680 = block;
   block->owner = (Object)__56074520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50569680;

   return block;
};

Block __58719300;

Block __59244980;

void code__59244980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_58201980_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,make_ref_rangeS(mem_58262900_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740,value2integer(abus__w_58201820_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value),value2integer(abus__w_58201820_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__59244980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59244980 = block;
   block->owner = (Object)__58719300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59244980;

   return block;
};

void code__58719300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_58262900_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
            idx = value2integer(abus__r_58201900_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_58099920_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_58055360_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59244980();
   }
      }
   }
}

Block make__58719300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58719300 = block;
   block->owner = (Object)__59599100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58719300;

   return block;
};

Block __57744740;

void code__57744740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_58099920_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,_58266_59722380_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__57744740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57744740 = block;
   block->owner = (Object)__57744500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57744740;

   return block;
};

Block __57744460;

void code__57744460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58266_59722380_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,dbus__r_58099920_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__57744460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57744460 = block;
   block->owner = (Object)__57744240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57744460;

   return block;
};

Block __57743500;

void code__57743500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_58055380_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,_58264_59722340_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__57743500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57743500 = block;
   block->owner = (Object)__57742940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57743500;

   return block;
};

Block __57742620;

void code__57742620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58264_59722340_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,trig__r_58055380_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__57742620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57742620 = block;
   block->owner = (Object)__57742060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57742620;

   return block;
};

Block __57740580;

void code__57740580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_58201900_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,_58265_59722240_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__57740580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57740580 = block;
   block->owner = (Object)__57740340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57740580;

   return block;
};

Block __57740180;

void code__57740180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58265_59722240_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,abus__r_58201900_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__57740180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57740180 = block;
   block->owner = (Object)__57739960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57740180;

   return block;
};

Block __57738040;

void code__57738040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_58055360_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,_58268_50320680_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__57738040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57738040 = block;
   block->owner = (Object)__57737660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57738040;

   return block;
};

Block __57737620;

void code__57737620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58268_50320680_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,trig__w_58055360_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__57737620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57737620 = block;
   block->owner = (Object)__57737460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57737620;

   return block;
};

Block __57761660;

void code__57761660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_58201820_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,_58269_50320500_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__57761660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57761660 = block;
   block->owner = (Object)__57761280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57761660;

   return block;
};

Block __57761160;

void code__57761160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58269_50320500_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,abus__w_58201820_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__57761160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57761160 = block;
   block->owner = (Object)__57760960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57761160;

   return block;
};

Block __57760560;

void code__57760560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_58201980_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,_58270_50911400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__57760560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57760560 = block;
   block->owner = (Object)__57760320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57760560;

   return block;
};

Block __57760240;

void code__57760240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58270_50911400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,dbus__w_58201980_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__57760240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57760240 = block;
   block->owner = (Object)__57759940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57760240;

   return block;
};

Block __57758040;

void code__57758040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_59656320_channel__accum_58281_59598940_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,_58283_59822620_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__57758040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57758040 = block;
   block->owner = (Object)__57757720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57758040;

   return block;
};

Block __57757680;

void code__57757680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58283_59822620_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,reg__0_59656320_channel__accum_58281_59598940_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__57757680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57757680 = block;
   block->owner = (Object)__57757460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57757680;

   return block;
};

Block __60197140;

Block __60196980;

Block __60196620;

void code__60196620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57912380(),_58265_59722240_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__60196620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60196620 = block;
   block->owner = (Object)__60196980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60196620;

   return block;
};

void code__60196980() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_60124760_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57912500();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60196620();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57912300(),_58264_59722340_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__60196980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60196980 = block;
   block->owner = (Object)__60197140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60196980;

   return block;
};

Block __60195940;

Block __60195620;

void code__60195620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57912060(),_5868_60406940_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__60195620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60195620 = block;
   block->owner = (Object)__60195940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60195620;

   return block;
};

void code__60195940() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_60124760_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57912160();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60195620();
   }
      }
   }
}

Block make__60195940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60195940 = block;
   block->owner = (Object)__60197140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60195940;

   return block;
};

Block __60235660;

void code__60235660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57911540(),rvok_60197280_mac__n1_58306_59819160_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57911480(),lvok0_60197300_mac__n1_58306_59819160_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57911420(),av0_60072260_mac__n1_58306_59819160_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__60235660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60235660 = block;
   block->owner = (Object)__60197140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60235660;

   return block;
};

Block __60304120;

Block __60303800;

Block __60303480;

Block __60303020;

void code__60303020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5866_60289820_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,rv_60197320_mac__n1_58306_59819160_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__60303020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60303020 = block;
   block->owner = (Object)__60303480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60303020;

   return block;
};

Block __60629600;

void code__60629600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5867_60407180_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,rv_60197320_mac__n1_58306_59819160_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__60629600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60629600 = block;
   block->owner = (Object)__60303480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60629600;

   return block;
};

void code__60303480() {
{
      Value value = _5868_60406940_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__57911000())) {
    code__60303020();
         }
         else if (value2integer(value) == value2integer(make__57910900())) {
    code__60629600();
         }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57910760(),rvok_60197280_mac__n1_58306_59819160_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
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
                  src0 = _5868_60406940_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57910560();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5868_60406940_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__60303480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60303480 = block;
   block->owner = (Object)__60303800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60303480;

   return block;
};

void code__60303800() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_60124760_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57911120();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60303480();
   }
      }
   }
}

Block make__60303800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60303800 = block;
   block->owner = (Object)__60304120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60303800;

   return block;
};

Block __47824420;

Block __47823980;

Block __47823400;

void code__47823400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58266_59722380_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,lv0_60027460_mac__n1_58306_59819160_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57909860(),lvok0_60197300_mac__n1_58306_59819160_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__47823400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47823400 = block;
   block->owner = (Object)__47823980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47823400;

   return block;
};

void code__47823980() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58264_59722340_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57910120();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47823400();
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
                  src0 = _58265_59722240_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57909740();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58265_59722240_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57909620(),_58264_59722340_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__47823980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47823980 = block;
   block->owner = (Object)__47824420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47823980;

   return block;
};

void code__47824420() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_60124760_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57910320();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47823980();
   }
      }
   }
}

Block make__47824420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47824420 = block;
   block->owner = (Object)__60304120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47824420;

   return block;
};

Block __49634660;

Block __49630520;

Block __49628420;

void code__49628420() {
}

Block make__49628420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49628420 = block;
   block->owner = (Object)__49630520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49628420;

   return block;
};

Block __52374840;

void code__52374840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_60072260_mac__n1_58306_59819160_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,_58283_59822620_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__52374840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52374840 = block;
   block->owner = (Object)__49630520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52374840;

   return block;
};

void code__49630520() {
 code__49628420();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av0_60072260_mac__n1_58306_59819160_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
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
                              src0 = lv0_60027460_mac__n1_58306_59819160_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_60197320_mac__n1_58306_59819160_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57933480();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_60072260_mac__n1_58306_59819160_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
 code__52374840();
}

Block make__49630520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49630520 = block;
   block->owner = (Object)__49634660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49630520;

   return block;
};

void code__49634660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57909420(),ack_59638200_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57909320(),run_60197260_mac__n1_58306_59819160_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
 code__49630520();
}

Block make__49634660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49634660 = block;
   block->owner = (Object)__60304120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49634660;

   return block;
};

void code__60304120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57911200(),run_60197260_mac__n1_58306_59819160_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
 code__60303800();
 code__47824420();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_60197300_mac__n1_58306_59819160_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
         src1 = rvok_60197280_mac__n1_58306_59819160_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49634660();
   }
      }
   }
}

Block make__60304120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60304120 = block;
   block->owner = (Object)__60197140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60304120;

   return block;
};

void code__60197140() {
 code__60196980();
 code__60195940();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57912000(),ack_59638200_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57911920(),run_60197260_mac__n1_58306_59819160_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = run_60197260_mac__n1_58306_59819160_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60235660();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_59638220_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
         src1 = run_60197260_mac__n1_58306_59819160_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60304120();
   }
      }
   }
}

Block make__60197140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60197140 = block;
   block->owner = (Object)__52832280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60197140;

   return block;
};

Block __57755220;

void code__57755220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_49890920_channel__bias_58311_52832060_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,_58313_60029040_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__57755220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57755220 = block;
   block->owner = (Object)__57755040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57755220;

   return block;
};

Block __57754980;

void code__57754980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58313_60029040_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,reg__0_49890920_channel__bias_58311_52832060_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__57754980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57754980 = block;
   block->owner = (Object)__57754740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57754980;

   return block;
};

Block __57754140;

void code__57754140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_49890920_channel__bias_58311_52832060_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,_58324_60401140_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__57754140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57754140 = block;
   block->owner = (Object)__57753740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57754140;

   return block;
};

Block __57753700;

void code__57753700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58324_60401140_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,reg__0_49890920_channel__bias_58311_52832060_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__57753700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57753700 = block;
   block->owner = (Object)__57777740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57753700;

   return block;
};

Block __57775180;

void code__57775180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_52848700_winc_58323_52851080_channel__bias_58311_52832060_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,_58325_60401060_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__57775180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57775180 = block;
   block->owner = (Object)__57774840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57775180;

   return block;
};

Block __57774800;

void code__57774800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58325_60401060_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,abus__w_52848700_winc_58323_52851080_channel__bias_58311_52832060_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__57774800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57774800 = block;
   block->owner = (Object)__57774500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57774800;

   return block;
};

Block __57773220;

void code__57773220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_58098520_channel__z_58334_58036880_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,_58336_60072320_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__57773220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57773220 = block;
   block->owner = (Object)__57772820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57773220;

   return block;
};

Block __57772700;

void code__57772700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58336_60072320_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,reg__0_58098520_channel__z_58334_58036880_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__57772700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57772700 = block;
   block->owner = (Object)__57772420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57772700;

   return block;
};

Block __58515320;

Block __58514020;

Block __58513700;

void code__58513700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58283_59822620_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,lv0_58399240_add__n_58357_58299040_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57931260(),lvok0_58490960_add__n_58357_58299040_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__58513700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58513700 = block;
   block->owner = (Object)__58514020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58513700;

   return block;
};

Block __58730520;

void code__58730520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58313_60029040_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value,rv0_58490980_add__n_58357_58299040_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57931120(),rvok0_58490940_add__n_58357_58299040_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__58730520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58730520 = block;
   block->owner = (Object)__58514020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58730520;

   return block;
};

Block __59199680;

Block __59199060;

void code__59199060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_58399240_add__n_58357_58299040_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
      src1 = rv0_58490980_add__n_58357_58299040_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58336_60072320_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__59199060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59199060 = block;
   block->owner = (Object)__59199680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59199060;

   return block;
};

void code__59199680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57930880(),run_58490920_add__n_58357_58299040_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57930800(),ack__add_59638160_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
 code__59199060();
}

Block make__59199680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59199680 = block;
   block->owner = (Object)__58514020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59199680;

   return block;
};

void code__58514020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57931400(),run_58490920_add__n_58357_58299040_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
 code__58513700();
 code__58730520();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_58490960_add__n_58357_58299040_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
         src1 = rvok0_58490940_add__n_58357_58299040_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59199680();
   }
      }
   }
}

Block make__58514020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58514020 = block;
   block->owner = (Object)__58515320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58514020;

   return block;
};

Block __58514720;

void code__58514720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57930460(),lvok0_58490960_add__n_58357_58299040_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57930400(),rvok0_58490940_add__n_58357_58299040_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
}

Block make__58514720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58514720 = block;
   block->owner = (Object)__58515320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58514720;

   return block;
};

void code__58515320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57931680(),ack__add_59638160_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57931620(),run_58490920_add__n_58357_58299040_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_59638180_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
         src1 = run_58490920_add__n_58357_58299040_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58514020();
   }
   else {
  code__58514720();
   }
      }
   }
}

Block make__58515320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58515320 = block;
   block->owner = (Object)__59638400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58515320;

   return block;
};

Value make__57930200() {
   static unsigned long long data[] = { 26ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__57929920() {
   static unsigned long long data[] = { 34ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__57912500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57912380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57912300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57912160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57912060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57912000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57911920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57911540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57911480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57911420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__57911200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57911120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57911000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57910900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57910760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57910560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57910320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57910120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57909860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57909740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57909620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57909420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57909320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57933480() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57931680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57931620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57931400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57931260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57931120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57930880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57930800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57930460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57930400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57928300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57928220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57928080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57927840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57927780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57927680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57927420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57927280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57926960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__57926780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57926660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57926520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57926260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__57926160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57926100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57926040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57925860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57925680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57950020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57949680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57949500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57949380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__57948800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57948640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57948500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57948400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57948320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57948220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope layer1_58_84_58034080;

SignalI req__mac_59638220_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makereq__mac_59638220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_59638220_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer1_58_84_58034080;
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

SignalI ack_59638200_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeack_59638200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_59638200_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer1_58_84_58034080;
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

SignalI ack__mac_59638180_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeack__mac_59638180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_59638180_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer1_58_84_58034080;
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

SignalI ack__add_59638160_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeack__add_59638160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_59638160_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer1_58_84_58034080;
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

SignalI fill__channel_59638140_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makefill__channel_59638140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill__channel_59638140_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer1_58_84_58034080;
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

SignalI _58266_59722380_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI make_58266_59722380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58266_59722380_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer1_58_84_58034080;
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

SignalI _58264_59722340_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI make_58264_59722340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58264_59722340_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer1_58_84_58034080;
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

SignalI _58265_59722240_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI make_58265_59722240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58265_59722240_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer1_58_84_58034080;
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

SignalI _58283_59822620_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI make_58283_59822620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58283_59822620_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer1_58_84_58034080;
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

SignalI _58313_60029040_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI make_58313_60029040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58313_60029040_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer1_58_84_58034080;
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

SignalI _58336_60072320_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI make_58336_60072320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58336_60072320_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer1_58_84_58034080;
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

SignalI value__z0_60234600_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makevalue__z0_60234600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_60234600_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer1_58_84_58034080;
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

SignalI value__a0_60325700_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makevalue__a0_60325700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_60325700_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer1_58_84_58034080;
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

SignalI flag__z0_60325680_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeflag__z0_60325680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_60325680_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer1_58_84_58034080;
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

SignalI ack__a0_60325660_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeack__a0_60325660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_60325660_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer1_58_84_58034080;
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

SignalI address__weights0_60325580_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeaddress__weights0_60325580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address__weights0_60325580_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer1_58_84_58034080;
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

SignalI address__bias_60325500_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeaddress__bias_60325500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address__bias_60325500_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer1_58_84_58034080;
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

SignalI ack__weights0_60325480_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeack__weights0_60325480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__weights0_60325480_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer1_58_84_58034080;
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

SignalI ack__bias_60325460_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeack__bias_60325460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__bias_60325460_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer1_58_84_58034080;
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

SignalI _58324_60401140_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI make_58324_60401140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58324_60401140_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer1_58_84_58034080;
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

SignalI _58325_60401060_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI make_58325_60401060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58325_60401060_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer1_58_84_58034080;
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

SignalI w0_47917760_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makew0_47917760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   w0_47917760_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer1_58_84_58034080;
   signalI->name = "w0";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),2);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(({
         Value src0;
         Value dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = make__57930200();
         concat_value(1,0,dst,src0);
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

SignalI b_50320720_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeb_50320720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   b_50320720_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer1_58_84_58034080;
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
         src0 = make__57929920();
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

SignalI _58268_50320680_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI make_58268_50320680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58268_50320680_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer1_58_84_58034080;
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

SignalI _58269_50320500_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI make_58269_50320500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58269_50320500_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer1_58_84_58034080;
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

SignalI _58270_50911400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI make_58270_50911400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58270_50911400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)layer1_58_84_58034080;
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

SystemI counter_50965500;

SystemI makecounter_50965500() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_50965500 = systemI;
   systemI->owner = (Object)layer1_58_84_58034080;
   systemI->name = "counter";
   systemI->system = counter_58_8400_50948020;

   return systemI;
};

SystemI func0_58053420;

SystemI makefunc0_58053420() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_58053420 = systemI;
   systemI->owner = (Object)layer1_58_84_58034080;
   systemI->name = "func0";
   systemI->system = func0_58_8400_57772400;

   return systemI;
};

Scope channel__w0_58252_58033780;

SignalI trig__r_58055380_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI maketrig__r_58055380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_58055380_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)channel__w0_58252_58033780;
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

SignalI trig__w_58055360_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI maketrig__w_58055360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_58055360_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)channel__w0_58252_58033780;
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

SignalI dbus__r_58099920_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makedbus__r_58099920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_58099920_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)channel__w0_58252_58033780;
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

SignalI dbus__w_58201980_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makedbus__w_58201980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_58201980_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)channel__w0_58252_58033780;
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

SignalI abus__r_58201900_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeabus__r_58201900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_58201900_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)channel__w0_58252_58033780;
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

SignalI abus__w_58201820_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeabus__w_58201820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_58201820_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)channel__w0_58252_58033780;
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

SignalI mem_58262900_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makemem_58262900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_58262900_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)channel__w0_58252_58033780;
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

Scope raddr_58253_58033480;

Scope makeraddr_58253_58033480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58253_58033480 = scope;
   scope->owner = (Object)channel__w0_58252_58033780;
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

Scope waddr_58258_58033060;

Scope makewaddr_58258_58033060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58258_58033060 = scope;
   scope->owner = (Object)channel__w0_58252_58033780;
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

Scope rinc_58263_58032620;

Scope makerinc_58263_58032620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58263_58032620 = scope;
   scope->owner = (Object)channel__w0_58252_58033780;
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

Scope winc_58267_58056660;

Scope makewinc_58267_58056660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58267_58056660 = scope;
   scope->owner = (Object)channel__w0_58252_58033780;
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

Scope rdec_58271_58056240;

Scope makerdec_58271_58056240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58271_58056240 = scope;
   scope->owner = (Object)channel__w0_58252_58033780;
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

Scope wdec_58276_58055820;

Scope makewdec_58276_58055820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58276_58055820 = scope;
   scope->owner = (Object)channel__w0_58252_58033780;
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

Behavior __59599100;

Behavior make__59599100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59599100 = behavior;
   behavior->owner = (Object)channel__w0_58252_58033780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_60124780_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   clk_60124780_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_neg += 1;
   clk_60124780_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->neg = realloc(clk_60124780_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->neg,clk_60124780_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_neg*sizeof(Object));
clk_60124780_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->neg[clk_60124780_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_neg-1] = (Object)behavior;
   behavior->block = make__58719300();

   return behavior;
}

Behavior __57744500;

Behavior make__57744500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57744500 = behavior;
   behavior->owner = (Object)channel__w0_58252_58033780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_58099920_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   dbus__r_58099920_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   dbus__r_58099920_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(dbus__r_58099920_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,dbus__r_58099920_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
dbus__r_58099920_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[dbus__r_58099920_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__57744740();

   return behavior;
}

Behavior __57744240;

Behavior make__57744240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57744240 = behavior;
   behavior->owner = (Object)channel__w0_58252_58033780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58266_59722380_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   _58266_59722380_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   _58266_59722380_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(_58266_59722380_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,_58266_59722380_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
_58266_59722380_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[_58266_59722380_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__57744460();

   return behavior;
}

Behavior __57742940;

Behavior make__57742940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57742940 = behavior;
   behavior->owner = (Object)channel__w0_58252_58033780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_58055380_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   trig__r_58055380_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   trig__r_58055380_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(trig__r_58055380_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,trig__r_58055380_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
trig__r_58055380_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[trig__r_58055380_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__57743500();

   return behavior;
}

Behavior __57742060;

Behavior make__57742060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57742060 = behavior;
   behavior->owner = (Object)channel__w0_58252_58033780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58264_59722340_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   _58264_59722340_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   _58264_59722340_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(_58264_59722340_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,_58264_59722340_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
_58264_59722340_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[_58264_59722340_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__57742620();

   return behavior;
}

Behavior __57740340;

Behavior make__57740340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57740340 = behavior;
   behavior->owner = (Object)channel__w0_58252_58033780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_58201900_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   abus__r_58201900_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   abus__r_58201900_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(abus__r_58201900_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,abus__r_58201900_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
abus__r_58201900_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[abus__r_58201900_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__57740580();

   return behavior;
}

Behavior __57739960;

Behavior make__57739960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57739960 = behavior;
   behavior->owner = (Object)channel__w0_58252_58033780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58265_59722240_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   _58265_59722240_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   _58265_59722240_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(_58265_59722240_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,_58265_59722240_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
_58265_59722240_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[_58265_59722240_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__57740180();

   return behavior;
}

Behavior __57737660;

Behavior make__57737660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57737660 = behavior;
   behavior->owner = (Object)channel__w0_58252_58033780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_58055360_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   trig__w_58055360_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   trig__w_58055360_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(trig__w_58055360_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,trig__w_58055360_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
trig__w_58055360_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[trig__w_58055360_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__57738040();

   return behavior;
}

Behavior __57737460;

Behavior make__57737460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57737460 = behavior;
   behavior->owner = (Object)channel__w0_58252_58033780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58268_50320680_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   _58268_50320680_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   _58268_50320680_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(_58268_50320680_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,_58268_50320680_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
_58268_50320680_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[_58268_50320680_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__57737620();

   return behavior;
}

Behavior __57761280;

Behavior make__57761280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57761280 = behavior;
   behavior->owner = (Object)channel__w0_58252_58033780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_58201820_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   abus__w_58201820_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   abus__w_58201820_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(abus__w_58201820_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,abus__w_58201820_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
abus__w_58201820_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[abus__w_58201820_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__57761660();

   return behavior;
}

Behavior __57760960;

Behavior make__57760960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57760960 = behavior;
   behavior->owner = (Object)channel__w0_58252_58033780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58269_50320500_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   _58269_50320500_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   _58269_50320500_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(_58269_50320500_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,_58269_50320500_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
_58269_50320500_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[_58269_50320500_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__57761160();

   return behavior;
}

Behavior __57760320;

Behavior make__57760320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57760320 = behavior;
   behavior->owner = (Object)channel__w0_58252_58033780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_58201980_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   dbus__w_58201980_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   dbus__w_58201980_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(dbus__w_58201980_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,dbus__w_58201980_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
dbus__w_58201980_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[dbus__w_58201980_channel__w0_58252_58033780_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__57760560();

   return behavior;
}

Behavior __57759940;

Behavior make__57759940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57759940 = behavior;
   behavior->owner = (Object)channel__w0_58252_58033780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58270_50911400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   _58270_50911400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   _58270_50911400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(_58270_50911400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,_58270_50911400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
_58270_50911400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[_58270_50911400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__57760240();

   return behavior;
}

Scope makechannel__w0_58252_58033780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58252_58033780 = scope;
   scope->owner = (Object)layer1_58_84_58034080;
   scope->name = "channel_w0:252";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_58055380();
   scope->inners[1] = maketrig__w_58055360();
   scope->inners[2] = makedbus__r_58099920();
   scope->inners[3] = makedbus__w_58201980();
   scope->inners[4] = makeabus__r_58201900();
   scope->inners[5] = makeabus__w_58201820();
   scope->inners[6] = makemem_58262900();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58253_58033480();
   scope->scopes[1] = makewaddr_58258_58033060();
   scope->scopes[2] = makerinc_58263_58032620();
   scope->scopes[3] = makewinc_58267_58056660();
   scope->scopes[4] = makerdec_58271_58056240();
   scope->scopes[5] = makewdec_58276_58055820();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59599100();
   scope->behaviors[1] = make__57744500();
   scope->behaviors[2] = make__57744240();
   scope->behaviors[3] = make__57742940();
   scope->behaviors[4] = make__57742060();
   scope->behaviors[5] = make__57740340();
   scope->behaviors[6] = make__57739960();
   scope->behaviors[7] = make__57737660();
   scope->behaviors[8] = make__57737460();
   scope->behaviors[9] = make__57761280();
   scope->behaviors[10] = make__57760960();
   scope->behaviors[11] = make__57760320();
   scope->behaviors[12] = make__57759940();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58281_59598940;

SignalI reg__0_59656320_channel__accum_58281_59598940_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makereg__0_59656320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_59656320_channel__accum_58281_59598940_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)channel__accum_58281_59598940;
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

Scope anum_58282_59598580;

Scope makeanum_58282_59598580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58282_59598580 = scope;
   scope->owner = (Object)channel__accum_58281_59598940;
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

Scope raddr_58284_59598160;

Scope makeraddr_58284_59598160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58284_59598160 = scope;
   scope->owner = (Object)channel__accum_58281_59598940;
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

Scope waddr_58287_59597740;

Scope makewaddr_58287_59597740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58287_59597740 = scope;
   scope->owner = (Object)channel__accum_58281_59598940;
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

Scope rinc_58290_59597320;

SignalI abus__r_59596920_rinc_58290_59597320_channel__accum_58281_59598940_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeabus__r_59596920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_59596920_rinc_58290_59597320_channel__accum_58281_59598940_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)rinc_58290_59597320;
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

Scope makerinc_58290_59597320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58290_59597320 = scope;
   scope->owner = (Object)channel__accum_58281_59598940;
   scope->name = "rinc:290";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_59596920();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58294_59613120;

SignalI abus__w_59612680_winc_58294_59613120_channel__accum_58281_59598940_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeabus__w_59612680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_59612680_winc_58294_59613120_channel__accum_58281_59598940_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)winc_58294_59613120;
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

Scope makewinc_58294_59613120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58294_59613120 = scope;
   scope->owner = (Object)channel__accum_58281_59598940;
   scope->name = "winc:294";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_59612680();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58298_59612560;

SignalI abus__r_59612180_rdec_58298_59612560_channel__accum_58281_59598940_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeabus__r_59612180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_59612180_rdec_58298_59612560_channel__accum_58281_59598940_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)rdec_58298_59612560;
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

Scope makerdec_58298_59612560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58298_59612560 = scope;
   scope->owner = (Object)channel__accum_58281_59598940;
   scope->name = "rdec:298";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_59612180();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58302_59612060;

SignalI abus__w_59611680_wdec_58302_59612060_channel__accum_58281_59598940_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeabus__w_59611680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_59611680_wdec_58302_59612060_channel__accum_58281_59598940_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)wdec_58302_59612060;
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

Scope makewdec_58302_59612060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58302_59612060 = scope;
   scope->owner = (Object)channel__accum_58281_59598940;
   scope->name = "wdec:302";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_59611680();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __57757720;

Behavior make__57757720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57757720 = behavior;
   behavior->owner = (Object)channel__accum_58281_59598940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_59656320_channel__accum_58281_59598940_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   reg__0_59656320_channel__accum_58281_59598940_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   reg__0_59656320_channel__accum_58281_59598940_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(reg__0_59656320_channel__accum_58281_59598940_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,reg__0_59656320_channel__accum_58281_59598940_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
reg__0_59656320_channel__accum_58281_59598940_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[reg__0_59656320_channel__accum_58281_59598940_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__57758040();

   return behavior;
}

Behavior __57757460;

Behavior make__57757460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57757460 = behavior;
   behavior->owner = (Object)channel__accum_58281_59598940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58283_59822620_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   _58283_59822620_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   _58283_59822620_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(_58283_59822620_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,_58283_59822620_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
_58283_59822620_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[_58283_59822620_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__57757680();

   return behavior;
}

Scope makechannel__accum_58281_59598940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58281_59598940 = scope;
   scope->owner = (Object)layer1_58_84_58034080;
   scope->name = "channel_accum:281";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_59656320();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58282_59598580();
   scope->scopes[1] = makeraddr_58284_59598160();
   scope->scopes[2] = makewaddr_58287_59597740();
   scope->scopes[3] = makerinc_58290_59597320();
   scope->scopes[4] = makewinc_58294_59613120();
   scope->scopes[5] = makerdec_58298_59612560();
   scope->scopes[6] = makewdec_58302_59612060();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57757720();
   scope->behaviors[1] = make__57757460();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58306_59819160;

SignalI lv0_60027460_mac__n1_58306_59819160_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makelv0_60027460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_60027460_mac__n1_58306_59819160_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)mac__n1_58306_59819160;
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

SignalI av0_60072260_mac__n1_58306_59819160_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeav0_60072260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_60072260_mac__n1_58306_59819160_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)mac__n1_58306_59819160;
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

SignalI rv_60197320_mac__n1_58306_59819160_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makerv_60197320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_60197320_mac__n1_58306_59819160_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)mac__n1_58306_59819160;
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

SignalI lvok0_60197300_mac__n1_58306_59819160_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makelvok0_60197300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_60197300_mac__n1_58306_59819160_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)mac__n1_58306_59819160;
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

SignalI rvok_60197280_mac__n1_58306_59819160_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makervok_60197280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_60197280_mac__n1_58306_59819160_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)mac__n1_58306_59819160;
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

SignalI run_60197260_mac__n1_58306_59819160_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makerun_60197260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_60197260_mac__n1_58306_59819160_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)mac__n1_58306_59819160;
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

Behavior __52832280;

Behavior make__52832280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52832280 = behavior;
   behavior->owner = (Object)mac__n1_58306_59819160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_60124780_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   clk_60124780_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_pos += 1;
   clk_60124780_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->pos = realloc(clk_60124780_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->pos,clk_60124780_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_pos*sizeof(Object));
clk_60124780_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->pos[clk_60124780_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_pos-1] = (Object)behavior;
   behavior->block = make__60197140();

   return behavior;
}

Scope makemac__n1_58306_59819160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58306_59819160 = scope;
   scope->owner = (Object)layer1_58_84_58034080;
   scope->name = "mac_n1:306";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 6;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_60027460();
   scope->inners[1] = makeav0_60072260();
   scope->inners[2] = makerv_60197320();
   scope->inners[3] = makelvok0_60197300();
   scope->inners[4] = makervok_60197280();
   scope->inners[5] = makerun_60197260();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52832280();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__bias_58311_52832060;

SignalI reg__0_49890920_channel__bias_58311_52832060_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makereg__0_49890920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_49890920_channel__bias_58311_52832060_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)channel__bias_58311_52832060;
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

Scope anum_58312_52831480;

Scope makeanum_58312_52831480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58312_52831480 = scope;
   scope->owner = (Object)channel__bias_58311_52832060;
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

Scope raddr_58314_52830880;

Scope makeraddr_58314_52830880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58314_52830880 = scope;
   scope->owner = (Object)channel__bias_58311_52832060;
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

Scope waddr_58317_52854420;

Scope makewaddr_58317_52854420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58317_52854420 = scope;
   scope->owner = (Object)channel__bias_58311_52832060;
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

Scope rinc_58320_52853320;

SignalI abus__r_52851740_rinc_58320_52853320_channel__bias_58311_52832060_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeabus__r_52851740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_52851740_rinc_58320_52853320_channel__bias_58311_52832060_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)rinc_58320_52853320;
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

Scope makerinc_58320_52853320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58320_52853320 = scope;
   scope->owner = (Object)channel__bias_58311_52832060;
   scope->name = "rinc:320";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_52851740();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58323_52851080;

SignalI abus__w_52848700_winc_58323_52851080_channel__bias_58311_52832060_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeabus__w_52848700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_52848700_winc_58323_52851080_channel__bias_58311_52832060_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)winc_58323_52851080;
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

Behavior __57774840;

Behavior make__57774840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57774840 = behavior;
   behavior->owner = (Object)winc_58323_52851080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_52848700_winc_58323_52851080_channel__bias_58311_52832060_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   abus__w_52848700_winc_58323_52851080_channel__bias_58311_52832060_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   abus__w_52848700_winc_58323_52851080_channel__bias_58311_52832060_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(abus__w_52848700_winc_58323_52851080_channel__bias_58311_52832060_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,abus__w_52848700_winc_58323_52851080_channel__bias_58311_52832060_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
abus__w_52848700_winc_58323_52851080_channel__bias_58311_52832060_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[abus__w_52848700_winc_58323_52851080_channel__bias_58311_52832060_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__57775180();

   return behavior;
}

Behavior __57774500;

Behavior make__57774500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57774500 = behavior;
   behavior->owner = (Object)winc_58323_52851080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58325_60401060_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   _58325_60401060_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   _58325_60401060_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(_58325_60401060_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,_58325_60401060_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
_58325_60401060_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[_58325_60401060_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__57774800();

   return behavior;
}

Scope makewinc_58323_52851080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58323_52851080 = scope;
   scope->owner = (Object)channel__bias_58311_52832060;
   scope->name = "winc:323";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_52848700();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57774840();
   scope->behaviors[1] = make__57774500();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58326_52847500;

SignalI abus__r_52846800_rdec_58326_52847500_channel__bias_58311_52832060_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeabus__r_52846800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_52846800_rdec_58326_52847500_channel__bias_58311_52832060_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)rdec_58326_52847500;
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

Scope makerdec_58326_52847500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58326_52847500 = scope;
   scope->owner = (Object)channel__bias_58311_52832060;
   scope->name = "rdec:326";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_52846800();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58330_52887280;

SignalI abus__w_52886560_wdec_58330_52887280_channel__bias_58311_52832060_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeabus__w_52886560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_52886560_wdec_58330_52887280_channel__bias_58311_52832060_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)wdec_58330_52887280;
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

Scope makewdec_58330_52887280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58330_52887280 = scope;
   scope->owner = (Object)channel__bias_58311_52832060;
   scope->name = "wdec:330";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_52886560();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __57755040;

Behavior make__57755040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57755040 = behavior;
   behavior->owner = (Object)channel__bias_58311_52832060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_49890920_channel__bias_58311_52832060_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   reg__0_49890920_channel__bias_58311_52832060_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   reg__0_49890920_channel__bias_58311_52832060_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(reg__0_49890920_channel__bias_58311_52832060_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,reg__0_49890920_channel__bias_58311_52832060_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
reg__0_49890920_channel__bias_58311_52832060_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[reg__0_49890920_channel__bias_58311_52832060_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__57755220();

   return behavior;
}

Behavior __57754740;

Behavior make__57754740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57754740 = behavior;
   behavior->owner = (Object)channel__bias_58311_52832060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58313_60029040_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   _58313_60029040_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   _58313_60029040_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(_58313_60029040_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,_58313_60029040_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
_58313_60029040_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[_58313_60029040_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__57754980();

   return behavior;
}

Behavior __57753740;

Behavior make__57753740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57753740 = behavior;
   behavior->owner = (Object)channel__bias_58311_52832060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_49890920_channel__bias_58311_52832060_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   reg__0_49890920_channel__bias_58311_52832060_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   reg__0_49890920_channel__bias_58311_52832060_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(reg__0_49890920_channel__bias_58311_52832060_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,reg__0_49890920_channel__bias_58311_52832060_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
reg__0_49890920_channel__bias_58311_52832060_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[reg__0_49890920_channel__bias_58311_52832060_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__57754140();

   return behavior;
}

Behavior __57777740;

Behavior make__57777740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57777740 = behavior;
   behavior->owner = (Object)channel__bias_58311_52832060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58324_60401140_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   _58324_60401140_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   _58324_60401140_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(_58324_60401140_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,_58324_60401140_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
_58324_60401140_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[_58324_60401140_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__57753700();

   return behavior;
}

Scope makechannel__bias_58311_52832060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__bias_58311_52832060 = scope;
   scope->owner = (Object)layer1_58_84_58034080;
   scope->name = "channel_bias:311";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_49890920();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58312_52831480();
   scope->scopes[1] = makeraddr_58314_52830880();
   scope->scopes[2] = makewaddr_58317_52854420();
   scope->scopes[3] = makerinc_58320_52853320();
   scope->scopes[4] = makewinc_58323_52851080();
   scope->scopes[5] = makerdec_58326_52847500();
   scope->scopes[6] = makewdec_58330_52887280();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57755040();
   scope->behaviors[1] = make__57754740();
   scope->behaviors[2] = make__57753740();
   scope->behaviors[3] = make__57777740();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58334_58036880;

SignalI reg__0_58098520_channel__z_58334_58036880_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makereg__0_58098520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_58098520_channel__z_58334_58036880_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)channel__z_58334_58036880;
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

Scope anum_58335_58036440;

Scope makeanum_58335_58036440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58335_58036440 = scope;
   scope->owner = (Object)channel__z_58334_58036880;
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

Scope raddr_58337_58036020;

Scope makeraddr_58337_58036020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58337_58036020 = scope;
   scope->owner = (Object)channel__z_58334_58036880;
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

Scope waddr_58340_58035600;

Scope makewaddr_58340_58035600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58340_58035600 = scope;
   scope->owner = (Object)channel__z_58334_58036880;
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

Scope rinc_58343_58035180;

SignalI abus__r_58034740_rinc_58343_58035180_channel__z_58334_58036880_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeabus__r_58034740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_58034740_rinc_58343_58035180_channel__z_58334_58036880_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)rinc_58343_58035180;
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

Scope makerinc_58343_58035180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58343_58035180 = scope;
   scope->owner = (Object)channel__z_58334_58036880;
   scope->name = "rinc:343";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_58034740();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58346_58034500;

SignalI abus__w_58033280_winc_58346_58034500_channel__z_58334_58036880_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeabus__w_58033280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_58033280_winc_58346_58034500_channel__z_58334_58036880_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)winc_58346_58034500;
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

Scope makewinc_58346_58034500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58346_58034500 = scope;
   scope->owner = (Object)channel__z_58334_58036880;
   scope->name = "winc:346";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_58033280();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58349_58033160;

SignalI abus__r_58032320_rdec_58349_58033160_channel__z_58334_58036880_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeabus__r_58032320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_58032320_rdec_58349_58033160_channel__z_58334_58036880_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)rdec_58349_58033160;
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

Scope makerdec_58349_58033160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58349_58033160 = scope;
   scope->owner = (Object)channel__z_58334_58036880;
   scope->name = "rdec:349";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_58032320();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58353_58032200;

SignalI abus__w_58056000_wdec_58353_58032200_channel__z_58334_58036880_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makeabus__w_58056000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_58056000_wdec_58353_58032200_channel__z_58334_58036880_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)wdec_58353_58032200;
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

Scope makewdec_58353_58032200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58353_58032200 = scope;
   scope->owner = (Object)channel__z_58334_58036880;
   scope->name = "wdec:353";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_58056000();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __57772820;

Behavior make__57772820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57772820 = behavior;
   behavior->owner = (Object)channel__z_58334_58036880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_58098520_channel__z_58334_58036880_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   reg__0_58098520_channel__z_58334_58036880_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   reg__0_58098520_channel__z_58334_58036880_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(reg__0_58098520_channel__z_58334_58036880_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,reg__0_58098520_channel__z_58334_58036880_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
reg__0_58098520_channel__z_58334_58036880_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[reg__0_58098520_channel__z_58334_58036880_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__57773220();

   return behavior;
}

Behavior __57772420;

Behavior make__57772420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57772420 = behavior;
   behavior->owner = (Object)channel__z_58334_58036880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58336_60072320_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   _58336_60072320_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   _58336_60072320_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(_58336_60072320_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,_58336_60072320_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
_58336_60072320_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[_58336_60072320_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__57772700();

   return behavior;
}

Scope makechannel__z_58334_58036880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58334_58036880 = scope;
   scope->owner = (Object)layer1_58_84_58034080;
   scope->name = "channel_z:334";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_58098520();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58335_58036440();
   scope->scopes[1] = makeraddr_58337_58036020();
   scope->scopes[2] = makewaddr_58340_58035600();
   scope->scopes[3] = makerinc_58343_58035180();
   scope->scopes[4] = makewinc_58346_58034500();
   scope->scopes[5] = makerdec_58349_58033160();
   scope->scopes[6] = makewdec_58353_58032200();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57772820();
   scope->behaviors[1] = make__57772420();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58357_58299040;

SignalI lv0_58399240_add__n_58357_58299040_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makelv0_58399240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_58399240_add__n_58357_58299040_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)add__n_58357_58299040;
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

SignalI rv0_58490980_add__n_58357_58299040_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makerv0_58490980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_58490980_add__n_58357_58299040_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)add__n_58357_58299040;
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

SignalI lvok0_58490960_add__n_58357_58299040_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makelvok0_58490960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_58490960_add__n_58357_58299040_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)add__n_58357_58299040;
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

SignalI rvok0_58490940_add__n_58357_58299040_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makervok0_58490940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_58490940_add__n_58357_58299040_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)add__n_58357_58299040;
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

SignalI run_58490920_add__n_58357_58299040_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740;

SignalI makerun_58490920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_58490920_add__n_58357_58299040_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740 = signalI;
   signalI->owner = (Object)add__n_58357_58299040;
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

Behavior __59638400;

Behavior make__59638400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59638400 = behavior;
   behavior->owner = (Object)add__n_58357_58299040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_60124780_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   clk_60124780_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_pos += 1;
   clk_60124780_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->pos = realloc(clk_60124780_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->pos,clk_60124780_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_pos*sizeof(Object));
clk_60124780_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->pos[clk_60124780_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_pos-1] = (Object)behavior;
   behavior->block = make__58515320();

   return behavior;
}

Scope makeadd__n_58357_58299040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58357_58299040 = scope;
   scope->owner = (Object)layer1_58_84_58034080;
   scope->name = "add_n:357";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_58399240();
   scope->inners[1] = makerv0_58490980();
   scope->inners[2] = makelvok0_58490960();
   scope->inners[3] = makervok0_58490940();
   scope->inners[4] = makerun_58490920();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59638400();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __58491640;

Behavior make__58491640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58491640 = behavior;
   behavior->owner = (Object)layer1_58_84_58034080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_60124780_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   clk_60124780_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_pos += 1;
   clk_60124780_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->pos = realloc(clk_60124780_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->pos,clk_60124780_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_pos*sizeof(Object));
clk_60124780_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->pos[clk_60124780_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_pos-1] = (Object)behavior;
   behavior->block = make__58493040();

   return behavior;
}

Behavior __58784560;

Behavior make__58784560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58784560 = behavior;
   behavior->owner = (Object)layer1_58_84_58034080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_60124780_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   clk_60124780_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_pos += 1;
   clk_60124780_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->pos = realloc(clk_60124780_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->pos,clk_60124780_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_pos*sizeof(Object));
clk_60124780_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->pos[clk_60124780_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_pos-1] = (Object)behavior;
   behavior->block = make__58491460();

   return behavior;
}

Behavior __59297420;

Behavior make__59297420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59297420 = behavior;
   behavior->owner = (Object)layer1_58_84_58034080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_60124780_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   clk_60124780_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_pos += 1;
   clk_60124780_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->pos = realloc(clk_60124780_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->pos,clk_60124780_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_pos*sizeof(Object));
clk_60124780_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->pos[clk_60124780_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_pos-1] = (Object)behavior;
   behavior->block = make__58784440();

   return behavior;
}

Behavior __60127480;

Behavior make__60127480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60127480 = behavior;
   behavior->owner = (Object)layer1_58_84_58034080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_60124780_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   clk_60124780_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_pos += 1;
   clk_60124780_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->pos = realloc(clk_60124780_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->pos,clk_60124780_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_pos*sizeof(Object));
clk_60124780_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->pos[clk_60124780_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_pos-1] = (Object)behavior;
   behavior->block = make__59297300();

   return behavior;
}

Behavior __56082180;

Behavior make__56082180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56082180 = behavior;
   behavior->owner = (Object)layer1_58_84_58034080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_60124680_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   req_60124680_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   req_60124680_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(req_60124680_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,req_60124680_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
req_60124680_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[req_60124680_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_59638180_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   ack__mac_59638180_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   ack__mac_59638180_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(ack__mac_59638180_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,ack__mac_59638180_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
ack__mac_59638180_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[ack__mac_59638180_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__50569340();

   return behavior;
}

Behavior __56074960;

Behavior make__56074960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56074960 = behavior;
   behavior->owner = (Object)layer1_58_84_58034080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,fill_60124720_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   fill_60124720_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   fill_60124720_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(fill_60124720_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,fill_60124720_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
fill_60124720_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[fill_60124720_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__weights0_60325480_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   ack__weights0_60325480_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   ack__weights0_60325480_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(ack__weights0_60325480_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,ack__weights0_60325480_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
ack__weights0_60325480_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[ack__weights0_60325480_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,ack__bias_60325460_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   ack__bias_60325460_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   ack__bias_60325460_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(ack__bias_60325460_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,ack__bias_60325460_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
ack__bias_60325460_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[ack__bias_60325460_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__56075460();

   return behavior;
}

Behavior __56074720;

Behavior make__56074720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56074720 = behavior;
   behavior->owner = (Object)layer1_58_84_58034080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_60124780_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   clk_60124780_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   clk_60124780_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(clk_60124780_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,clk_60124780_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
clk_60124780_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[clk_60124780_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_59638200_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   ack_59638200_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   ack_59638200_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(ack_59638200_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,ack_59638200_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
ack_59638200_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[ack_59638200_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_60124760_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   rst_60124760_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   rst_60124760_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(rst_60124760_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,rst_60124760_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
rst_60124760_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[rst_60124760_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_60234600_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   value__z0_60234600_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   value__z0_60234600_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(value__z0_60234600_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,value__z0_60234600_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
value__z0_60234600_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[value__z0_60234600_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__a0_60325660_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   ack__a0_60325660_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   ack__a0_60325660_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(ack__a0_60325660_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,ack__a0_60325660_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
ack__a0_60325660_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[ack__a0_60325660_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__50569760();

   return behavior;
}

Behavior __56074520;

Behavior make__56074520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56074520 = behavior;
   behavior->owner = (Object)layer1_58_84_58034080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_50965820_counter_58_8400_50948020_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   ack__mac_50965820_counter_58_8400_50948020_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   ack__mac_50965820_counter_58_8400_50948020_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(ack__mac_50965820_counter_58_8400_50948020_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,ack__mac_50965820_counter_58_8400_50948020_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
ack__mac_50965820_counter_58_8400_50948020_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[ack__mac_50965820_counter_58_8400_50948020_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,a_58053560_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740);
   a_58053560_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any += 1;
   a_58053560_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any = realloc(a_58053560_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any,a_58053560_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any*sizeof(Object));
a_58053560_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->any[a_58053560_func0_58_8400_57772400_layer1_58_84_58034080_layer1_58_840_60127080_neural__network_58_84_49449880_neural__network_58_840_49798940______58_84_49450680______58_840_50116740->num_any-1] = (Object)behavior;
   behavior->block = make__50569680();

   return behavior;
}

Scope makelayer1_58_84_58034080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer1_58_84_58034080 = scope;
   scope->owner = (Object)layer1_58_840_60127080;
   scope->name = "layer1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_50965500();
   scope->systemIs[1] = makefunc0_58053420();
   scope->num_inners = 26;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_59638220();
   scope->inners[1] = makeack_59638200();
   scope->inners[2] = makeack__mac_59638180();
   scope->inners[3] = makeack__add_59638160();
   scope->inners[4] = makefill__channel_59638140();
   scope->inners[5] = make_58266_59722380();
   scope->inners[6] = make_58264_59722340();
   scope->inners[7] = make_58265_59722240();
   scope->inners[8] = make_58283_59822620();
   scope->inners[9] = make_58313_60029040();
   scope->inners[10] = make_58336_60072320();
   scope->inners[11] = makevalue__z0_60234600();
   scope->inners[12] = makevalue__a0_60325700();
   scope->inners[13] = makeflag__z0_60325680();
   scope->inners[14] = makeack__a0_60325660();
   scope->inners[15] = makeaddress__weights0_60325580();
   scope->inners[16] = makeaddress__bias_60325500();
   scope->inners[17] = makeack__weights0_60325480();
   scope->inners[18] = makeack__bias_60325460();
   scope->inners[19] = make_58324_60401140();
   scope->inners[20] = make_58325_60401060();
   scope->inners[21] = makew0_47917760();
   scope->inners[22] = makeb_50320720();
   scope->inners[23] = make_58268_50320680();
   scope->inners[24] = make_58269_50320500();
   scope->inners[25] = make_58270_50911400();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58252_58033780();
   scope->scopes[1] = makechannel__accum_58281_59598940();
   scope->scopes[2] = makemac__n1_58306_59819160();
   scope->scopes[3] = makechannel__bias_58311_52832060();
   scope->scopes[4] = makechannel__z_58334_58036880();
   scope->scopes[5] = makeadd__n_58357_58299040();
   scope->num_behaviors = 8;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__58491640();
   scope->behaviors[1] = make__58784560();
   scope->behaviors[2] = make__59297420();
   scope->behaviors[3] = make__60127480();
   scope->behaviors[4] = make__56082180();
   scope->behaviors[5] = make__56074960();
   scope->behaviors[6] = make__56074720();
   scope->behaviors[7] = make__56074520();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer1_58_840_60127080() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer1_58_840_60127080 = systemT;
systemT->owner = NULL;
   systemT->name = "layer1:T0";
   systemT->num_inputs = 6;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_60124780();
   systemT->inputs[1] = makerst_60124760();
   systemT->inputs[2] = makefill_60124720();
   systemT->inputs[3] = makereq_60124680();
   systemT->inputs[4] = make_5866_60289820();
   systemT->inputs[5] = make_5867_60407180();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_60407100();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_5868_60406940();
   systemT->inouts[1] = make_5832_60786660();

   systemT->scope = makelayer1_58_84_58034080();

   return systemT;
}