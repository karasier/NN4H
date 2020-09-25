#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer1_58_840_52078940;

SignalI clk_52153220_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makeclk_52153220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_52153220_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)layer1_58_840_52078940;
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

SignalI rst_52153200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makerst_52153200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_52153200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)layer1_58_840_52078940;
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

SignalI fill_52153180_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makefill_52153180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_52153180_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)layer1_58_840_52078940;
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

SignalI req_52153160_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makereq_52153160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_52153160_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)layer1_58_840_52078940;
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

SignalI _5866_52523080_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI make_5866_52523080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5866_52523080_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)layer1_58_840_52078940;
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

SignalI _5867_56860620_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI make_5867_56860620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5867_56860620_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)layer1_58_840_52078940;
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

SignalI ack__layer_56860580_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makeack__layer_56860580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_56860580_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)layer1_58_840_52078940;
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

SignalI _5868_56860420_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI make_5868_56860420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5868_56860420_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)layer1_58_840_52078940;
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

SignalI _5832_56944660_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI make_5832_56944660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5832_56944660_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)layer1_58_840_52078940;
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

Block __60027180;

Block __60026500;

Block __60026260;

void code__60026260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58336_49597160_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value,value__z0_50235680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59441960(),flag__z0_50585080_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__60026260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60026260 = block;
   block->owner = (Object)__60026500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60026260;

   return block;
};

void code__60026500() {
 code__60026260();
}

Block make__60026500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60026500 = block;
   block->owner = (Object)__60027180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60026500;

   return block;
};

Block __60026960;

void code__60026960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59441900(),flag__z0_50585080_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__60026960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60026960 = block;
   block->owner = (Object)__60027180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60026960;

   return block;
};

void code__60027180() {
   {
      Value cond = ack__add_60240040_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60026500();
   }
   else {
  code__60026960();
   }
      }
   }
}

Block make__60027180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60027180 = block;
   block->owner = (Object)__45401720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60027180;

   return block;
};

Block __45401080;

Block __45400220;

Block __45338180;

void code__45338180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_50585100_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value,_5832_56944660_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59441720(),ack__a0_50585000_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__45338180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45338180 = block;
   block->owner = (Object)__45400220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45338180;

   return block;
};

void code__45400220() {
 code__45338180();
}

Block make__45400220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45400220 = block;
   block->owner = (Object)__45401080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45400220;

   return block;
};

void code__45401080() {
   {
      Value cond = flag__z0_50585080_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45400220();
   }
      }
   }
}

Block make__45401080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45401080 = block;
   block->owner = (Object)__48894600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45401080;

   return block;
};

Block __48892900;

Block __48891900;

Block __48738980;

void code__48738980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59441560(),_58325_50870840_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__48738980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48738980 = block;
   block->owner = (Object)__48891900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48738980;

   return block;
};

void code__48891900() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52153200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59441640();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48738980();
   }
      }
   }
}

Block make__48891900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48891900 = block;
   block->owner = (Object)__48892900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48891900;

   return block;
};

Block __48737620;

Block __48735800;

void code__48735800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59441360(),_58269_57081660_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__48735800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48735800 = block;
   block->owner = (Object)__48737620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48735800;

   return block;
};

void code__48737620() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52153200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59441460();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48735800();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59441300(),_58268_57081740_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__48737620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48737620 = block;
   block->owner = (Object)__48892900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48737620;

   return block;
};

Block __48755340;

void code__48755340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59441180(),address__weights0_50584900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59498380(),ack__weights0_50584800_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59498320(),address__bias_50584820_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59498240(),ack__bias_50584780_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__48755340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48755340 = block;
   block->owner = (Object)__48892900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48755340;

   return block;
};

Block __49363820;

Block __49362560;

Block __49359740;

Block __49358600;

void code__49358600() {
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
                  src0 = _58269_57081660_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59497740();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58269_57081660_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59497620(),_58268_57081740_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
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
            ref = w0_52544880_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
            idx = value2integer(address__weights0_50584900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),_58270_57311520_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__49358600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49358600 = block;
   block->owner = (Object)__49359740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49358600;

   return block;
};

void code__49359740() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52153200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59497980();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49358600();
   }
      }
   }
}

Block make__49359740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49359740 = block;
   block->owner = (Object)__49362560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49359740;

   return block;
};

void code__49362560() {
 code__49359740();
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
                  src0 = address__weights0_50584900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59497120();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),address__weights0_50584900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__49362560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49362560 = block;
   block->owner = (Object)__49363820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49362560;

   return block;
};

Block __50799820;

Block __50799460;

Block __50798700;

Block __50854680;

void code__50854680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = b_57081760_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
            idx = value2integer(address__bias_50584820_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),_58324_50871040_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__50854680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50854680 = block;
   block->owner = (Object)__50798700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50854680;

   return block;
};

void code__50798700() {
{
      Value value = _58325_50870840_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__59496760())) {
    code__50854680();
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
                  src0 = _58325_50870840_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59496480();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),_58325_50870840_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__50798700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50798700 = block;
   block->owner = (Object)__50799460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50798700;

   return block;
};

void code__50799460() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52153200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59496880();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50798700();
   }
      }
   }
}

Block make__50799460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50799460 = block;
   block->owner = (Object)__50799820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50799460;

   return block;
};

void code__50799820() {
 code__50799460();
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
                  src0 = address__bias_50584820_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59496280();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),address__bias_50584820_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__50799820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50799820 = block;
   block->owner = (Object)__49363820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50799820;

   return block;
};

void code__49363820() {
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__weights0_50584800_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49362560();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__bias_50584780_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50799820();
   }
      }
   }
}

Block make__49363820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49363820 = block;
   block->owner = (Object)__48892900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49363820;

   return block;
};

Block __52083420;

void code__52083420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59495980(),ack__weights0_50584800_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__52083420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52083420 = block;
   block->owner = (Object)__48892900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52083420;

   return block;
};

Block __52081620;

void code__52081620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59495740(),ack__bias_50584780_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__52081620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52081620 = block;
   block->owner = (Object)__48892900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52081620;

   return block;
};

void code__48892900() {
 code__48891900();
 code__48737620();
   {
      Value cond = rst_52153200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48755340();
   }
      }
   }
   {
      Value cond = fill__channel_60240020_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49363820();
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
               src0 = address__weights0_50584900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59496140();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52083420();
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
               src0 = address__bias_50584820_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59495880();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52081620();
   }
      }
   }
}

Block make__48892900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48892900 = block;
   block->owner = (Object)__52080060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48892900;

   return block;
};

Block __59182720;

void code__59182720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_52153160_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_60240060_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_60240100_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__59182720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59182720 = block;
   block->owner = (Object)__59182360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59182720;

   return block;
};

Block __59200040;

void code__59200040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = fill_52153180_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ack__weights0_50584800_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
                  src1 = ack__bias_50584780_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
                  dst = and_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),fill__channel_60240020_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__59200040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59200040 = block;
   block->owner = (Object)__59199660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59200040;

   return block;
};

Block __59183100;

void code__59183100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_52153220_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value,clk_57483080_counter_58_8400_57460680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_60240080_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value,ack_57483060_counter_58_8400_57460680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_52153200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value,rst_57483040_counter_58_8400_57460680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_50235680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value,z__value_59235820_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__a0_50585000_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value,ack__layer_56860580_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__59183100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59183100 = block;
   block->owner = (Object)__59199360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59183100;

   return block;
};

Block __59183020;

void code__59183020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_57483000_counter_58_8400_57460680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value,ack__mac_60240060_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_59412680_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value,value__a0_50585100_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__59183020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59183020 = block;
   block->owner = (Object)__59199180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59183020;

   return block;
};

