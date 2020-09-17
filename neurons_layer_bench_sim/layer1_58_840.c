#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer1_58_840_59217060;

SignalI clk_59215020_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI makeclk_59215020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_59215020_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer1_58_840_59217060;
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

SignalI rst_59215000_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI makerst_59215000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_59215000_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer1_58_840_59217060;
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

SignalI fill_59214980_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI makefill_59214980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_59214980_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer1_58_840_59217060;
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

SignalI req_59214960_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI makereq_59214960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_59214960_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer1_58_840_59217060;
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

SignalI _5843_59323640_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI make_5843_59323640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5843_59323640_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer1_58_840_59217060;
   signalI->name = ":43";
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

SignalI _5844_59554940_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI make_5844_59554940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5844_59554940_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer1_58_840_59217060;
   signalI->name = ":44";
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

SignalI ack__layer_59554880_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI makeack__layer_59554880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_59554880_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer1_58_840_59217060;
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

SignalI _5845_59554740_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI make_5845_59554740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5845_59554740_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer1_58_840_59217060;
   signalI->name = ":45";
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

SignalI _5862_59770040_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI make_5862_59770040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5862_59770040_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer1_58_840_59217060;
   signalI->name = ":62";
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

Block __58564640;

Block __58604960;

Block __58604800;

void code__58604800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58336_58438980_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value,value__z0_58567280_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61407160(),flag__z0_58646340_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__58604800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58604800 = block;
   block->owner = (Object)__58604960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58604800;

   return block;
};

void code__58604960() {
 code__58604800();
}

Block make__58604960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58604960 = block;
   block->owner = (Object)__58564640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58604960;

   return block;
};

Block __58605380;

void code__58605380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61407040(),flag__z0_58646340_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__58605380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58605380 = block;
   block->owner = (Object)__58564640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58605380;

   return block;
};

void code__58564640() {
   {
      Value cond = ack__add_53918840_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58604960();
   }
   else {
  code__58605380();
   }
      }
   }
}

Block make__58564640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58564640 = block;
   block->owner = (Object)__58731180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58564640;

   return block;
};

Block __58731000;

Block __58730780;

Block __58730620;

void code__58730620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_58646360_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value,_5862_59770040_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61406860(),ack__a0_58646320_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__58730620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58730620 = block;
   block->owner = (Object)__58730780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58730620;

   return block;
};

void code__58730780() {
 code__58730620();
}

Block make__58730780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58730780 = block;
   block->owner = (Object)__58731000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58730780;

   return block;
};

void code__58731000() {
   {
      Value cond = flag__z0_58646340_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58730780();
   }
      }
   }
}

Block make__58731000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58731000 = block;
   block->owner = (Object)__58983500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58731000;

   return block;
};

Block __58983380;

Block __58983220;

Block __58982900;

void code__58982900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61406700(),_58325_58717200_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__58982900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58982900 = block;
   block->owner = (Object)__58983220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58982900;

   return block;
};

void code__58983220() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59215000_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61406780();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58982900();
   }
      }
   }
}

Block make__58983220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58983220 = block;
   block->owner = (Object)__58983380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58983220;

   return block;
};

Block __58982440;

Block __59006640;

void code__59006640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61406500(),_58269_58717100_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__59006640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59006640 = block;
   block->owner = (Object)__58982440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59006640;

   return block;
};

void code__58982440() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59215000_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61406600();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59006640();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61406440(),_58268_58717180_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__58982440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58982440 = block;
   block->owner = (Object)__58983380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58982440;

   return block;
};

Block __59005760;

Block __59005600;

Block __59005280;

void code__59005280() {
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
                  src0 = _58269_58717100_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__61406120();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58269_58717100_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61406020(),_58268_58717180_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61405960(),_58270_58837200_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__59005280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59005280 = block;
   block->owner = (Object)__59005600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59005280;

   return block;
};

void code__59005600() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59215000_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61406260();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59005280();
   }
      }
   }
}

Block make__59005600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59005600 = block;
   block->owner = (Object)__59005760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59005600;

   return block;
};

Block __59121100;

Block __59120780;

Block __59120280;

void code__59120280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61405700(),_58324_58717280_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__59120280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59120280 = block;
   block->owner = (Object)__59120780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59120280;

   return block;
};

void code__59120780() {
{
      Value value = _58325_58717200_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__61405760())) {
    code__59120280();
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
                  src0 = _58325_58717200_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__61405580();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),_58325_58717200_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__59120780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59120780 = block;
   block->owner = (Object)__59121100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59120780;

   return block;
};

void code__59121100() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59215000_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61405880();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59120780();
   }
      }
   }
}

Block make__59121100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59121100 = block;
   block->owner = (Object)__59005760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59121100;

   return block;
};

void code__59005760() {
 code__59005600();
 code__59121100();
}

Block make__59005760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59005760 = block;
   block->owner = (Object)__58983380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59005760;

   return block;
};

void code__58983380() {
 code__58983220();
 code__58982440();
   {
      Value cond = fill_59214980_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59005760();
   }
      }
   }
}

Block make__58983380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58983380 = block;
   block->owner = (Object)__59217380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58983380;

   return block;
};

Block __61084080;

void code__61084080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_59214960_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_53918860_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_53918920_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__61084080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61084080 = block;
   block->owner = (Object)__61083840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61084080;

   return block;
};

Block __61084300;

void code__61084300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_59215020_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value,clk_58854700_counter_58_8400_58856540_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_53918880_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value,ack_58854680_counter_58_8400_58856540_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_59215000_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value,rst_58854660_counter_58_8400_58856540_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_58567280_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value,z__value_53813120_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__a0_58646320_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value,ack__layer_59554880_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__61084300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61084300 = block;
   block->owner = (Object)__61119100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61084300;

   return block;
};

Block __61084240;

void code__61084240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_58854620_counter_58_8400_58856540_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value,ack__mac_53918860_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_54188380_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value,value__a0_58646360_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__61084240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61084240 = block;
   block->owner = (Object)__61118940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61084240;

   return block;
};

Block __54187440;

Block __49084520;

void code__49084520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_52910000_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value,make_ref_rangeS(mem_53121360_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240,value2integer(abus__w_52909800_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value),value2integer(abus__w_52909800_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__49084520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49084520 = block;
   block->owner = (Object)__54187440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49084520;

   return block;
};

void code__54187440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_53121360_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value;
            idx = value2integer(abus__r_52909880_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_52740680_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_52563320_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49084520();
   }
      }
   }
}

Block make__54187440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54187440 = block;
   block->owner = (Object)__49734160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54187440;

   return block;
};

Block __61118220;

void code__61118220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_52740680_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value,_58266_54233860_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__61118220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61118220 = block;
   block->owner = (Object)__61118060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61118220;

   return block;
};

Block __61118020;

void code__61118020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58266_54233860_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value,dbus__r_52740680_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__61118020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61118020 = block;
   block->owner = (Object)__61117840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61118020;

   return block;
};

