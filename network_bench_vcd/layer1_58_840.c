#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer1_58_840_59814780;

SignalI clk_59812380_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makeclk_59812380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_59812380_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)layer1_58_840_59814780;
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

SignalI rst_59812340_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makerst_59812340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_59812340_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)layer1_58_840_59814780;
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

SignalI fill_59812320_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makefill_59812320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_59812320_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)layer1_58_840_59814780;
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

SignalI req_59812300_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makereq_59812300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_59812300_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)layer1_58_840_59814780;
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

SignalI _5866_59989000_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI make_5866_59989000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5866_59989000_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)layer1_58_840_59814780;
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

SignalI _5867_60067360_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI make_5867_60067360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5867_60067360_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)layer1_58_840_59814780;
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

SignalI ack__layer_60067320_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makeack__layer_60067320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_60067320_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)layer1_58_840_59814780;
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

SignalI _5868_60067220_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI make_5868_60067220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5868_60067220_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)layer1_58_840_59814780;
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

SignalI _5832_60318500_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI make_5832_60318500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5832_60318500_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)layer1_58_840_59814780;
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

Block __58675040;

Block __58674780;

void code__58674780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57269600(),ack_50495400_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57269540(),ack__mac_50495360_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57269480(),ack__add_50495340_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__58674780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58674780 = block;
   block->owner = (Object)__58675040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58674780;

   return block;
};

void code__58675040() {
   {
      Value cond = rst_59812340_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58674780();
   }
      }
   }
}

Block make__58675040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58675040 = block;
   block->owner = (Object)__58673680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58675040;

   return block;
};

Block __58673520;

Block __58672820;

Block __58672640;

void code__58672640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58292_51768100_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,value__z0_52079160_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57269300(),flag__z0_52402580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__58672640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58672640 = block;
   block->owner = (Object)__58672820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58672640;

   return block;
};

void code__58672820() {
 code__58672640();
}

Block make__58672820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58672820 = block;
   block->owner = (Object)__58673520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58672820;

   return block;
};

Block __58673220;

void code__58673220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57269240(),flag__z0_52402580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__58673220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58673220 = block;
   block->owner = (Object)__58673520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58673220;

   return block;
};

void code__58673520() {
   {
      Value cond = ack__add_50495340_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58672820();
   }
   else {
  code__58673220();
   }
      }
   }
}

Block make__58673520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58673520 = block;
   block->owner = (Object)__59059080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58673520;

   return block;
};

Block __59058940;

Block __59058680;

void code__59058680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57269140(),ack__a0_52402540_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__59058680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59058680 = block;
   block->owner = (Object)__59058940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59058680;

   return block;
};

Block __59057940;

Block __59057720;

void code__59057720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_52402660_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,_5832_60318500_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57268920(),ack__a0_52402540_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__59057720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59057720 = block;
   block->owner = (Object)__59057940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59057720;

   return block;
};

void code__59057940() {
 code__59057720();
}

Block make__59057940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59057940 = block;
   block->owner = (Object)__59058940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59057940;

   return block;
};

void code__59058940() {
   {
      Value cond = rst_59812340_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59058680();
   }
   else if (value2integer(flag__z0_52402580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value)) {
  code__59057940();
   }
      }
   }
}

Block make__59058940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59058940 = block;
   block->owner = (Object)__59370980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59058940;

   return block;
};

Block __59370840;

Block __59370640;

Block __59370120;

void code__59370120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57268680(),_58281_52722280_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__59370120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59370120 = block;
   block->owner = (Object)__59370640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59370120;

   return block;
};

void code__59370640() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59812340_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57268800();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59370120();
   }
      }
   }
}

Block make__59370640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59370640 = block;
   block->owner = (Object)__59370840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59370640;

   return block;
};

Block __59816160;

void code__59816160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57268480(),address__bias_52402280_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57268320(),ack__bias_52402240_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__59816160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59816160 = block;
   block->owner = (Object)__59370840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59816160;

   return block;
};

Block __59369560;

Block __59369340;

Block __59369100;

Block __59368900;

Block __59368520;

Block __59367860;

void code__59367860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = b_57267800_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
            idx = value2integer(address__bias_52402280_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),_58280_52722460_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__59367860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59367860 = block;
   block->owner = (Object)__59368520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59367860;

   return block;
};

void code__59368520() {
{
      Value value = _58281_52722280_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__57267620())) {
    code__59367860();
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
                  src0 = _58281_52722280_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57267060();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),_58281_52722280_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__59368520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59368520 = block;
   block->owner = (Object)__59368900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59368520;

   return block;
};

void code__59368900() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59812340_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57267740();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59368520();
   }
      }
   }
}

Block make__59368900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59368900 = block;
   block->owner = (Object)__59369100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59368900;

   return block;
};

void code__59369100() {
 code__59368900();
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
                  src0 = address__bias_52402280_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57266840();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),address__bias_52402280_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__59369100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59369100 = block;
   block->owner = (Object)__59369340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59369100;

   return block;
};

void code__59369340() {
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__bias_52402240_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59369100();
   }
      }
   }
}

Block make__59369340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59369340 = block;
   block->owner = (Object)__59369560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59369340;

   return block;
};

Block __59816780;

void code__59816780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57266240(),ack__bias_52402240_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__59816780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59816780 = block;
   block->owner = (Object)__59369560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59816780;

   return block;
};

void code__59369560() {
   {
      Value cond = fill__channel_50495280_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59369340();
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
               src0 = address__bias_52402280_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57266620();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59816780();
   }
      }
   }
}

Block make__59369560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59369560 = block;
   block->owner = (Object)__59370840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59369560;

   return block;
};

void code__59370840() {
 code__59370640();
   {
      Value cond = rst_59812340_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59816160();
   }
   else {
  code__59369560();
   }
      }
   }
}

Block make__59370840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59370840 = block;
   block->owner = (Object)__59815120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59370840;

   return block;
};

Block __54375920;

void code__54375920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_59812300_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_50495360_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_50470920_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__54375920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54375920 = block;
   block->owner = (Object)__54375620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54375920;

   return block;
};

Block __52803580;

void code__52803580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = fill_59812320_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__bias_52402240_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),fill__channel_50495280_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__52803580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52803580 = block;
   block->owner = (Object)__52803300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52803580;

   return block;
};

Block __54376220;

void code__54376220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_59812380_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,clk_57286040_counter_58_8400_57263560_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_50495400_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,ack_57286020_counter_58_8400_57263560_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_59812340_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,rst_57286000_counter_58_8400_57263560_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_52079160_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,z__value_57927400_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__a0_52402540_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,ack__layer_60067320_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__54376220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54376220 = block;
   block->owner = (Object)__52803040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54376220;

   return block;
};

Block __54376080;

void code__54376080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_57285960_counter_58_8400_57263560_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,ack__mac_50495360_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_58073560_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,value__a0_52402660_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__54376080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54376080 = block;
   block->owner = (Object)__52802860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54376080;

   return block;
};