Block __59332800;

Block __59612720;

void code__59612720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_58430380_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value,make_ref_rangeS(mem_58507780_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720,value2integer(abus__w_58430220_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value),value2integer(abus__w_58430220_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__59612720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59612720 = block;
   block->owner = (Object)__59332800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59612720;

   return block;
};

void code__59332800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_58507780_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
            idx = value2integer(abus__r_58430300_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_58246440_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_58201680_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59612720();
   }
      }
   }
}

Block make__59332800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59332800 = block;
   block->owner = (Object)__59934020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59332800;

   return block;
};

Block __59198200;

void code__59198200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_58246440_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value,_58266_47380160_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__59198200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59198200 = block;
   block->owner = (Object)__59198000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59198200;

   return block;
};

Block __59197960;

void code__59197960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58266_47380160_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value,dbus__r_58246440_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__59197960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59197960 = block;
   block->owner = (Object)__59197740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59197960;

   return block;
};

Block __59197280;

void code__59197280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_58201700_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value,_58264_47380140_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__59197280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59197280 = block;
   block->owner = (Object)__59197020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59197280;

   return block;
};

Block __59196940;

void code__59196940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58264_47380140_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value,trig__r_58201700_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__59196940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59196940 = block;
   block->owner = (Object)__59196780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59196940;

   return block;
};

Block __59196420;

void code__59196420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_58430300_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value,_58265_47379760_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__59196420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59196420 = block;
   block->owner = (Object)__59196180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59196420;

   return block;
};

Block __59196120;

void code__59196120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58265_47379760_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value,abus__r_58430300_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__59196120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59196120 = block;
   block->owner = (Object)__59195920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59196120;

   return block;
};

Block __59195600;

void code__59195600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_58201680_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value,_58268_57081740_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__59195600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59195600 = block;
   block->owner = (Object)__59195400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59195600;

   return block;
};

Block __59219860;

void code__59219860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58268_57081740_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value,trig__w_58201680_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__59219860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59219860 = block;
   block->owner = (Object)__59219540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59219860;

   return block;
};

Block __59218900;

void code__59218900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_58430220_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value,_58269_57081660_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__59218900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59218900 = block;
   block->owner = (Object)__59218740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59218900;

   return block;
};

Block __59218700;

void code__59218700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58269_57081660_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value,abus__w_58430220_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__59218700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59218700 = block;
   block->owner = (Object)__59218500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59218700;

   return block;
};

Block __59218120;

void code__59218120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_58430380_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value,_58270_57311520_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__59218120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59218120 = block;
   block->owner = (Object)__59217940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59218120;

   return block;
};

Block __59217880;

void code__59217880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58270_57311520_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value,dbus__w_58430380_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__59217880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59217880 = block;
   block->owner = (Object)__59217680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59217880;

   return block;
};

Block __59215120;

void code__59215120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_60105720_channel__accum_58281_59933900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value,_58283_48089100_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__59215120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59215120 = block;
   block->owner = (Object)__59214420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59215120;

   return block;
};

Block __59214340;

void code__59214340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58283_48089100_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value,reg__0_60105720_channel__accum_58281_59933900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__59214340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59214340 = block;
   block->owner = (Object)__59213840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59214340;

   return block;
};

Block __49491560;

Block __49491160;

Block __49489840;

void code__49489840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59427720(),_58265_47379760_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__49489840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49489840 = block;
   block->owner = (Object)__49491160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49489840;

   return block;
};

void code__49491160() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52153200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59427820();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49489840();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59427600(),_58264_47380140_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__49491160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49491160 = block;
   block->owner = (Object)__49491560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49491160;

   return block;
};

Block __49488600;

Block __49487960;

void code__49487960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59427400(),_5868_56860420_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__49487960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49487960 = block;
   block->owner = (Object)__49488600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49487960;

   return block;
};

void code__49488600() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52153200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59427500();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49487960();
   }
      }
   }
}

Block make__49488600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49488600 = block;
   block->owner = (Object)__49491560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49488600;

   return block;
};

Block __49510500;

void code__49510500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59427080(),rvok_49491760_mac__n1_58306_47094960_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59427020(),lvok0_49491780_mac__n1_58306_47094960_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59426920(),av0_49280920_mac__n1_58306_47094960_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__49510500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49510500 = block;
   block->owner = (Object)__49491560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49510500;

   return block;
};

Block __49843460;

Block __49842560;

Block __49841940;

Block __49840780;

void code__49840780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5866_52523080_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value,rv_49491820_mac__n1_58306_47094960_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__49840780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49840780 = block;
   block->owner = (Object)__49841940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49840780;

   return block;
};

Block __50767020;

void code__50767020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5867_56860620_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value,rv_49491820_mac__n1_58306_47094960_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__50767020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50767020 = block;
   block->owner = (Object)__49841940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50767020;

   return block;
};

void code__49841940() {
{
      Value value = _5868_56860420_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__59426080())) {
    code__49840780();
         }
         else if (value2integer(value) == value2integer(make__59425480())) {
    code__50767020();
         }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59449240(),rvok_49491760_mac__n1_58306_47094960_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
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
                  src0 = _5868_56860420_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59448980();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5868_56860420_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__49841940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49841940 = block;
   block->owner = (Object)__49842560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49841940;

   return block;
};

void code__49842560() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52153200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59426480();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49841940();
   }
      }
   }
}

Block make__49842560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49842560 = block;
   block->owner = (Object)__49843460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49842560;

   return block;
};

Block __51435380;

Block __51434940;

Block __51433460;

void code__51433460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58266_47380160_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value,lv0_48075820_mac__n1_58306_47094960_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59448400(),lvok0_49491780_mac__n1_58306_47094960_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__51433460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51433460 = block;
   block->owner = (Object)__51434940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51433460;

   return block;
};

void code__51434940() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58264_47380140_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59448620();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51433460();
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
                  src0 = _58265_47379760_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59448260();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58265_47379760_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59448140(),_58264_47380140_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__51434940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51434940 = block;
   block->owner = (Object)__51435380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51434940;

   return block;
};

void code__51435380() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_52153200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59448780();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51434940();
   }
      }
   }
}

Block make__51435380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51435380 = block;
   block->owner = (Object)__49843460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51435380;

   return block;
};

Block __52084600;

Block __52083740;

Block __52083360;

void code__52083360() {
}

Block make__52083360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52083360 = block;
   block->owner = (Object)__52083740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52083360;

   return block;
};

Block __57545760;

void code__57545760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_49280920_mac__n1_58306_47094960_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value,_58283_48089100_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__57545760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57545760 = block;
   block->owner = (Object)__52083740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57545760;

   return block;
};

void code__52083740() {
 code__52083360();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av0_49280920_mac__n1_58306_47094960_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
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
                              src0 = lv0_48075820_mac__n1_58306_47094960_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_49491820_mac__n1_58306_47094960_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59447320();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_49280920_mac__n1_58306_47094960_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
 code__57545760();
}

Block make__52083740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52083740 = block;
   block->owner = (Object)__52084600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52083740;

   return block;
};

void code__52084600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59447880(),ack_60240080_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59447800(),run_49491740_mac__n1_58306_47094960_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
 code__52083740();
}

Block make__52084600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52084600 = block;
   block->owner = (Object)__49843460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52084600;

   return block;
};

void code__49843460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59426560(),run_49491740_mac__n1_58306_47094960_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
 code__49842560();
 code__51435380();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_49491780_mac__n1_58306_47094960_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
         src1 = rvok_49491760_mac__n1_58306_47094960_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52084600();
   }
      }
   }
}