Block __61117440;

void code__61117440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_52563340_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value,_58264_54233840_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__61117440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61117440 = block;
   block->owner = (Object)__61117260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61117440;

   return block;
};

Block __61117220;

void code__61117220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58264_54233840_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value,trig__r_52563340_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__61117220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61117220 = block;
   block->owner = (Object)__61117000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61117220;

   return block;
};

Block __61116700;

void code__61116700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_52909880_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value,_58265_54233760_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__61116700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61116700 = block;
   block->owner = (Object)__61116540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61116700;

   return block;
};

Block __61116500;

void code__61116500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58265_54233760_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value,abus__r_52909880_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__61116500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61116500 = block;
   block->owner = (Object)__61116340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61116500;

   return block;
};

Block __61116040;

void code__61116040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_52563320_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value,_58268_58717180_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__61116040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61116040 = block;
   block->owner = (Object)__61115880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61116040;

   return block;
};

Block __61115840;

void code__61115840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58268_58717180_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value,trig__w_52563320_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__61115840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61115840 = block;
   block->owner = (Object)__61115640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61115840;

   return block;
};

Block __61115260;

void code__61115260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_52909800_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value,_58269_58717100_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__61115260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61115260 = block;
   block->owner = (Object)__61115080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61115260;

   return block;
};

Block __61115040;

void code__61115040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58269_58717100_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value,abus__w_52909800_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__61115040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61115040 = block;
   block->owner = (Object)__61114820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61115040;

   return block;
};

Block __61114520;

void code__61114520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_52910000_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value,_58270_58837200_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__61114520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61114520 = block;
   block->owner = (Object)__61114360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61114520;

   return block;
};

Block __61114320;

void code__61114320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58270_58837200_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value,dbus__w_52910000_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__61114320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61114320 = block;
   block->owner = (Object)__61114160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61114320;

   return block;
};

Block __61112440;

void code__61112440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_51769740_channel__accum_58281_49782620_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value,_58283_53562140_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__61112440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61112440 = block;
   block->owner = (Object)__61136800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61112440;

   return block;
};

Block __61136760;

void code__61136760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58283_53562140_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value,reg__0_51769740_channel__accum_58281_49782620_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__61136760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61136760 = block;
   block->owner = (Object)__61136600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61136760;

   return block;
};

Block __52909300;

Block __52909060;

Block __52908500;

void code__52908500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61355980(),_58265_54233760_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__52908500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52908500 = block;
   block->owner = (Object)__52909060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52908500;

   return block;
};

void code__52909060() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59215000_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61356240();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52908500();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61355900(),_58264_54233840_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__52909060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52909060 = block;
   block->owner = (Object)__52909300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52909060;

   return block;
};

Block __52907420;

Block __52907000;

void code__52907000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61355720(),_5845_59554740_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__52907000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52907000 = block;
   block->owner = (Object)__52907420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52907000;

   return block;
};

void code__52907420() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59215000_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61355800();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52907000();
   }
      }
   }
}

Block make__52907420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52907420 = block;
   block->owner = (Object)__52909300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52907420;

   return block;
};

Block __53168020;

Block __53167480;

Block __53167000;

Block __53190540;

void code__53190540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5843_59323640_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value,rv_52909860_mac__n1_58306_52333980_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__53190540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53190540 = block;
   block->owner = (Object)__53167000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53190540;

   return block;
};

Block __53608800;

void code__53608800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5844_59554940_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value,rv_52909860_mac__n1_58306_52333980_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__53608800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53608800 = block;
   block->owner = (Object)__53167000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53608800;

   return block;
};

void code__53167000() {
{
      Value value = _5845_59554740_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__61355180())) {
    code__53190540();
         }
         else if (value2integer(value) == value2integer(make__61355080())) {
    code__53608800();
         }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61354940(),rvok_52909540_mac__n1_58306_52333980_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
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
                  src0 = _5845_59554740_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__61354820();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5845_59554740_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__53167000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53167000 = block;
   block->owner = (Object)__53167480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53167000;

   return block;
};

void code__53167480() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59215000_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61355300();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53167000();
   }
      }
   }
}

Block make__53167480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53167480 = block;
   block->owner = (Object)__53168020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53167480;

   return block;
};

Block __43201240;

Block __43358340;

Block __43432520;

void code__43432520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58266_54233860_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value,lv0_52548060_mac__n1_58306_52333980_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61354440(),lvok0_52909740_mac__n1_58306_52333980_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__43432520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __43432520 = block;
   block->owner = (Object)__43358340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__43432520;

   return block;
};

void code__43358340() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58264_54233840_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61354600();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__43432520();
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
                  src0 = _58265_54233760_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__61354320();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58265_54233760_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61354200(),_58264_54233840_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__43358340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __43358340 = block;
   block->owner = (Object)__43201240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__43358340;

   return block;
};

void code__43201240() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59215000_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61354700();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__43358340();
   }
      }
   }
}

Block make__43201240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __43201240 = block;
   block->owner = (Object)__53168020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__43201240;

   return block;
};

Block __49450820;

Block __49449880;

Block __49449620;

void code__49449620() {
}

Block make__49449620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49449620 = block;
   block->owner = (Object)__49449880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49449620;

   return block;
};

Block __49273220;

void code__49273220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_52746060_mac__n1_58306_52333980_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value,_58283_53562140_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__49273220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49273220 = block;
   block->owner = (Object)__49449880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49273220;

   return block;
};

void code__49449880() {
 code__49449620();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av0_52746060_mac__n1_58306_52333980_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value;
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
                              src0 = lv0_52548060_mac__n1_58306_52333980_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_52909860_mac__n1_58306_52333980_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__61353520();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_52746060_mac__n1_58306_52333980_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
 code__49273220();
}

Block make__49449880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49449880 = block;
   block->owner = (Object)__49450820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49449880;

   return block;
};

void code__49450820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61354020(),ack_53918880_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61353900(),run_52909480_mac__n1_58306_52333980_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
 code__49449880();
}

Block make__49450820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49450820 = block;
   block->owner = (Object)__53168020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49450820;

   return block;
};

void code__53168020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61355380(),run_52909480_mac__n1_58306_52333980_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
 code__53167480();
 code__43201240();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_52909740_mac__n1_58306_52333980_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value;
         src1 = rvok_52909540_mac__n1_58306_52333980_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49450820();
   }
      }
   }
}

Block make__53168020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53168020 = block;
   block->owner = (Object)__52909300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53168020;

   return block;
};

Block __52905360;

void code__52905360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61353280(),rvok_52909540_mac__n1_58306_52333980_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61353220(),lvok0_52909740_mac__n1_58306_52333980_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61353160(),av0_52746060_mac__n1_58306_52333980_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__52905360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52905360 = block;
   block->owner = (Object)__52909300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52905360;

   return block;
};