Block __48894800;

void code__48894800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_48008460_channel__w0_58222_59842680_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
            idx = value2integer(abus__r_60002020_channel__w0_58222_59842680_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_60002100_channel__w0_58222_59842680_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__48894800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48894800 = block;
   block->owner = (Object)__51130360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48894800;

   return block;
};

Block __52801960;

void code__52801960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_60002100_channel__w0_58222_59842680_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,_58231_50787560_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__52801960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52801960 = block;
   block->owner = (Object)__52801740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52801960;

   return block;
};

Block __52801700;

void code__52801700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58231_50787560_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,dbus__r_60002100_channel__w0_58222_59842680_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__52801700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52801700 = block;
   block->owner = (Object)__52801500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52801700;

   return block;
};

Block __52801040;

void code__52801040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_59906580_channel__w0_58222_59842680_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,_58229_50787500_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__52801040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52801040 = block;
   block->owner = (Object)__52800880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52801040;

   return block;
};

Block __52800840;

void code__52800840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58229_50787500_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,trig__r_59906580_channel__w0_58222_59842680_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__52800840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52800840 = block;
   block->owner = (Object)__52800660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52800840;

   return block;
};

Block __52800280;

void code__52800280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_60002020_channel__w0_58222_59842680_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,_58230_50787380_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__52800280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52800280 = block;
   block->owner = (Object)__52800080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52800280;

   return block;
};

Block __52800040;

void code__52800040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58230_50787380_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,abus__r_60002020_channel__w0_58222_59842680_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__52800040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52800040 = block;
   block->owner = (Object)__52799780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52800040;

   return block;
};

Block __52798300;

void code__52798300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_51438440_channel__accum_58237_51130180_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,_58239_51248820_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__52798300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52798300 = block;
   block->owner = (Object)__52798120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52798300;

   return block;
};

Block __52798060;

void code__52798060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58239_51248820_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,reg__0_51438440_channel__accum_58237_51130180_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__52798060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52798060 = block;
   block->owner = (Object)__52797800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52798060;

   return block;
};

Block __52637600;

Block __52637440;

Block __52637080;

void code__52637080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57229400(),_58230_50787380_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__52637080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52637080 = block;
   block->owner = (Object)__52637440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52637080;

   return block;
};

void code__52637440() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59812340_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57229500();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52637080();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57229340(),_58229_50787500_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__52637440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52637440 = block;
   block->owner = (Object)__52637600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52637440;

   return block;
};

Block __52636400;

Block __52636080;

void code__52636080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57253480(),_5868_60067220_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__52636080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52636080 = block;
   block->owner = (Object)__52636400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52636080;

   return block;
};

void code__52636400() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59812340_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57253740();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52636080();
   }
      }
   }
}

Block make__52636400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52636400 = block;
   block->owner = (Object)__52637600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52636400;

   return block;
};

Block __52635200;

void code__52635200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57253220(),rvok_52637760_mac__n1_58262_51896740_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57253140(),lvok0_52637780_mac__n1_58262_51896740_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57253060(),wok0_52637740_mac__n1_58262_51896740_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__52635200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52635200 = block;
   block->owner = (Object)__52637600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52635200;

   return block;
};

Block __50359640;

Block __50359240;

Block __50359080;

Block __50358760;

Block __50358300;

void code__50358300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5866_59989000_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,rv_52637800_mac__n1_58262_51896740_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__50358300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50358300 = block;
   block->owner = (Object)__50358760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50358300;

   return block;
};

Block __57279540;

void code__57279540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5867_60067360_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,rv_52637800_mac__n1_58262_51896740_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__57279540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57279540 = block;
   block->owner = (Object)__50358760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57279540;

   return block;
};

void code__50358760() {
{
      Value value = _5868_60067220_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__57252480())) {
    code__50358300();
         }
         else if (value2integer(value) == value2integer(make__57252360())) {
    code__57279540();
         }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57252100(),rvok_52637760_mac__n1_58262_51896740_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
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
                  src0 = _5868_60067220_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57251800();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5868_60067220_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__50358760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50358760 = block;
   block->owner = (Object)__50359080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50358760;

   return block;
};

void code__50359080() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59812340_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57252620();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50358760();
   }
      }
   }
}

Block make__50359080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50359080 = block;
   block->owner = (Object)__50359240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50359080;

   return block;
};

void code__50359240() {
 code__50359080();
}

Block make__50359240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50359240 = block;
   block->owner = (Object)__50359640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50359240;

   return block;
};

Block __57605460;

Block __57605300;

Block __57604980;

Block __57603620;

Block __57603460;

void code__57603460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58231_50787560_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,lv0_52249560_mac__n1_58262_51896740_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__57251060(),lvok0_52637780_mac__n1_58262_51896740_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__57603460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57603460 = block;
   block->owner = (Object)__57603620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57603460;

   return block;
};

void code__57603620() {
 code__57603460();
}

Block make__57603620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57603620 = block;
   block->owner = (Object)__57604980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57603620;

   return block;
};

Block __57604820;

void code__57604820() {
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
                  src0 = _58230_50787380_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57250880();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58230_50787380_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57250760(),_58229_50787500_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__57604820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57604820 = block;
   block->owner = (Object)__57604980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57604820;

   return block;
};

void code__57604980() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58229_50787500_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57251240();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57603620();
   }
   else {
  code__57604820();
   }
      }
   }
}

Block make__57604980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57604980 = block;
   block->owner = (Object)__57605300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57604980;

   return block;
};

void code__57605300() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59812340_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57251560();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57604980();
   }
      }
   }
}

Block make__57605300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57605300 = block;
   block->owner = (Object)__57605460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57605300;

   return block;
};

void code__57605460() {
 code__57605300();
}

Block make__57605460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57605460 = block;
   block->owner = (Object)__50359640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57605460;

   return block;
};

Block __57782200;

Block __57781720;

Block __57781560;

void code__57781560() {
}

Block make__57781560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57781560 = block;
   block->owner = (Object)__57781720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57781560;

   return block;
};

Block __58305320;

void code__58305320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_52620460_mac__n1_58262_51896740_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,_58239_51248820_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57249680(),wok0_52637740_mac__n1_58262_51896740_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__58305320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58305320 = block;
   block->owner = (Object)__57781720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58305320;

   return block;
};

void code__57781720() {
 code__57781560();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av0_52620460_mac__n1_58262_51896740_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
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
                              src0 = lv0_52249560_mac__n1_58262_51896740_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_52637800_mac__n1_58262_51896740_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57249900();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_52620460_mac__n1_58262_51896740_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
 code__58305320();
}

Block make__57781720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57781720 = block;
   block->owner = (Object)__57782200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57781720;

   return block;
};

void code__57782200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57250340(),ack_50495400_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57250280(),run_52637720_mac__n1_58262_51896740_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
 code__57781720();
}

