#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer1_58_840_59659460;

SignalI clk_59656880_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeclk_59656880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_59656880_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer1_58_840_59659460;
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

SignalI rst_59656840_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makerst_59656840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_59656840_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer1_58_840_59659460;
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

SignalI fill_59656820_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makefill_59656820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_59656820_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer1_58_840_59659460;
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

SignalI req_59656760_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makereq_59656760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_59656760_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer1_58_840_59659460;
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

SignalI _5866_47700000_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI make_5866_47700000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5866_47700000_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer1_58_840_59659460;
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

SignalI _5867_49381220_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI make_5867_49381220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5867_49381220_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer1_58_840_59659460;
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

SignalI ack__layer_49381040_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeack__layer_49381040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_49381040_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer1_58_840_59659460;
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

SignalI _5868_49379300_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI make_5868_49379300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5868_49379300_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer1_58_840_59659460;
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

SignalI _5832_49622740_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI make_5832_49622740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5832_49622740_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer1_58_840_59659460;
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

Block __57572120;

Block __57571680;

void code__57571680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57631820(),ack_55563660_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57631760(),ack__mac_55563620_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57631600(),ack__add_55563600_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__57571680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57571680 = block;
   block->owner = (Object)__57572120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57571680;

   return block;
};

void code__57572120() {
   {
      Value cond = rst_59656840_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57571680();
   }
      }
   }
}

Block make__57572120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57572120 = block;
   block->owner = (Object)__57570680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57572120;

   return block;
};

Block __57570520;

Block __57569380;

Block __57569160;

void code__57569160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58336_56921480_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,value__z0_57038300_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57631360(),flag__z0_57133780_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__57569160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57569160 = block;
   block->owner = (Object)__57569380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57569160;

   return block;
};

void code__57569380() {
 code__57569160();
}

Block make__57569380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57569380 = block;
   block->owner = (Object)__57570520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57569380;

   return block;
};

Block __57570300;

void code__57570300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57631300(),flag__z0_57133780_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__57570300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57570300 = block;
   block->owner = (Object)__57570520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57570300;

   return block;
};

void code__57570520() {
   {
      Value cond = ack__add_55563600_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57569380();
   }
   else {
  code__57570300();
   }
      }
   }
}

Block make__57570520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57570520 = block;
   block->owner = (Object)__58049540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57570520;

   return block;
};

Block __58049360;

Block __58049120;

void code__58049120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57631200(),ack__a0_57133760_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__58049120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58049120 = block;
   block->owner = (Object)__58049360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58049120;

   return block;
};

Block __58073020;

Block __58072680;

void code__58072680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_57133800_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,_5832_49622740_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57630900(),ack__a0_57133760_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__58072680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58072680 = block;
   block->owner = (Object)__58073020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58072680;

   return block;
};

void code__58073020() {
 code__58072680();
}

Block make__58073020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58073020 = block;
   block->owner = (Object)__58049360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58073020;

   return block;
};

void code__58049360() {
   {
      Value cond = rst_59656840_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58049120();
   }
   else if (value2integer(flag__z0_57133780_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value)) {
  code__58073020();
   }
      }
   }
}

Block make__58049360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58049360 = block;
   block->owner = (Object)__58347320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58049360;

   return block;
};

Block __58347160;

Block __58346800;

Block __58346300;

void code__58346300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57671460(),_58325_57358300_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__58346300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58346300 = block;
   block->owner = (Object)__58346800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58346300;

   return block;
};

void code__58346800() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59656840_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57671560();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58346300();
   }
      }
   }
}

Block make__58346800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58346800 = block;
   block->owner = (Object)__58347160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58346800;

   return block;
};

Block __58345680;

Block __58345360;

void code__58345360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57671240(),_58269_58647200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__58345360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58345360 = block;
   block->owner = (Object)__58345680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58345360;

   return block;
};

void code__58345680() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59656840_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57671360();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58345360();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57671160(),_58268_58647280_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__58345680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58345680 = block;
   block->owner = (Object)__58347160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58345680;

   return block;
};

Block __58344240;

void code__58344240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57671040(),address__weights0_57133660_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57670960(),ack__weights0_57133460_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57670860(),address__bias_57133520_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57670740(),ack__bias_57133420_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__58344240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58344240 = block;
   block->owner = (Object)__58347160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58344240;

   return block;
};

Block __58383280;

Block __58383020;

Block __58382800;

Block __58382340;

void code__58382340() {
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
                  src0 = _58269_58647200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57670260();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58269_58647200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57670080(),_58268_58647280_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
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
            ref = w0_58247580_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
            idx = value2integer(address__weights0_57133660_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),_58270_58749340_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__58382340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58382340 = block;
   block->owner = (Object)__58382800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58382340;

   return block;
};

void code__58382800() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59656840_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57670480();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58382340();
   }
      }
   }
}

Block make__58382800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58382800 = block;
   block->owner = (Object)__58383020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58382800;

   return block;
};

void code__58383020() {
 code__58382800();
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
                  src0 = address__weights0_57133660_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57669660();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),address__weights0_57133660_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__58383020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58383020 = block;
   block->owner = (Object)__58383280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58383020;

   return block;
};

Block __58843680;

Block __58843520;

Block __58900440;

Block __58899580;

void code__58899580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = b_58647300_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
            idx = value2integer(address__bias_57133520_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),_58324_57358380_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__58899580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58899580 = block;
   block->owner = (Object)__58900440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58899580;

   return block;
};

void code__58900440() {
{
      Value value = _58325_57358300_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__57669120())) {
    code__58899580();
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
                  src0 = _58325_57358300_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57668760();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),_58325_57358300_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__58900440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58900440 = block;
   block->owner = (Object)__58843520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58900440;

   return block;
};

void code__58843520() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59656840_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57669260();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58900440();
   }
      }
   }
}

Block make__58843520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58843520 = block;
   block->owner = (Object)__58843680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58843520;

   return block;
};

void code__58843680() {
 code__58843520();
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
                  src0 = address__bias_57133520_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57668500();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),address__bias_57133520_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__58843680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58843680 = block;
   block->owner = (Object)__58383280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58843680;

   return block;
};

void code__58383280() {
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__weights0_57133460_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58383020();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__bias_57133420_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58843680();
   }
      }
   }
}

Block make__58383280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58383280 = block;
   block->owner = (Object)__58347160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58383280;

   return block;
};

Block __59661760;

void code__59661760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57667820(),ack__weights0_57133460_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__59661760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59661760 = block;
   block->owner = (Object)__58347160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59661760;

   return block;
};

Block __59660900;

void code__59660900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57667220(),ack__bias_57133420_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__59660900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59660900 = block;
   block->owner = (Object)__58347160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59660900;

   return block;
};

void code__58347160() {
 code__58346800();
 code__58345680();
   {
      Value cond = rst_59656840_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58344240();
   }
      }
   }
   {
      Value cond = fill__channel_55563580_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58383280();
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
               src0 = address__weights0_57133660_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57668140();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59661760();
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
               src0 = address__bias_57133520_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57667680();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59660900();
   }
      }
   }
}

Block make__58347160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58347160 = block;
   block->owner = (Object)__59659960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58347160;

   return block;
};

Block __57154720;

void code__57154720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_59656760_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_55563620_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_55563680_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__57154720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57154720 = block;
   block->owner = (Object)__57154480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57154720;

   return block;
};

Block __57171660;

void code__57171660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = fill_59656820_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ack__weights0_57133460_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
                  src1 = ack__bias_57133420_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
                  dst = and_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),fill__channel_55563580_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__57171660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57171660 = block;
   block->owner = (Object)__57171260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57171660;

   return block;
};