Block make__49843460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49843460 = block;
   block->owner = (Object)__49491560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49843460;

   return block;
};

void code__49491560() {
 code__49491160();
 code__49488600();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59427300(),ack_60240080_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59427240(),run_49491740_mac__n1_58306_47094960_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = run_49491740_mac__n1_58306_47094960_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49510500();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_60240100_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
         src1 = run_49491740_mac__n1_58306_47094960_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49843460();
   }
      }
   }
}

Block make__49491560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49491560 = block;
   block->owner = (Object)__57786260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49491560;

   return block;
};

Block __59236140;

void code__59236140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_57914260_channel__bias_58311_57786140_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value,_58313_48740780_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__59236140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59236140 = block;
   block->owner = (Object)__59235960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59236140;

   return block;
};

Block __59235900;

void code__59235900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58313_48740780_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value,reg__0_57914260_channel__bias_58311_57786140_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__59235900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59235900 = block;
   block->owner = (Object)__59235340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59235900;

   return block;
};

Block __59234840;

void code__59234840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_57914260_channel__bias_58311_57786140_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value,_58324_50871040_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__59234840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59234840 = block;
   block->owner = (Object)__59234680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59234840;

   return block;
};

Block __59234640;

void code__59234640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58324_50871040_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value,reg__0_57914260_channel__bias_58311_57786140_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__59234640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59234640 = block;
   block->owner = (Object)__59234480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59234640;

   return block;
};

Block __59232300;

void code__59232300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_57783460_winc_58323_57783880_channel__bias_58311_57786140_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value,_58325_50870840_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__59232300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59232300 = block;
   block->owner = (Object)__59232140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59232300;

   return block;
};

Block __59232100;

void code__59232100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58325_50870840_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value,abus__w_57783460_winc_58323_57783880_channel__bias_58311_57786140_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__59232100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59232100 = block;
   block->owner = (Object)__59231920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59232100;

   return block;
};

Block __59230400;

void code__59230400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_58446860_channel__z_58334_58268480_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value,_58336_49597160_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__59230400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59230400 = block;
   block->owner = (Object)__59230100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59230400;

   return block;
};

Block __59229880;

void code__59229880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58336_49597160_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value,reg__0_58446860_channel__z_58334_58268480_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__59229880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59229880 = block;
   block->owner = (Object)__59229720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59229880;

   return block;
};

Block __59215860;

Block __59214560;

Block __59214240;

void code__59214240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58283_48089100_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value,lv0_59148320_add__n_58357_59016120_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59445240(),lvok0_59216020_add__n_58357_59016120_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__59214240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59214240 = block;
   block->owner = (Object)__59214560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59214240;

   return block;
};

Block __59495160;

void code__59495160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58313_48740780_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value,rv0_59216040_add__n_58357_59016120_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59444900(),rvok0_59216000_add__n_58357_59016120_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__59495160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59495160 = block;
   block->owner = (Object)__59214560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59495160;

   return block;
};

Block __59678340;

Block __59677860;

void code__59677860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_59148320_add__n_58357_59016120_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
      src1 = rv0_59216040_add__n_58357_59016120_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58336_49597160_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__59677860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59677860 = block;
   block->owner = (Object)__59678340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59677860;

   return block;
};

void code__59678340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59444660(),run_59215980_add__n_58357_59016120_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59444580(),ack__add_60240040_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
 code__59677860();
}

Block make__59678340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59678340 = block;
   block->owner = (Object)__59214560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59678340;

   return block;
};

void code__59214560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59445440(),run_59215980_add__n_58357_59016120_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
 code__59214240();
 code__59495160();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_59216020_add__n_58357_59016120_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
         src1 = rvok0_59216000_add__n_58357_59016120_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59678340();
   }
      }
   }
}

Block make__59214560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59214560 = block;
   block->owner = (Object)__59215860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59214560;

   return block;
};

Block __59215320;

void code__59215320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59444280(),lvok0_59216020_add__n_58357_59016120_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59444220(),rvok0_59216000_add__n_58357_59016120_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
}

Block make__59215320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59215320 = block;
   block->owner = (Object)__59215860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59215320;

   return block;
};

void code__59215860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59445740(),ack__add_60240040_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59445680(),run_59215980_add__n_58357_59016120_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_60240060_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
         src1 = run_59215980_add__n_58357_59016120_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59214560();
   }
   else {
  code__59215320();
   }
      }
   }
}

Block make__59215860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59215860 = block;
   block->owner = (Object)__60240440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59215860;

   return block;
};

Value make__59444060() {
   static unsigned long long data[] = { 6ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__59444040() {
   static unsigned long long data[] = { 254ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__59443820() {
   static unsigned long long data[] = { 9ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__59427820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59427720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59427600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59427500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59427400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59427300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59427240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59427080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59427020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59426920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__59426560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59426480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59426080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59425480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59449240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59448980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59448780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59448620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59448400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59448260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59448140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59447880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59447800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59447320() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59445740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59445680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59445440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59445240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59444900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59444660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59444580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59444280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59444220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59441960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59441900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59441720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59441640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59441560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__59441460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59441360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59441300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59441180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__59498380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59498320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59498240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59497980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59497740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59497620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59497120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59496880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59496760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__59496480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59496280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59496140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59495980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59495880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59495740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope layer1_58_84_58172200;

SignalI req__mac_60240100_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makereq__mac_60240100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_60240100_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)layer1_58_84_58172200;
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

SignalI ack_60240080_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makeack_60240080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_60240080_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)layer1_58_84_58172200;
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

SignalI ack__mac_60240060_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makeack__mac_60240060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_60240060_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)layer1_58_84_58172200;
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

SignalI ack__add_60240040_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makeack__add_60240040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_60240040_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)layer1_58_84_58172200;
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

SignalI fill__channel_60240020_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makefill__channel_60240020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill__channel_60240020_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)layer1_58_84_58172200;
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

SignalI _58266_47380160_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI make_58266_47380160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58266_47380160_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)layer1_58_84_58172200;
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

SignalI _58264_47380140_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI make_58264_47380140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58264_47380140_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)layer1_58_84_58172200;
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

SignalI _58265_47379760_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI make_58265_47379760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58265_47379760_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)layer1_58_84_58172200;
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

SignalI _58283_48089100_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI make_58283_48089100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58283_48089100_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)layer1_58_84_58172200;
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

SignalI _58313_48740780_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI make_58313_48740780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58313_48740780_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)layer1_58_84_58172200;
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

SignalI _58336_49597160_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI make_58336_49597160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58336_49597160_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)layer1_58_84_58172200;
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

SignalI value__z0_50235680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makevalue__z0_50235680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_50235680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)layer1_58_84_58172200;
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

SignalI value__a0_50585100_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makevalue__a0_50585100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_50585100_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)layer1_58_84_58172200;
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

SignalI flag__z0_50585080_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makeflag__z0_50585080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_50585080_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)layer1_58_84_58172200;
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

SignalI ack__a0_50585000_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makeack__a0_50585000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_50585000_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)layer1_58_84_58172200;
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

SignalI address__weights0_50584900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makeaddress__weights0_50584900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address__weights0_50584900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)layer1_58_84_58172200;
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

SignalI address__bias_50584820_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makeaddress__bias_50584820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address__bias_50584820_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)layer1_58_84_58172200;
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

SignalI ack__weights0_50584800_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makeack__weights0_50584800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__weights0_50584800_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)layer1_58_84_58172200;
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

SignalI ack__bias_50584780_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makeack__bias_50584780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__bias_50584780_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)layer1_58_84_58172200;
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