Block make__57782200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57782200 = block;
   block->owner = (Object)__50359640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57782200;

   return block;
};

Block __58476140;

void code__58476140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57249580(),wok0_52637740_mac__n1_58262_51896740_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57249520(),lvok0_52637780_mac__n1_58262_51896740_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57249460(),rvok_52637760_mac__n1_58262_51896740_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__58476140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58476140 = block;
   block->owner = (Object)__50359640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58476140;

   return block;
};

void code__50359640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57252760(),run_52637720_mac__n1_58262_51896740_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = rvok_52637760_mac__n1_58262_51896740_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50359240();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_52637780_mac__n1_58262_51896740_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57605460();
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
               src0 = lvok0_52637780_mac__n1_58262_51896740_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
               src1 = rvok_52637760_mac__n1_58262_51896740_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok0_52637740_mac__n1_58262_51896740_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57782200();
   }
      }
   }
   {
      Value cond = wok0_52637740_mac__n1_58262_51896740_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58476140();
   }
      }
   }
}

Block make__50359640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50359640 = block;
   block->owner = (Object)__52637600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50359640;

   return block;
};

Block __52634400;

void code__52634400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57249400(),av0_52620460_mac__n1_58262_51896740_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__52634400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52634400 = block;
   block->owner = (Object)__52637600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52634400;

   return block;
};

void code__52637600() {
 code__52637440();
 code__52636400();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57253420(),ack_50495400_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57253360(),run_52637720_mac__n1_58262_51896740_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = run_52637720_mac__n1_58262_51896740_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52635200();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_50470920_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
         src1 = run_52637720_mac__n1_58262_51896740_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50359640();
   }
   else {
  code__52634400();
   }
      }
   }
}

Block make__52637600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52637600 = block;
   block->owner = (Object)__58475020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52637600;

   return block;
};

Block __50362620;

void code__50362620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_58736820_channel__bias_58267_58474900_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,_58269_51489340_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__50362620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50362620 = block;
   block->owner = (Object)__50362400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50362620;

   return block;
};

Block __50362340;

void code__50362340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58269_51489340_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,reg__0_58736820_channel__bias_58267_58474900_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__50362340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50362340 = block;
   block->owner = (Object)__50361980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50362340;

   return block;
};

Block __50361560;

void code__50361560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_58736820_channel__bias_58267_58474900_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,_58280_52722460_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__50361560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50361560 = block;
   block->owner = (Object)__50361360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50361560;

   return block;
};

Block __50361280;

void code__50361280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58280_52722460_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,reg__0_58736820_channel__bias_58267_58474900_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__50361280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50361280 = block;
   block->owner = (Object)__50361120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50361280;

   return block;
};

Block __50357920;

void code__50357920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_58529680_winc_58279_58530060_channel__bias_58267_58474900_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,_58281_52722280_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__50357920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50357920 = block;
   block->owner = (Object)__50357680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50357920;

   return block;
};

Block __50357600;

void code__50357600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58281_52722280_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,abus__w_58529680_winc_58279_58530060_channel__bias_58267_58474900_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__50357600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50357600 = block;
   block->owner = (Object)__50357440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50357600;

   return block;
};

Block __50356240;

void code__50356240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_59438200_channel__z_58290_59356300_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,_58292_51768100_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__50356240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50356240 = block;
   block->owner = (Object)__57040220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50356240;

   return block;
};

Block __57039800;

void code__57039800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58292_51768100_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,reg__0_59438200_channel__z_58290_59356300_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__57039800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57039800 = block;
   block->owner = (Object)__57039600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57039800;

   return block;
};

Block __59956040;

Block __59954840;

Block __59954520;

void code__59954520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58239_51248820_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,lv0_59814480_add__n_58313_59729040_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57247520(),lvok0_59956200_add__n_58313_59729040_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__59954520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59954520 = block;
   block->owner = (Object)__59954840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59954520;

   return block;
};

Block __60158160;

void code__60158160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58269_51489340_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value,rv0_59956220_add__n_58313_59729040_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57247380(),rvok0_59956180_add__n_58313_59729040_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__60158160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60158160 = block;
   block->owner = (Object)__59954840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60158160;

   return block;
};

Block __47617760;

Block __47616220;

void code__47616220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_59814480_add__n_58313_59729040_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
      src1 = rv0_59956220_add__n_58313_59729040_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58292_51768100_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__47616220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47616220 = block;
   block->owner = (Object)__47617760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47616220;

   return block;
};

void code__47617760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57247220(),run_59956160_add__n_58313_59729040_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57247160(),ack__add_50495340_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
 code__47616220();
}

Block make__47617760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47617760 = block;
   block->owner = (Object)__59954840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47617760;

   return block;
};

void code__59954840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57247660(),run_59956160_add__n_58313_59729040_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
 code__59954520();
 code__60158160();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_59956200_add__n_58313_59729040_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
         src1 = rvok0_59956180_add__n_58313_59729040_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47617760();
   }
      }
   }
}

Block make__59954840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59954840 = block;
   block->owner = (Object)__59956040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59954840;

   return block;
};

Block __59955520;

void code__59955520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57246920(),lvok0_59956200_add__n_58313_59729040_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57246860(),rvok0_59956180_add__n_58313_59729040_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
}

Block make__59955520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59955520 = block;
   block->owner = (Object)__59956040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59955520;

   return block;
};

void code__59956040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57247940(),ack__add_50495340_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57247880(),run_59956160_add__n_58313_59729040_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_50495360_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
         src1 = run_59956160_add__n_58313_59729040_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59954840();
   }
   else {
  code__59955520();
   }
      }
   }
}

Block make__59956040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59956040 = block;
   block->owner = (Object)__50471060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59956040;

   return block;
};

Value make__57246680() {
   static unsigned long long data[] = { 34ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__57231180() {
   static unsigned long long data[] = { 26ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__57231160() {
   static unsigned long long data[] = { 4294967271ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__57229500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57229400() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57229340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57253740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57253480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57253420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57253360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57253220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57253140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57253060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57252760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57252620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57252480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57252360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57252100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57251800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57251560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57251240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57251060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57250880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57250760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57250340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57250280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57249900() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57249680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57249580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57249520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57249460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57249400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__57247940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57247880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57247660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57247520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57247380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57247220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57247160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57246920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57246860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57269600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57269540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57269480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57269300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57269240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57269140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57268920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57268800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57268680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__57268480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57268320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57267740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57267620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__57267060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57266840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57266620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57266240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope layer1_58_84_59842980;

SignalI req__mac_50470920_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makereq__mac_50470920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_50470920_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)layer1_58_84_59842980;
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

SignalI ack_50495400_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makeack_50495400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_50495400_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)layer1_58_84_59842980;
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

SignalI ack__mac_50495360_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makeack__mac_50495360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_50495360_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)layer1_58_84_59842980;
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

SignalI ack__add_50495340_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makeack__add_50495340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_50495340_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)layer1_58_84_59842980;
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

SignalI fill__channel_50495280_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makefill__channel_50495280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill__channel_50495280_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)layer1_58_84_59842980;
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

SignalI _58231_50787560_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI make_58231_50787560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58231_50787560_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)layer1_58_84_59842980;
   signalI->name = ":231";
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