Block __57155000;

void code__57155000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_59656880_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,clk_58816000_counter_58_8400_58818240_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_55563660_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,ack_58815980_counter_58_8400_58818240_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_59656840_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,rst_58815960_counter_58_8400_58818240_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_57038300_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,z__value_56660000_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__a0_57133760_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,ack__layer_49381040_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__57155000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57155000 = block;
   block->owner = (Object)__57171020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57155000;

   return block;
};

Block __57154940;

void code__57154940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_58815920_counter_58_8400_58818240_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,ack__mac_55563620_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_56788160_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,value__a0_57133800_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__57154940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57154940 = block;
   block->owner = (Object)__57170720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57154940;

   return block;
};

Block __49464680;

Block __50645340;

void code__50645340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_59306660_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,make_ref_rangeS(mem_59579000_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340,value2integer(abus__w_59306500_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value),value2integer(abus__w_59306500_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__50645340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50645340 = block;
   block->owner = (Object)__49464680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50645340;

   return block;
};

void code__49464680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_59579000_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
            idx = value2integer(abus__r_59306580_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_59017900_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_58942100_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50645340();
   }
      }
   }
}

Block make__49464680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49464680 = block;
   block->owner = (Object)__51126620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49464680;

   return block;
};

Block __57169460;

void code__57169460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_59017900_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,_58266_56527880_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__57169460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57169460 = block;
   block->owner = (Object)__57169200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57169460;

   return block;
};

Block __57169160;

void code__57169160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58266_56527880_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,dbus__r_59017900_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__57169160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57169160 = block;
   block->owner = (Object)__57168940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57169160;

   return block;
};

Block __57168560;

void code__57168560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_58942120_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,_58264_56527820_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__57168560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57168560 = block;
   block->owner = (Object)__57168280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57168560;

   return block;
};

Block __57168240;

void code__57168240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58264_56527820_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,trig__r_58942120_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__57168240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57168240 = block;
   block->owner = (Object)__57168080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57168240;

   return block;
};

Block __57167620;

void code__57167620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_59306580_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,_58265_56527740_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__57167620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57167620 = block;
   block->owner = (Object)__57167420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57167620;

   return block;
};

Block __57167360;

void code__57167360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58265_56527740_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,abus__r_59306580_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__57167360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57167360 = block;
   block->owner = (Object)__57167060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57167360;

   return block;
};

Block __57166520;

void code__57166520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_58942100_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,_58268_58647280_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__57166520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57166520 = block;
   block->owner = (Object)__57166300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57166520;

   return block;
};

Block __57166260;

void code__57166260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58268_58647280_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,trig__w_58942100_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__57166260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57166260 = block;
   block->owner = (Object)__57166000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57166260;

   return block;
};

Block __57165560;

void code__57165560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_59306500_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,_58269_58647200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__57165560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57165560 = block;
   block->owner = (Object)__57165400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57165560;

   return block;
};

Block __57165360;

void code__57165360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58269_58647200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,abus__w_59306500_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__57165360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57165360 = block;
   block->owner = (Object)__57165200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57165360;

   return block;
};

Block __57164780;

void code__57164780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_59306660_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,_58270_58749340_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__57164780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57164780 = block;
   block->owner = (Object)__57164240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57164780;

   return block;
};

Block __57164200;

void code__57164200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58270_58749340_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,dbus__w_59306660_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__57164200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57164200 = block;
   block->owner = (Object)__57163960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57164200;

   return block;
};

Block __57186400;

void code__57186400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_51330080_channel__accum_58281_51150340_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,_58283_56656600_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__57186400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57186400 = block;
   block->owner = (Object)__57185940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57186400;

   return block;
};

Block __57185880;

void code__57185880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58283_56656600_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,reg__0_51330080_channel__accum_58281_51150340_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__57185880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57185880 = block;
   block->owner = (Object)__57185560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57185880;

   return block;
};

Block __56657940;

Block __56657720;

Block __56657400;

void code__56657400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57584700(),_58265_56527740_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__56657400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56657400 = block;
   block->owner = (Object)__56657720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56657400;

   return block;
};

void code__56657720() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59656840_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57584840();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56657400();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57584620(),_58264_56527820_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__56657720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56657720 = block;
   block->owner = (Object)__56657940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56657720;

   return block;
};

Block __56656760;

Block __56656360;

void code__56656360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57584400(),_5868_49379300_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__56656360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56656360 = block;
   block->owner = (Object)__56656760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56656360;

   return block;
};

void code__56656760() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59656840_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57584540();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56656360();
   }
      }
   }
}

Block make__56656760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56656760 = block;
   block->owner = (Object)__56657940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56656760;

   return block;
};

Block __56679840;

void code__56679840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57584060(),rvok_56658200_mac__n1_58306_51628960_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57583960(),lvok0_56658240_mac__n1_58306_51628960_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57583680(),wok0_56658160_mac__n1_58306_51628960_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__56679840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56679840 = block;
   block->owner = (Object)__56657940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56679840;

   return block;
};

Block __56793420;

Block __56792980;

Block __56792760;

Block __56792400;

Block __56791780;

void code__56791780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5866_47700000_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,rv_56658260_mac__n1_58306_51628960_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__56791780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56791780 = block;
   block->owner = (Object)__56792400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56791780;

   return block;
};

Block __57017480;

void code__57017480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5867_49381220_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,rv_56658260_mac__n1_58306_51628960_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__57017480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57017480 = block;
   block->owner = (Object)__56792400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57017480;

   return block;
};

void code__56792400() {
{
      Value value = _5868_49379300_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__57583120())) {
    code__56791780();
         }
         else if (value2integer(value) == value2integer(make__57583020())) {
    code__57017480();
         }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57582860(),rvok_56658200_mac__n1_58306_51628960_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
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
                  src0 = _5868_49379300_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57582700();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5868_49379300_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__56792400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56792400 = block;
   block->owner = (Object)__56792760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56792400;

   return block;
};

void code__56792760() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59656840_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57583240();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56792400();
   }
      }
   }
}

Block make__56792760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56792760 = block;
   block->owner = (Object)__56792980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56792760;

   return block;
};

void code__56792980() {
 code__56792760();
}

Block make__56792980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56792980 = block;
   block->owner = (Object)__56793420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56792980;

   return block;
};

Block __57341740;

Block __57341540;

Block __57341180;

Block __57340000;

Block __57339800;

void code__57339800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_58266_56527880_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,lv0_55560520_mac__n1_58306_51628960_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__57582120(),lvok0_56658240_mac__n1_58306_51628960_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__57339800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57339800 = block;
   block->owner = (Object)__57340000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57339800;

   return block;
};

void code__57340000() {
 code__57339800();
}

Block make__57340000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57340000 = block;
   block->owner = (Object)__57341180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57340000;

   return block;
};

Block __57341020;

void code__57341020() {
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
                  src0 = _58265_56527740_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57581920();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58265_56527740_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57581820(),_58264_56527820_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__57341020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57341020 = block;
   block->owner = (Object)__57341180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57341020;

   return block;
};

void code__57341180() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58264_56527820_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57582280();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57340000();
   }
   else {
  code__57341020();
   }
      }
   }
}

Block make__57341180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57341180 = block;
   block->owner = (Object)__57341540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57341180;

   return block;
};

void code__57341540() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59656840_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__57582380();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57341180();
   }
      }
   }
}

Block make__57341540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57341540 = block;
   block->owner = (Object)__57341740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57341540;

   return block;
};

void code__57341740() {
 code__57341540();
}