SignalI _58324_50871040_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI make_58324_50871040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58324_50871040_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)layer1_58_84_58172200;
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

SignalI _58325_50870840_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI make_58325_50870840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58325_50870840_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)layer1_58_84_58172200;
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

SignalI w0_52544880_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makew0_52544880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   w0_52544880_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)layer1_58_84_58172200;
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
         src0 = make__59444060();
         src1 = make__59444040();
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

SignalI b_57081760_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makeb_57081760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   b_57081760_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)layer1_58_84_58172200;
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
         src0 = make__59443820();
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

SignalI _58268_57081740_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI make_58268_57081740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58268_57081740_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)layer1_58_84_58172200;
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

SignalI _58269_57081660_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI make_58269_57081660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58269_57081660_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)layer1_58_84_58172200;
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

SignalI _58270_57311520_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI make_58270_57311520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58270_57311520_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)layer1_58_84_58172200;
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

SystemI counter_57482860;

SystemI makecounter_57482860() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_57482860 = systemI;
   systemI->owner = (Object)layer1_58_84_58172200;
   systemI->name = "counter";
   systemI->system = counter_58_8400_57460680;

   return systemI;
};

SystemI func0_59412480;

SystemI makefunc0_59412480() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_59412480 = systemI;
   systemI->owner = (Object)layer1_58_84_58172200;
   systemI->name = "func0";
   systemI->system = func0_58_8400_59152420;

   return systemI;
};

Scope channel__w0_58252_58171900;

SignalI trig__r_58201700_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI maketrig__r_58201700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_58201700_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)channel__w0_58252_58171900;
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

SignalI trig__w_58201680_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI maketrig__w_58201680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_58201680_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)channel__w0_58252_58171900;
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

SignalI dbus__r_58246440_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makedbus__r_58246440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_58246440_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)channel__w0_58252_58171900;
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

SignalI dbus__w_58430380_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makedbus__w_58430380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_58430380_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)channel__w0_58252_58171900;
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

SignalI abus__r_58430300_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makeabus__r_58430300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_58430300_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)channel__w0_58252_58171900;
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

SignalI abus__w_58430220_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makeabus__w_58430220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_58430220_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)channel__w0_58252_58171900;
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

SignalI mem_58507780_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makemem_58507780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_58507780_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)channel__w0_58252_58171900;
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

Scope raddr_58253_58171600;

Scope makeraddr_58253_58171600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58253_58171600 = scope;
   scope->owner = (Object)channel__w0_58252_58171900;
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

Scope waddr_58258_58203920;

Scope makewaddr_58258_58203920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58258_58203920 = scope;
   scope->owner = (Object)channel__w0_58252_58171900;
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

Scope rinc_58263_58203500;

Scope makerinc_58263_58203500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58263_58203500 = scope;
   scope->owner = (Object)channel__w0_58252_58171900;
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

Scope winc_58267_58203040;

Scope makewinc_58267_58203040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58267_58203040 = scope;
   scope->owner = (Object)channel__w0_58252_58171900;
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

Scope rdec_58271_58202560;

Scope makerdec_58271_58202560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58271_58202560 = scope;
   scope->owner = (Object)channel__w0_58252_58171900;
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

Scope wdec_58276_58202140;

Scope makewdec_58276_58202140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58276_58202140 = scope;
   scope->owner = (Object)channel__w0_58252_58171900;
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

Behavior __59934020;

Behavior make__59934020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59934020 = behavior;
   behavior->owner = (Object)channel__w0_58252_58171900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_52153220_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   clk_52153220_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_neg += 1;
   clk_52153220_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->neg = realloc(clk_52153220_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->neg,clk_52153220_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_neg*sizeof(Object));
clk_52153220_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->neg[clk_52153220_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_neg-1] = (Object)behavior;
   behavior->block = make__59332800();

   return behavior;
}

Behavior __59198000;

Behavior make__59198000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59198000 = behavior;
   behavior->owner = (Object)channel__w0_58252_58171900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_58246440_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   dbus__r_58246440_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any += 1;
   dbus__r_58246440_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any = realloc(dbus__r_58246440_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any,dbus__r_58246440_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any*sizeof(Object));
dbus__r_58246440_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any[dbus__r_58246440_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any-1] = (Object)behavior;
   behavior->block = make__59198200();

   return behavior;
}

Behavior __59197740;

Behavior make__59197740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59197740 = behavior;
   behavior->owner = (Object)channel__w0_58252_58171900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58266_47380160_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   _58266_47380160_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any += 1;
   _58266_47380160_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any = realloc(_58266_47380160_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any,_58266_47380160_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any*sizeof(Object));
_58266_47380160_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any[_58266_47380160_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any-1] = (Object)behavior;
   behavior->block = make__59197960();

   return behavior;
}

Behavior __59197020;

Behavior make__59197020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59197020 = behavior;
   behavior->owner = (Object)channel__w0_58252_58171900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_58201700_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   trig__r_58201700_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any += 1;
   trig__r_58201700_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any = realloc(trig__r_58201700_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any,trig__r_58201700_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any*sizeof(Object));
trig__r_58201700_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any[trig__r_58201700_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any-1] = (Object)behavior;
   behavior->block = make__59197280();

   return behavior;
}

Behavior __59196780;

Behavior make__59196780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59196780 = behavior;
   behavior->owner = (Object)channel__w0_58252_58171900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58264_47380140_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   _58264_47380140_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any += 1;
   _58264_47380140_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any = realloc(_58264_47380140_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any,_58264_47380140_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any*sizeof(Object));
_58264_47380140_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any[_58264_47380140_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any-1] = (Object)behavior;
   behavior->block = make__59196940();

   return behavior;
}

Behavior __59196180;

Behavior make__59196180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59196180 = behavior;
   behavior->owner = (Object)channel__w0_58252_58171900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_58430300_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   abus__r_58430300_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any += 1;
   abus__r_58430300_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any = realloc(abus__r_58430300_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any,abus__r_58430300_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any*sizeof(Object));
abus__r_58430300_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any[abus__r_58430300_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any-1] = (Object)behavior;
   behavior->block = make__59196420();

   return behavior;
}

Behavior __59195920;

Behavior make__59195920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59195920 = behavior;
   behavior->owner = (Object)channel__w0_58252_58171900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58265_47379760_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   _58265_47379760_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any += 1;
   _58265_47379760_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any = realloc(_58265_47379760_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any,_58265_47379760_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any*sizeof(Object));
_58265_47379760_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any[_58265_47379760_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any-1] = (Object)behavior;
   behavior->block = make__59196120();

   return behavior;
}

Behavior __59195400;

Behavior make__59195400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59195400 = behavior;
   behavior->owner = (Object)channel__w0_58252_58171900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_58201680_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   trig__w_58201680_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any += 1;
   trig__w_58201680_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any = realloc(trig__w_58201680_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any,trig__w_58201680_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any*sizeof(Object));
trig__w_58201680_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any[trig__w_58201680_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any-1] = (Object)behavior;
   behavior->block = make__59195600();

   return behavior;
}

Behavior __59219540;

Behavior make__59219540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59219540 = behavior;
   behavior->owner = (Object)channel__w0_58252_58171900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58268_57081740_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   _58268_57081740_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any += 1;
   _58268_57081740_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any = realloc(_58268_57081740_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any,_58268_57081740_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any*sizeof(Object));
_58268_57081740_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any[_58268_57081740_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any-1] = (Object)behavior;
   behavior->block = make__59219860();

   return behavior;
}

Behavior __59218740;