SignalI _58229_50787500_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI make_58229_50787500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58229_50787500_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)layer1_58_84_59842980;
   signalI->name = ":229";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _58230_50787380_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI make_58230_50787380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58230_50787380_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)layer1_58_84_59842980;
   signalI->name = ":230";
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

SignalI _58239_51248820_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI make_58239_51248820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58239_51248820_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)layer1_58_84_59842980;
   signalI->name = ":239";
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

SignalI _58269_51489340_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI make_58269_51489340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58269_51489340_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)layer1_58_84_59842980;
   signalI->name = ":269";
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

SignalI _58292_51768100_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI make_58292_51768100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58292_51768100_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)layer1_58_84_59842980;
   signalI->name = ":292";
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

SignalI value__z0_52079160_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makevalue__z0_52079160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_52079160_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)layer1_58_84_59842980;
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

SignalI value__a0_52402660_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makevalue__a0_52402660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_52402660_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)layer1_58_84_59842980;
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

SignalI flag__z0_52402580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makeflag__z0_52402580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_52402580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)layer1_58_84_59842980;
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

SignalI ack__a0_52402540_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makeack__a0_52402540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_52402540_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)layer1_58_84_59842980;
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

SignalI address__bias_52402280_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makeaddress__bias_52402280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address__bias_52402280_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)layer1_58_84_59842980;
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

SignalI ack__bias_52402240_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makeack__bias_52402240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__bias_52402240_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)layer1_58_84_59842980;
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

SignalI _58280_52722460_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI make_58280_52722460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58280_52722460_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)layer1_58_84_59842980;
   signalI->name = ":280";
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

SignalI _58281_52722280_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI make_58281_52722280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58281_52722280_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)layer1_58_84_59842980;
   signalI->name = ":281";
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

SignalI b_57267800_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makeb_57267800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   b_57267800_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)layer1_58_84_59842980;
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
         src0 = make__57246680();
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

SystemI counter_57285820;

SystemI makecounter_57285820() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_57285820 = systemI;
   systemI->owner = (Object)layer1_58_84_59842980;
   systemI->name = "counter";
   systemI->system = counter_58_8400_57263560;

   return systemI;
};

SystemI func0_58073420;

SystemI makefunc0_58073420() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_58073420 = systemI;
   systemI->owner = (Object)layer1_58_84_59842980;
   systemI->name = "func0";
   systemI->system = func0_58_8400_57802580;

   return systemI;
};

Scope channel__w0_58222_59842680;

SignalI trig__r_59906580_channel__w0_58222_59842680_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI maketrig__r_59906580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_59906580_channel__w0_58222_59842680_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)channel__w0_58222_59842680;
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

SignalI dbus__r_60002100_channel__w0_58222_59842680_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makedbus__r_60002100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_60002100_channel__w0_58222_59842680_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)channel__w0_58222_59842680;
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

SignalI abus__r_60002020_channel__w0_58222_59842680_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makeabus__r_60002020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_60002020_channel__w0_58222_59842680_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)channel__w0_58222_59842680;
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

SignalI mem_48008460_channel__w0_58222_59842680_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makemem_48008460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_48008460_channel__w0_58222_59842680_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)channel__w0_58222_59842680;
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
         src0 = make__57231180();
         src1 = make__57231160();
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

Scope raddr_58223_59907860;

Scope makeraddr_58223_59907860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58223_59907860 = scope;
   scope->owner = (Object)channel__w0_58222_59842680;
   scope->name = "raddr:223";
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

Scope rinc_58228_59907440;

Scope makerinc_58228_59907440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58228_59907440 = scope;
   scope->owner = (Object)channel__w0_58222_59842680;
   scope->name = "rinc:228";
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

Scope rdec_58232_59907020;

Scope makerdec_58232_59907020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58232_59907020 = scope;
   scope->owner = (Object)channel__w0_58222_59842680;
   scope->name = "rdec:232";
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

Behavior __51130360;

Behavior make__51130360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51130360 = behavior;
   behavior->owner = (Object)channel__w0_58222_59842680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_59812380_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   clk_59812380_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_neg += 1;
   clk_59812380_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->neg = realloc(clk_59812380_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->neg,clk_59812380_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_neg*sizeof(Object));
clk_59812380_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->neg[clk_59812380_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_neg-1] = (Object)behavior;
   behavior->block = make__48894800();

   return behavior;
}

Behavior __52801740;