void code__52909300() {
 code__52909060();
 code__52907420();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61355640(),ack_53918880_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61355540(),run_52909480_mac__n1_58306_52333980_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_53918920_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value;
         src1 = run_52909480_mac__n1_58306_52333980_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53168020();
   }
   else {
  code__52905360();
   }
      }
   }
}

Block make__52909300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52909300 = block;
   block->owner = (Object)__51857340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52909300;

   return block;
};

Block __61134680;

void code__61134680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_52402580_channel__bias_58311_51857140_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value,_58313_51044420_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__61134680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61134680 = block;
   block->owner = (Object)__61134520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61134680;

   return block;
};

Block __61134480;

void code__61134480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58313_51044420_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value,reg__0_52402580_channel__bias_58311_51857140_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__61134480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61134480 = block;
   block->owner = (Object)__61134320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61134480;

   return block;
};

Block __61133980;

void code__61133980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_52402580_channel__bias_58311_51857140_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value,_58324_58717280_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__61133980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61133980 = block;
   block->owner = (Object)__61133800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61133980;

   return block;
};

Block __61133720;

void code__61133720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58324_58717280_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value,reg__0_52402580_channel__bias_58311_51857140_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__61133720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61133720 = block;
   block->owner = (Object)__61133560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61133720;

   return block;
};

Block __61131840;

void code__61131840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_51795600_winc_58323_51796260_channel__bias_58311_51857140_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value,_58325_58717200_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__61131840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61131840 = block;
   block->owner = (Object)__61131620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61131840;

   return block;
};

Block __61131580;

void code__61131580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58325_58717200_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value,abus__w_51795600_winc_58323_51796260_channel__bias_58311_51857140_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__61131580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61131580 = block;
   block->owner = (Object)__61131420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61131580;

   return block;
};

Block __61130200;

void code__61130200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_47953620_channel__z_58334_45876160_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value,_58336_58438980_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__61130200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61130200 = block;
   block->owner = (Object)__61130040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61130200;

   return block;
};

Block __61130000;

void code__61130000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58336_58438980_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value,reg__0_47953620_channel__z_58334_45876160_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__61130000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61130000 = block;
   block->owner = (Object)__61129800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61130000;

   return block;
};

Block __49097500;

Block __49095220;

Block __51691240;

void code__51691240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58283_53562140_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value,lv0_49670500_add__n_58357_49387960_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61351680(),lvok0_49098200_add__n_58357_49387960_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__51691240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51691240 = block;
   block->owner = (Object)__49095220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51691240;

   return block;
};

Block __52335620;

void code__52335620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58313_51044420_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value,rv0_49098260_add__n_58357_49387960_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61351520(),rvok0_49098140_add__n_58357_49387960_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__52335620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52335620 = block;
   block->owner = (Object)__49095220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52335620;

   return block;
};

Block __52811900;

Block __52811120;

void code__52811120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_49670500_add__n_58357_49387960_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value;
      src1 = rv0_49098260_add__n_58357_49387960_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58336_58438980_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__52811120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52811120 = block;
   block->owner = (Object)__52811900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52811120;

   return block;
};

void code__52811900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61351340(),run_49098080_add__n_58357_49387960_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61351260(),ack__add_53918840_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
 code__52811120();
}

Block make__52811900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52811900 = block;
   block->owner = (Object)__49095220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52811900;

   return block;
};

void code__49095220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61351820(),run_49098080_add__n_58357_49387960_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
 code__51691240();
 code__52335620();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_49098200_add__n_58357_49387960_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value;
         src1 = rvok0_49098140_add__n_58357_49387960_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__52811900();
   }
      }
   }
}

Block make__49095220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49095220 = block;
   block->owner = (Object)__49097500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49095220;

   return block;
};

Block __49096240;

void code__49096240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61350980(),lvok0_49098200_add__n_58357_49387960_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61350920(),rvok0_49098140_add__n_58357_49387960_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__49096240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49096240 = block;
   block->owner = (Object)__49097500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49096240;

   return block;
};

void code__49097500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61352120(),ack__add_53918840_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61352040(),run_49098080_add__n_58357_49387960_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_53918860_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value;
         src1 = run_49098080_add__n_58357_49387960_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49095220();
   }
   else {
  code__49096240();
   }
      }
   }
}

Block make__49097500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49097500 = block;
   block->owner = (Object)__53919420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49097500;

   return block;
};

Value make__61356240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61355980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61355900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61355800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61355720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61355640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61355540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61355380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61355300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61355180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61355080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61354940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61354820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61354700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61354600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61354440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61354320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61354200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61354020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61353900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61353520() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61353280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61353220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61353160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61352120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61352040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61351820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61351680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61351520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61351340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61351260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61350980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61350920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61407160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61407040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61406860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61406780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61406700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__61406600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61406500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61406440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61406260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61406120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61406020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61405960() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61405880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61405760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__61405700() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61405580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope layer1_58_84_52544560;

SignalI req__mac_53918920_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI makereq__mac_53918920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_53918920_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer1_58_84_52544560;
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

SignalI ack_53918880_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI makeack_53918880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_53918880_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer1_58_84_52544560;
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

SignalI ack__mac_53918860_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI makeack__mac_53918860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_53918860_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer1_58_84_52544560;
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

SignalI ack__add_53918840_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI makeack__add_53918840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_53918840_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer1_58_84_52544560;
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

SignalI _58266_54233860_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI make_58266_54233860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58266_54233860_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer1_58_84_52544560;
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

SignalI _58264_54233840_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI make_58264_54233840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58264_54233840_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer1_58_84_52544560;
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

SignalI _58265_54233760_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI make_58265_54233760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58265_54233760_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer1_58_84_52544560;
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

SignalI _58283_53562140_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI make_58283_53562140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58283_53562140_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer1_58_84_52544560;
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

SignalI _58313_51044420_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI make_58313_51044420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58313_51044420_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer1_58_84_52544560;
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

SignalI _58336_58438980_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI make_58336_58438980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58336_58438980_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer1_58_84_52544560;
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

SignalI value__z0_58567280_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI makevalue__z0_58567280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_58567280_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer1_58_84_52544560;
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

SignalI value__a0_58646360_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI makevalue__a0_58646360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_58646360_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer1_58_84_52544560;
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

SignalI flag__z0_58646340_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI makeflag__z0_58646340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_58646340_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer1_58_84_52544560;
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

SignalI ack__a0_58646320_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI makeack__a0_58646320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_58646320_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer1_58_84_52544560;
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

SignalI _58324_58717280_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI make_58324_58717280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58324_58717280_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer1_58_84_52544560;
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

SignalI _58325_58717200_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI make_58325_58717200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58325_58717200_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer1_58_84_52544560;
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

SignalI _58268_58717180_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI make_58268_58717180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58268_58717180_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer1_58_84_52544560;
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

SignalI _58269_58717100_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI make_58269_58717100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58269_58717100_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer1_58_84_52544560;
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

SignalI _58270_58837200_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI make_58270_58837200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58270_58837200_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)layer1_58_84_52544560;
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

SystemI counter_58854480;