Block make__57341740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57341740 = block;
   block->owner = (Object)__56793420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57341740;

   return block;
};

Block __57667360;

Block __57666820;

Block __57666660;

void code__57666660() {
}

Block make__57666660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57666660 = block;
   block->owner = (Object)__57666820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57666660;

   return block;
};

Block __58426160;

void code__58426160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_56526740_mac__n1_58306_51628960_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,_58283_56656600_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57637800(),wok0_56658160_mac__n1_58306_51628960_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__58426160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58426160 = block;
   block->owner = (Object)__57666820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58426160;

   return block;
};

void code__57666820() {
 code__57666660();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av0_56526740_mac__n1_58306_51628960_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
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
                              src0 = lv0_55560520_mac__n1_58306_51628960_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_56658260_mac__n1_58306_51628960_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__57637980();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_56526740_mac__n1_58306_51628960_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
 code__58426160();
}

Block make__57666820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57666820 = block;
   block->owner = (Object)__57667360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57666820;

   return block;
};

void code__57667360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57638620(),ack_55563660_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57638460(),run_56658140_mac__n1_58306_51628960_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
 code__57666820();
}

Block make__57667360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57667360 = block;
   block->owner = (Object)__56793420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57667360;

   return block;
};

Block __58700980;

void code__58700980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57637700(),wok0_56658160_mac__n1_58306_51628960_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57637620(),lvok0_56658240_mac__n1_58306_51628960_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57637520(),rvok_56658200_mac__n1_58306_51628960_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__58700980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58700980 = block;
   block->owner = (Object)__56793420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58700980;

   return block;
};

void code__56793420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57583420(),run_56658140_mac__n1_58306_51628960_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = rvok_56658200_mac__n1_58306_51628960_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56792980();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_56658240_mac__n1_58306_51628960_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57341740();
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
               src0 = lvok0_56658240_mac__n1_58306_51628960_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
               src1 = rvok_56658200_mac__n1_58306_51628960_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok0_56658160_mac__n1_58306_51628960_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57667360();
   }
      }
   }
   {
      Value cond = wok0_56658160_mac__n1_58306_51628960_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58700980();
   }
      }
   }
}

Block make__56793420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56793420 = block;
   block->owner = (Object)__56657940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56793420;

   return block;
};

Block __56679120;

void code__56679120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57637440(),av0_56526740_mac__n1_58306_51628960_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__56679120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56679120 = block;
   block->owner = (Object)__56657940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56679120;

   return block;
};

void code__56657940() {
 code__56657720();
 code__56656760();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57584320(),ack_55563660_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57584260(),run_56658140_mac__n1_58306_51628960_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = run_56658140_mac__n1_58306_51628960_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56679840();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_55563680_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
         src1 = run_56658140_mac__n1_58306_51628960_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56793420();
   }
   else {
  code__56679120();
   }
      }
   }
}

Block make__56657940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56657940 = block;
   block->owner = (Object)__58699660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56657940;

   return block;
};

Block __57183140;

void code__57183140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_58834320_channel__bias_58311_58699540_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,_58313_56791680_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__57183140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57183140 = block;
   block->owner = (Object)__57182520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57183140;

   return block;
};

Block __57182440;

void code__57182440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58313_56791680_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,reg__0_58834320_channel__bias_58311_58699540_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__57182440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57182440 = block;
   block->owner = (Object)__57182280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57182440;

   return block;
};

Block __57181940;

void code__57181940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_58834320_channel__bias_58311_58699540_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,_58324_57358380_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__57181940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57181940 = block;
   block->owner = (Object)__57181720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57181940;

   return block;
};

Block __57181680;

void code__57181680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58324_57358380_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,reg__0_58834320_channel__bias_58311_58699540_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__57181680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57181680 = block;
   block->owner = (Object)__57181440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57181680;

   return block;
};

Block __57339120;

void code__57339120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_58696800_winc_58323_58697180_channel__bias_58311_58699540_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,_58325_57358300_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__57339120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57339120 = block;
   block->owner = (Object)__57338940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57339120;

   return block;
};

Block __57338880;

void code__57338880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58325_57358300_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,abus__w_58696800_winc_58323_58697180_channel__bias_58311_58699540_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__57338880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57338880 = block;
   block->owner = (Object)__57338680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57338880;

   return block;
};

Block __57336860;

void code__57336860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_59796020_channel__z_58334_59579060_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,_58336_56921480_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__57336860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57336860 = block;
   block->owner = (Object)__57336700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57336860;

   return block;
};

Block __57336640;

void code__57336640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58336_56921480_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,reg__0_59796020_channel__z_58334_59579060_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__57336640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57336640 = block;
   block->owner = (Object)__57336460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57336640;

   return block;
};

Block __49802120;

Block __49836100;

Block __49834780;

void code__49834780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58283_56656600_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,lv0_49530520_add__n_58357_49380680_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57635380(),lvok0_49803840_add__n_58357_49380680_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__49834780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49834780 = block;
   block->owner = (Object)__49836100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49834780;

   return block;
};

Block __50728780;

void code__50728780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58313_56791680_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value,rv0_49803860_add__n_58357_49380680_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57635140(),rvok0_49803800_add__n_58357_49380680_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__50728780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50728780 = block;
   block->owner = (Object)__49836100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50728780;

   return block;
};

Block __51096360;

Block __51095400;

void code__51095400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_49530520_add__n_58357_49380680_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
      src1 = rv0_49803860_add__n_58357_49380680_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58336_56921480_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__51095400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51095400 = block;
   block->owner = (Object)__51096360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51095400;

   return block;
};

void code__51096360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57634940(),run_49803780_add__n_58357_49380680_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57634760(),ack__add_55563600_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
 code__51095400();
}

Block make__51096360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51096360 = block;
   block->owner = (Object)__49836100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51096360;

   return block;
};

void code__49836100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57635540(),run_49803780_add__n_58357_49380680_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
 code__49834780();
 code__50728780();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_49803840_add__n_58357_49380680_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
         src1 = rvok0_49803800_add__n_58357_49380680_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51096360();
   }
      }
   }
}

Block make__49836100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49836100 = block;
   block->owner = (Object)__49802120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49836100;

   return block;
};

Block __49822980;

void code__49822980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57634420(),lvok0_49803840_add__n_58357_49380680_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57634340(),rvok0_49803800_add__n_58357_49380680_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
}

Block make__49822980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49822980 = block;
   block->owner = (Object)__49802120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49822980;

   return block;
};

void code__49802120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57635800(),ack__add_55563600_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__57635740(),run_49803780_add__n_58357_49380680_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_55563620_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
         src1 = run_49803780_add__n_58357_49380680_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49836100();
   }
   else {
  code__49822980();
   }
      }
   }
}

Block make__49802120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49802120 = block;
   block->owner = (Object)__55563900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49802120;

   return block;
};