Behavior make__52801740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52801740 = behavior;
   behavior->owner = (Object)channel__w0_58222_59842680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_60002100_channel__w0_58222_59842680_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   dbus__r_60002100_channel__w0_58222_59842680_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   dbus__r_60002100_channel__w0_58222_59842680_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(dbus__r_60002100_channel__w0_58222_59842680_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,dbus__r_60002100_channel__w0_58222_59842680_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
dbus__r_60002100_channel__w0_58222_59842680_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[dbus__r_60002100_channel__w0_58222_59842680_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->block = make__52801960();

   return behavior;
}

Behavior __52801500;

Behavior make__52801500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52801500 = behavior;
   behavior->owner = (Object)channel__w0_58222_59842680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58231_50787560_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   _58231_50787560_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   _58231_50787560_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(_58231_50787560_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,_58231_50787560_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
_58231_50787560_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[_58231_50787560_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->block = make__52801700();

   return behavior;
}

Behavior __52800880;

Behavior make__52800880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52800880 = behavior;
   behavior->owner = (Object)channel__w0_58222_59842680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_59906580_channel__w0_58222_59842680_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   trig__r_59906580_channel__w0_58222_59842680_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   trig__r_59906580_channel__w0_58222_59842680_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(trig__r_59906580_channel__w0_58222_59842680_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,trig__r_59906580_channel__w0_58222_59842680_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
trig__r_59906580_channel__w0_58222_59842680_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[trig__r_59906580_channel__w0_58222_59842680_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->block = make__52801040();

   return behavior;
}

Behavior __52800660;

Behavior make__52800660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52800660 = behavior;
   behavior->owner = (Object)channel__w0_58222_59842680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58229_50787500_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   _58229_50787500_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   _58229_50787500_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(_58229_50787500_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,_58229_50787500_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
_58229_50787500_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[_58229_50787500_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->block = make__52800840();

   return behavior;
}

Behavior __52800080;

Behavior make__52800080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52800080 = behavior;
   behavior->owner = (Object)channel__w0_58222_59842680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_60002020_channel__w0_58222_59842680_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   abus__r_60002020_channel__w0_58222_59842680_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   abus__r_60002020_channel__w0_58222_59842680_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(abus__r_60002020_channel__w0_58222_59842680_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,abus__r_60002020_channel__w0_58222_59842680_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
abus__r_60002020_channel__w0_58222_59842680_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[abus__r_60002020_channel__w0_58222_59842680_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->block = make__52800280();

   return behavior;
}

Behavior __52799780;

Behavior make__52799780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52799780 = behavior;
   behavior->owner = (Object)channel__w0_58222_59842680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58230_50787380_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   _58230_50787380_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   _58230_50787380_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(_58230_50787380_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,_58230_50787380_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
_58230_50787380_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[_58230_50787380_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->block = make__52800040();

   return behavior;
}

Scope makechannel__w0_58222_59842680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58222_59842680 = scope;
   scope->owner = (Object)layer1_58_84_59842980;
   scope->name = "channel_w0:222";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_59906580();
   scope->inners[1] = makedbus__r_60002100();
   scope->inners[2] = makeabus__r_60002020();
   scope->inners[3] = makemem_48008460();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58223_59907860();
   scope->scopes[1] = makerinc_58228_59907440();
   scope->scopes[2] = makerdec_58232_59907020();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51130360();
   scope->behaviors[1] = make__52801740();
   scope->behaviors[2] = make__52801500();
   scope->behaviors[3] = make__52800880();
   scope->behaviors[4] = make__52800660();
   scope->behaviors[5] = make__52800080();
   scope->behaviors[6] = make__52799780();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58237_51130180;

SignalI reg__0_51438440_channel__accum_58237_51130180_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makereg__0_51438440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_51438440_channel__accum_58237_51130180_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)channel__accum_58237_51130180;
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

Scope anum_58238_51129300;

Scope makeanum_58238_51129300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58238_51129300 = scope;
   scope->owner = (Object)channel__accum_58237_51130180;
   scope->name = "anum:238";
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

Scope raddr_58240_51128480;

Scope makeraddr_58240_51128480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58240_51128480 = scope;
   scope->owner = (Object)channel__accum_58237_51130180;
   scope->name = "raddr:240";
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

Scope waddr_58243_51128000;

Scope makewaddr_58243_51128000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58243_51128000 = scope;
   scope->owner = (Object)channel__accum_58237_51130180;
   scope->name = "waddr:243";
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

Scope rinc_58246_51126500;

SignalI abus__r_51166780_rinc_58246_51126500_channel__accum_58237_51130180_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makeabus__r_51166780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_51166780_rinc_58246_51126500_channel__accum_58237_51130180_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)rinc_58246_51126500;
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

Scope makerinc_58246_51126500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58246_51126500 = scope;
   scope->owner = (Object)channel__accum_58237_51130180;
   scope->name = "rinc:246";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_51166780();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58250_51166540;

SignalI abus__w_51165940_winc_58250_51166540_channel__accum_58237_51130180_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makeabus__w_51165940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_51165940_winc_58250_51166540_channel__accum_58237_51130180_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)winc_58250_51166540;
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

Scope makewinc_58250_51166540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58250_51166540 = scope;
   scope->owner = (Object)channel__accum_58237_51130180;
   scope->name = "winc:250";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_51165940();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58254_51165720;

SignalI abus__r_51164600_rdec_58254_51165720_channel__accum_58237_51130180_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makeabus__r_51164600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_51164600_rdec_58254_51165720_channel__accum_58237_51130180_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)rdec_58254_51165720;
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

Scope makerdec_58254_51165720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58254_51165720 = scope;
   scope->owner = (Object)channel__accum_58237_51130180;
   scope->name = "rdec:254";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_51164600();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58258_51164440;

SignalI abus__w_51163360_wdec_58258_51164440_channel__accum_58237_51130180_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makeabus__w_51163360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_51163360_wdec_58258_51164440_channel__accum_58237_51130180_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)wdec_58258_51164440;
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

Scope makewdec_58258_51164440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58258_51164440 = scope;
   scope->owner = (Object)channel__accum_58237_51130180;
   scope->name = "wdec:258";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_51163360();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __52798120;

Behavior make__52798120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52798120 = behavior;
   behavior->owner = (Object)channel__accum_58237_51130180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_51438440_channel__accum_58237_51130180_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   reg__0_51438440_channel__accum_58237_51130180_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   reg__0_51438440_channel__accum_58237_51130180_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(reg__0_51438440_channel__accum_58237_51130180_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,reg__0_51438440_channel__accum_58237_51130180_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
reg__0_51438440_channel__accum_58237_51130180_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[reg__0_51438440_channel__accum_58237_51130180_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->block = make__52798300();

   return behavior;
}

Behavior __52797800;

Behavior make__52797800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52797800 = behavior;
   behavior->owner = (Object)channel__accum_58237_51130180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58239_51248820_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   _58239_51248820_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   _58239_51248820_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(_58239_51248820_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,_58239_51248820_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
_58239_51248820_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[_58239_51248820_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->block = make__52798060();

   return behavior;
}

Scope makechannel__accum_58237_51130180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58237_51130180 = scope;
   scope->owner = (Object)layer1_58_84_59842980;
   scope->name = "channel_accum:237";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_51438440();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58238_51129300();
   scope->scopes[1] = makeraddr_58240_51128480();
   scope->scopes[2] = makewaddr_58243_51128000();
   scope->scopes[3] = makerinc_58246_51126500();
   scope->scopes[4] = makewinc_58250_51166540();
   scope->scopes[5] = makerdec_58254_51165720();
   scope->scopes[6] = makewdec_58258_51164440();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52798120();
   scope->behaviors[1] = make__52797800();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58262_51896740;

SignalI lv0_52249560_mac__n1_58262_51896740_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makelv0_52249560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_52249560_mac__n1_58262_51896740_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)mac__n1_58262_51896740;
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

SignalI av0_52620460_mac__n1_58262_51896740_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makeav0_52620460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_52620460_mac__n1_58262_51896740_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)mac__n1_58262_51896740;
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

SignalI rv_52637800_mac__n1_58262_51896740_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makerv_52637800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_52637800_mac__n1_58262_51896740_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)mac__n1_58262_51896740;
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

SignalI lvok0_52637780_mac__n1_58262_51896740_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makelvok0_52637780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_52637780_mac__n1_58262_51896740_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)mac__n1_58262_51896740;
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

SignalI rvok_52637760_mac__n1_58262_51896740_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makervok_52637760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_52637760_mac__n1_58262_51896740_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)mac__n1_58262_51896740;
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

SignalI wok0_52637740_mac__n1_58262_51896740_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makewok0_52637740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok0_52637740_mac__n1_58262_51896740_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)mac__n1_58262_51896740;
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

SignalI run_52637720_mac__n1_58262_51896740_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makerun_52637720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_52637720_mac__n1_58262_51896740_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)mac__n1_58262_51896740;
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

Behavior __58475020;