SystemI makecounter_58854480() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_58854480 = systemI;
   systemI->owner = (Object)layer1_58_84_52544560;
   systemI->name = "counter";
   systemI->system = counter_58_8400_58856540;

   return systemI;
};

SystemI func0_54187900;

SystemI makefunc0_54187900() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_54187900 = systemI;
   systemI->owner = (Object)layer1_58_84_52544560;
   systemI->name = "func0";
   systemI->system = func0_58_8400_53350780;

   return systemI;
};

Scope channel__w0_58252_52544120;

SignalI trig__r_52563340_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI maketrig__r_52563340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_52563340_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)channel__w0_58252_52544120;
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

SignalI trig__w_52563320_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI maketrig__w_52563320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_52563320_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)channel__w0_58252_52544120;
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

SignalI dbus__r_52740680_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI makedbus__r_52740680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_52740680_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)channel__w0_58252_52544120;
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

SignalI dbus__w_52910000_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI makedbus__w_52910000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_52910000_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)channel__w0_58252_52544120;
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

SignalI abus__r_52909880_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI makeabus__r_52909880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_52909880_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)channel__w0_58252_52544120;
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

SignalI abus__w_52909800_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI makeabus__w_52909800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_52909800_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)channel__w0_58252_52544120;
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

SignalI mem_53121360_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI makemem_53121360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_53121360_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)channel__w0_58252_52544120;
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

Scope raddr_58253_52567840;

Scope makeraddr_58253_52567840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58253_52567840 = scope;
   scope->owner = (Object)channel__w0_58252_52544120;
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

Scope waddr_58258_52566660;

Scope makewaddr_58258_52566660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58258_52566660 = scope;
   scope->owner = (Object)channel__w0_58252_52544120;
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

Scope rinc_58263_52566240;

Scope makerinc_58263_52566240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58263_52566240 = scope;
   scope->owner = (Object)channel__w0_58252_52544120;
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

Scope winc_58267_52565660;

Scope makewinc_58267_52565660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58267_52565660 = scope;
   scope->owner = (Object)channel__w0_58252_52544120;
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

Scope rdec_58271_52564680;

Scope makerdec_58271_52564680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58271_52564680 = scope;
   scope->owner = (Object)channel__w0_58252_52544120;
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

Scope wdec_58276_52563980;

Scope makewdec_58276_52563980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58276_52563980 = scope;
   scope->owner = (Object)channel__w0_58252_52544120;
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

Behavior __49734160;

Behavior make__49734160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49734160 = behavior;
   behavior->owner = (Object)channel__w0_58252_52544120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_59215020_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
   clk_59215020_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_neg += 1;
   clk_59215020_layer1_58_840_59217060______58_84_49155820______58_840_59987240->neg = realloc(clk_59215020_layer1_58_840_59217060______58_84_49155820______58_840_59987240->neg,clk_59215020_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_neg*sizeof(Object));
clk_59215020_layer1_58_840_59217060______58_84_49155820______58_840_59987240->neg[clk_59215020_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_neg-1] = (Object)behavior;
   behavior->block = make__54187440();

   return behavior;
}

Behavior __61118060;