Value make__57634080() {
   static unsigned long long data[] = { 26ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__57634060() {
   static unsigned long long data[] = { 4294967271ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__57633660() {
   static unsigned long long data[] = { 34ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__57584840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57584700() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57584620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57584540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57584400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57584320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57584260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57584060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57583960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57583680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57583420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57583240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57583120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57583020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57582860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57582700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57582380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57582280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57582120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57581920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57581820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57638620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57638460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57637980() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57637800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57637700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57637620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57637520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57637440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__57635800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57635740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57635540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57635380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57635140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57634940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57634760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57634420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57634340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57631820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57631760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57631600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57631360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57631300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57631200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57630900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57671560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57671460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__57671360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57671240() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57671160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57671040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__57670960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57670860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__57670740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57670480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57670260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57670080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57669660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57669260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57669120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__57668760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57668500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57668140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57667820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__57667680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__57667220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope layer1_58_84_58945500;

SignalI req__mac_55563680_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makereq__mac_55563680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_55563680_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer1_58_84_58945500;
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

SignalI ack_55563660_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeack_55563660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_55563660_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer1_58_84_58945500;
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

SignalI ack__mac_55563620_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeack__mac_55563620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_55563620_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer1_58_84_58945500;
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

SignalI ack__add_55563600_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeack__add_55563600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_55563600_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer1_58_84_58945500;
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

SignalI fill__channel_55563580_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makefill__channel_55563580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill__channel_55563580_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer1_58_84_58945500;
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

SignalI _58266_56527880_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI make_58266_56527880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58266_56527880_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer1_58_84_58945500;
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

SignalI _58264_56527820_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI make_58264_56527820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58264_56527820_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer1_58_84_58945500;
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

SignalI _58265_56527740_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI make_58265_56527740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58265_56527740_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer1_58_84_58945500;
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

SignalI _58283_56656600_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI make_58283_56656600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58283_56656600_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer1_58_84_58945500;
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

SignalI _58313_56791680_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI make_58313_56791680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58313_56791680_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer1_58_84_58945500;
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

SignalI _58336_56921480_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI make_58336_56921480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58336_56921480_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer1_58_84_58945500;
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

SignalI value__z0_57038300_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makevalue__z0_57038300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_57038300_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer1_58_84_58945500;
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

SignalI value__a0_57133800_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makevalue__a0_57133800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_57133800_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer1_58_84_58945500;
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

SignalI flag__z0_57133780_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeflag__z0_57133780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_57133780_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer1_58_84_58945500;
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

SignalI ack__a0_57133760_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeack__a0_57133760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_57133760_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer1_58_84_58945500;
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

SignalI address__weights0_57133660_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeaddress__weights0_57133660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address__weights0_57133660_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer1_58_84_58945500;
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

SignalI address__bias_57133520_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeaddress__bias_57133520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address__bias_57133520_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer1_58_84_58945500;
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

SignalI ack__weights0_57133460_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeack__weights0_57133460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__weights0_57133460_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer1_58_84_58945500;
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

SignalI ack__bias_57133420_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeack__bias_57133420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__bias_57133420_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer1_58_84_58945500;
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

SignalI _58324_57358380_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI make_58324_57358380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58324_57358380_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer1_58_84_58945500;
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

SignalI _58325_57358300_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI make_58325_57358300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58325_57358300_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer1_58_84_58945500;
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

SignalI w0_58247580_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makew0_58247580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   w0_58247580_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer1_58_84_58945500;
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
         src0 = make__57634080();
         src1 = make__57634060();
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

SignalI b_58647300_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeb_58647300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   b_58647300_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer1_58_84_58945500;
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
         src0 = make__57633660();
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

SignalI _58268_58647280_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI make_58268_58647280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58268_58647280_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer1_58_84_58945500;
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

SignalI _58269_58647200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI make_58269_58647200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58269_58647200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer1_58_84_58945500;
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

SignalI _58270_58749340_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI make_58270_58749340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58270_58749340_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)layer1_58_84_58945500;
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

SystemI counter_58815780;

SystemI makecounter_58815780() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_58815780 = systemI;
   systemI->owner = (Object)layer1_58_84_58945500;
   systemI->name = "counter";
   systemI->system = counter_58_8400_58818240;

   return systemI;
};

SystemI func0_56787740;

SystemI makefunc0_56787740() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_56787740 = systemI;
   systemI->owner = (Object)layer1_58_84_58945500;
   systemI->name = "func0";
   systemI->system = func0_58_8400_56115700;

   return systemI;
};

Scope channel__w0_58252_58945200;

SignalI trig__r_58942120_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI maketrig__r_58942120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_58942120_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)channel__w0_58252_58945200;
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

SignalI trig__w_58942100_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI maketrig__w_58942100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_58942100_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)channel__w0_58252_58945200;
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

SignalI dbus__r_59017900_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makedbus__r_59017900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_59017900_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)channel__w0_58252_58945200;
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

SignalI dbus__w_59306660_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makedbus__w_59306660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_59306660_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)channel__w0_58252_58945200;
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

SignalI abus__r_59306580_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeabus__r_59306580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_59306580_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)channel__w0_58252_58945200;
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

SignalI abus__w_59306500_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeabus__w_59306500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_59306500_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)channel__w0_58252_58945200;
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

SignalI mem_59579000_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makemem_59579000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_59579000_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)channel__w0_58252_58945200;
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

Scope raddr_58253_58944900;

Scope makeraddr_58253_58944900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58253_58944900 = scope;
   scope->owner = (Object)channel__w0_58252_58945200;
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

Scope waddr_58258_58944480;

Scope makewaddr_58258_58944480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58258_58944480 = scope;
   scope->owner = (Object)channel__w0_58252_58945200;
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

Scope rinc_58263_58943960;

Scope makerinc_58263_58943960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58263_58943960 = scope;
   scope->owner = (Object)channel__w0_58252_58945200;
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

Scope winc_58267_58943500;

Scope makewinc_58267_58943500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58267_58943500 = scope;
   scope->owner = (Object)channel__w0_58252_58945200;
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

Scope rdec_58271_58943020;

Scope makerdec_58271_58943020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58271_58943020 = scope;
   scope->owner = (Object)channel__w0_58252_58945200;
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

Scope wdec_58276_58942600;

Scope makewdec_58276_58942600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58276_58942600 = scope;
   scope->owner = (Object)channel__w0_58252_58945200;
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

Behavior __51126620;

Behavior make__51126620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51126620 = behavior;
   behavior->owner = (Object)channel__w0_58252_58945200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_59656880_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   clk_59656880_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_neg += 1;
   clk_59656880_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->neg = realloc(clk_59656880_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->neg,clk_59656880_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_neg*sizeof(Object));
clk_59656880_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->neg[clk_59656880_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_neg-1] = (Object)behavior;
   behavior->block = make__49464680();

   return behavior;
}

Behavior __57169200;