Behavior make__58475020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58475020 = behavior;
   behavior->owner = (Object)mac__n1_58262_51896740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_59812380_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   clk_59812380_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_pos += 1;
   clk_59812380_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->pos = realloc(clk_59812380_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->pos,clk_59812380_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_pos*sizeof(Object));
clk_59812380_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->pos[clk_59812380_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_pos-1] = (Object)behavior;
   behavior->block = make__52637600();

   return behavior;
}

Scope makemac__n1_58262_51896740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58262_51896740 = scope;
   scope->owner = (Object)layer1_58_84_59842980;
   scope->name = "mac_n1:262";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_52249560();
   scope->inners[1] = makeav0_52620460();
   scope->inners[2] = makerv_52637800();
   scope->inners[3] = makelvok0_52637780();
   scope->inners[4] = makervok_52637760();
   scope->inners[5] = makewok0_52637740();
   scope->inners[6] = makerun_52637720();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__58475020();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__bias_58267_58474900;

SignalI reg__0_58736820_channel__bias_58267_58474900_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makereg__0_58736820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_58736820_channel__bias_58267_58474900_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)channel__bias_58267_58474900;
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

Scope anum_58268_58474600;

Scope makeanum_58268_58474600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58268_58474600 = scope;
   scope->owner = (Object)channel__bias_58267_58474900;
   scope->name = "anum:268";
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

Scope raddr_58270_58531500;

Scope makeraddr_58270_58531500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58270_58531500 = scope;
   scope->owner = (Object)channel__bias_58267_58474900;
   scope->name = "raddr:270";
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

Scope waddr_58273_58531020;

Scope makewaddr_58273_58531020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58273_58531020 = scope;
   scope->owner = (Object)channel__bias_58267_58474900;
   scope->name = "waddr:273";
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

Scope rinc_58276_58530560;

SignalI abus__r_58530180_rinc_58276_58530560_channel__bias_58267_58474900_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makeabus__r_58530180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_58530180_rinc_58276_58530560_channel__bias_58267_58474900_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)rinc_58276_58530560;
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

Scope makerinc_58276_58530560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58276_58530560 = scope;
   scope->owner = (Object)channel__bias_58267_58474900;
   scope->name = "rinc:276";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_58530180();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58279_58530060;

SignalI abus__w_58529680_winc_58279_58530060_channel__bias_58267_58474900_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makeabus__w_58529680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_58529680_winc_58279_58530060_channel__bias_58267_58474900_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)winc_58279_58530060;
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

Behavior __50357680;

Behavior make__50357680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50357680 = behavior;
   behavior->owner = (Object)winc_58279_58530060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_58529680_winc_58279_58530060_channel__bias_58267_58474900_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   abus__w_58529680_winc_58279_58530060_channel__bias_58267_58474900_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   abus__w_58529680_winc_58279_58530060_channel__bias_58267_58474900_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(abus__w_58529680_winc_58279_58530060_channel__bias_58267_58474900_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,abus__w_58529680_winc_58279_58530060_channel__bias_58267_58474900_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
abus__w_58529680_winc_58279_58530060_channel__bias_58267_58474900_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[abus__w_58529680_winc_58279_58530060_channel__bias_58267_58474900_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->block = make__50357920();

   return behavior;
}

Behavior __50357440;

Behavior make__50357440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50357440 = behavior;
   behavior->owner = (Object)winc_58279_58530060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58281_52722280_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   _58281_52722280_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   _58281_52722280_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(_58281_52722280_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,_58281_52722280_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
_58281_52722280_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[_58281_52722280_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->block = make__50357600();

   return behavior;
}

Scope makewinc_58279_58530060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58279_58530060 = scope;
   scope->owner = (Object)channel__bias_58267_58474900;
   scope->name = "winc:279";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_58529680();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50357680();
   scope->behaviors[1] = make__50357440();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58282_58529300;

SignalI abus__r_58528820_rdec_58282_58529300_channel__bias_58267_58474900_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makeabus__r_58528820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_58528820_rdec_58282_58529300_channel__bias_58267_58474900_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)rdec_58282_58529300;
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

Scope makerdec_58282_58529300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58282_58529300 = scope;
   scope->owner = (Object)channel__bias_58267_58474900;
   scope->name = "rdec:282";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_58528820();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58286_58528700;

SignalI abus__w_58528320_wdec_58286_58528700_channel__bias_58267_58474900_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makeabus__w_58528320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_58528320_wdec_58286_58528700_channel__bias_58267_58474900_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)wdec_58286_58528700;
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

Scope makewdec_58286_58528700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58286_58528700 = scope;
   scope->owner = (Object)channel__bias_58267_58474900;
   scope->name = "wdec:286";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_58528320();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __50362400;