Behavior make__61118060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61118060 = behavior;
   behavior->owner = (Object)channel__w0_58252_52544120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_52740680_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
   dbus__r_52740680_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any += 1;
   dbus__r_52740680_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any = realloc(dbus__r_52740680_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any,dbus__r_52740680_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
dbus__r_52740680_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any[dbus__r_52740680_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__61118220();

   return behavior;
}

Behavior __61117840;

Behavior make__61117840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61117840 = behavior;
   behavior->owner = (Object)channel__w0_58252_52544120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58266_54233860_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
   _58266_54233860_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any += 1;
   _58266_54233860_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any = realloc(_58266_54233860_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any,_58266_54233860_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
_58266_54233860_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any[_58266_54233860_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__61118020();

   return behavior;
}

Behavior __61117260;

Behavior make__61117260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61117260 = behavior;
   behavior->owner = (Object)channel__w0_58252_52544120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_52563340_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
   trig__r_52563340_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any += 1;
   trig__r_52563340_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any = realloc(trig__r_52563340_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any,trig__r_52563340_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
trig__r_52563340_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any[trig__r_52563340_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__61117440();

   return behavior;
}

Behavior __61117000;

Behavior make__61117000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61117000 = behavior;
   behavior->owner = (Object)channel__w0_58252_52544120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58264_54233840_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
   _58264_54233840_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any += 1;
   _58264_54233840_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any = realloc(_58264_54233840_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any,_58264_54233840_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
_58264_54233840_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any[_58264_54233840_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__61117220();

   return behavior;
}

Behavior __61116540;

Behavior make__61116540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61116540 = behavior;
   behavior->owner = (Object)channel__w0_58252_52544120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_52909880_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
   abus__r_52909880_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any += 1;
   abus__r_52909880_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any = realloc(abus__r_52909880_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any,abus__r_52909880_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
abus__r_52909880_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any[abus__r_52909880_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__61116700();

   return behavior;
}

Behavior __61116340;

Behavior make__61116340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61116340 = behavior;
   behavior->owner = (Object)channel__w0_58252_52544120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58265_54233760_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
   _58265_54233760_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any += 1;
   _58265_54233760_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any = realloc(_58265_54233760_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any,_58265_54233760_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
_58265_54233760_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any[_58265_54233760_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__61116500();

   return behavior;
}

Behavior __61115880;

Behavior make__61115880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61115880 = behavior;
   behavior->owner = (Object)channel__w0_58252_52544120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_52563320_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
   trig__w_52563320_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any += 1;
   trig__w_52563320_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any = realloc(trig__w_52563320_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any,trig__w_52563320_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
trig__w_52563320_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any[trig__w_52563320_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__61116040();

   return behavior;
}

Behavior __61115640;

Behavior make__61115640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61115640 = behavior;
   behavior->owner = (Object)channel__w0_58252_52544120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58268_58717180_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
   _58268_58717180_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any += 1;
   _58268_58717180_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any = realloc(_58268_58717180_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any,_58268_58717180_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
_58268_58717180_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any[_58268_58717180_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__61115840();

   return behavior;
}

Behavior __61115080;

Behavior make__61115080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61115080 = behavior;
   behavior->owner = (Object)channel__w0_58252_52544120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_52909800_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
   abus__w_52909800_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any += 1;
   abus__w_52909800_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any = realloc(abus__w_52909800_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any,abus__w_52909800_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
abus__w_52909800_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any[abus__w_52909800_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__61115260();

   return behavior;
}

Behavior __61114820;

Behavior make__61114820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61114820 = behavior;
   behavior->owner = (Object)channel__w0_58252_52544120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58269_58717100_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
   _58269_58717100_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any += 1;
   _58269_58717100_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any = realloc(_58269_58717100_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any,_58269_58717100_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
_58269_58717100_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any[_58269_58717100_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__61115040();

   return behavior;
}

Behavior __61114360;

Behavior make__61114360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61114360 = behavior;
   behavior->owner = (Object)channel__w0_58252_52544120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_52910000_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
   dbus__w_52910000_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any += 1;
   dbus__w_52910000_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any = realloc(dbus__w_52910000_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any,dbus__w_52910000_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
dbus__w_52910000_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any[dbus__w_52910000_channel__w0_58252_52544120_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__61114520();

   return behavior;
}

Behavior __61114160;

Behavior make__61114160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61114160 = behavior;
   behavior->owner = (Object)channel__w0_58252_52544120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58270_58837200_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
   _58270_58837200_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any += 1;
   _58270_58837200_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any = realloc(_58270_58837200_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any,_58270_58837200_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
_58270_58837200_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any[_58270_58837200_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__61114320();

   return behavior;
}

Scope makechannel__w0_58252_52544120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58252_52544120 = scope;
   scope->owner = (Object)layer1_58_84_52544560;
   scope->name = "channel_w0:252";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_52563340();
   scope->inners[1] = maketrig__w_52563320();
   scope->inners[2] = makedbus__r_52740680();
   scope->inners[3] = makedbus__w_52910000();
   scope->inners[4] = makeabus__r_52909880();
   scope->inners[5] = makeabus__w_52909800();
   scope->inners[6] = makemem_53121360();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58253_52567840();
   scope->scopes[1] = makewaddr_58258_52566660();
   scope->scopes[2] = makerinc_58263_52566240();
   scope->scopes[3] = makewinc_58267_52565660();
   scope->scopes[4] = makerdec_58271_52564680();
   scope->scopes[5] = makewdec_58276_52563980();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49734160();
   scope->behaviors[1] = make__61118060();
   scope->behaviors[2] = make__61117840();
   scope->behaviors[3] = make__61117260();
   scope->behaviors[4] = make__61117000();
   scope->behaviors[5] = make__61116540();
   scope->behaviors[6] = make__61116340();
   scope->behaviors[7] = make__61115880();
   scope->behaviors[8] = make__61115640();
   scope->behaviors[9] = make__61115080();
   scope->behaviors[10] = make__61114820();
   scope->behaviors[11] = make__61114360();
   scope->behaviors[12] = make__61114160();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58281_49782620;

SignalI reg__0_51769740_channel__accum_58281_49782620_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI makereg__0_51769740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_51769740_channel__accum_58281_49782620_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)channel__accum_58281_49782620;
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

Scope anum_58282_49780320;

Scope makeanum_58282_49780320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58282_49780320 = scope;
   scope->owner = (Object)channel__accum_58281_49782620;
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

Scope raddr_58284_49779320;

Scope makeraddr_58284_49779320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58284_49779320 = scope;
   scope->owner = (Object)channel__accum_58281_49782620;
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

Scope waddr_58287_49774680;

Scope makewaddr_58287_49774680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58287_49774680 = scope;
   scope->owner = (Object)channel__accum_58281_49782620;
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

Scope rinc_58290_49791120;

SignalI abus__r_49811860_rinc_58290_49791120_channel__accum_58281_49782620_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI makeabus__r_49811860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49811860_rinc_58290_49791120_channel__accum_58281_49782620_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)rinc_58290_49791120;
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

Scope makerinc_58290_49791120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58290_49791120 = scope;
   scope->owner = (Object)channel__accum_58281_49782620;
   scope->name = "rinc:290";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49811860();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58294_49811520;

SignalI abus__w_49810440_winc_58294_49811520_channel__accum_58281_49782620_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI makeabus__w_49810440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49810440_winc_58294_49811520_channel__accum_58281_49782620_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)winc_58294_49811520;
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

Scope makewinc_58294_49811520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58294_49811520 = scope;
   scope->owner = (Object)channel__accum_58281_49782620;
   scope->name = "winc:294";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49810440();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58298_49809920;

SignalI abus__r_49809200_rdec_58298_49809920_channel__accum_58281_49782620_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI makeabus__r_49809200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49809200_rdec_58298_49809920_channel__accum_58281_49782620_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)rdec_58298_49809920;
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

Scope makerdec_58298_49809920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58298_49809920 = scope;
   scope->owner = (Object)channel__accum_58281_49782620;
   scope->name = "rdec:298";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49809200();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58302_49809000;

SignalI abus__w_49808020_wdec_58302_49809000_channel__accum_58281_49782620_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI makeabus__w_49808020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49808020_wdec_58302_49809000_channel__accum_58281_49782620_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)wdec_58302_49809000;
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

Scope makewdec_58302_49809000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58302_49809000 = scope;
   scope->owner = (Object)channel__accum_58281_49782620;
   scope->name = "wdec:302";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49808020();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __61136800;

Behavior make__61136800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61136800 = behavior;
   behavior->owner = (Object)channel__accum_58281_49782620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_51769740_channel__accum_58281_49782620_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
   reg__0_51769740_channel__accum_58281_49782620_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any += 1;
   reg__0_51769740_channel__accum_58281_49782620_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any = realloc(reg__0_51769740_channel__accum_58281_49782620_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any,reg__0_51769740_channel__accum_58281_49782620_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
reg__0_51769740_channel__accum_58281_49782620_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any[reg__0_51769740_channel__accum_58281_49782620_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__61112440();

   return behavior;
}

Behavior __61136600;

Behavior make__61136600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61136600 = behavior;
   behavior->owner = (Object)channel__accum_58281_49782620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58283_53562140_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
   _58283_53562140_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any += 1;
   _58283_53562140_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any = realloc(_58283_53562140_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any,_58283_53562140_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
_58283_53562140_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any[_58283_53562140_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__61136760();

   return behavior;
}

Scope makechannel__accum_58281_49782620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58281_49782620 = scope;
   scope->owner = (Object)layer1_58_84_52544560;
   scope->name = "channel_accum:281";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_51769740();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58282_49780320();
   scope->scopes[1] = makeraddr_58284_49779320();
   scope->scopes[2] = makewaddr_58287_49774680();
   scope->scopes[3] = makerinc_58290_49791120();
   scope->scopes[4] = makewinc_58294_49811520();
   scope->scopes[5] = makerdec_58298_49809920();
   scope->scopes[6] = makewdec_58302_49809000();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__61136800();
   scope->behaviors[1] = make__61136600();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58306_52333980;

SignalI lv0_52548060_mac__n1_58306_52333980_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI makelv0_52548060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_52548060_mac__n1_58306_52333980_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)mac__n1_58306_52333980;
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

SignalI av0_52746060_mac__n1_58306_52333980_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI makeav0_52746060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_52746060_mac__n1_58306_52333980_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)mac__n1_58306_52333980;
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

SignalI rv_52909860_mac__n1_58306_52333980_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI makerv_52909860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_52909860_mac__n1_58306_52333980_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)mac__n1_58306_52333980;
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

SignalI lvok0_52909740_mac__n1_58306_52333980_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI makelvok0_52909740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_52909740_mac__n1_58306_52333980_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)mac__n1_58306_52333980;
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

SignalI rvok_52909540_mac__n1_58306_52333980_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI makervok_52909540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_52909540_mac__n1_58306_52333980_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)mac__n1_58306_52333980;
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

SignalI run_52909480_mac__n1_58306_52333980_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI makerun_52909480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_52909480_mac__n1_58306_52333980_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)mac__n1_58306_52333980;
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

Behavior __51857340;

Behavior make__51857340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51857340 = behavior;
   behavior->owner = (Object)mac__n1_58306_52333980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_59215020_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
   clk_59215020_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_pos += 1;
   clk_59215020_layer1_58_840_59217060______58_84_49155820______58_840_59987240->pos = realloc(clk_59215020_layer1_58_840_59217060______58_84_49155820______58_840_59987240->pos,clk_59215020_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_pos*sizeof(Object));
clk_59215020_layer1_58_840_59217060______58_84_49155820______58_840_59987240->pos[clk_59215020_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_pos-1] = (Object)behavior;
   behavior->block = make__52909300();

   return behavior;
}

Scope makemac__n1_58306_52333980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58306_52333980 = scope;
   scope->owner = (Object)layer1_58_84_52544560;
   scope->name = "mac_n1:306";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 6;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_52548060();
   scope->inners[1] = makeav0_52746060();
   scope->inners[2] = makerv_52909860();
   scope->inners[3] = makelvok0_52909740();
   scope->inners[4] = makervok_52909540();
   scope->inners[5] = makerun_52909480();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51857340();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__bias_58311_51857140;

SignalI reg__0_52402580_channel__bias_58311_51857140_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI makereg__0_52402580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_52402580_channel__bias_58311_51857140_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)channel__bias_58311_51857140;
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

Scope anum_58312_51856760;

Scope makeanum_58312_51856760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58312_51856760 = scope;
   scope->owner = (Object)channel__bias_58311_51857140;
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

Scope raddr_58314_51856260;

Scope makeraddr_58314_51856260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58314_51856260 = scope;
   scope->owner = (Object)channel__bias_58311_51857140;
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

Scope waddr_58317_51797840;

Scope makewaddr_58317_51797840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58317_51797840 = scope;
   scope->owner = (Object)channel__bias_58311_51857140;
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

Scope rinc_58320_51797180;

SignalI abus__r_51796520_rinc_58320_51797180_channel__bias_58311_51857140_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI makeabus__r_51796520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_51796520_rinc_58320_51797180_channel__bias_58311_51857140_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)rinc_58320_51797180;
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