Behavior make__59218740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59218740 = behavior;
   behavior->owner = (Object)channel__w0_58252_58171900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_58430220_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   abus__w_58430220_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any += 1;
   abus__w_58430220_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any = realloc(abus__w_58430220_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any,abus__w_58430220_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any*sizeof(Object));
abus__w_58430220_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any[abus__w_58430220_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any-1] = (Object)behavior;
   behavior->block = make__59218900();

   return behavior;
}

Behavior __59218500;

Behavior make__59218500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59218500 = behavior;
   behavior->owner = (Object)channel__w0_58252_58171900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58269_57081660_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   _58269_57081660_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any += 1;
   _58269_57081660_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any = realloc(_58269_57081660_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any,_58269_57081660_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any*sizeof(Object));
_58269_57081660_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any[_58269_57081660_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any-1] = (Object)behavior;
   behavior->block = make__59218700();

   return behavior;
}

Behavior __59217940;

Behavior make__59217940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59217940 = behavior;
   behavior->owner = (Object)channel__w0_58252_58171900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_58430380_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   dbus__w_58430380_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any += 1;
   dbus__w_58430380_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any = realloc(dbus__w_58430380_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any,dbus__w_58430380_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any*sizeof(Object));
dbus__w_58430380_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any[dbus__w_58430380_channel__w0_58252_58171900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any-1] = (Object)behavior;
   behavior->block = make__59218120();

   return behavior;
}

Behavior __59217680;

Behavior make__59217680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59217680 = behavior;
   behavior->owner = (Object)channel__w0_58252_58171900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58270_57311520_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   _58270_57311520_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any += 1;
   _58270_57311520_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any = realloc(_58270_57311520_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any,_58270_57311520_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any*sizeof(Object));
_58270_57311520_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any[_58270_57311520_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any-1] = (Object)behavior;
   behavior->block = make__59217880();

   return behavior;
}

Scope makechannel__w0_58252_58171900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58252_58171900 = scope;
   scope->owner = (Object)layer1_58_84_58172200;
   scope->name = "channel_w0:252";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_58201700();
   scope->inners[1] = maketrig__w_58201680();
   scope->inners[2] = makedbus__r_58246440();
   scope->inners[3] = makedbus__w_58430380();
   scope->inners[4] = makeabus__r_58430300();
   scope->inners[5] = makeabus__w_58430220();
   scope->inners[6] = makemem_58507780();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58253_58171600();
   scope->scopes[1] = makewaddr_58258_58203920();
   scope->scopes[2] = makerinc_58263_58203500();
   scope->scopes[3] = makewinc_58267_58203040();
   scope->scopes[4] = makerdec_58271_58202560();
   scope->scopes[5] = makewdec_58276_58202140();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59934020();
   scope->behaviors[1] = make__59198000();
   scope->behaviors[2] = make__59197740();
   scope->behaviors[3] = make__59197020();
   scope->behaviors[4] = make__59196780();
   scope->behaviors[5] = make__59196180();
   scope->behaviors[6] = make__59195920();
   scope->behaviors[7] = make__59195400();
   scope->behaviors[8] = make__59219540();
   scope->behaviors[9] = make__59218740();
   scope->behaviors[10] = make__59218500();
   scope->behaviors[11] = make__59217940();
   scope->behaviors[12] = make__59217680();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58281_59933900;

SignalI reg__0_60105720_channel__accum_58281_59933900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makereg__0_60105720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_60105720_channel__accum_58281_59933900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)channel__accum_58281_59933900;
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

Scope anum_58282_59933500;

Scope makeanum_58282_59933500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58282_59933500 = scope;
   scope->owner = (Object)channel__accum_58281_59933900;
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

Scope raddr_58284_59932900;

Scope makeraddr_58284_59932900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58284_59932900 = scope;
   scope->owner = (Object)channel__accum_58281_59933900;
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

Scope waddr_58287_60030740;

Scope makewaddr_58287_60030740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58287_60030740 = scope;
   scope->owner = (Object)channel__accum_58281_59933900;
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

Scope rinc_58290_60030320;

SignalI abus__r_60029940_rinc_58290_60030320_channel__accum_58281_59933900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makeabus__r_60029940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_60029940_rinc_58290_60030320_channel__accum_58281_59933900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)rinc_58290_60030320;
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

Scope makerinc_58290_60030320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58290_60030320 = scope;
   scope->owner = (Object)channel__accum_58281_59933900;
   scope->name = "rinc:290";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_60029940();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58294_60029820;

SignalI abus__w_60029340_winc_58294_60029820_channel__accum_58281_59933900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makeabus__w_60029340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_60029340_winc_58294_60029820_channel__accum_58281_59933900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)winc_58294_60029820;
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

Scope makewinc_58294_60029820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58294_60029820 = scope;
   scope->owner = (Object)channel__accum_58281_59933900;
   scope->name = "winc:294";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_60029340();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58298_60029220;

SignalI abus__r_60028840_rdec_58298_60029220_channel__accum_58281_59933900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makeabus__r_60028840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_60028840_rdec_58298_60029220_channel__accum_58281_59933900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)rdec_58298_60029220;
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

Scope makerdec_58298_60029220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58298_60029220 = scope;
   scope->owner = (Object)channel__accum_58281_59933900;
   scope->name = "rdec:298";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_60028840();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58302_60028720;

SignalI abus__w_60028340_wdec_58302_60028720_channel__accum_58281_59933900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makeabus__w_60028340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_60028340_wdec_58302_60028720_channel__accum_58281_59933900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)wdec_58302_60028720;
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

Scope makewdec_58302_60028720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58302_60028720 = scope;
   scope->owner = (Object)channel__accum_58281_59933900;
   scope->name = "wdec:302";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_60028340();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __59214420;

Behavior make__59214420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59214420 = behavior;
   behavior->owner = (Object)channel__accum_58281_59933900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_60105720_channel__accum_58281_59933900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   reg__0_60105720_channel__accum_58281_59933900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any += 1;
   reg__0_60105720_channel__accum_58281_59933900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any = realloc(reg__0_60105720_channel__accum_58281_59933900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any,reg__0_60105720_channel__accum_58281_59933900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any*sizeof(Object));
reg__0_60105720_channel__accum_58281_59933900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any[reg__0_60105720_channel__accum_58281_59933900_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any-1] = (Object)behavior;
   behavior->block = make__59215120();

   return behavior;
}

Behavior __59213840;

Behavior make__59213840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59213840 = behavior;
   behavior->owner = (Object)channel__accum_58281_59933900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58283_48089100_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   _58283_48089100_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any += 1;
   _58283_48089100_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any = realloc(_58283_48089100_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any,_58283_48089100_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any*sizeof(Object));
_58283_48089100_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any[_58283_48089100_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any-1] = (Object)behavior;
   behavior->block = make__59214340();

   return behavior;
}

Scope makechannel__accum_58281_59933900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58281_59933900 = scope;
   scope->owner = (Object)layer1_58_84_58172200;
   scope->name = "channel_accum:281";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_60105720();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58282_59933500();
   scope->scopes[1] = makeraddr_58284_59932900();
   scope->scopes[2] = makewaddr_58287_60030740();
   scope->scopes[3] = makerinc_58290_60030320();
   scope->scopes[4] = makewinc_58294_60029820();
   scope->scopes[5] = makerdec_58298_60029220();
   scope->scopes[6] = makewdec_58302_60028720();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59214420();
   scope->behaviors[1] = make__59213840();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58306_47094960;

SignalI lv0_48075820_mac__n1_58306_47094960_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makelv0_48075820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_48075820_mac__n1_58306_47094960_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)mac__n1_58306_47094960;
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