Behavior make__50362400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50362400 = behavior;
   behavior->owner = (Object)channel__bias_58267_58474900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_58736820_channel__bias_58267_58474900_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   reg__0_58736820_channel__bias_58267_58474900_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   reg__0_58736820_channel__bias_58267_58474900_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(reg__0_58736820_channel__bias_58267_58474900_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,reg__0_58736820_channel__bias_58267_58474900_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
reg__0_58736820_channel__bias_58267_58474900_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[reg__0_58736820_channel__bias_58267_58474900_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->block = make__50362620();

   return behavior;
}

Behavior __50361980;

Behavior make__50361980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50361980 = behavior;
   behavior->owner = (Object)channel__bias_58267_58474900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58269_51489340_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   _58269_51489340_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   _58269_51489340_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(_58269_51489340_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,_58269_51489340_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
_58269_51489340_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[_58269_51489340_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->block = make__50362340();

   return behavior;
}

Behavior __50361360;

Behavior make__50361360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50361360 = behavior;
   behavior->owner = (Object)channel__bias_58267_58474900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_58736820_channel__bias_58267_58474900_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   reg__0_58736820_channel__bias_58267_58474900_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   reg__0_58736820_channel__bias_58267_58474900_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(reg__0_58736820_channel__bias_58267_58474900_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,reg__0_58736820_channel__bias_58267_58474900_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
reg__0_58736820_channel__bias_58267_58474900_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[reg__0_58736820_channel__bias_58267_58474900_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->block = make__50361560();

   return behavior;
}

Behavior __50361120;

Behavior make__50361120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50361120 = behavior;
   behavior->owner = (Object)channel__bias_58267_58474900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58280_52722460_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   _58280_52722460_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   _58280_52722460_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(_58280_52722460_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,_58280_52722460_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
_58280_52722460_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[_58280_52722460_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->block = make__50361280();

   return behavior;
}

Scope makechannel__bias_58267_58474900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__bias_58267_58474900 = scope;
   scope->owner = (Object)layer1_58_84_59842980;
   scope->name = "channel_bias:267";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_58736820();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58268_58474600();
   scope->scopes[1] = makeraddr_58270_58531500();
   scope->scopes[2] = makewaddr_58273_58531020();
   scope->scopes[3] = makerinc_58276_58530560();
   scope->scopes[4] = makewinc_58279_58530060();
   scope->scopes[5] = makerdec_58282_58529300();
   scope->scopes[6] = makewdec_58286_58528700();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50362400();
   scope->behaviors[1] = make__50361980();
   scope->behaviors[2] = make__50361360();
   scope->behaviors[3] = make__50361120();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58290_59356300;

SignalI reg__0_59438200_channel__z_58290_59356300_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makereg__0_59438200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_59438200_channel__z_58290_59356300_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)channel__z_58290_59356300;
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

Scope anum_58291_59356000;

Scope makeanum_58291_59356000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58291_59356000 = scope;
   scope->owner = (Object)channel__z_58290_59356300;
   scope->name = "anum:291";
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

Scope raddr_58293_59355580;

Scope makeraddr_58293_59355580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58293_59355580 = scope;
   scope->owner = (Object)channel__z_58290_59356300;
   scope->name = "raddr:293";
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

Scope waddr_58296_59355140;

Scope makewaddr_58296_59355140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58296_59355140 = scope;
   scope->owner = (Object)channel__z_58290_59356300;
   scope->name = "waddr:296";
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

Scope rinc_58299_59354460;

SignalI abus__r_59354080_rinc_58299_59354460_channel__z_58290_59356300_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makeabus__r_59354080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_59354080_rinc_58299_59354460_channel__z_58290_59356300_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)rinc_58299_59354460;
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

Scope makerinc_58299_59354460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58299_59354460 = scope;
   scope->owner = (Object)channel__z_58290_59356300;
   scope->name = "rinc:299";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_59354080();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58302_59353960;

SignalI abus__w_59353580_winc_58302_59353960_channel__z_58290_59356300_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makeabus__w_59353580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_59353580_winc_58302_59353960_channel__z_58290_59356300_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)winc_58302_59353960;
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

Scope makewinc_58302_59353960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58302_59353960 = scope;
   scope->owner = (Object)channel__z_58290_59356300;
   scope->name = "winc:302";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_59353580();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58305_59353460;

SignalI abus__r_59353080_rdec_58305_59353460_channel__z_58290_59356300_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makeabus__r_59353080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_59353080_rdec_58305_59353460_channel__z_58290_59356300_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)rdec_58305_59353460;
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

Scope makerdec_58305_59353460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58305_59353460 = scope;
   scope->owner = (Object)channel__z_58290_59356300;
   scope->name = "rdec:305";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_59353080();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58309_59352960;

SignalI abus__w_59352480_wdec_58309_59352960_channel__z_58290_59356300_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makeabus__w_59352480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_59352480_wdec_58309_59352960_channel__z_58290_59356300_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)wdec_58309_59352960;
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

Scope makewdec_58309_59352960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58309_59352960 = scope;
   scope->owner = (Object)channel__z_58290_59356300;
   scope->name = "wdec:309";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_59352480();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __57040220;

Behavior make__57040220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57040220 = behavior;
   behavior->owner = (Object)channel__z_58290_59356300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_59438200_channel__z_58290_59356300_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   reg__0_59438200_channel__z_58290_59356300_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   reg__0_59438200_channel__z_58290_59356300_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(reg__0_59438200_channel__z_58290_59356300_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,reg__0_59438200_channel__z_58290_59356300_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
reg__0_59438200_channel__z_58290_59356300_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[reg__0_59438200_channel__z_58290_59356300_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->block = make__50356240();

   return behavior;
}

Behavior __57039600;

Behavior make__57039600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57039600 = behavior;
   behavior->owner = (Object)channel__z_58290_59356300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58292_51768100_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   _58292_51768100_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   _58292_51768100_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(_58292_51768100_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,_58292_51768100_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
_58292_51768100_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[_58292_51768100_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->block = make__57039800();

   return behavior;
}

Scope makechannel__z_58290_59356300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58290_59356300 = scope;
   scope->owner = (Object)layer1_58_84_59842980;
   scope->name = "channel_z:290";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_59438200();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58291_59356000();
   scope->scopes[1] = makeraddr_58293_59355580();
   scope->scopes[2] = makewaddr_58296_59355140();
   scope->scopes[3] = makerinc_58299_59354460();
   scope->scopes[4] = makewinc_58302_59353960();
   scope->scopes[5] = makerdec_58305_59353460();
   scope->scopes[6] = makewdec_58309_59352960();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57040220();
   scope->behaviors[1] = make__57039600();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58313_59729040;

SignalI lv0_59814480_add__n_58313_59729040_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makelv0_59814480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_59814480_add__n_58313_59729040_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)add__n_58313_59729040;
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

SignalI rv0_59956220_add__n_58313_59729040_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makerv0_59956220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_59956220_add__n_58313_59729040_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)add__n_58313_59729040;
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

SignalI lvok0_59956200_add__n_58313_59729040_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makelvok0_59956200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_59956200_add__n_58313_59729040_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)add__n_58313_59729040;
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

SignalI rvok0_59956180_add__n_58313_59729040_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makervok0_59956180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_59956180_add__n_58313_59729040_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)add__n_58313_59729040;
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

SignalI run_59956160_add__n_58313_59729040_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420;

SignalI makerun_59956160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_59956160_add__n_58313_59729040_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420 = signalI;
   signalI->owner = (Object)add__n_58313_59729040;
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

Behavior __50471060;

Behavior make__50471060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50471060 = behavior;
   behavior->owner = (Object)add__n_58313_59729040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_59812380_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   clk_59812380_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_pos += 1;
   clk_59812380_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->pos = realloc(clk_59812380_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->pos,clk_59812380_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_pos*sizeof(Object));
clk_59812380_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->pos[clk_59812380_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_pos-1] = (Object)behavior;
   behavior->block = make__59956040();

   return behavior;
}

Scope makeadd__n_58313_59729040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58313_59729040 = scope;
   scope->owner = (Object)layer1_58_84_59842980;
   scope->name = "add_n:313";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_59814480();
   scope->inners[1] = makerv0_59956220();
   scope->inners[2] = makelvok0_59956200();
   scope->inners[3] = makervok0_59956180();
   scope->inners[4] = makerun_59956160();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50471060();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __58673680;

Behavior make__58673680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58673680 = behavior;
   behavior->owner = (Object)layer1_58_84_59842980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_59812380_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   clk_59812380_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_pos += 1;
   clk_59812380_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->pos = realloc(clk_59812380_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->pos,clk_59812380_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_pos*sizeof(Object));
clk_59812380_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->pos[clk_59812380_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_pos-1] = (Object)behavior;
   behavior->block = make__58675040();

   return behavior;
}

Behavior __59059080;

Behavior make__59059080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59059080 = behavior;
   behavior->owner = (Object)layer1_58_84_59842980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_59812380_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   clk_59812380_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_pos += 1;
   clk_59812380_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->pos = realloc(clk_59812380_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->pos,clk_59812380_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_pos*sizeof(Object));