Scope makerinc_58320_51797180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58320_51797180 = scope;
   scope->owner = (Object)channel__bias_58311_51857140;
   scope->name = "rinc:320";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_51796520();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58323_51796260;

SignalI abus__w_51795600_winc_58323_51796260_channel__bias_58311_51857140_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI makeabus__w_51795600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_51795600_winc_58323_51796260_channel__bias_58311_51857140_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)winc_58323_51796260;
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

Behavior __61131620;

Behavior make__61131620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61131620 = behavior;
   behavior->owner = (Object)winc_58323_51796260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_51795600_winc_58323_51796260_channel__bias_58311_51857140_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
   abus__w_51795600_winc_58323_51796260_channel__bias_58311_51857140_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any += 1;
   abus__w_51795600_winc_58323_51796260_channel__bias_58311_51857140_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any = realloc(abus__w_51795600_winc_58323_51796260_channel__bias_58311_51857140_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any,abus__w_51795600_winc_58323_51796260_channel__bias_58311_51857140_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
abus__w_51795600_winc_58323_51796260_channel__bias_58311_51857140_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any[abus__w_51795600_winc_58323_51796260_channel__bias_58311_51857140_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__61131840();

   return behavior;
}

Behavior __61131420;

Behavior make__61131420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61131420 = behavior;
   behavior->owner = (Object)winc_58323_51796260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58325_58717200_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
   _58325_58717200_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any += 1;
   _58325_58717200_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any = realloc(_58325_58717200_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any,_58325_58717200_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
_58325_58717200_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any[_58325_58717200_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__61131580();

   return behavior;
}

Scope makewinc_58323_51796260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58323_51796260 = scope;
   scope->owner = (Object)channel__bias_58311_51857140;
   scope->name = "winc:323";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_51795600();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__61131620();
   scope->behaviors[1] = make__61131420();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58326_51794960;

SignalI abus__r_51794180_rdec_58326_51794960_channel__bias_58311_51857140_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI makeabus__r_51794180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_51794180_rdec_58326_51794960_channel__bias_58311_51857140_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)rdec_58326_51794960;
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

Scope makerdec_58326_51794960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58326_51794960 = scope;
   scope->owner = (Object)channel__bias_58311_51857140;
   scope->name = "rdec:326";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_51794180();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58330_51793880;

SignalI abus__w_51792140_wdec_58330_51793880_channel__bias_58311_51857140_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI makeabus__w_51792140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_51792140_wdec_58330_51793880_channel__bias_58311_51857140_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)wdec_58330_51793880;
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

Scope makewdec_58330_51793880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58330_51793880 = scope;
   scope->owner = (Object)channel__bias_58311_51857140;
   scope->name = "wdec:330";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_51792140();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __61134520;