SignalI av0_49280920_mac__n1_58306_47094960_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makeav0_49280920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_49280920_mac__n1_58306_47094960_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)mac__n1_58306_47094960;
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

SignalI rv_49491820_mac__n1_58306_47094960_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makerv_49491820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_49491820_mac__n1_58306_47094960_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)mac__n1_58306_47094960;
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

SignalI lvok0_49491780_mac__n1_58306_47094960_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makelvok0_49491780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_49491780_mac__n1_58306_47094960_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)mac__n1_58306_47094960;
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

SignalI rvok_49491760_mac__n1_58306_47094960_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makervok_49491760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_49491760_mac__n1_58306_47094960_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)mac__n1_58306_47094960;
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

SignalI run_49491740_mac__n1_58306_47094960_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makerun_49491740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_49491740_mac__n1_58306_47094960_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)mac__n1_58306_47094960;
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

Behavior __57786260;

Behavior make__57786260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57786260 = behavior;
   behavior->owner = (Object)mac__n1_58306_47094960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_52153220_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   clk_52153220_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_pos += 1;
   clk_52153220_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->pos = realloc(clk_52153220_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->pos,clk_52153220_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_pos*sizeof(Object));
clk_52153220_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->pos[clk_52153220_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_pos-1] = (Object)behavior;
   behavior->block = make__49491560();

   return behavior;
}

Scope makemac__n1_58306_47094960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58306_47094960 = scope;
   scope->owner = (Object)layer1_58_84_58172200;
   scope->name = "mac_n1:306";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 6;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_48075820();
   scope->inners[1] = makeav0_49280920();
   scope->inners[2] = makerv_49491820();
   scope->inners[3] = makelvok0_49491780();
   scope->inners[4] = makervok_49491760();
   scope->inners[5] = makerun_49491740();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57786260();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__bias_58311_57786140;

SignalI reg__0_57914260_channel__bias_58311_57786140_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makereg__0_57914260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_57914260_channel__bias_58311_57786140_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)channel__bias_58311_57786140;
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

Scope anum_58312_57785840;

Scope makeanum_58312_57785840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58312_57785840 = scope;
   scope->owner = (Object)channel__bias_58311_57786140;
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

Scope raddr_58314_57785360;

Scope makeraddr_58314_57785360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58314_57785360 = scope;
   scope->owner = (Object)channel__bias_58311_57786140;
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

Scope waddr_58317_57784900;

Scope makewaddr_58317_57784900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58317_57784900 = scope;
   scope->owner = (Object)channel__bias_58311_57786140;
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

Scope rinc_58320_57784380;

SignalI abus__r_57784000_rinc_58320_57784380_channel__bias_58311_57786140_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makeabus__r_57784000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_57784000_rinc_58320_57784380_channel__bias_58311_57786140_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)rinc_58320_57784380;
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

Scope makerinc_58320_57784380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58320_57784380 = scope;
   scope->owner = (Object)channel__bias_58311_57786140;
   scope->name = "rinc:320";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_57784000();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58323_57783880;

SignalI abus__w_57783460_winc_58323_57783880_channel__bias_58311_57786140_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makeabus__w_57783460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_57783460_winc_58323_57783880_channel__bias_58311_57786140_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)winc_58323_57783880;
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

Behavior __59232140;

Behavior make__59232140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59232140 = behavior;
   behavior->owner = (Object)winc_58323_57783880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_57783460_winc_58323_57783880_channel__bias_58311_57786140_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   abus__w_57783460_winc_58323_57783880_channel__bias_58311_57786140_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any += 1;
   abus__w_57783460_winc_58323_57783880_channel__bias_58311_57786140_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any = realloc(abus__w_57783460_winc_58323_57783880_channel__bias_58311_57786140_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any,abus__w_57783460_winc_58323_57783880_channel__bias_58311_57786140_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any*sizeof(Object));
abus__w_57783460_winc_58323_57783880_channel__bias_58311_57786140_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any[abus__w_57783460_winc_58323_57783880_channel__bias_58311_57786140_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any-1] = (Object)behavior;
   behavior->block = make__59232300();

   return behavior;
}

Behavior __59231920;

Behavior make__59231920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59231920 = behavior;
   behavior->owner = (Object)winc_58323_57783880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58325_50870840_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   _58325_50870840_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any += 1;
   _58325_50870840_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any = realloc(_58325_50870840_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any,_58325_50870840_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any*sizeof(Object));
_58325_50870840_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any[_58325_50870840_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any-1] = (Object)behavior;
   behavior->block = make__59232100();

   return behavior;
}

Scope makewinc_58323_57783880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58323_57783880 = scope;
   scope->owner = (Object)channel__bias_58311_57786140;
   scope->name = "winc:323";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_57783460();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59232140();
   scope->behaviors[1] = make__59231920();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58326_57783020;

SignalI abus__r_57782620_rdec_58326_57783020_channel__bias_58311_57786140_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makeabus__r_57782620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_57782620_rdec_58326_57783020_channel__bias_58311_57786140_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)rdec_58326_57783020;
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

Scope makerdec_58326_57783020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58326_57783020 = scope;
   scope->owner = (Object)channel__bias_58311_57786140;
   scope->name = "rdec:326";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_57782620();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58330_57782480;

SignalI abus__w_57782040_wdec_58330_57782480_channel__bias_58311_57786140_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makeabus__w_57782040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_57782040_wdec_58330_57782480_channel__bias_58311_57786140_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)wdec_58330_57782480;
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

Scope makewdec_58330_57782480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58330_57782480 = scope;
   scope->owner = (Object)channel__bias_58311_57786140;
   scope->name = "wdec:330";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_57782040();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __59235960;

Behavior make__59235960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59235960 = behavior;
   behavior->owner = (Object)channel__bias_58311_57786140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_57914260_channel__bias_58311_57786140_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   reg__0_57914260_channel__bias_58311_57786140_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any += 1;
   reg__0_57914260_channel__bias_58311_57786140_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any = realloc(reg__0_57914260_channel__bias_58311_57786140_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any,reg__0_57914260_channel__bias_58311_57786140_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any*sizeof(Object));
reg__0_57914260_channel__bias_58311_57786140_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any[reg__0_57914260_channel__bias_58311_57786140_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any-1] = (Object)behavior;
   behavior->block = make__59236140();

   return behavior;
}

Behavior __59235340;

Behavior make__59235340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59235340 = behavior;
   behavior->owner = (Object)channel__bias_58311_57786140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58313_48740780_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   _58313_48740780_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any += 1;
   _58313_48740780_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any = realloc(_58313_48740780_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any,_58313_48740780_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any*sizeof(Object));
_58313_48740780_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any[_58313_48740780_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any-1] = (Object)behavior;
   behavior->block = make__59235900();

   return behavior;
}

Behavior __59234680;

Behavior make__59234680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59234680 = behavior;
   behavior->owner = (Object)channel__bias_58311_57786140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_57914260_channel__bias_58311_57786140_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   reg__0_57914260_channel__bias_58311_57786140_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any += 1;
   reg__0_57914260_channel__bias_58311_57786140_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any = realloc(reg__0_57914260_channel__bias_58311_57786140_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any,reg__0_57914260_channel__bias_58311_57786140_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any*sizeof(Object));
reg__0_57914260_channel__bias_58311_57786140_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any[reg__0_57914260_channel__bias_58311_57786140_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any-1] = (Object)behavior;
   behavior->block = make__59234840();

   return behavior;
}

Behavior __59234480;

Behavior make__59234480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59234480 = behavior;
   behavior->owner = (Object)channel__bias_58311_57786140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58324_50871040_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   _58324_50871040_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any += 1;
   _58324_50871040_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any = realloc(_58324_50871040_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any,_58324_50871040_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any*sizeof(Object));