Behavior make__57169200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57169200 = behavior;
   behavior->owner = (Object)channel__w0_58252_58945200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_59017900_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   dbus__r_59017900_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   dbus__r_59017900_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(dbus__r_59017900_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,dbus__r_59017900_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
dbus__r_59017900_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[dbus__r_59017900_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__57169460();

   return behavior;
}

Behavior __57168940;

Behavior make__57168940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57168940 = behavior;
   behavior->owner = (Object)channel__w0_58252_58945200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58266_56527880_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   _58266_56527880_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   _58266_56527880_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(_58266_56527880_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,_58266_56527880_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
_58266_56527880_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[_58266_56527880_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__57169160();

   return behavior;
}

Behavior __57168280;

Behavior make__57168280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57168280 = behavior;
   behavior->owner = (Object)channel__w0_58252_58945200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_58942120_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   trig__r_58942120_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   trig__r_58942120_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(trig__r_58942120_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,trig__r_58942120_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
trig__r_58942120_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[trig__r_58942120_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__57168560();

   return behavior;
}

Behavior __57168080;

Behavior make__57168080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57168080 = behavior;
   behavior->owner = (Object)channel__w0_58252_58945200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58264_56527820_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   _58264_56527820_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   _58264_56527820_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(_58264_56527820_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,_58264_56527820_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
_58264_56527820_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[_58264_56527820_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__57168240();

   return behavior;
}

Behavior __57167420;

Behavior make__57167420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57167420 = behavior;
   behavior->owner = (Object)channel__w0_58252_58945200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_59306580_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   abus__r_59306580_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   abus__r_59306580_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(abus__r_59306580_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,abus__r_59306580_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
abus__r_59306580_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[abus__r_59306580_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__57167620();

   return behavior;
}

Behavior __57167060;

Behavior make__57167060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57167060 = behavior;
   behavior->owner = (Object)channel__w0_58252_58945200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58265_56527740_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   _58265_56527740_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   _58265_56527740_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(_58265_56527740_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,_58265_56527740_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
_58265_56527740_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[_58265_56527740_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__57167360();

   return behavior;
}

Behavior __57166300;

Behavior make__57166300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57166300 = behavior;
   behavior->owner = (Object)channel__w0_58252_58945200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_58942100_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   trig__w_58942100_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   trig__w_58942100_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(trig__w_58942100_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,trig__w_58942100_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
trig__w_58942100_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[trig__w_58942100_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__57166520();

   return behavior;
}

Behavior __57166000;

Behavior make__57166000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57166000 = behavior;
   behavior->owner = (Object)channel__w0_58252_58945200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58268_58647280_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   _58268_58647280_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   _58268_58647280_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(_58268_58647280_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,_58268_58647280_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
_58268_58647280_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[_58268_58647280_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__57166260();

   return behavior;
}

Behavior __57165400;

Behavior make__57165400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57165400 = behavior;
   behavior->owner = (Object)channel__w0_58252_58945200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_59306500_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   abus__w_59306500_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   abus__w_59306500_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(abus__w_59306500_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,abus__w_59306500_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
abus__w_59306500_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[abus__w_59306500_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__57165560();

   return behavior;
}

Behavior __57165200;

Behavior make__57165200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57165200 = behavior;
   behavior->owner = (Object)channel__w0_58252_58945200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58269_58647200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   _58269_58647200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   _58269_58647200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(_58269_58647200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,_58269_58647200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
_58269_58647200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[_58269_58647200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__57165360();

   return behavior;
}

Behavior __57164240;

Behavior make__57164240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57164240 = behavior;
   behavior->owner = (Object)channel__w0_58252_58945200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_59306660_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   dbus__w_59306660_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   dbus__w_59306660_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(dbus__w_59306660_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,dbus__w_59306660_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
dbus__w_59306660_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[dbus__w_59306660_channel__w0_58252_58945200_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__57164780();

   return behavior;
}

Behavior __57163960;

Behavior make__57163960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57163960 = behavior;
   behavior->owner = (Object)channel__w0_58252_58945200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58270_58749340_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   _58270_58749340_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   _58270_58749340_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(_58270_58749340_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,_58270_58749340_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
_58270_58749340_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[_58270_58749340_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__57164200();

   return behavior;
}

Scope makechannel__w0_58252_58945200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58252_58945200 = scope;
   scope->owner = (Object)layer1_58_84_58945500;
   scope->name = "channel_w0:252";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_58942120();
   scope->inners[1] = maketrig__w_58942100();
   scope->inners[2] = makedbus__r_59017900();
   scope->inners[3] = makedbus__w_59306660();
   scope->inners[4] = makeabus__r_59306580();
   scope->inners[5] = makeabus__w_59306500();
   scope->inners[6] = makemem_59579000();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58253_58944900();
   scope->scopes[1] = makewaddr_58258_58944480();
   scope->scopes[2] = makerinc_58263_58943960();
   scope->scopes[3] = makewinc_58267_58943500();
   scope->scopes[4] = makerdec_58271_58943020();
   scope->scopes[5] = makewdec_58276_58942600();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51126620();
   scope->behaviors[1] = make__57169200();
   scope->behaviors[2] = make__57168940();
   scope->behaviors[3] = make__57168280();
   scope->behaviors[4] = make__57168080();
   scope->behaviors[5] = make__57167420();
   scope->behaviors[6] = make__57167060();
   scope->behaviors[7] = make__57166300();
   scope->behaviors[8] = make__57166000();
   scope->behaviors[9] = make__57165400();
   scope->behaviors[10] = make__57165200();
   scope->behaviors[11] = make__57164240();
   scope->behaviors[12] = make__57163960();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58281_51150340;

SignalI reg__0_51330080_channel__accum_58281_51150340_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makereg__0_51330080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_51330080_channel__accum_58281_51150340_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)channel__accum_58281_51150340;
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

Scope anum_58282_51148720;

Scope makeanum_58282_51148720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58282_51148720 = scope;
   scope->owner = (Object)channel__accum_58281_51150340;
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

Scope raddr_58284_51147980;

Scope makeraddr_58284_51147980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58284_51147980 = scope;
   scope->owner = (Object)channel__accum_58281_51150340;
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

Scope waddr_58287_51147340;

Scope makewaddr_58287_51147340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58287_51147340 = scope;
   scope->owner = (Object)channel__accum_58281_51150340;
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

Scope rinc_58290_51146080;

SignalI abus__r_51145500_rinc_58290_51146080_channel__accum_58281_51150340_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeabus__r_51145500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_51145500_rinc_58290_51146080_channel__accum_58281_51150340_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)rinc_58290_51146080;
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

Scope makerinc_58290_51146080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58290_51146080 = scope;
   scope->owner = (Object)channel__accum_58281_51150340;
   scope->name = "rinc:290";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_51145500();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58294_51145220;

SignalI abus__w_51144720_winc_58294_51145220_channel__accum_58281_51150340_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeabus__w_51144720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_51144720_winc_58294_51145220_channel__accum_58281_51150340_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)winc_58294_51145220;
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

Scope makewinc_58294_51145220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58294_51145220 = scope;
   scope->owner = (Object)channel__accum_58281_51150340;
   scope->name = "winc:294";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_51144720();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58298_51144400;

SignalI abus__r_51143300_rdec_58298_51144400_channel__accum_58281_51150340_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeabus__r_51143300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_51143300_rdec_58298_51144400_channel__accum_58281_51150340_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)rdec_58298_51144400;
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

Scope makerdec_58298_51144400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58298_51144400 = scope;
   scope->owner = (Object)channel__accum_58281_51150340;
   scope->name = "rdec:298";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_51143300();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58302_51143100;

SignalI abus__w_51199900_wdec_58302_51143100_channel__accum_58281_51150340_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeabus__w_51199900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_51199900_wdec_58302_51143100_channel__accum_58281_51150340_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)wdec_58302_51143100;
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

Scope makewdec_58302_51143100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58302_51143100 = scope;
   scope->owner = (Object)channel__accum_58281_51150340;
   scope->name = "wdec:302";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_51199900();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __57185940;

Behavior make__57185940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57185940 = behavior;
   behavior->owner = (Object)channel__accum_58281_51150340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_51330080_channel__accum_58281_51150340_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   reg__0_51330080_channel__accum_58281_51150340_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   reg__0_51330080_channel__accum_58281_51150340_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(reg__0_51330080_channel__accum_58281_51150340_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,reg__0_51330080_channel__accum_58281_51150340_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
reg__0_51330080_channel__accum_58281_51150340_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[reg__0_51330080_channel__accum_58281_51150340_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__57186400();

   return behavior;
}

Behavior __57185560;

Behavior make__57185560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57185560 = behavior;
   behavior->owner = (Object)channel__accum_58281_51150340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58283_56656600_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   _58283_56656600_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   _58283_56656600_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(_58283_56656600_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,_58283_56656600_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
_58283_56656600_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[_58283_56656600_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__57185880();

   return behavior;
}

Scope makechannel__accum_58281_51150340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58281_51150340 = scope;
   scope->owner = (Object)layer1_58_84_58945500;
   scope->name = "channel_accum:281";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_51330080();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58282_51148720();
   scope->scopes[1] = makeraddr_58284_51147980();
   scope->scopes[2] = makewaddr_58287_51147340();
   scope->scopes[3] = makerinc_58290_51146080();
   scope->scopes[4] = makewinc_58294_51145220();
   scope->scopes[5] = makerdec_58298_51144400();
   scope->scopes[6] = makewdec_58302_51143100();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57185940();
   scope->behaviors[1] = make__57185560();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58306_51628960;

SignalI lv0_55560520_mac__n1_58306_51628960_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makelv0_55560520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_55560520_mac__n1_58306_51628960_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)mac__n1_58306_51628960;
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

SignalI av0_56526740_mac__n1_58306_51628960_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeav0_56526740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_56526740_mac__n1_58306_51628960_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)mac__n1_58306_51628960;
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

SignalI rv_56658260_mac__n1_58306_51628960_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makerv_56658260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_56658260_mac__n1_58306_51628960_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)mac__n1_58306_51628960;
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

SignalI lvok0_56658240_mac__n1_58306_51628960_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makelvok0_56658240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_56658240_mac__n1_58306_51628960_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)mac__n1_58306_51628960;
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

SignalI rvok_56658200_mac__n1_58306_51628960_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makervok_56658200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_56658200_mac__n1_58306_51628960_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)mac__n1_58306_51628960;
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

SignalI wok0_56658160_mac__n1_58306_51628960_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makewok0_56658160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok0_56658160_mac__n1_58306_51628960_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)mac__n1_58306_51628960;
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

SignalI run_56658140_mac__n1_58306_51628960_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makerun_56658140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_56658140_mac__n1_58306_51628960_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)mac__n1_58306_51628960;
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

Behavior __58699660;

Behavior make__58699660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58699660 = behavior;
   behavior->owner = (Object)mac__n1_58306_51628960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_59656880_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   clk_59656880_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_pos += 1;
   clk_59656880_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->pos = realloc(clk_59656880_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->pos,clk_59656880_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_pos*sizeof(Object));
clk_59656880_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->pos[clk_59656880_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_pos-1] = (Object)behavior;
   behavior->block = make__56657940();

   return behavior;
}

Scope makemac__n1_58306_51628960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58306_51628960 = scope;
   scope->owner = (Object)layer1_58_84_58945500;
   scope->name = "mac_n1:306";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_55560520();
   scope->inners[1] = makeav0_56526740();
   scope->inners[2] = makerv_56658260();
   scope->inners[3] = makelvok0_56658240();
   scope->inners[4] = makervok_56658200();
   scope->inners[5] = makewok0_56658160();
   scope->inners[6] = makerun_56658140();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__58699660();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__bias_58311_58699540;

SignalI reg__0_58834320_channel__bias_58311_58699540_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makereg__0_58834320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_58834320_channel__bias_58311_58699540_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)channel__bias_58311_58699540;
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