Behavior make__61134520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61134520 = behavior;
   behavior->owner = (Object)channel__bias_58311_51857140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_52402580_channel__bias_58311_51857140_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
   reg__0_52402580_channel__bias_58311_51857140_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any += 1;
   reg__0_52402580_channel__bias_58311_51857140_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any = realloc(reg__0_52402580_channel__bias_58311_51857140_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any,reg__0_52402580_channel__bias_58311_51857140_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
reg__0_52402580_channel__bias_58311_51857140_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any[reg__0_52402580_channel__bias_58311_51857140_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__61134680();

   return behavior;
}

Behavior __61134320;

Behavior make__61134320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61134320 = behavior;
   behavior->owner = (Object)channel__bias_58311_51857140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58313_51044420_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
   _58313_51044420_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any += 1;
   _58313_51044420_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any = realloc(_58313_51044420_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any,_58313_51044420_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
_58313_51044420_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any[_58313_51044420_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__61134480();

   return behavior;
}

Behavior __61133800;

Behavior make__61133800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61133800 = behavior;
   behavior->owner = (Object)channel__bias_58311_51857140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_52402580_channel__bias_58311_51857140_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
   reg__0_52402580_channel__bias_58311_51857140_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any += 1;
   reg__0_52402580_channel__bias_58311_51857140_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any = realloc(reg__0_52402580_channel__bias_58311_51857140_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any,reg__0_52402580_channel__bias_58311_51857140_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
reg__0_52402580_channel__bias_58311_51857140_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any[reg__0_52402580_channel__bias_58311_51857140_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__61133980();

   return behavior;
}

Behavior __61133560;

Behavior make__61133560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61133560 = behavior;
   behavior->owner = (Object)channel__bias_58311_51857140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58324_58717280_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
   _58324_58717280_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any += 1;
   _58324_58717280_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any = realloc(_58324_58717280_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any,_58324_58717280_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
_58324_58717280_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any[_58324_58717280_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__61133720();

   return behavior;
}

Scope makechannel__bias_58311_51857140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__bias_58311_51857140 = scope;
   scope->owner = (Object)layer1_58_84_52544560;
   scope->name = "channel_bias:311";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_52402580();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58312_51856760();
   scope->scopes[1] = makeraddr_58314_51856260();
   scope->scopes[2] = makewaddr_58317_51797840();
   scope->scopes[3] = makerinc_58320_51797180();
   scope->scopes[4] = makewinc_58323_51796260();
   scope->scopes[5] = makerdec_58326_51794960();
   scope->scopes[6] = makewdec_58330_51793880();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__61134520();
   scope->behaviors[1] = make__61134320();
   scope->behaviors[2] = make__61133800();
   scope->behaviors[3] = make__61133560();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58334_45876160;

SignalI reg__0_47953620_channel__z_58334_45876160_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI makereg__0_47953620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_47953620_channel__z_58334_45876160_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)channel__z_58334_45876160;
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

Scope anum_58335_45907500;

Scope makeanum_58335_45907500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58335_45907500 = scope;
   scope->owner = (Object)channel__z_58334_45876160;
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

Scope raddr_58337_45906320;

Scope makeraddr_58337_45906320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58337_45906320 = scope;
   scope->owner = (Object)channel__z_58334_45876160;
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

Scope waddr_58340_46451500;

Scope makewaddr_58340_46451500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58340_46451500 = scope;
   scope->owner = (Object)channel__z_58334_45876160;
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

Scope rinc_58343_46870360;

SignalI abus__r_46868580_rinc_58343_46870360_channel__z_58334_45876160_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI makeabus__r_46868580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_46868580_rinc_58343_46870360_channel__z_58334_45876160_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)rinc_58343_46870360;
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

Scope makerinc_58343_46870360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58343_46870360 = scope;
   scope->owner = (Object)channel__z_58334_45876160;
   scope->name = "rinc:343";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_46868580();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58346_46868280;

SignalI abus__w_46867120_winc_58346_46868280_channel__z_58334_45876160_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI makeabus__w_46867120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_46867120_winc_58346_46868280_channel__z_58334_45876160_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)winc_58346_46868280;
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

Scope makewinc_58346_46868280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58346_46868280 = scope;
   scope->owner = (Object)channel__z_58334_45876160;
   scope->name = "winc:346";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_46867120();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58349_46866480;

SignalI abus__r_46885860_rdec_58349_46866480_channel__z_58334_45876160_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI makeabus__r_46885860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_46885860_rdec_58349_46866480_channel__z_58334_45876160_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)rdec_58349_46866480;
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

Scope makerdec_58349_46866480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58349_46866480 = scope;
   scope->owner = (Object)channel__z_58334_45876160;
   scope->name = "rdec:349";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_46885860();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58353_46883960;

SignalI abus__w_46883160_wdec_58353_46883960_channel__z_58334_45876160_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI makeabus__w_46883160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_46883160_wdec_58353_46883960_channel__z_58334_45876160_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)wdec_58353_46883960;
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

Scope makewdec_58353_46883960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58353_46883960 = scope;
   scope->owner = (Object)channel__z_58334_45876160;
   scope->name = "wdec:353";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_46883160();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __61130040;

Behavior make__61130040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61130040 = behavior;
   behavior->owner = (Object)channel__z_58334_45876160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_47953620_channel__z_58334_45876160_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
   reg__0_47953620_channel__z_58334_45876160_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any += 1;
   reg__0_47953620_channel__z_58334_45876160_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any = realloc(reg__0_47953620_channel__z_58334_45876160_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any,reg__0_47953620_channel__z_58334_45876160_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
reg__0_47953620_channel__z_58334_45876160_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any[reg__0_47953620_channel__z_58334_45876160_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__61130200();

   return behavior;
}

Behavior __61129800;

Behavior make__61129800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61129800 = behavior;
   behavior->owner = (Object)channel__z_58334_45876160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58336_58438980_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
   _58336_58438980_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any += 1;
   _58336_58438980_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any = realloc(_58336_58438980_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any,_58336_58438980_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
_58336_58438980_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any[_58336_58438980_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__61130000();

   return behavior;
}

Scope makechannel__z_58334_45876160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58334_45876160 = scope;
   scope->owner = (Object)layer1_58_84_52544560;
   scope->name = "channel_z:334";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_47953620();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58335_45907500();
   scope->scopes[1] = makeraddr_58337_45906320();
   scope->scopes[2] = makewaddr_58340_46451500();
   scope->scopes[3] = makerinc_58343_46870360();
   scope->scopes[4] = makewinc_58346_46868280();
   scope->scopes[5] = makerdec_58349_46866480();
   scope->scopes[6] = makewdec_58353_46883960();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__61130040();
   scope->behaviors[1] = make__61129800();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58357_49387960;

SignalI lv0_49670500_add__n_58357_49387960_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI makelv0_49670500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_49670500_add__n_58357_49387960_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)add__n_58357_49387960;
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

SignalI rv0_49098260_add__n_58357_49387960_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI makerv0_49098260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_49098260_add__n_58357_49387960_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)add__n_58357_49387960;
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

SignalI lvok0_49098200_add__n_58357_49387960_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI makelvok0_49098200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_49098200_add__n_58357_49387960_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)add__n_58357_49387960;
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

SignalI rvok0_49098140_add__n_58357_49387960_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI makervok0_49098140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_49098140_add__n_58357_49387960_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)add__n_58357_49387960;
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

SignalI run_49098080_add__n_58357_49387960_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240;

SignalI makerun_49098080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_49098080_add__n_58357_49387960_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)add__n_58357_49387960;
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

Behavior __53919420;

Behavior make__53919420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53919420 = behavior;
   behavior->owner = (Object)add__n_58357_49387960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_59215020_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
   clk_59215020_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_pos += 1;
   clk_59215020_layer1_58_840_59217060______58_84_49155820______58_840_59987240->pos = realloc(clk_59215020_layer1_58_840_59217060______58_84_49155820______58_840_59987240->pos,clk_59215020_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_pos*sizeof(Object));
clk_59215020_layer1_58_840_59217060______58_84_49155820______58_840_59987240->pos[clk_59215020_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_pos-1] = (Object)behavior;
   behavior->block = make__49097500();

   return behavior;
}

Scope makeadd__n_58357_49387960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58357_49387960 = scope;
   scope->owner = (Object)layer1_58_84_52544560;
   scope->name = "add_n:357";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_49670500();
   scope->inners[1] = makerv0_49098260();
   scope->inners[2] = makelvok0_49098200();
   scope->inners[3] = makervok0_49098140();
   scope->inners[4] = makerun_49098080();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53919420();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __58731180;