clk_59812380_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->pos[clk_59812380_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_pos-1] = (Object)behavior;
   behavior->block = make__58673520();

   return behavior;
}

Behavior __59370980;

Behavior make__59370980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59370980 = behavior;
   behavior->owner = (Object)layer1_58_84_59842980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_59812380_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   clk_59812380_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_pos += 1;
   clk_59812380_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->pos = realloc(clk_59812380_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->pos,clk_59812380_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_pos*sizeof(Object));
clk_59812380_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->pos[clk_59812380_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_pos-1] = (Object)behavior;
   behavior->block = make__59058940();

   return behavior;
}

Behavior __59815120;

Behavior make__59815120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59815120 = behavior;
   behavior->owner = (Object)layer1_58_84_59842980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_59812380_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   clk_59812380_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_pos += 1;
   clk_59812380_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->pos = realloc(clk_59812380_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->pos,clk_59812380_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_pos*sizeof(Object));
clk_59812380_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->pos[clk_59812380_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_pos-1] = (Object)behavior;
   behavior->block = make__59370840();

   return behavior;
}

Behavior __54375620;

Behavior make__54375620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54375620 = behavior;
   behavior->owner = (Object)layer1_58_84_59842980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_59812300_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   req_59812300_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   req_59812300_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(req_59812300_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,req_59812300_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
req_59812300_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[req_59812300_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_50495360_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   ack__mac_50495360_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   ack__mac_50495360_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(ack__mac_50495360_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,ack__mac_50495360_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
ack__mac_50495360_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[ack__mac_50495360_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->block = make__54375920();

   return behavior;
}

Behavior __52803300;

Behavior make__52803300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52803300 = behavior;
   behavior->owner = (Object)layer1_58_84_59842980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,fill_59812320_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   fill_59812320_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   fill_59812320_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(fill_59812320_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,fill_59812320_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
fill_59812320_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[fill_59812320_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__bias_52402240_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   ack__bias_52402240_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   ack__bias_52402240_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(ack__bias_52402240_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,ack__bias_52402240_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
ack__bias_52402240_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[ack__bias_52402240_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->block = make__52803580();

   return behavior;
}

Behavior __52803040;

Behavior make__52803040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52803040 = behavior;
   behavior->owner = (Object)layer1_58_84_59842980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_59812380_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   clk_59812380_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   clk_59812380_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(clk_59812380_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,clk_59812380_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
clk_59812380_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[clk_59812380_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_50495400_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   ack_50495400_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   ack_50495400_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(ack_50495400_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,ack_50495400_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
ack_50495400_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[ack_50495400_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_59812340_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   rst_59812340_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   rst_59812340_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(rst_59812340_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,rst_59812340_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
rst_59812340_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[rst_59812340_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_52079160_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   value__z0_52079160_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   value__z0_52079160_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(value__z0_52079160_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,value__z0_52079160_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
value__z0_52079160_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[value__z0_52079160_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__a0_52402540_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   ack__a0_52402540_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   ack__a0_52402540_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(ack__a0_52402540_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,ack__a0_52402540_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
ack__a0_52402540_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[ack__a0_52402540_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->block = make__54376220();

   return behavior;
}

Behavior __52802860;

Behavior make__52802860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52802860 = behavior;
   behavior->owner = (Object)layer1_58_84_59842980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_57285960_counter_58_8400_57263560_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   ack__mac_57285960_counter_58_8400_57263560_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   ack__mac_57285960_counter_58_8400_57263560_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(ack__mac_57285960_counter_58_8400_57263560_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,ack__mac_57285960_counter_58_8400_57263560_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
ack__mac_57285960_counter_58_8400_57263560_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[ack__mac_57285960_counter_58_8400_57263560_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,a_58073560_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420);
   a_58073560_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any += 1;
   a_58073560_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any = realloc(a_58073560_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any,a_58073560_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any*sizeof(Object));
a_58073560_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->any[a_58073560_func0_58_8400_57802580_layer1_58_84_59842980_layer1_58_840_59814780_neural__network_58_84_48929680_neural__network_58_840_49652680______58_84_48930380______58_840_50379420->num_any-1] = (Object)behavior;
   behavior->block = make__54376080();

   return behavior;
}

Scope makelayer1_58_84_59842980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer1_58_84_59842980 = scope;
   scope->owner = (Object)layer1_58_840_59814780;
   scope->name = "layer1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_57285820();
   scope->systemIs[1] = makefunc0_58073420();
   scope->num_inners = 20;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_50470920();
   scope->inners[1] = makeack_50495400();
   scope->inners[2] = makeack__mac_50495360();
   scope->inners[3] = makeack__add_50495340();
   scope->inners[4] = makefill__channel_50495280();
   scope->inners[5] = make_58231_50787560();
   scope->inners[6] = make_58229_50787500();
   scope->inners[7] = make_58230_50787380();
   scope->inners[8] = make_58239_51248820();
   scope->inners[9] = make_58269_51489340();
   scope->inners[10] = make_58292_51768100();
   scope->inners[11] = makevalue__z0_52079160();
   scope->inners[12] = makevalue__a0_52402660();
   scope->inners[13] = makeflag__z0_52402580();
   scope->inners[14] = makeack__a0_52402540();
   scope->inners[15] = makeaddress__bias_52402280();
   scope->inners[16] = makeack__bias_52402240();
   scope->inners[17] = make_58280_52722460();
   scope->inners[18] = make_58281_52722280();
   scope->inners[19] = makeb_57267800();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58222_59842680();
   scope->scopes[1] = makechannel__accum_58237_51130180();
   scope->scopes[2] = makemac__n1_58262_51896740();
   scope->scopes[3] = makechannel__bias_58267_58474900();
   scope->scopes[4] = makechannel__z_58290_59356300();
   scope->scopes[5] = makeadd__n_58313_59729040();
   scope->num_behaviors = 8;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__58673680();
   scope->behaviors[1] = make__59059080();
   scope->behaviors[2] = make__59370980();
   scope->behaviors[3] = make__59815120();
   scope->behaviors[4] = make__54375620();
   scope->behaviors[5] = make__52803300();
   scope->behaviors[6] = make__52803040();
   scope->behaviors[7] = make__52802860();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer1_58_840_59814780() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer1_58_840_59814780 = systemT;
systemT->owner = NULL;
   systemT->name = "layer1:T0";
   systemT->num_inputs = 6;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_59812380();
   systemT->inputs[1] = makerst_59812340();
   systemT->inputs[2] = makefill_59812320();
   systemT->inputs[3] = makereq_59812300();
   systemT->inputs[4] = make_5866_59989000();
   systemT->inputs[5] = make_5867_60067360();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_60067320();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_5868_60067220();
   systemT->inouts[1] = make_5832_60318500();

   systemT->scope = makelayer1_58_84_59842980();

   return systemT;
}