Scope anum_58312_58699240;

Scope makeanum_58312_58699240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58312_58699240 = scope;
   scope->owner = (Object)channel__bias_58311_58699540;
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

Scope raddr_58314_58698800;

Scope makeraddr_58314_58698800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58314_58698800 = scope;
   scope->owner = (Object)channel__bias_58311_58699540;
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

Scope waddr_58317_58698300;

Scope makewaddr_58317_58698300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58317_58698300 = scope;
   scope->owner = (Object)channel__bias_58311_58699540;
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

Scope rinc_58320_58697740;

SignalI abus__r_58697300_rinc_58320_58697740_channel__bias_58311_58699540_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeabus__r_58697300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_58697300_rinc_58320_58697740_channel__bias_58311_58699540_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)rinc_58320_58697740;
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

Scope makerinc_58320_58697740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58320_58697740 = scope;
   scope->owner = (Object)channel__bias_58311_58699540;
   scope->name = "rinc:320";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_58697300();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58323_58697180;

SignalI abus__w_58696800_winc_58323_58697180_channel__bias_58311_58699540_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeabus__w_58696800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_58696800_winc_58323_58697180_channel__bias_58311_58699540_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)winc_58323_58697180;
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

Behavior __57338940;

Behavior make__57338940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57338940 = behavior;
   behavior->owner = (Object)winc_58323_58697180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_58696800_winc_58323_58697180_channel__bias_58311_58699540_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   abus__w_58696800_winc_58323_58697180_channel__bias_58311_58699540_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   abus__w_58696800_winc_58323_58697180_channel__bias_58311_58699540_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(abus__w_58696800_winc_58323_58697180_channel__bias_58311_58699540_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,abus__w_58696800_winc_58323_58697180_channel__bias_58311_58699540_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
abus__w_58696800_winc_58323_58697180_channel__bias_58311_58699540_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[abus__w_58696800_winc_58323_58697180_channel__bias_58311_58699540_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__57339120();

   return behavior;
}

Behavior __57338680;

Behavior make__57338680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57338680 = behavior;
   behavior->owner = (Object)winc_58323_58697180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58325_57358300_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   _58325_57358300_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   _58325_57358300_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(_58325_57358300_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,_58325_57358300_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
_58325_57358300_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[_58325_57358300_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__57338880();

   return behavior;
}

Scope makewinc_58323_58697180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58323_58697180 = scope;
   scope->owner = (Object)channel__bias_58311_58699540;
   scope->name = "winc:323";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_58696800();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57338940();
   scope->behaviors[1] = make__57338680();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58326_58696320;

SignalI abus__r_58695920_rdec_58326_58696320_channel__bias_58311_58699540_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeabus__r_58695920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_58695920_rdec_58326_58696320_channel__bias_58311_58699540_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)rdec_58326_58696320;
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

Scope makerdec_58326_58696320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58326_58696320 = scope;
   scope->owner = (Object)channel__bias_58311_58699540;
   scope->name = "rdec:326";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_58695920();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58330_58695780;

SignalI abus__w_58719760_wdec_58330_58695780_channel__bias_58311_58699540_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeabus__w_58719760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_58719760_wdec_58330_58695780_channel__bias_58311_58699540_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)wdec_58330_58695780;
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

Scope makewdec_58330_58695780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58330_58695780 = scope;
   scope->owner = (Object)channel__bias_58311_58699540;
   scope->name = "wdec:330";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_58719760();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __57182520;