Behavior make__58731180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58731180 = behavior;
   behavior->owner = (Object)layer1_58_84_52544560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_59215020_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
   clk_59215020_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_pos += 1;
   clk_59215020_layer1_58_840_59217060______58_84_49155820______58_840_59987240->pos = realloc(clk_59215020_layer1_58_840_59217060______58_84_49155820______58_840_59987240->pos,clk_59215020_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_pos*sizeof(Object));
clk_59215020_layer1_58_840_59217060______58_84_49155820______58_840_59987240->pos[clk_59215020_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_pos-1] = (Object)behavior;
   behavior->block = make__58564640();

   return behavior;
}

Behavior __58983500;

Behavior make__58983500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58983500 = behavior;
   behavior->owner = (Object)layer1_58_84_52544560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_59215020_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
   clk_59215020_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_pos += 1;
   clk_59215020_layer1_58_840_59217060______58_84_49155820______58_840_59987240->pos = realloc(clk_59215020_layer1_58_840_59217060______58_84_49155820______58_840_59987240->pos,clk_59215020_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_pos*sizeof(Object));
clk_59215020_layer1_58_840_59217060______58_84_49155820______58_840_59987240->pos[clk_59215020_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_pos-1] = (Object)behavior;
   behavior->block = make__58731000();

   return behavior;
}

Behavior __59217380;

Behavior make__59217380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59217380 = behavior;
   behavior->owner = (Object)layer1_58_84_52544560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_59215020_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
   clk_59215020_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_pos += 1;
   clk_59215020_layer1_58_840_59217060______58_84_49155820______58_840_59987240->pos = realloc(clk_59215020_layer1_58_840_59217060______58_84_49155820______58_840_59987240->pos,clk_59215020_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_pos*sizeof(Object));
clk_59215020_layer1_58_840_59217060______58_84_49155820______58_840_59987240->pos[clk_59215020_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_pos-1] = (Object)behavior;
   behavior->block = make__58983380();

   return behavior;
}

Behavior __61083840;

Behavior make__61083840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61083840 = behavior;
   behavior->owner = (Object)layer1_58_84_52544560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_59214960_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
   req_59214960_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any += 1;
   req_59214960_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any = realloc(req_59214960_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any,req_59214960_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
req_59214960_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any[req_59214960_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_53918860_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
   ack__mac_53918860_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any += 1;
   ack__mac_53918860_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any = realloc(ack__mac_53918860_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any,ack__mac_53918860_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
ack__mac_53918860_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any[ack__mac_53918860_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__61084080();

   return behavior;
}

Behavior __61119100;

Behavior make__61119100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61119100 = behavior;
   behavior->owner = (Object)layer1_58_84_52544560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_59215020_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
   clk_59215020_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any += 1;
   clk_59215020_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any = realloc(clk_59215020_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any,clk_59215020_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
clk_59215020_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any[clk_59215020_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_53918880_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
   ack_53918880_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any += 1;
   ack_53918880_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any = realloc(ack_53918880_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any,ack_53918880_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
ack_53918880_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any[ack_53918880_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_59215000_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
   rst_59215000_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any += 1;
   rst_59215000_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any = realloc(rst_59215000_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any,rst_59215000_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
rst_59215000_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any[rst_59215000_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_58567280_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
   value__z0_58567280_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any += 1;
   value__z0_58567280_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any = realloc(value__z0_58567280_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any,value__z0_58567280_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
value__z0_58567280_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any[value__z0_58567280_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__a0_58646320_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
   ack__a0_58646320_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any += 1;
   ack__a0_58646320_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any = realloc(ack__a0_58646320_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any,ack__a0_58646320_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
ack__a0_58646320_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any[ack__a0_58646320_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__61084300();

   return behavior;
}

Behavior __61118940;

Behavior make__61118940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61118940 = behavior;
   behavior->owner = (Object)layer1_58_84_52544560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_58854620_counter_58_8400_58856540_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
   ack__mac_58854620_counter_58_8400_58856540_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any += 1;
   ack__mac_58854620_counter_58_8400_58856540_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any = realloc(ack__mac_58854620_counter_58_8400_58856540_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any,ack__mac_58854620_counter_58_8400_58856540_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
ack__mac_58854620_counter_58_8400_58856540_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any[ack__mac_58854620_counter_58_8400_58856540_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,a_54188380_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
   a_54188380_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any += 1;
   a_54188380_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any = realloc(a_54188380_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any,a_54188380_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
a_54188380_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any[a_54188380_func0_58_8400_53350780_layer1_58_84_52544560_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__61084240();

   return behavior;
}

Scope makelayer1_58_84_52544560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer1_58_84_52544560 = scope;
   scope->owner = (Object)layer1_58_840_59217060;
   scope->name = "layer1:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_58854480();
   scope->systemIs[1] = makefunc0_54187900();
   scope->num_inners = 19;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_53918920();
   scope->inners[1] = makeack_53918880();
   scope->inners[2] = makeack__mac_53918860();
   scope->inners[3] = makeack__add_53918840();
   scope->inners[4] = make_58266_54233860();
   scope->inners[5] = make_58264_54233840();
   scope->inners[6] = make_58265_54233760();
   scope->inners[7] = make_58283_53562140();
   scope->inners[8] = make_58313_51044420();
   scope->inners[9] = make_58336_58438980();
   scope->inners[10] = makevalue__z0_58567280();
   scope->inners[11] = makevalue__a0_58646360();
   scope->inners[12] = makeflag__z0_58646340();
   scope->inners[13] = makeack__a0_58646320();
   scope->inners[14] = make_58324_58717280();
   scope->inners[15] = make_58325_58717200();
   scope->inners[16] = make_58268_58717180();
   scope->inners[17] = make_58269_58717100();
   scope->inners[18] = make_58270_58837200();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58252_52544120();
   scope->scopes[1] = makechannel__accum_58281_49782620();
   scope->scopes[2] = makemac__n1_58306_52333980();
   scope->scopes[3] = makechannel__bias_58311_51857140();
   scope->scopes[4] = makechannel__z_58334_45876160();
   scope->scopes[5] = makeadd__n_58357_49387960();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__58731180();
   scope->behaviors[1] = make__58983500();
   scope->behaviors[2] = make__59217380();
   scope->behaviors[3] = make__61083840();
   scope->behaviors[4] = make__61119100();
   scope->behaviors[5] = make__61118940();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer1_58_840_59217060() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer1_58_840_59217060 = systemT;
systemT->owner = NULL;
   systemT->name = "layer1:T0";
   systemT->num_inputs = 6;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_59215020();
   systemT->inputs[1] = makerst_59215000();
   systemT->inputs[2] = makefill_59214980();
   systemT->inputs[3] = makereq_59214960();
   systemT->inputs[4] = make_5843_59323640();
   systemT->inputs[5] = make_5844_59554940();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_59554880();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_5845_59554740();
   systemT->inouts[1] = make_5862_59770040();

   systemT->scope = makelayer1_58_84_52544560();

   return systemT;
}