_58324_50871040_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any[_58324_50871040_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any-1] = (Object)behavior;
   behavior->block = make__59234640();

   return behavior;
}

Scope makechannel__bias_58311_57786140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__bias_58311_57786140 = scope;
   scope->owner = (Object)layer1_58_84_58172200;
   scope->name = "channel_bias:311";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_57914260();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58312_57785840();
   scope->scopes[1] = makeraddr_58314_57785360();
   scope->scopes[2] = makewaddr_58317_57784900();
   scope->scopes[3] = makerinc_58320_57784380();
   scope->scopes[4] = makewinc_58323_57783880();
   scope->scopes[5] = makerdec_58326_57783020();
   scope->scopes[6] = makewdec_58330_57782480();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59235960();
   scope->behaviors[1] = make__59235340();
   scope->behaviors[2] = make__59234680();
   scope->behaviors[3] = make__59234480();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58334_58268480;

SignalI reg__0_58446860_channel__z_58334_58268480_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makereg__0_58446860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_58446860_channel__z_58334_58268480_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)channel__z_58334_58268480;
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

Scope anum_58335_58268180;

Scope makeanum_58335_58268180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58335_58268180 = scope;
   scope->owner = (Object)channel__z_58334_58268480;
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

Scope raddr_58337_58267720;

Scope makeraddr_58337_58267720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58337_58267720 = scope;
   scope->owner = (Object)channel__z_58334_58268480;
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

Scope waddr_58340_58267240;

Scope makewaddr_58340_58267240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58340_58267240 = scope;
   scope->owner = (Object)channel__z_58334_58268480;
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

Scope rinc_58343_58266820;

SignalI abus__r_58266340_rinc_58343_58266820_channel__z_58334_58268480_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makeabus__r_58266340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_58266340_rinc_58343_58266820_channel__z_58334_58268480_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)rinc_58343_58266820;
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

Scope makerinc_58343_58266820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58343_58266820 = scope;
   scope->owner = (Object)channel__z_58334_58268480;
   scope->name = "rinc:343";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_58266340();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58346_58266220;

SignalI abus__w_58265840_winc_58346_58266220_channel__z_58334_58268480_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makeabus__w_58265840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_58265840_winc_58346_58266220_channel__z_58334_58268480_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)winc_58346_58266220;
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

Scope makewinc_58346_58266220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58346_58266220 = scope;
   scope->owner = (Object)channel__z_58334_58268480;
   scope->name = "winc:346";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_58265840();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58349_58265700;

SignalI abus__r_58265240_rdec_58349_58265700_channel__z_58334_58268480_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makeabus__r_58265240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_58265240_rdec_58349_58265700_channel__z_58334_58268480_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)rdec_58349_58265700;
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

Scope makerdec_58349_58265700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58349_58265700 = scope;
   scope->owner = (Object)channel__z_58334_58268480;
   scope->name = "rdec:349";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_58265240();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58353_58265120;

SignalI abus__w_58264740_wdec_58353_58265120_channel__z_58334_58268480_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makeabus__w_58264740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_58264740_wdec_58353_58265120_channel__z_58334_58268480_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)wdec_58353_58265120;
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

Scope makewdec_58353_58265120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58353_58265120 = scope;
   scope->owner = (Object)channel__z_58334_58268480;
   scope->name = "wdec:353";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_58264740();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __59230100;

Behavior make__59230100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59230100 = behavior;
   behavior->owner = (Object)channel__z_58334_58268480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_58446860_channel__z_58334_58268480_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   reg__0_58446860_channel__z_58334_58268480_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any += 1;
   reg__0_58446860_channel__z_58334_58268480_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any = realloc(reg__0_58446860_channel__z_58334_58268480_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any,reg__0_58446860_channel__z_58334_58268480_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any*sizeof(Object));
reg__0_58446860_channel__z_58334_58268480_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any[reg__0_58446860_channel__z_58334_58268480_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any-1] = (Object)behavior;
   behavior->block = make__59230400();

   return behavior;
}

Behavior __59229720;

Behavior make__59229720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59229720 = behavior;
   behavior->owner = (Object)channel__z_58334_58268480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58336_49597160_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   _58336_49597160_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any += 1;
   _58336_49597160_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any = realloc(_58336_49597160_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any,_58336_49597160_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any*sizeof(Object));
_58336_49597160_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any[_58336_49597160_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any-1] = (Object)behavior;
   behavior->block = make__59229880();

   return behavior;
}

Scope makechannel__z_58334_58268480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58334_58268480 = scope;
   scope->owner = (Object)layer1_58_84_58172200;
   scope->name = "channel_z:334";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_58446860();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58335_58268180();
   scope->scopes[1] = makeraddr_58337_58267720();
   scope->scopes[2] = makewaddr_58340_58267240();
   scope->scopes[3] = makerinc_58343_58266820();
   scope->scopes[4] = makewinc_58346_58266220();
   scope->scopes[5] = makerdec_58349_58265700();
   scope->scopes[6] = makewdec_58353_58265120();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59230100();
   scope->behaviors[1] = make__59229720();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58357_59016120;

SignalI lv0_59148320_add__n_58357_59016120_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makelv0_59148320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_59148320_add__n_58357_59016120_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)add__n_58357_59016120;
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

SignalI rv0_59216040_add__n_58357_59016120_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makerv0_59216040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_59216040_add__n_58357_59016120_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)add__n_58357_59016120;
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

SignalI lvok0_59216020_add__n_58357_59016120_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makelvok0_59216020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_59216020_add__n_58357_59016120_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)add__n_58357_59016120;
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

SignalI rvok0_59216000_add__n_58357_59016120_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makervok0_59216000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_59216000_add__n_58357_59016120_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)add__n_58357_59016120;
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

SignalI run_59215980_add__n_58357_59016120_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720;

SignalI makerun_59215980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_59215980_add__n_58357_59016120_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720 = signalI;
   signalI->owner = (Object)add__n_58357_59016120;
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

Behavior __60240440;

Behavior make__60240440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60240440 = behavior;
   behavior->owner = (Object)add__n_58357_59016120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_52153220_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   clk_52153220_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_pos += 1;
   clk_52153220_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->pos = realloc(clk_52153220_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->pos,clk_52153220_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_pos*sizeof(Object));
clk_52153220_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->pos[clk_52153220_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_pos-1] = (Object)behavior;
   behavior->block = make__59215860();

   return behavior;
}

Scope makeadd__n_58357_59016120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58357_59016120 = scope;
   scope->owner = (Object)layer1_58_84_58172200;
   scope->name = "add_n:357";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_59148320();
   scope->inners[1] = makerv0_59216040();
   scope->inners[2] = makelvok0_59216020();
   scope->inners[3] = makervok0_59216000();
   scope->inners[4] = makerun_59215980();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60240440();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __45401720;

Behavior make__45401720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45401720 = behavior;
   behavior->owner = (Object)layer1_58_84_58172200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_52153220_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   clk_52153220_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_pos += 1;
   clk_52153220_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->pos = realloc(clk_52153220_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->pos,clk_52153220_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_pos*sizeof(Object));
clk_52153220_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->pos[clk_52153220_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_pos-1] = (Object)behavior;
   behavior->block = make__60027180();

   return behavior;
}

Behavior __48894600;

Behavior make__48894600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48894600 = behavior;
   behavior->owner = (Object)layer1_58_84_58172200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_52153220_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   clk_52153220_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_pos += 1;
   clk_52153220_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->pos = realloc(clk_52153220_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->pos,clk_52153220_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_pos*sizeof(Object));