Behavior make__57182520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57182520 = behavior;
   behavior->owner = (Object)channel__bias_58311_58699540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_58834320_channel__bias_58311_58699540_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   reg__0_58834320_channel__bias_58311_58699540_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   reg__0_58834320_channel__bias_58311_58699540_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(reg__0_58834320_channel__bias_58311_58699540_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,reg__0_58834320_channel__bias_58311_58699540_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
reg__0_58834320_channel__bias_58311_58699540_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[reg__0_58834320_channel__bias_58311_58699540_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__57183140();

   return behavior;
}

Behavior __57182280;

Behavior make__57182280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57182280 = behavior;
   behavior->owner = (Object)channel__bias_58311_58699540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58313_56791680_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   _58313_56791680_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   _58313_56791680_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(_58313_56791680_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,_58313_56791680_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
_58313_56791680_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[_58313_56791680_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__57182440();

   return behavior;
}

Behavior __57181720;

Behavior make__57181720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57181720 = behavior;
   behavior->owner = (Object)channel__bias_58311_58699540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_58834320_channel__bias_58311_58699540_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   reg__0_58834320_channel__bias_58311_58699540_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   reg__0_58834320_channel__bias_58311_58699540_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(reg__0_58834320_channel__bias_58311_58699540_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,reg__0_58834320_channel__bias_58311_58699540_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
reg__0_58834320_channel__bias_58311_58699540_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[reg__0_58834320_channel__bias_58311_58699540_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__57181940();

   return behavior;
}

Behavior __57181440;

Behavior make__57181440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57181440 = behavior;
   behavior->owner = (Object)channel__bias_58311_58699540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58324_57358380_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   _58324_57358380_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   _58324_57358380_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(_58324_57358380_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,_58324_57358380_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
_58324_57358380_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[_58324_57358380_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__57181680();

   return behavior;
}

Scope makechannel__bias_58311_58699540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__bias_58311_58699540 = scope;
   scope->owner = (Object)layer1_58_84_58945500;
   scope->name = "channel_bias:311";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_58834320();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58312_58699240();
   scope->scopes[1] = makeraddr_58314_58698800();
   scope->scopes[2] = makewaddr_58317_58698300();
   scope->scopes[3] = makerinc_58320_58697740();
   scope->scopes[4] = makewinc_58323_58697180();
   scope->scopes[5] = makerdec_58326_58696320();
   scope->scopes[6] = makewdec_58330_58695780();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57182520();
   scope->behaviors[1] = make__57182280();
   scope->behaviors[2] = make__57181720();
   scope->behaviors[3] = make__57181440();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58334_59579060;

SignalI reg__0_59796020_channel__z_58334_59579060_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makereg__0_59796020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_59796020_channel__z_58334_59579060_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)channel__z_58334_59579060;
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

Scope anum_58335_59578400;

Scope makeanum_58335_59578400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58335_59578400 = scope;
   scope->owner = (Object)channel__z_58334_59579060;
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

Scope raddr_58337_59577920;

Scope makeraddr_58337_59577920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58337_59577920 = scope;
   scope->owner = (Object)channel__z_58334_59579060;
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

Scope waddr_58340_59577500;

Scope makewaddr_58340_59577500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58340_59577500 = scope;
   scope->owner = (Object)channel__z_58334_59579060;
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

Scope rinc_58343_59577080;

SignalI abus__r_59576600_rinc_58343_59577080_channel__z_58334_59579060_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeabus__r_59576600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_59576600_rinc_58343_59577080_channel__z_58334_59579060_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)rinc_58343_59577080;
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

Scope makerinc_58343_59577080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58343_59577080 = scope;
   scope->owner = (Object)channel__z_58334_59579060;
   scope->name = "rinc:343";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_59576600();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58346_59576400;

SignalI abus__w_59575680_winc_58346_59576400_channel__z_58334_59579060_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeabus__w_59575680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_59575680_winc_58346_59576400_channel__z_58334_59579060_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)winc_58346_59576400;
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

Scope makewinc_58346_59576400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58346_59576400 = scope;
   scope->owner = (Object)channel__z_58334_59579060;
   scope->name = "winc:346";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_59575680();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58349_59575560;

SignalI abus__r_59575180_rdec_58349_59575560_channel__z_58334_59579060_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeabus__r_59575180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_59575180_rdec_58349_59575560_channel__z_58334_59579060_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)rdec_58349_59575560;
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

Scope makerdec_58349_59575560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58349_59575560 = scope;
   scope->owner = (Object)channel__z_58334_59579060;
   scope->name = "rdec:349";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_59575180();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58353_59575060;

SignalI abus__w_59574680_wdec_58353_59575060_channel__z_58334_59579060_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makeabus__w_59574680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_59574680_wdec_58353_59575060_channel__z_58334_59579060_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)wdec_58353_59575060;
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

Scope makewdec_58353_59575060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58353_59575060 = scope;
   scope->owner = (Object)channel__z_58334_59579060;
   scope->name = "wdec:353";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_59574680();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __57336700;

Behavior make__57336700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57336700 = behavior;
   behavior->owner = (Object)channel__z_58334_59579060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_59796020_channel__z_58334_59579060_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   reg__0_59796020_channel__z_58334_59579060_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   reg__0_59796020_channel__z_58334_59579060_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(reg__0_59796020_channel__z_58334_59579060_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,reg__0_59796020_channel__z_58334_59579060_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
reg__0_59796020_channel__z_58334_59579060_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[reg__0_59796020_channel__z_58334_59579060_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__57336860();

   return behavior;
}

Behavior __57336460;

Behavior make__57336460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57336460 = behavior;
   behavior->owner = (Object)channel__z_58334_59579060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58336_56921480_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   _58336_56921480_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   _58336_56921480_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(_58336_56921480_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,_58336_56921480_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
_58336_56921480_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[_58336_56921480_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__57336640();

   return behavior;
}

Scope makechannel__z_58334_59579060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58334_59579060 = scope;
   scope->owner = (Object)layer1_58_84_58945500;
   scope->name = "channel_z:334";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_59796020();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58335_59578400();
   scope->scopes[1] = makeraddr_58337_59577920();
   scope->scopes[2] = makewaddr_58340_59577500();
   scope->scopes[3] = makerinc_58343_59577080();
   scope->scopes[4] = makewinc_58346_59576400();
   scope->scopes[5] = makerdec_58349_59575560();
   scope->scopes[6] = makewdec_58353_59575060();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57336700();
   scope->behaviors[1] = make__57336460();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58357_49380680;

SignalI lv0_49530520_add__n_58357_49380680_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makelv0_49530520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_49530520_add__n_58357_49380680_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)add__n_58357_49380680;
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

SignalI rv0_49803860_add__n_58357_49380680_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makerv0_49803860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_49803860_add__n_58357_49380680_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)add__n_58357_49380680;
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

SignalI lvok0_49803840_add__n_58357_49380680_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makelvok0_49803840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_49803840_add__n_58357_49380680_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)add__n_58357_49380680;
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

SignalI rvok0_49803800_add__n_58357_49380680_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makervok0_49803800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_49803800_add__n_58357_49380680_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)add__n_58357_49380680;
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

SignalI run_49803780_add__n_58357_49380680_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340;

SignalI makerun_49803780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_49803780_add__n_58357_49380680_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340 = signalI;
   signalI->owner = (Object)add__n_58357_49380680;
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

Behavior __55563900;

Behavior make__55563900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55563900 = behavior;
   behavior->owner = (Object)add__n_58357_49380680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_59656880_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   clk_59656880_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_pos += 1;
   clk_59656880_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->pos = realloc(clk_59656880_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->pos,clk_59656880_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_pos*sizeof(Object));
clk_59656880_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->pos[clk_59656880_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_pos-1] = (Object)behavior;
   behavior->block = make__49802120();

   return behavior;
}

Scope makeadd__n_58357_49380680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58357_49380680 = scope;
   scope->owner = (Object)layer1_58_84_58945500;
   scope->name = "add_n:357";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_49530520();
   scope->inners[1] = makerv0_49803860();
   scope->inners[2] = makelvok0_49803840();
   scope->inners[3] = makervok0_49803800();
   scope->inners[4] = makerun_49803780();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__55563900();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __57570680;

Behavior make__57570680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57570680 = behavior;
   behavior->owner = (Object)layer1_58_84_58945500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_59656880_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   clk_59656880_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_pos += 1;
   clk_59656880_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->pos = realloc(clk_59656880_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->pos,clk_59656880_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_pos*sizeof(Object));
clk_59656880_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->pos[clk_59656880_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_pos-1] = (Object)behavior;
   behavior->block = make__57572120();

   return behavior;
}

Behavior __58049540;