clk_52153220_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->pos[clk_52153220_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_pos-1] = (Object)behavior;
   behavior->block = make__45401080();

   return behavior;
}

Behavior __52080060;

Behavior make__52080060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52080060 = behavior;
   behavior->owner = (Object)layer1_58_84_58172200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_52153220_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   clk_52153220_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_pos += 1;
   clk_52153220_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->pos = realloc(clk_52153220_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->pos,clk_52153220_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_pos*sizeof(Object));
clk_52153220_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->pos[clk_52153220_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_pos-1] = (Object)behavior;
   behavior->block = make__48892900();

   return behavior;
}

Behavior __59182360;

Behavior make__59182360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59182360 = behavior;
   behavior->owner = (Object)layer1_58_84_58172200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_52153160_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   req_52153160_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any += 1;
   req_52153160_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any = realloc(req_52153160_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any,req_52153160_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any*sizeof(Object));
req_52153160_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any[req_52153160_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_60240060_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   ack__mac_60240060_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any += 1;
   ack__mac_60240060_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any = realloc(ack__mac_60240060_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any,ack__mac_60240060_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any*sizeof(Object));
ack__mac_60240060_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any[ack__mac_60240060_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any-1] = (Object)behavior;
   behavior->block = make__59182720();

   return behavior;
}

Behavior __59199660;

Behavior make__59199660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59199660 = behavior;
   behavior->owner = (Object)layer1_58_84_58172200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,fill_52153180_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   fill_52153180_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any += 1;
   fill_52153180_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any = realloc(fill_52153180_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any,fill_52153180_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any*sizeof(Object));
fill_52153180_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any[fill_52153180_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__weights0_50584800_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   ack__weights0_50584800_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any += 1;
   ack__weights0_50584800_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any = realloc(ack__weights0_50584800_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any,ack__weights0_50584800_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any*sizeof(Object));
ack__weights0_50584800_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any[ack__weights0_50584800_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,ack__bias_50584780_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   ack__bias_50584780_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any += 1;
   ack__bias_50584780_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any = realloc(ack__bias_50584780_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any,ack__bias_50584780_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any*sizeof(Object));
ack__bias_50584780_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any[ack__bias_50584780_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any-1] = (Object)behavior;
   behavior->block = make__59200040();

   return behavior;
}

Behavior __59199360;

Behavior make__59199360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59199360 = behavior;
   behavior->owner = (Object)layer1_58_84_58172200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_52153220_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   clk_52153220_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any += 1;
   clk_52153220_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any = realloc(clk_52153220_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any,clk_52153220_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any*sizeof(Object));
clk_52153220_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any[clk_52153220_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_60240080_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   ack_60240080_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any += 1;
   ack_60240080_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any = realloc(ack_60240080_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any,ack_60240080_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any*sizeof(Object));
ack_60240080_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any[ack_60240080_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_52153200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   rst_52153200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any += 1;
   rst_52153200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any = realloc(rst_52153200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any,rst_52153200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any*sizeof(Object));
rst_52153200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any[rst_52153200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_50235680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   value__z0_50235680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any += 1;
   value__z0_50235680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any = realloc(value__z0_50235680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any,value__z0_50235680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any*sizeof(Object));
value__z0_50235680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any[value__z0_50235680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__a0_50585000_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   ack__a0_50585000_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any += 1;
   ack__a0_50585000_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any = realloc(ack__a0_50585000_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any,ack__a0_50585000_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any*sizeof(Object));
ack__a0_50585000_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any[ack__a0_50585000_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any-1] = (Object)behavior;
   behavior->block = make__59183100();

   return behavior;
}

Behavior __59199180;

Behavior make__59199180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59199180 = behavior;
   behavior->owner = (Object)layer1_58_84_58172200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_57483000_counter_58_8400_57460680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   ack__mac_57483000_counter_58_8400_57460680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any += 1;
   ack__mac_57483000_counter_58_8400_57460680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any = realloc(ack__mac_57483000_counter_58_8400_57460680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any,ack__mac_57483000_counter_58_8400_57460680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any*sizeof(Object));
ack__mac_57483000_counter_58_8400_57460680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any[ack__mac_57483000_counter_58_8400_57460680_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,a_59412680_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720);
   a_59412680_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any += 1;
   a_59412680_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any = realloc(a_59412680_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any,a_59412680_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any*sizeof(Object));
a_59412680_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->any[a_59412680_func0_58_8400_59152420_layer1_58_84_58172200_layer1_58_840_52078940_neural__network_58_84_48752040_neural__network_58_840_57736480______58_84_48752740______58_840_57782720->num_any-1] = (Object)behavior;
   behavior->block = make__59183020();

   return behavior;
}

Scope makelayer1_58_84_58172200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer1_58_84_58172200 = scope;
   scope->owner = (Object)layer1_58_840_52078940;
   scope->name = "layer1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_57482860();
   scope->systemIs[1] = makefunc0_59412480();
   scope->num_inners = 26;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_60240100();
   scope->inners[1] = makeack_60240080();
   scope->inners[2] = makeack__mac_60240060();
   scope->inners[3] = makeack__add_60240040();
   scope->inners[4] = makefill__channel_60240020();
   scope->inners[5] = make_58266_47380160();
   scope->inners[6] = make_58264_47380140();
   scope->inners[7] = make_58265_47379760();
   scope->inners[8] = make_58283_48089100();
   scope->inners[9] = make_58313_48740780();
   scope->inners[10] = make_58336_49597160();
   scope->inners[11] = makevalue__z0_50235680();
   scope->inners[12] = makevalue__a0_50585100();
   scope->inners[13] = makeflag__z0_50585080();
   scope->inners[14] = makeack__a0_50585000();
   scope->inners[15] = makeaddress__weights0_50584900();
   scope->inners[16] = makeaddress__bias_50584820();
   scope->inners[17] = makeack__weights0_50584800();
   scope->inners[18] = makeack__bias_50584780();
   scope->inners[19] = make_58324_50871040();
   scope->inners[20] = make_58325_50870840();
   scope->inners[21] = makew0_52544880();
   scope->inners[22] = makeb_57081760();
   scope->inners[23] = make_58268_57081740();
   scope->inners[24] = make_58269_57081660();
   scope->inners[25] = make_58270_57311520();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58252_58171900();
   scope->scopes[1] = makechannel__accum_58281_59933900();
   scope->scopes[2] = makemac__n1_58306_47094960();
   scope->scopes[3] = makechannel__bias_58311_57786140();
   scope->scopes[4] = makechannel__z_58334_58268480();
   scope->scopes[5] = makeadd__n_58357_59016120();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__45401720();
   scope->behaviors[1] = make__48894600();
   scope->behaviors[2] = make__52080060();
   scope->behaviors[3] = make__59182360();
   scope->behaviors[4] = make__59199660();
   scope->behaviors[5] = make__59199360();
   scope->behaviors[6] = make__59199180();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer1_58_840_52078940() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer1_58_840_52078940 = systemT;
systemT->owner = NULL;
   systemT->name = "layer1:T0";
   systemT->num_inputs = 6;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_52153220();
   systemT->inputs[1] = makerst_52153200();
   systemT->inputs[2] = makefill_52153180();
   systemT->inputs[3] = makereq_52153160();
   systemT->inputs[4] = make_5866_52523080();
   systemT->inputs[5] = make_5867_56860620();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_56860580();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_5868_56860420();
   systemT->inouts[1] = make_5832_56944660();

   systemT->scope = makelayer1_58_84_58172200();

   return systemT;
}