Behavior make__58049540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58049540 = behavior;
   behavior->owner = (Object)layer1_58_84_58945500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_59656880_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   clk_59656880_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_pos += 1;
   clk_59656880_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->pos = realloc(clk_59656880_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->pos,clk_59656880_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_pos*sizeof(Object));
clk_59656880_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->pos[clk_59656880_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_pos-1] = (Object)behavior;
   behavior->block = make__57570520();

   return behavior;
}

Behavior __58347320;

Behavior make__58347320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58347320 = behavior;
   behavior->owner = (Object)layer1_58_84_58945500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_59656880_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   clk_59656880_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_pos += 1;
   clk_59656880_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->pos = realloc(clk_59656880_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->pos,clk_59656880_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_pos*sizeof(Object));
clk_59656880_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->pos[clk_59656880_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_pos-1] = (Object)behavior;
   behavior->block = make__58049360();

   return behavior;
}

Behavior __59659960;

Behavior make__59659960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59659960 = behavior;
   behavior->owner = (Object)layer1_58_84_58945500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_59656880_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   clk_59656880_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_pos += 1;
   clk_59656880_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->pos = realloc(clk_59656880_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->pos,clk_59656880_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_pos*sizeof(Object));
clk_59656880_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->pos[clk_59656880_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_pos-1] = (Object)behavior;
   behavior->block = make__58347160();

   return behavior;
}

Behavior __57154480;

Behavior make__57154480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57154480 = behavior;
   behavior->owner = (Object)layer1_58_84_58945500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_59656760_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   req_59656760_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   req_59656760_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(req_59656760_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,req_59656760_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
req_59656760_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[req_59656760_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_55563620_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   ack__mac_55563620_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   ack__mac_55563620_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(ack__mac_55563620_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,ack__mac_55563620_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
ack__mac_55563620_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[ack__mac_55563620_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__57154720();

   return behavior;
}

Behavior __57171260;

Behavior make__57171260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57171260 = behavior;
   behavior->owner = (Object)layer1_58_84_58945500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,fill_59656820_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   fill_59656820_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   fill_59656820_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(fill_59656820_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,fill_59656820_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
fill_59656820_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[fill_59656820_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__weights0_57133460_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   ack__weights0_57133460_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   ack__weights0_57133460_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(ack__weights0_57133460_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,ack__weights0_57133460_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
ack__weights0_57133460_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[ack__weights0_57133460_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,ack__bias_57133420_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   ack__bias_57133420_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   ack__bias_57133420_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(ack__bias_57133420_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,ack__bias_57133420_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
ack__bias_57133420_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[ack__bias_57133420_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__57171660();

   return behavior;
}

Behavior __57171020;

Behavior make__57171020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57171020 = behavior;
   behavior->owner = (Object)layer1_58_84_58945500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_59656880_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   clk_59656880_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   clk_59656880_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(clk_59656880_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,clk_59656880_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
clk_59656880_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[clk_59656880_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_55563660_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   ack_55563660_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   ack_55563660_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(ack_55563660_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,ack_55563660_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
ack_55563660_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[ack_55563660_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_59656840_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   rst_59656840_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   rst_59656840_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(rst_59656840_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,rst_59656840_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
rst_59656840_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[rst_59656840_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_57038300_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   value__z0_57038300_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   value__z0_57038300_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(value__z0_57038300_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,value__z0_57038300_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
value__z0_57038300_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[value__z0_57038300_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__a0_57133760_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   ack__a0_57133760_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   ack__a0_57133760_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(ack__a0_57133760_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,ack__a0_57133760_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
ack__a0_57133760_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[ack__a0_57133760_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__57155000();

   return behavior;
}

Behavior __57170720;

Behavior make__57170720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57170720 = behavior;
   behavior->owner = (Object)layer1_58_84_58945500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_58815920_counter_58_8400_58818240_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   ack__mac_58815920_counter_58_8400_58818240_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   ack__mac_58815920_counter_58_8400_58818240_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(ack__mac_58815920_counter_58_8400_58818240_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,ack__mac_58815920_counter_58_8400_58818240_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
ack__mac_58815920_counter_58_8400_58818240_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[ack__mac_58815920_counter_58_8400_58818240_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,a_56788160_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340);
   a_56788160_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any += 1;
   a_56788160_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any = realloc(a_56788160_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any,a_56788160_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any*sizeof(Object));
a_56788160_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->any[a_56788160_func0_58_8400_56115700_layer1_58_84_58945500_layer1_58_840_59659460_neural__network_58_84_49207620_neural__network_58_840_51012360______58_84_49208320______58_840_51129340->num_any-1] = (Object)behavior;
   behavior->block = make__57154940();

   return behavior;
}

Scope makelayer1_58_84_58945500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer1_58_84_58945500 = scope;
   scope->owner = (Object)layer1_58_840_59659460;
   scope->name = "layer1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_58815780();
   scope->systemIs[1] = makefunc0_56787740();
   scope->num_inners = 26;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_55563680();
   scope->inners[1] = makeack_55563660();
   scope->inners[2] = makeack__mac_55563620();
   scope->inners[3] = makeack__add_55563600();
   scope->inners[4] = makefill__channel_55563580();
   scope->inners[5] = make_58266_56527880();
   scope->inners[6] = make_58264_56527820();
   scope->inners[7] = make_58265_56527740();
   scope->inners[8] = make_58283_56656600();
   scope->inners[9] = make_58313_56791680();
   scope->inners[10] = make_58336_56921480();
   scope->inners[11] = makevalue__z0_57038300();
   scope->inners[12] = makevalue__a0_57133800();
   scope->inners[13] = makeflag__z0_57133780();
   scope->inners[14] = makeack__a0_57133760();
   scope->inners[15] = makeaddress__weights0_57133660();
   scope->inners[16] = makeaddress__bias_57133520();
   scope->inners[17] = makeack__weights0_57133460();
   scope->inners[18] = makeack__bias_57133420();
   scope->inners[19] = make_58324_57358380();
   scope->inners[20] = make_58325_57358300();
   scope->inners[21] = makew0_58247580();
   scope->inners[22] = makeb_58647300();
   scope->inners[23] = make_58268_58647280();
   scope->inners[24] = make_58269_58647200();
   scope->inners[25] = make_58270_58749340();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58252_58945200();
   scope->scopes[1] = makechannel__accum_58281_51150340();
   scope->scopes[2] = makemac__n1_58306_51628960();
   scope->scopes[3] = makechannel__bias_58311_58699540();
   scope->scopes[4] = makechannel__z_58334_59579060();
   scope->scopes[5] = makeadd__n_58357_49380680();
   scope->num_behaviors = 8;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57570680();
   scope->behaviors[1] = make__58049540();
   scope->behaviors[2] = make__58347320();
   scope->behaviors[3] = make__59659960();
   scope->behaviors[4] = make__57154480();
   scope->behaviors[5] = make__57171260();
   scope->behaviors[6] = make__57171020();
   scope->behaviors[7] = make__57170720();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer1_58_840_59659460() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer1_58_840_59659460 = systemT;
systemT->owner = NULL;
   systemT->name = "layer1:T0";
   systemT->num_inputs = 6;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_59656880();
   systemT->inputs[1] = makerst_59656840();
   systemT->inputs[2] = makefill_59656820();
   systemT->inputs[3] = makereq_59656760();
   systemT->inputs[4] = make_5866_47700000();
   systemT->inputs[5] = make_5867_49381220();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_49381040();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_5868_49379300();
   systemT->inouts[1] = make_5832_49622740();

   systemT->scope = makelayer1_58_84_58945500();

   return systemT;
}