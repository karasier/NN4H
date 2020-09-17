#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer2_58_840_67511140;

SignalI clk_67533020_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makeclk_67533020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_67533020_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)layer2_58_840_67511140;
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

SignalI rst_67533000_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makerst_67533000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_67533000_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)layer2_58_840_67511140;
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

SignalI fill_67532960_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makefill_67532960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_67532960_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)layer2_58_840_67511140;
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

SignalI req_67532940_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makereq_67532940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_67532940_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)layer2_58_840_67511140;
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

SignalI _5873_67609840_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI make_5873_67609840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5873_67609840_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)layer2_58_840_67511140;
   signalI->name = ":73";
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

SignalI _5874_67698720_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI make_5874_67698720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5874_67698720_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)layer2_58_840_67511140;
   signalI->name = ":74";
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

SignalI ack__layer_67805100_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makeack__layer_67805100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_67805100_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)layer2_58_840_67511140;
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

SignalI _5875_67805000_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI make_5875_67805000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5875_67805000_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)layer2_58_840_67511140;
   signalI->name = ":75";
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

SignalI _5892_67913060_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI make_5892_67913060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5892_67913060_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)layer2_58_840_67511140;
   signalI->name = ":92";
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

SignalI _5893_68044920_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI make_5893_68044920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5893_68044920_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)layer2_58_840_67511140;
   signalI->name = ":93";
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

Block __65451560;

Block __65450760;

Block __65450600;

void code__65450600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58587_67345360_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,value__z0_67576520_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58742780(),flag__z0_67965320_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__65450600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65450600 = block;
   block->owner = (Object)__65450760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65450600;

   return block;
};

Block __65835880;

void code__65835880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58588_67533380_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,value__z1_67667640_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58742400(),flag__z1_67965300_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__65835880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65835880 = block;
   block->owner = (Object)__65450760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65835880;

   return block;
};

void code__65450760() {
 code__65450600();
 code__65835880();
}

Block make__65450760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65450760 = block;
   block->owner = (Object)__65451560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65450760;

   return block;
};

Block __65451400;

void code__65451400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58742300(),flag__z0_67965320_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58742180(),flag__z1_67965300_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__65451400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65451400 = block;
   block->owner = (Object)__65451560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65451400;

   return block;
};

void code__65451560() {
   {
      Value cond = ack__add_66360720_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65450760();
   }
   else {
  code__65451400();
   }
      }
   }
}

Block make__65451560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65451560 = block;
   block->owner = (Object)__66081380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65451560;

   return block;
};

Block __66081260;

Block __66080920;

Block __66080660;

void code__66080660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_67817260_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,_5892_67913060_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58740380(),ack__a0_67965280_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__66080660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66080660 = block;
   block->owner = (Object)__66080920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66080660;

   return block;
};

Block __66362200;

void code__66362200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a1_67965340_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,_5893_68044920_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58740040(),ack__a1_67965240_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__66362200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66362200 = block;
   block->owner = (Object)__66080920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66362200;

   return block;
};

void code__66080920() {
 code__66080660();
 code__66362200();
}

Block make__66080920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66080920 = block;
   block->owner = (Object)__66081260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66080920;

   return block;
};

void code__66081260() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = flag__z0_67965320_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
         src1 = flag__z1_67965300_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__66080920();
   }
      }
   }
}

Block make__66081260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66081260 = block;
   block->owner = (Object)__66562100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66081260;

   return block;
};

Block __66561960;

Block __66561700;

Block __66560940;

void code__66560940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58739500(),_58574_68166160_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__66560940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66560940 = block;
   block->owner = (Object)__66561700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66560940;

   return block;
};

void code__66561700() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_67533000_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__58739580();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__66560940();
   }
      }
   }
}

Block make__66561700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66561700 = block;
   block->owner = (Object)__66561960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66561700;

   return block;
};

Block __66560340;

Block __66650060;

void code__66650060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58739240(),_58504_68339920_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__66650060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66650060 = block;
   block->owner = (Object)__66560340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66650060;

   return block;
};

void code__66560340() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_67533000_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__58739340();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__66650060();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58739160(),_58503_68340000_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__66560340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66560340 = block;
   block->owner = (Object)__66561960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66560340;

   return block;
};

Block __66649260;

Block __66648820;

void code__66648820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58738820(),_58475_68166060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__66648820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66648820 = block;
   block->owner = (Object)__66649260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66648820;

   return block;
};

void code__66649260() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_67533000_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__58738980();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__66648820();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58738760(),_58474_68166140_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__66649260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66649260 = block;
   block->owner = (Object)__66561960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66649260;

   return block;
};

Block __66647560;

Block __66647360;

Block __66647000;

void code__66647000() {
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
                  src0 = _58475_68166060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__58738220();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58475_68166060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58737620(),_58474_68166140_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58737320(),_58476_68340020_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__66647000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66647000 = block;
   block->owner = (Object)__66647360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66647000;

   return block;
};

void code__66647360() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_67533000_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__58738540();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__66647000();
   }
      }
   }
}

Block make__66647360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66647360 = block;
   block->owner = (Object)__66647560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66647360;

   return block;
};

Block __66746480;

Block __66746140;

void code__66746140() {
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
                  src0 = _58504_68339920_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__58760740();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58504_68339920_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58760060(),_58503_68340000_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58759820(),_58505_68546400_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__66746140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66746140 = block;
   block->owner = (Object)__66746480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66746140;

   return block;
};

void code__66746480() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_67533000_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__58737000();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__66746140();
   }
      }
   }
}

Block make__66746480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66746480 = block;
   block->owner = (Object)__66647560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66746480;

   return block;
};

Block __66965200;

Block __66964720;

Block __66964180;

void code__66964180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58759060(),_58572_68049340_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__66964180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66964180 = block;
   block->owner = (Object)__66964720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66964180;

   return block;
};

Block __67242960;

void code__67242960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58758980(),_58573_68166240_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__67242960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __67242960 = block;
   block->owner = (Object)__66964720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__67242960;

   return block;
};

void code__66964720() {
{
      Value value = _58574_68166160_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__58759220())) {
    code__66964180();
         }
         else if (value2integer(value) == value2integer(make__58759040())) {
    code__67242960();
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
                  src0 = _58574_68166160_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__58758680();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58574_68166160_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__66964720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66964720 = block;
   block->owner = (Object)__66965200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66964720;

   return block;
};

void code__66965200() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_67533000_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__58759580();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__66964720();
   }
      }
   }
}

Block make__66965200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66965200 = block;
   block->owner = (Object)__66647560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66965200;

   return block;
};

void code__66647560() {
 code__66647360();
 code__66746480();
 code__66965200();
}

Block make__66647560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66647560 = block;
   block->owner = (Object)__66561960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66647560;

   return block;
};

void code__66561960() {
 code__66561700();
 code__66560340();
 code__66649260();
   {
      Value cond = fill_67532960_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__66647560();
   }
      }
   }
}

Block make__66561960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66561960 = block;
   block->owner = (Object)__67511740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66561960;

   return block;
};

Block __57624140;

void code__57624140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_67532940_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_66360760_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_66360800_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__57624140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57624140 = block;
   block->owner = (Object)__57622960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57624140;

   return block;
};

Block __57624480;

void code__57624480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_67533020_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,clk_68562700_counter_58_8410_68564740_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_66360780_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,ack_68562680_counter_58_8410_68564740_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_67533000_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,rst_68562660_counter_58_8410_68564740_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_67576520_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,z__value_65621520_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z1_67667640_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,z__value_58517060_func1_58_8410_58223700_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ack__a0_67965280_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
      src1 = ack__a1_67965240_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),ack__layer_67805100_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__57624480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57624480 = block;
   block->owner = (Object)__57676100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57624480;

   return block;
};

Block __57624340;

void code__57624340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_68562620_counter_58_8410_68564740_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,ack__mac_66360760_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_65816500_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,value__a0_67817260_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_58803600_func1_58_8410_58223700_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,value__a1_67965340_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__57624340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57624340 = block;
   block->owner = (Object)__57675540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57624340;

   return block;
};

Block __68683380;

Block __49126940;

void code__49126940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_68043280_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,make_ref_rangeS(mem_68187720_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440,value2integer(abus__w_68043120_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value),value2integer(abus__w_68043120_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__49126940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49126940 = block;
   block->owner = (Object)__68683380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49126940;

   return block;
};

void code__68683380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_68187720_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
            idx = value2integer(abus__r_68043200_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_67980520_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_67868620_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49126940();
   }
      }
   }
}

Block make__68683380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __68683380 = block;
   block->owner = (Object)__50942240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__68683380;

   return block;
};

Block __57672920;

void code__57672920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_67980520_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,_58472_66460440_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__57672920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57672920 = block;
   block->owner = (Object)__57672200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57672920;

   return block;
};

Block __57672100;

void code__57672100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58472_66460440_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,dbus__r_67980520_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__57672100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57672100 = block;
   block->owner = (Object)__57712320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57672100;

   return block;
};

Block __57710840;

void code__57710840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_67868640_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,_58470_66460420_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__57710840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57710840 = block;
   block->owner = (Object)__57709640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57710840;

   return block;
};

Block __57709580;

void code__57709580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58470_66460420_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,trig__r_67868640_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__57709580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57709580 = block;
   block->owner = (Object)__57709180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57709580;

   return block;
};

Block __57708500;

void code__57708500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_68043200_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,_58471_66460340_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__57708500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57708500 = block;
   block->owner = (Object)__57707740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57708500;

   return block;
};

Block __57707560;

void code__57707560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58471_66460340_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,abus__r_68043200_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__57707560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57707560 = block;
   block->owner = (Object)__57707200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57707560;

   return block;
};

Block __57706620;

void code__57706620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_67868620_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,_58474_68166140_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__57706620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57706620 = block;
   block->owner = (Object)__57706300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57706620;

   return block;
};

Block __57705780;

void code__57705780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58474_68166140_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,trig__w_67868620_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__57705780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57705780 = block;
   block->owner = (Object)__57705340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57705780;

   return block;
};

Block __57728300;

void code__57728300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_68043120_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,_58475_68166060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__57728300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57728300 = block;
   block->owner = (Object)__57727900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57728300;

   return block;
};

Block __57727860;

void code__57727860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58475_68166060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,abus__w_68043120_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__57727860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57727860 = block;
   block->owner = (Object)__57727680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57727860;

   return block;
};

Block __57727220;

void code__57727220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_68043280_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,_58476_68340020_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__57727220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57727220 = block;
   block->owner = (Object)__57726800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57727220;

   return block;
};

Block __57726760;

void code__57726760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58476_68340020_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,dbus__w_68043280_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__57726760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57726760 = block;
   block->owner = (Object)__57726460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57726760;

   return block;
};

Block __56891160;

Block __57710280;

void code__57710280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_55599640_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,make_ref_rangeS(mem_55918360_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440,value2integer(abus__w_55615400_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value),value2integer(abus__w_55615400_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__57710280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57710280 = block;
   block->owner = (Object)__56891160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57710280;

   return block;
};

void code__56891160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_55918360_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
            idx = value2integer(abus__r_55599140_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_51285520_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_50955080_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__57710280();
   }
      }
   }
}

Block make__56891160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56891160 = block;
   block->owner = (Object)__58602440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56891160;

   return block;
};

Block __57721960;

void code__57721960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_51285520_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,_58501_66745360_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__57721960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57721960 = block;
   block->owner = (Object)__57721540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57721960;

   return block;
};

Block __57721380;

void code__57721380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58501_66745360_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,dbus__r_51285520_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__57721380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57721380 = block;
   block->owner = (Object)__57720900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57721380;

   return block;
};

Block __57776580;

void code__57776580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_50955180_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,_58499_66745340_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__57776580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57776580 = block;
   block->owner = (Object)__57776200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57776580;

   return block;
};

Block __57776140;

void code__57776140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58499_66745340_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,trig__r_50955180_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__57776140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57776140 = block;
   block->owner = (Object)__57775640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57776140;

   return block;
};

Block __57774620;

void code__57774620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_55599140_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,_58500_66745260_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__57774620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57774620 = block;
   block->owner = (Object)__57774220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57774620;

   return block;
};

Block __57774040;

void code__57774040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58500_66745260_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,abus__r_55599140_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__57774040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57774040 = block;
   block->owner = (Object)__57773580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57774040;

   return block;
};

Block __57772840;

void code__57772840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_50955080_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,_58503_68340000_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__57772840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57772840 = block;
   block->owner = (Object)__57772600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57772840;

   return block;
};

Block __57772500;

void code__57772500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58503_68340000_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,trig__w_50955080_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__57772500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57772500 = block;
   block->owner = (Object)__57772240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57772500;

   return block;
};

Block __57771340;

void code__57771340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_55615400_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,_58504_68339920_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__57771340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57771340 = block;
   block->owner = (Object)__57770120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57771340;

   return block;
};

Block __57794520;

void code__57794520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58504_68339920_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,abus__w_55615400_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__57794520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57794520 = block;
   block->owner = (Object)__57793640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57794520;

   return block;
};

Block __57792960;

void code__57792960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_55599640_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,_58505_68546400_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__57792960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57792960 = block;
   block->owner = (Object)__57792680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57792960;

   return block;
};

Block __57792620;

void code__57792620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58505_68546400_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,dbus__w_55599640_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__57792620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57792620 = block;
   block->owner = (Object)__57792440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57792620;

   return block;
};

Block __57787660;

void code__57787660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_58825460_channel__accum_58516_58602120_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,_58518_66503560_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__57787660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57787660 = block;
   block->owner = (Object)__57787380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57787660;

   return block;
};

Block __57787340;

void code__57787340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58518_66503560_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,reg__0_58825460_channel__accum_58516_58602120_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__57787340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57787340 = block;
   block->owner = (Object)__57787000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57787340;

   return block;
};

Block __57843620;

void code__57843620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_56957800_channel__accum_58516_58602120_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,_58519_66661200_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__57843620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57843620 = block;
   block->owner = (Object)__57843140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57843620;

   return block;
};

Block __57843020;

void code__57843020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58519_66661200_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,reg__1_56957800_channel__accum_58516_58602120_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__57843020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57843020 = block;
   block->owner = (Object)__57842200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57843020;

   return block;
};

Block __65369760;

Block __65369600;

Block __65369280;

void code__65369280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58603940(),_58500_66745260_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__65369280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65369280 = block;
   block->owner = (Object)__65369600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65369280;

   return block;
};

void code__65369600() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_67533000_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__58604400();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65369280();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58603740(),_58499_66745340_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__65369600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65369600 = block;
   block->owner = (Object)__65369760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65369600;

   return block;
};

Block __65368620;

Block __65368240;

void code__65368240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58602960(),_58471_66460340_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__65368240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65368240 = block;
   block->owner = (Object)__65368620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65368240;

   return block;
};

void code__65368620() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_67533000_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__58603480();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65368240();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58602880(),_58470_66460420_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__65368620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65368620 = block;
   block->owner = (Object)__65369760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65368620;

   return block;
};

Block __65367620;

Block __65367300;

void code__65367300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58601440(),_5875_67805000_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__65367300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65367300 = block;
   block->owner = (Object)__65367620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65367300;

   return block;
};

void code__65367620() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_67533000_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__58602360();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65367300();
   }
      }
   }
}

Block make__65367620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65367620 = block;
   block->owner = (Object)__65369760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65367620;

   return block;
};

Block __65602340;

Block __65601980;

Block __65601660;

Block __65625740;

void code__65625740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5873_67609840_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,rv_65369960_mac__n1_58548_64624060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__65625740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65625740 = block;
   block->owner = (Object)__65601660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65625740;

   return block;
};

Block __65870320;

void code__65870320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5874_67698720_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,rv_65369960_mac__n1_58548_64624060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__65870320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65870320 = block;
   block->owner = (Object)__65601660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65870320;

   return block;
};

void code__65601660() {
{
      Value value = _5875_67805000_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__58599140())) {
    code__65625740();
         }
         else if (value2integer(value) == value2integer(make__58598520())) {
    code__65870320();
         }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58597940(),rvok_65369900_mac__n1_58548_64624060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
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
                  src0 = _5875_67805000_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__58628140();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5875_67805000_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__65601660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65601660 = block;
   block->owner = (Object)__65601980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65601660;

   return block;
};

void code__65601980() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_67533000_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__58599360();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65601660();
   }
      }
   }
}

Block make__65601980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65601980 = block;
   block->owner = (Object)__65602340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65601980;

   return block;
};

Block __66064780;

Block __66064420;

Block __66064040;

void code__66064040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58472_66460440_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,lv0_64807820_mac__n1_58548_64624060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58625340(),lvok0_65369940_mac__n1_58548_64624060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__66064040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66064040 = block;
   block->owner = (Object)__66064420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66064040;

   return block;
};

void code__66064420() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58470_66460420_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__58627020();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__66064040();
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
                  src0 = _58471_66460340_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__58624480();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58471_66460340_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58623560(),_58470_66460420_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__66064420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66064420 = block;
   block->owner = (Object)__66064780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66064420;

   return block;
};

void code__66064780() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_67533000_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__58627660();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__66064420();
   }
      }
   }
}

Block make__66064780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66064780 = block;
   block->owner = (Object)__65602340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66064780;

   return block;
};

Block __66225820;

Block __66225340;

Block __66225180;

void code__66225180() {
}

Block make__66225180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66225180 = block;
   block->owner = (Object)__66225340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66225180;

   return block;
};

Block __67066580;

void code__67066580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_65215480_mac__n1_58548_64624060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,_58518_66503560_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__67066580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __67066580 = block;
   block->owner = (Object)__66225340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__67066580;

   return block;
};

void code__66225340() {
 code__66225180();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av0_65215480_mac__n1_58548_64624060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
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
                              src0 = lv0_64807820_mac__n1_58548_64624060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_65369960_mac__n1_58548_64624060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__58622480();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_65215480_mac__n1_58548_64624060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
 code__67066580();
}

Block make__66225340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66225340 = block;
   block->owner = (Object)__66225820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66225340;

   return block;
};

void code__66225820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58623200(),ack_66360780_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58623100(),run_65369880_mac__n1_58548_64624060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
 code__66225340();
}

Block make__66225820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66225820 = block;
   block->owner = (Object)__65602340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66225820;

   return block;
};

Block __67499100;

Block __67498780;

Block __67498460;

void code__67498460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58501_66745360_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,lv1_64957720_mac__n1_58548_64624060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58694220(),lvok1_65369920_mac__n1_58548_64624060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__67498460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __67498460 = block;
   block->owner = (Object)__67498780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__67498460;

   return block;
};

void code__67498780() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _58499_66745340_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__58694920();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__67498460();
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
                  src0 = _58500_66745260_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__58693520();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_58500_66745260_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58693120(),_58499_66745340_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__67498780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __67498780 = block;
   block->owner = (Object)__67499100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__67498780;

   return block;
};

void code__67499100() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_67533000_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__58695220();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__67498780();
   }
      }
   }
}

Block make__67499100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __67499100 = block;
   block->owner = (Object)__65602340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__67499100;

   return block;
};

Block __67633780;

Block __67633300;

Block __67657680;

void code__67657680() {
}

Block make__67657680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __67657680 = block;
   block->owner = (Object)__67633300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__67657680;

   return block;
};

Block __68566220;

void code__68566220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av1_65300660_mac__n1_58548_64624060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,_58519_66661200_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__68566220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __68566220 = block;
   block->owner = (Object)__67633300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__68566220;

   return block;
};

void code__67633300() {
 code__67657680();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = av1_65300660_mac__n1_58548_64624060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
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
                              src0 = lv1_64957720_mac__n1_58548_64624060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_65369960_mac__n1_58548_64624060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__58691860();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av1_65300660_mac__n1_58548_64624060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
 code__68566220();
}

Block make__67633300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __67633300 = block;
   block->owner = (Object)__67633780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__67633300;

   return block;
};

void code__67633780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58692580(),ack_66360780_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58692460(),run_65369880_mac__n1_58548_64624060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
 code__67633300();
}

Block make__67633780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __67633780 = block;
   block->owner = (Object)__65602340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__67633780;

   return block;
};

void code__65602340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58599720(),run_65369880_mac__n1_58548_64624060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
 code__65601980();
 code__66064780();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_65369940_mac__n1_58548_64624060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
         src1 = rvok_65369900_mac__n1_58548_64624060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__66225820();
   }
      }
   }
 code__67499100();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_65369920_mac__n1_58548_64624060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
         src1 = rvok_65369900_mac__n1_58548_64624060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__67633780();
   }
      }
   }
}

Block make__65602340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65602340 = block;
   block->owner = (Object)__65369760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65602340;

   return block;
};

Block __65366420;

void code__65366420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58691480(),rvok_65369900_mac__n1_58548_64624060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58691280(),lvok0_65369940_mac__n1_58548_64624060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58691180(),av0_65215480_mac__n1_58548_64624060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58691020(),lvok1_65369920_mac__n1_58548_64624060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58690880(),av1_65300660_mac__n1_58548_64624060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__65366420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65366420 = block;
   block->owner = (Object)__65369760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65366420;

   return block;
};

void code__65369760() {
 code__65369600();
 code__65368620();
 code__65367620();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58600840(),ack_66360780_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58600780(),run_65369880_mac__n1_58548_64624060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_66360800_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
         src1 = run_65369880_mac__n1_58548_64624060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65602340();
   }
   else {
  code__65366420();
   }
      }
   }
}

Block make__65369760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65369760 = block;
   block->owner = (Object)__68867780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65369760;

   return block;
};

Block __57837460;

void code__57837460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_47794060_channel__bias_58555_68867660_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,_58557_66916820_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__57837460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57837460 = block;
   block->owner = (Object)__57836920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57837460;

   return block;
};

Block __57836860;

void code__57836860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58557_66916820_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,reg__0_47794060_channel__bias_58555_68867660_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__57836860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57836860 = block;
   block->owner = (Object)__57836340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57836860;

   return block;
};

Block __57835540;

void code__57835540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_49057060_channel__bias_58555_68867660_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,_58558_67220400_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__57835540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57835540 = block;
   block->owner = (Object)__57859760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57835540;

   return block;
};

Block __57859640;

void code__57859640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58558_67220400_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,reg__1_49057060_channel__bias_58555_68867660_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__57859640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57859640 = block;
   block->owner = (Object)__57859340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57859640;

   return block;
};

Block __57858200;

void code__57858200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_47794060_channel__bias_58555_68867660_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,_58572_68049340_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__57858200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57858200 = block;
   block->owner = (Object)__57857380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57858200;

   return block;
};

Block __57857280;

void code__57857280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58572_68049340_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,reg__0_47794060_channel__bias_58555_68867660_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__57857280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57857280 = block;
   block->owner = (Object)__57857020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57857280;

   return block;
};

Block __57855900;

void code__57855900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_49057060_channel__bias_58555_68867660_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,_58573_68166240_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__57855900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57855900 = block;
   block->owner = (Object)__57853040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57855900;

   return block;
};

Block __57852980;

void code__57852980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58573_68166240_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,reg__1_49057060_channel__bias_58555_68867660_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__57852980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57852980 = block;
   block->owner = (Object)__57852540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57852980;

   return block;
};

Block __57986780;

void code__57986780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_68865060_winc_58571_68865500_channel__bias_58555_68867660_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,_58574_68166160_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__57986780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57986780 = block;
   block->owner = (Object)__57985400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57986780;

   return block;
};

Block __57985140;

void code__57985140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58574_68166160_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,abus__w_68865060_winc_58571_68865500_channel__bias_58555_68867660_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__57985140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __57985140 = block;
   block->owner = (Object)__57983240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__57985140;

   return block;
};

Block __58003840;

void code__58003840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_56796300_channel__z_58585_56365640_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,_58587_67345360_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__58003840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58003840 = block;
   block->owner = (Object)__58003300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58003840;

   return block;
};

Block __58003260;

void code__58003260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58587_67345360_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,reg__0_56796300_channel__z_58585_56365640_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__58003260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58003260 = block;
   block->owner = (Object)__58002920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58003260;

   return block;
};

Block __58001900;

void code__58001900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_57054940_channel__z_58585_56365640_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,_58588_67533380_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__58001900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58001900 = block;
   block->owner = (Object)__58001000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58001900;

   return block;
};

Block __58000860;

void code__58000860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58588_67533380_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,reg__1_57054940_channel__z_58585_56365640_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__58000860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58000860 = block;
   block->owner = (Object)__58000580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58000860;

   return block;
};

Block __53889740;

Block __53887980;

Block __53887660;

void code__53887660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58518_66503560_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,lv0_58570600_add__n_58615_58279320_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58709500(),lvok0_53889960_add__n_58615_58279320_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__53887660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53887660 = block;
   block->owner = (Object)__53887980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53887660;

   return block;
};

Block __64475480;

void code__64475480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58557_66916820_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,rv0_56918740_add__n_58615_58279320_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58709020(),rvok0_53889920_add__n_58615_58279320_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__64475480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64475480 = block;
   block->owner = (Object)__53887980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64475480;

   return block;
};

Block __64937780;

Block __64937300;

void code__64937300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_58570600_add__n_58615_58279320_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
      src1 = rv0_56918740_add__n_58615_58279320_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58587_67345360_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__64937300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64937300 = block;
   block->owner = (Object)__64937780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64937300;

   return block;
};

void code__64937780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58708720(),run_53889860_add__n_58615_58279320_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58708600(),ack__add_66360720_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
 code__64937300();
}

Block make__64937780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64937780 = block;
   block->owner = (Object)__53887980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64937780;

   return block;
};

Block __65432720;

void code__65432720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58519_66661200_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,lv1_58808420_add__n_58615_58279320_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58707840(),lvok1_53889940_add__n_58615_58279320_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__65432720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65432720 = block;
   block->owner = (Object)__53887980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65432720;

   return block;
};

Block __65648420;

void code__65648420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58558_67220400_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value,rv1_53890000_add__n_58615_58279320_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58707280(),rvok1_53889900_add__n_58615_58279320_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__65648420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65648420 = block;
   block->owner = (Object)__53887980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65648420;

   return block;
};

Block __65947040;

Block __65946520;

void code__65946520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv1_58808420_add__n_58615_58279320_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
      src1 = rv1_53890000_add__n_58615_58279320_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_58588_67533380_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__65946520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65946520 = block;
   block->owner = (Object)__65947040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65946520;

   return block;
};

void code__65947040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58706840(),run_53889860_add__n_58615_58279320_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58706480(),ack__add_66360720_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
 code__65946520();
}

Block make__65947040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65947040 = block;
   block->owner = (Object)__53887980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65947040;

   return block;
};

void code__53887980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58710160(),run_53889860_add__n_58615_58279320_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
 code__53887660();
 code__64475480();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_53889960_add__n_58615_58279320_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
         src1 = rvok0_53889920_add__n_58615_58279320_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__64937780();
   }
      }
   }
 code__65432720();
 code__65648420();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_53889940_add__n_58615_58279320_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
         src1 = rvok1_53889900_add__n_58615_58279320_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65947040();
   }
      }
   }
}

Block make__53887980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53887980 = block;
   block->owner = (Object)__53889740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53887980;

   return block;
};

Block __53888920;

void code__53888920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58706180(),lvok0_53889960_add__n_58615_58279320_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58706120(),rvok0_53889920_add__n_58615_58279320_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58706020(),lvok1_53889940_add__n_58615_58279320_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58705920(),rvok1_53889900_add__n_58615_58279320_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
}

Block make__53888920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53888920 = block;
   block->owner = (Object)__53889740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53888920;

   return block;
};

void code__53889740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58710580(),ack__add_66360720_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__58710480(),run_53889860_add__n_58615_58279320_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_66360760_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
         src1 = run_53889860_add__n_58615_58279320_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53887980();
   }
   else {
  code__53888920();
   }
      }
   }
}

Block make__53889740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53889740 = block;
   block->owner = (Object)__66360940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53889740;

   return block;
};

Value make__58604400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58603940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58603740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58603480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58602960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58602880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58602360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58601440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58600840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58600780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58599720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58599360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58599140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58598520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58597940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58628140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58627660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58627020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58625340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58624480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58623560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58623200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58623100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58622480() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58695220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58694920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58694220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58693520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58693120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58692580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58692460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58691860() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58691480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58691280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58691180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__58691020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58690880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__58710580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58710480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58710160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58709500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58709020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58708720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58708600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58707840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58707280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58706840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58706480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58706180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58706120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58706020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58705920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58742780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58742400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58742300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58742180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58740380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58740040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58739580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58739500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58739340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58739240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58739160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58738980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58738820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58738760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58738540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58738220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58737620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58737320() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__58737000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58760740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58760060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__58759820() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__58759580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__58759220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58759060() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__58759040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__58758980() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__58758680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope layer2_58_84_67847240;

SignalI req__mac_66360800_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makereq__mac_66360800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_66360800_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)layer2_58_84_67847240;
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

SignalI ack_66360780_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makeack_66360780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_66360780_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)layer2_58_84_67847240;
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

SignalI ack__mac_66360760_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makeack__mac_66360760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_66360760_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)layer2_58_84_67847240;
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

SignalI ack__add_66360720_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makeack__add_66360720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_66360720_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)layer2_58_84_67847240;
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

SignalI _58472_66460440_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI make_58472_66460440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58472_66460440_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)layer2_58_84_67847240;
   signalI->name = ":472";
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

SignalI _58470_66460420_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI make_58470_66460420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58470_66460420_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)layer2_58_84_67847240;
   signalI->name = ":470";
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

SignalI _58471_66460340_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI make_58471_66460340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58471_66460340_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)layer2_58_84_67847240;
   signalI->name = ":471";
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

SignalI _58518_66503560_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI make_58518_66503560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58518_66503560_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)layer2_58_84_67847240;
   signalI->name = ":518";
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

SignalI _58519_66661200_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI make_58519_66661200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58519_66661200_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)layer2_58_84_67847240;
   signalI->name = ":519";
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

SignalI _58501_66745360_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI make_58501_66745360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58501_66745360_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)layer2_58_84_67847240;
   signalI->name = ":501";
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

SignalI _58499_66745340_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI make_58499_66745340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58499_66745340_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)layer2_58_84_67847240;
   signalI->name = ":499";
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

SignalI _58500_66745260_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI make_58500_66745260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58500_66745260_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)layer2_58_84_67847240;
   signalI->name = ":500";
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

SignalI _58557_66916820_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI make_58557_66916820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58557_66916820_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)layer2_58_84_67847240;
   signalI->name = ":557";
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

SignalI _58558_67220400_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI make_58558_67220400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58558_67220400_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)layer2_58_84_67847240;
   signalI->name = ":558";
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

SignalI _58587_67345360_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI make_58587_67345360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58587_67345360_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)layer2_58_84_67847240;
   signalI->name = ":587";
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

SignalI _58588_67533380_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI make_58588_67533380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58588_67533380_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)layer2_58_84_67847240;
   signalI->name = ":588";
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

SignalI value__z0_67576520_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makevalue__z0_67576520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_67576520_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)layer2_58_84_67847240;
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

SignalI value__z1_67667640_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makevalue__z1_67667640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z1_67667640_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)layer2_58_84_67847240;
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

SignalI value__a0_67817260_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makevalue__a0_67817260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_67817260_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)layer2_58_84_67847240;
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

SignalI value__a1_67965340_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makevalue__a1_67965340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a1_67965340_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)layer2_58_84_67847240;
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

SignalI flag__z0_67965320_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makeflag__z0_67965320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_67965320_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)layer2_58_84_67847240;
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

SignalI flag__z1_67965300_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makeflag__z1_67965300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z1_67965300_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)layer2_58_84_67847240;
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

SignalI ack__a0_67965280_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makeack__a0_67965280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_67965280_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)layer2_58_84_67847240;
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

SignalI ack__a1_67965240_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makeack__a1_67965240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a1_67965240_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)layer2_58_84_67847240;
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

SignalI _58572_68049340_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI make_58572_68049340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58572_68049340_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)layer2_58_84_67847240;
   signalI->name = ":572";
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

SignalI _58573_68166240_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI make_58573_68166240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58573_68166240_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)layer2_58_84_67847240;
   signalI->name = ":573";
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

SignalI _58574_68166160_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI make_58574_68166160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58574_68166160_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)layer2_58_84_67847240;
   signalI->name = ":574";
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

SignalI _58474_68166140_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI make_58474_68166140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58474_68166140_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)layer2_58_84_67847240;
   signalI->name = ":474";
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

SignalI _58475_68166060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI make_58475_68166060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58475_68166060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)layer2_58_84_67847240;
   signalI->name = ":475";
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

SignalI _58476_68340020_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI make_58476_68340020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58476_68340020_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)layer2_58_84_67847240;
   signalI->name = ":476";
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

SignalI _58503_68340000_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI make_58503_68340000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58503_68340000_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)layer2_58_84_67847240;
   signalI->name = ":503";
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

SignalI _58504_68339920_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI make_58504_68339920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58504_68339920_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)layer2_58_84_67847240;
   signalI->name = ":504";
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

SignalI _58505_68546400_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI make_58505_68546400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58505_68546400_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)layer2_58_84_67847240;
   signalI->name = ":505";
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

SystemI counter_68562480;

SystemI makecounter_68562480() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_68562480 = systemI;
   systemI->owner = (Object)layer2_58_84_67847240;
   systemI->name = "counter";
   systemI->system = counter_58_8410_68564740;

   return systemI;
};

SystemI func0_65816360;

SystemI makefunc0_65816360() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_65816360 = systemI;
   systemI->owner = (Object)layer2_58_84_67847240;
   systemI->name = "func0";
   systemI->system = func0_58_8410_65446500;

   return systemI;
};

SystemI func1_58802600;

SystemI makefunc1_58802600() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func1_58802600 = systemI;
   systemI->owner = (Object)layer2_58_84_67847240;
   systemI->name = "func1";
   systemI->system = func1_58_8410_58223700;

   return systemI;
};

Scope channel__w0_58458_67846940;

SignalI trig__r_67868640_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI maketrig__r_67868640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_67868640_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)channel__w0_58458_67846940;
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

SignalI trig__w_67868620_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI maketrig__w_67868620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_67868620_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)channel__w0_58458_67846940;
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

SignalI dbus__r_67980520_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makedbus__r_67980520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_67980520_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)channel__w0_58458_67846940;
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

SignalI dbus__w_68043280_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makedbus__w_68043280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_68043280_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)channel__w0_58458_67846940;
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

SignalI abus__r_68043200_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makeabus__r_68043200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_68043200_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)channel__w0_58458_67846940;
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

SignalI abus__w_68043120_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makeabus__w_68043120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_68043120_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)channel__w0_58458_67846940;
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

SignalI mem_68187720_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makemem_68187720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_68187720_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)channel__w0_58458_67846940;
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

Scope raddr_58459_67846640;

Scope makeraddr_58459_67846640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58459_67846640 = scope;
   scope->owner = (Object)channel__w0_58458_67846940;
   scope->name = "raddr:459";
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

Scope waddr_58464_67846220;

Scope makewaddr_58464_67846220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58464_67846220 = scope;
   scope->owner = (Object)channel__w0_58458_67846940;
   scope->name = "waddr:464";
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

Scope rinc_58469_67870340;

Scope makerinc_58469_67870340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58469_67870340 = scope;
   scope->owner = (Object)channel__w0_58458_67846940;
   scope->name = "rinc:469";
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

Scope winc_58473_67869920;

Scope makewinc_58473_67869920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58473_67869920 = scope;
   scope->owner = (Object)channel__w0_58458_67846940;
   scope->name = "winc:473";
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

Scope rdec_58477_67869500;

Scope makerdec_58477_67869500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58477_67869500 = scope;
   scope->owner = (Object)channel__w0_58458_67846940;
   scope->name = "rdec:477";
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

Scope wdec_58482_67869080;

Scope makewdec_58482_67869080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58482_67869080 = scope;
   scope->owner = (Object)channel__w0_58458_67846940;
   scope->name = "wdec:482";
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

Behavior __50942240;

Behavior make__50942240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50942240 = behavior;
   behavior->owner = (Object)channel__w0_58458_67846940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_67533020_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   clk_67533020_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_neg += 1;
   clk_67533020_layer2_58_840_67511140______58_84_49748700______58_840_68377440->neg = realloc(clk_67533020_layer2_58_840_67511140______58_84_49748700______58_840_68377440->neg,clk_67533020_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_neg*sizeof(Object));
clk_67533020_layer2_58_840_67511140______58_84_49748700______58_840_68377440->neg[clk_67533020_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_neg-1] = (Object)behavior;
   behavior->block = make__68683380();

   return behavior;
}

Behavior __57672200;

Behavior make__57672200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57672200 = behavior;
   behavior->owner = (Object)channel__w0_58458_67846940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_67980520_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   dbus__r_67980520_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   dbus__r_67980520_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(dbus__r_67980520_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,dbus__r_67980520_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
dbus__r_67980520_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[dbus__r_67980520_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__57672920();

   return behavior;
}

Behavior __57712320;

Behavior make__57712320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57712320 = behavior;
   behavior->owner = (Object)channel__w0_58458_67846940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58472_66460440_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   _58472_66460440_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   _58472_66460440_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(_58472_66460440_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,_58472_66460440_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
_58472_66460440_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[_58472_66460440_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__57672100();

   return behavior;
}

Behavior __57709640;

Behavior make__57709640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57709640 = behavior;
   behavior->owner = (Object)channel__w0_58458_67846940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_67868640_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   trig__r_67868640_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   trig__r_67868640_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(trig__r_67868640_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,trig__r_67868640_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
trig__r_67868640_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[trig__r_67868640_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__57710840();

   return behavior;
}

Behavior __57709180;

Behavior make__57709180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57709180 = behavior;
   behavior->owner = (Object)channel__w0_58458_67846940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58470_66460420_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   _58470_66460420_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   _58470_66460420_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(_58470_66460420_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,_58470_66460420_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
_58470_66460420_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[_58470_66460420_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__57709580();

   return behavior;
}

Behavior __57707740;

Behavior make__57707740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57707740 = behavior;
   behavior->owner = (Object)channel__w0_58458_67846940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_68043200_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   abus__r_68043200_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   abus__r_68043200_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(abus__r_68043200_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,abus__r_68043200_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
abus__r_68043200_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[abus__r_68043200_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__57708500();

   return behavior;
}

Behavior __57707200;

Behavior make__57707200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57707200 = behavior;
   behavior->owner = (Object)channel__w0_58458_67846940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58471_66460340_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   _58471_66460340_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   _58471_66460340_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(_58471_66460340_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,_58471_66460340_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
_58471_66460340_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[_58471_66460340_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__57707560();

   return behavior;
}

Behavior __57706300;

Behavior make__57706300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57706300 = behavior;
   behavior->owner = (Object)channel__w0_58458_67846940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_67868620_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   trig__w_67868620_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   trig__w_67868620_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(trig__w_67868620_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,trig__w_67868620_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
trig__w_67868620_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[trig__w_67868620_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__57706620();

   return behavior;
}

Behavior __57705340;

Behavior make__57705340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57705340 = behavior;
   behavior->owner = (Object)channel__w0_58458_67846940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58474_68166140_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   _58474_68166140_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   _58474_68166140_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(_58474_68166140_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,_58474_68166140_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
_58474_68166140_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[_58474_68166140_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__57705780();

   return behavior;
}

Behavior __57727900;

Behavior make__57727900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57727900 = behavior;
   behavior->owner = (Object)channel__w0_58458_67846940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_68043120_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   abus__w_68043120_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   abus__w_68043120_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(abus__w_68043120_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,abus__w_68043120_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
abus__w_68043120_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[abus__w_68043120_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__57728300();

   return behavior;
}

Behavior __57727680;

Behavior make__57727680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57727680 = behavior;
   behavior->owner = (Object)channel__w0_58458_67846940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58475_68166060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   _58475_68166060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   _58475_68166060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(_58475_68166060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,_58475_68166060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
_58475_68166060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[_58475_68166060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__57727860();

   return behavior;
}

Behavior __57726800;

Behavior make__57726800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57726800 = behavior;
   behavior->owner = (Object)channel__w0_58458_67846940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_68043280_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   dbus__w_68043280_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   dbus__w_68043280_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(dbus__w_68043280_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,dbus__w_68043280_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
dbus__w_68043280_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[dbus__w_68043280_channel__w0_58458_67846940_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__57727220();

   return behavior;
}

Behavior __57726460;

Behavior make__57726460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57726460 = behavior;
   behavior->owner = (Object)channel__w0_58458_67846940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58476_68340020_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   _58476_68340020_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   _58476_68340020_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(_58476_68340020_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,_58476_68340020_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
_58476_68340020_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[_58476_68340020_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__57726760();

   return behavior;
}

Scope makechannel__w0_58458_67846940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_58458_67846940 = scope;
   scope->owner = (Object)layer2_58_84_67847240;
   scope->name = "channel_w0:458";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_67868640();
   scope->inners[1] = maketrig__w_67868620();
   scope->inners[2] = makedbus__r_67980520();
   scope->inners[3] = makedbus__w_68043280();
   scope->inners[4] = makeabus__r_68043200();
   scope->inners[5] = makeabus__w_68043120();
   scope->inners[6] = makemem_68187720();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58459_67846640();
   scope->scopes[1] = makewaddr_58464_67846220();
   scope->scopes[2] = makerinc_58469_67870340();
   scope->scopes[3] = makewinc_58473_67869920();
   scope->scopes[4] = makerdec_58477_67869500();
   scope->scopes[5] = makewdec_58482_67869080();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50942240();
   scope->behaviors[1] = make__57672200();
   scope->behaviors[2] = make__57712320();
   scope->behaviors[3] = make__57709640();
   scope->behaviors[4] = make__57709180();
   scope->behaviors[5] = make__57707740();
   scope->behaviors[6] = make__57707200();
   scope->behaviors[7] = make__57706300();
   scope->behaviors[8] = make__57705340();
   scope->behaviors[9] = make__57727900();
   scope->behaviors[10] = make__57727680();
   scope->behaviors[11] = make__57726800();
   scope->behaviors[12] = make__57726460();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__w1_58487_50941540;

SignalI trig__r_50955180_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI maketrig__r_50955180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_50955180_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)channel__w1_58487_50941540;
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

SignalI trig__w_50955080_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI maketrig__w_50955080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_50955080_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)channel__w1_58487_50941540;
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

SignalI dbus__r_51285520_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makedbus__r_51285520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_51285520_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)channel__w1_58487_50941540;
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

SignalI dbus__w_55599640_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makedbus__w_55599640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_55599640_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)channel__w1_58487_50941540;
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

SignalI abus__r_55599140_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makeabus__r_55599140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_55599140_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)channel__w1_58487_50941540;
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

SignalI abus__w_55615400_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makeabus__w_55615400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_55615400_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)channel__w1_58487_50941540;
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

SignalI mem_55918360_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makemem_55918360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_55918360_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)channel__w1_58487_50941540;
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

Scope raddr_58488_50940960;

Scope makeraddr_58488_50940960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58488_50940960 = scope;
   scope->owner = (Object)channel__w1_58487_50941540;
   scope->name = "raddr:488";
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

Scope waddr_58493_50939300;

Scope makewaddr_58493_50939300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58493_50939300 = scope;
   scope->owner = (Object)channel__w1_58487_50941540;
   scope->name = "waddr:493";
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

Scope rinc_58498_50938460;

Scope makerinc_58498_50938460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58498_50938460 = scope;
   scope->owner = (Object)channel__w1_58487_50941540;
   scope->name = "rinc:498";
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

Scope winc_58502_50961540;

Scope makewinc_58502_50961540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58502_50961540 = scope;
   scope->owner = (Object)channel__w1_58487_50941540;
   scope->name = "winc:502";
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

Scope rdec_58506_50959860;

Scope makerdec_58506_50959860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58506_50959860 = scope;
   scope->owner = (Object)channel__w1_58487_50941540;
   scope->name = "rdec:506";
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

Scope wdec_58511_50959020;

Scope makewdec_58511_50959020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58511_50959020 = scope;
   scope->owner = (Object)channel__w1_58487_50941540;
   scope->name = "wdec:511";
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

Behavior __58602440;

Behavior make__58602440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58602440 = behavior;
   behavior->owner = (Object)channel__w1_58487_50941540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_67533020_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   clk_67533020_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_neg += 1;
   clk_67533020_layer2_58_840_67511140______58_84_49748700______58_840_68377440->neg = realloc(clk_67533020_layer2_58_840_67511140______58_84_49748700______58_840_68377440->neg,clk_67533020_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_neg*sizeof(Object));
clk_67533020_layer2_58_840_67511140______58_84_49748700______58_840_68377440->neg[clk_67533020_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_neg-1] = (Object)behavior;
   behavior->block = make__56891160();

   return behavior;
}

Behavior __57721540;

Behavior make__57721540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57721540 = behavior;
   behavior->owner = (Object)channel__w1_58487_50941540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_51285520_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   dbus__r_51285520_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   dbus__r_51285520_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(dbus__r_51285520_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,dbus__r_51285520_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
dbus__r_51285520_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[dbus__r_51285520_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__57721960();

   return behavior;
}

Behavior __57720900;

Behavior make__57720900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57720900 = behavior;
   behavior->owner = (Object)channel__w1_58487_50941540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58501_66745360_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   _58501_66745360_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   _58501_66745360_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(_58501_66745360_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,_58501_66745360_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
_58501_66745360_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[_58501_66745360_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__57721380();

   return behavior;
}

Behavior __57776200;

Behavior make__57776200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57776200 = behavior;
   behavior->owner = (Object)channel__w1_58487_50941540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_50955180_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   trig__r_50955180_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   trig__r_50955180_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(trig__r_50955180_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,trig__r_50955180_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
trig__r_50955180_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[trig__r_50955180_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__57776580();

   return behavior;
}

Behavior __57775640;

Behavior make__57775640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57775640 = behavior;
   behavior->owner = (Object)channel__w1_58487_50941540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58499_66745340_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   _58499_66745340_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   _58499_66745340_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(_58499_66745340_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,_58499_66745340_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
_58499_66745340_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[_58499_66745340_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__57776140();

   return behavior;
}

Behavior __57774220;

Behavior make__57774220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57774220 = behavior;
   behavior->owner = (Object)channel__w1_58487_50941540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_55599140_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   abus__r_55599140_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   abus__r_55599140_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(abus__r_55599140_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,abus__r_55599140_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
abus__r_55599140_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[abus__r_55599140_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__57774620();

   return behavior;
}

Behavior __57773580;

Behavior make__57773580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57773580 = behavior;
   behavior->owner = (Object)channel__w1_58487_50941540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58500_66745260_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   _58500_66745260_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   _58500_66745260_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(_58500_66745260_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,_58500_66745260_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
_58500_66745260_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[_58500_66745260_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__57774040();

   return behavior;
}

Behavior __57772600;

Behavior make__57772600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57772600 = behavior;
   behavior->owner = (Object)channel__w1_58487_50941540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_50955080_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   trig__w_50955080_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   trig__w_50955080_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(trig__w_50955080_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,trig__w_50955080_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
trig__w_50955080_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[trig__w_50955080_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__57772840();

   return behavior;
}

Behavior __57772240;

Behavior make__57772240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57772240 = behavior;
   behavior->owner = (Object)channel__w1_58487_50941540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58503_68340000_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   _58503_68340000_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   _58503_68340000_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(_58503_68340000_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,_58503_68340000_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
_58503_68340000_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[_58503_68340000_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__57772500();

   return behavior;
}

Behavior __57770120;

Behavior make__57770120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57770120 = behavior;
   behavior->owner = (Object)channel__w1_58487_50941540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_55615400_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   abus__w_55615400_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   abus__w_55615400_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(abus__w_55615400_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,abus__w_55615400_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
abus__w_55615400_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[abus__w_55615400_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__57771340();

   return behavior;
}

Behavior __57793640;

Behavior make__57793640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57793640 = behavior;
   behavior->owner = (Object)channel__w1_58487_50941540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58504_68339920_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   _58504_68339920_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   _58504_68339920_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(_58504_68339920_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,_58504_68339920_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
_58504_68339920_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[_58504_68339920_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__57794520();

   return behavior;
}

Behavior __57792680;

Behavior make__57792680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57792680 = behavior;
   behavior->owner = (Object)channel__w1_58487_50941540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_55599640_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   dbus__w_55599640_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   dbus__w_55599640_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(dbus__w_55599640_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,dbus__w_55599640_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
dbus__w_55599640_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[dbus__w_55599640_channel__w1_58487_50941540_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__57792960();

   return behavior;
}

Behavior __57792440;

Behavior make__57792440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57792440 = behavior;
   behavior->owner = (Object)channel__w1_58487_50941540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58505_68546400_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   _58505_68546400_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   _58505_68546400_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(_58505_68546400_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,_58505_68546400_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
_58505_68546400_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[_58505_68546400_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__57792620();

   return behavior;
}

Scope makechannel__w1_58487_50941540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w1_58487_50941540 = scope;
   scope->owner = (Object)layer2_58_84_67847240;
   scope->name = "channel_w1:487";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_50955180();
   scope->inners[1] = maketrig__w_50955080();
   scope->inners[2] = makedbus__r_51285520();
   scope->inners[3] = makedbus__w_55599640();
   scope->inners[4] = makeabus__r_55599140();
   scope->inners[5] = makeabus__w_55615400();
   scope->inners[6] = makemem_55918360();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58488_50940960();
   scope->scopes[1] = makewaddr_58493_50939300();
   scope->scopes[2] = makerinc_58498_50938460();
   scope->scopes[3] = makewinc_58502_50961540();
   scope->scopes[4] = makerdec_58506_50959860();
   scope->scopes[5] = makewdec_58511_50959020();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__58602440();
   scope->behaviors[1] = make__57721540();
   scope->behaviors[2] = make__57720900();
   scope->behaviors[3] = make__57776200();
   scope->behaviors[4] = make__57775640();
   scope->behaviors[5] = make__57774220();
   scope->behaviors[6] = make__57773580();
   scope->behaviors[7] = make__57772600();
   scope->behaviors[8] = make__57772240();
   scope->behaviors[9] = make__57770120();
   scope->behaviors[10] = make__57793640();
   scope->behaviors[11] = make__57792680();
   scope->behaviors[12] = make__57792440();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_58516_58602120;

SignalI reg__0_58825460_channel__accum_58516_58602120_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makereg__0_58825460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_58825460_channel__accum_58516_58602120_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)channel__accum_58516_58602120;
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

SignalI reg__1_56957800_channel__accum_58516_58602120_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makereg__1_56957800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_56957800_channel__accum_58516_58602120_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)channel__accum_58516_58602120;
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

Scope anum_58517_58601300;

Scope makeanum_58517_58601300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58517_58601300 = scope;
   scope->owner = (Object)channel__accum_58516_58602120;
   scope->name = "anum:517";
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

Scope raddr_58520_58600460;

Scope makeraddr_58520_58600460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58520_58600460 = scope;
   scope->owner = (Object)channel__accum_58516_58602120;
   scope->name = "raddr:520";
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

Scope waddr_58524_58599600;

Scope makewaddr_58524_58599600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58524_58599600 = scope;
   scope->owner = (Object)channel__accum_58516_58602120;
   scope->name = "waddr:524";
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

Scope rinc_58528_58598960;

SignalI abus__r_58597980_rinc_58528_58598960_channel__accum_58516_58602120_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makeabus__r_58597980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_58597980_rinc_58528_58598960_channel__accum_58516_58602120_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)rinc_58528_58598960;
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

Scope makerinc_58528_58598960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58528_58598960 = scope;
   scope->owner = (Object)channel__accum_58516_58602120;
   scope->name = "rinc:528";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_58597980();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58533_58629620;

SignalI abus__w_58627680_winc_58533_58629620_channel__accum_58516_58602120_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makeabus__w_58627680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_58627680_winc_58533_58629620_channel__accum_58516_58602120_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)winc_58533_58629620;
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

Scope makewinc_58533_58629620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58533_58629620 = scope;
   scope->owner = (Object)channel__accum_58516_58602120;
   scope->name = "winc:533";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_58627680();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58538_58627380;

SignalI abus__r_58626540_rdec_58538_58627380_channel__accum_58516_58602120_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makeabus__r_58626540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_58626540_rdec_58538_58627380_channel__accum_58516_58602120_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)rdec_58538_58627380;
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

Scope makerdec_58538_58627380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58538_58627380 = scope;
   scope->owner = (Object)channel__accum_58516_58602120;
   scope->name = "rdec:538";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_58626540();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58543_58626220;

SignalI abus__w_58624820_wdec_58543_58626220_channel__accum_58516_58602120_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makeabus__w_58624820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_58624820_wdec_58543_58626220_channel__accum_58516_58602120_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)wdec_58543_58626220;
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

Scope makewdec_58543_58626220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58543_58626220 = scope;
   scope->owner = (Object)channel__accum_58516_58602120;
   scope->name = "wdec:543";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_58624820();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __57787380;

Behavior make__57787380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57787380 = behavior;
   behavior->owner = (Object)channel__accum_58516_58602120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_58825460_channel__accum_58516_58602120_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   reg__0_58825460_channel__accum_58516_58602120_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   reg__0_58825460_channel__accum_58516_58602120_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(reg__0_58825460_channel__accum_58516_58602120_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,reg__0_58825460_channel__accum_58516_58602120_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
reg__0_58825460_channel__accum_58516_58602120_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[reg__0_58825460_channel__accum_58516_58602120_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__57787660();

   return behavior;
}

Behavior __57787000;

Behavior make__57787000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57787000 = behavior;
   behavior->owner = (Object)channel__accum_58516_58602120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58518_66503560_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   _58518_66503560_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   _58518_66503560_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(_58518_66503560_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,_58518_66503560_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
_58518_66503560_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[_58518_66503560_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__57787340();

   return behavior;
}

Behavior __57843140;

Behavior make__57843140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57843140 = behavior;
   behavior->owner = (Object)channel__accum_58516_58602120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_56957800_channel__accum_58516_58602120_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   reg__1_56957800_channel__accum_58516_58602120_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   reg__1_56957800_channel__accum_58516_58602120_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(reg__1_56957800_channel__accum_58516_58602120_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,reg__1_56957800_channel__accum_58516_58602120_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
reg__1_56957800_channel__accum_58516_58602120_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[reg__1_56957800_channel__accum_58516_58602120_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__57843620();

   return behavior;
}

Behavior __57842200;

Behavior make__57842200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57842200 = behavior;
   behavior->owner = (Object)channel__accum_58516_58602120;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58519_66661200_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   _58519_66661200_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   _58519_66661200_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(_58519_66661200_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,_58519_66661200_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
_58519_66661200_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[_58519_66661200_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__57843020();

   return behavior;
}

Scope makechannel__accum_58516_58602120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_58516_58602120 = scope;
   scope->owner = (Object)layer2_58_84_67847240;
   scope->name = "channel_accum:516";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_58825460();
   scope->inners[1] = makereg__1_56957800();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58517_58601300();
   scope->scopes[1] = makeraddr_58520_58600460();
   scope->scopes[2] = makewaddr_58524_58599600();
   scope->scopes[3] = makerinc_58528_58598960();
   scope->scopes[4] = makewinc_58533_58629620();
   scope->scopes[5] = makerdec_58538_58627380();
   scope->scopes[6] = makewdec_58543_58626220();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57787380();
   scope->behaviors[1] = make__57787000();
   scope->behaviors[2] = make__57843140();
   scope->behaviors[3] = make__57842200();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_58548_64624060;

SignalI lv0_64807820_mac__n1_58548_64624060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makelv0_64807820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_64807820_mac__n1_58548_64624060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)mac__n1_58548_64624060;
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

SignalI lv1_64957720_mac__n1_58548_64624060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makelv1_64957720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_64957720_mac__n1_58548_64624060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)mac__n1_58548_64624060;
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

SignalI av0_65215480_mac__n1_58548_64624060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makeav0_65215480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_65215480_mac__n1_58548_64624060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)mac__n1_58548_64624060;
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

SignalI av1_65300660_mac__n1_58548_64624060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makeav1_65300660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av1_65300660_mac__n1_58548_64624060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)mac__n1_58548_64624060;
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

SignalI rv_65369960_mac__n1_58548_64624060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makerv_65369960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_65369960_mac__n1_58548_64624060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)mac__n1_58548_64624060;
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

SignalI lvok0_65369940_mac__n1_58548_64624060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makelvok0_65369940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_65369940_mac__n1_58548_64624060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)mac__n1_58548_64624060;
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

SignalI lvok1_65369920_mac__n1_58548_64624060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makelvok1_65369920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_65369920_mac__n1_58548_64624060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)mac__n1_58548_64624060;
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

SignalI rvok_65369900_mac__n1_58548_64624060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makervok_65369900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_65369900_mac__n1_58548_64624060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)mac__n1_58548_64624060;
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

SignalI run_65369880_mac__n1_58548_64624060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makerun_65369880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_65369880_mac__n1_58548_64624060_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)mac__n1_58548_64624060;
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

Behavior __68867780;

Behavior make__68867780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __68867780 = behavior;
   behavior->owner = (Object)mac__n1_58548_64624060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_67533020_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   clk_67533020_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_pos += 1;
   clk_67533020_layer2_58_840_67511140______58_84_49748700______58_840_68377440->pos = realloc(clk_67533020_layer2_58_840_67511140______58_84_49748700______58_840_68377440->pos,clk_67533020_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_pos*sizeof(Object));
clk_67533020_layer2_58_840_67511140______58_84_49748700______58_840_68377440->pos[clk_67533020_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_pos-1] = (Object)behavior;
   behavior->block = make__65369760();

   return behavior;
}

Scope makemac__n1_58548_64624060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_58548_64624060 = scope;
   scope->owner = (Object)layer2_58_84_67847240;
   scope->name = "mac_n1:548";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_64807820();
   scope->inners[1] = makelv1_64957720();
   scope->inners[2] = makeav0_65215480();
   scope->inners[3] = makeav1_65300660();
   scope->inners[4] = makerv_65369960();
   scope->inners[5] = makelvok0_65369940();
   scope->inners[6] = makelvok1_65369920();
   scope->inners[7] = makervok_65369900();
   scope->inners[8] = makerun_65369880();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__68867780();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__bias_58555_68867660;

SignalI reg__0_47794060_channel__bias_58555_68867660_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makereg__0_47794060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_47794060_channel__bias_58555_68867660_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)channel__bias_58555_68867660;
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

SignalI reg__1_49057060_channel__bias_58555_68867660_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makereg__1_49057060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_49057060_channel__bias_58555_68867660_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)channel__bias_58555_68867660;
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

Scope anum_58556_68867320;

Scope makeanum_58556_68867320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58556_68867320 = scope;
   scope->owner = (Object)channel__bias_58555_68867660;
   scope->name = "anum:556";
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

Scope raddr_58559_68866840;

Scope makeraddr_58559_68866840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58559_68866840 = scope;
   scope->owner = (Object)channel__bias_58555_68867660;
   scope->name = "raddr:559";
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

Scope waddr_58563_68866420;

Scope makewaddr_58563_68866420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58563_68866420 = scope;
   scope->owner = (Object)channel__bias_58555_68867660;
   scope->name = "waddr:563";
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

Scope rinc_58567_68866000;

SignalI abus__r_68865620_rinc_58567_68866000_channel__bias_58555_68867660_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makeabus__r_68865620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_68865620_rinc_58567_68866000_channel__bias_58555_68867660_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)rinc_58567_68866000;
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

Scope makerinc_58567_68866000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58567_68866000 = scope;
   scope->owner = (Object)channel__bias_58555_68867660;
   scope->name = "rinc:567";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_68865620();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58571_68865500;

SignalI abus__w_68865060_winc_58571_68865500_channel__bias_58555_68867660_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makeabus__w_68865060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_68865060_winc_58571_68865500_channel__bias_58555_68867660_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)winc_58571_68865500;
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

Behavior __57985400;

Behavior make__57985400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57985400 = behavior;
   behavior->owner = (Object)winc_58571_68865500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_68865060_winc_58571_68865500_channel__bias_58555_68867660_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   abus__w_68865060_winc_58571_68865500_channel__bias_58555_68867660_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   abus__w_68865060_winc_58571_68865500_channel__bias_58555_68867660_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(abus__w_68865060_winc_58571_68865500_channel__bias_58555_68867660_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,abus__w_68865060_winc_58571_68865500_channel__bias_58555_68867660_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
abus__w_68865060_winc_58571_68865500_channel__bias_58555_68867660_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[abus__w_68865060_winc_58571_68865500_channel__bias_58555_68867660_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__57986780();

   return behavior;
}

Behavior __57983240;

Behavior make__57983240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57983240 = behavior;
   behavior->owner = (Object)winc_58571_68865500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58574_68166160_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   _58574_68166160_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   _58574_68166160_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(_58574_68166160_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,_58574_68166160_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
_58574_68166160_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[_58574_68166160_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__57985140();

   return behavior;
}

Scope makewinc_58571_68865500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58571_68865500 = scope;
   scope->owner = (Object)channel__bias_58555_68867660;
   scope->name = "winc:571";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_68865060();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57985400();
   scope->behaviors[1] = make__57983240();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58575_68864640;

SignalI abus__r_68864260_rdec_58575_68864640_channel__bias_58555_68867660_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makeabus__r_68864260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_68864260_rdec_58575_68864640_channel__bias_58555_68867660_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)rdec_58575_68864640;
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

Scope makerdec_58575_68864640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58575_68864640 = scope;
   scope->owner = (Object)channel__bias_58555_68867660;
   scope->name = "rdec:575";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_68864260();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58580_68864140;

SignalI abus__w_68863760_wdec_58580_68864140_channel__bias_58555_68867660_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makeabus__w_68863760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_68863760_wdec_58580_68864140_channel__bias_58555_68867660_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)wdec_58580_68864140;
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

Scope makewdec_58580_68864140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58580_68864140 = scope;
   scope->owner = (Object)channel__bias_58555_68867660;
   scope->name = "wdec:580";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_68863760();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __57836920;

Behavior make__57836920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57836920 = behavior;
   behavior->owner = (Object)channel__bias_58555_68867660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_47794060_channel__bias_58555_68867660_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   reg__0_47794060_channel__bias_58555_68867660_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   reg__0_47794060_channel__bias_58555_68867660_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(reg__0_47794060_channel__bias_58555_68867660_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,reg__0_47794060_channel__bias_58555_68867660_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
reg__0_47794060_channel__bias_58555_68867660_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[reg__0_47794060_channel__bias_58555_68867660_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__57837460();

   return behavior;
}

Behavior __57836340;

Behavior make__57836340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57836340 = behavior;
   behavior->owner = (Object)channel__bias_58555_68867660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58557_66916820_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   _58557_66916820_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   _58557_66916820_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(_58557_66916820_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,_58557_66916820_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
_58557_66916820_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[_58557_66916820_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__57836860();

   return behavior;
}

Behavior __57859760;

Behavior make__57859760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57859760 = behavior;
   behavior->owner = (Object)channel__bias_58555_68867660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_49057060_channel__bias_58555_68867660_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   reg__1_49057060_channel__bias_58555_68867660_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   reg__1_49057060_channel__bias_58555_68867660_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(reg__1_49057060_channel__bias_58555_68867660_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,reg__1_49057060_channel__bias_58555_68867660_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
reg__1_49057060_channel__bias_58555_68867660_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[reg__1_49057060_channel__bias_58555_68867660_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__57835540();

   return behavior;
}

Behavior __57859340;

Behavior make__57859340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57859340 = behavior;
   behavior->owner = (Object)channel__bias_58555_68867660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58558_67220400_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   _58558_67220400_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   _58558_67220400_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(_58558_67220400_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,_58558_67220400_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
_58558_67220400_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[_58558_67220400_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__57859640();

   return behavior;
}

Behavior __57857380;

Behavior make__57857380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57857380 = behavior;
   behavior->owner = (Object)channel__bias_58555_68867660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_47794060_channel__bias_58555_68867660_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   reg__0_47794060_channel__bias_58555_68867660_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   reg__0_47794060_channel__bias_58555_68867660_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(reg__0_47794060_channel__bias_58555_68867660_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,reg__0_47794060_channel__bias_58555_68867660_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
reg__0_47794060_channel__bias_58555_68867660_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[reg__0_47794060_channel__bias_58555_68867660_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__57858200();

   return behavior;
}

Behavior __57857020;

Behavior make__57857020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57857020 = behavior;
   behavior->owner = (Object)channel__bias_58555_68867660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58572_68049340_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   _58572_68049340_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   _58572_68049340_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(_58572_68049340_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,_58572_68049340_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
_58572_68049340_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[_58572_68049340_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__57857280();

   return behavior;
}

Behavior __57853040;

Behavior make__57853040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57853040 = behavior;
   behavior->owner = (Object)channel__bias_58555_68867660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_49057060_channel__bias_58555_68867660_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   reg__1_49057060_channel__bias_58555_68867660_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   reg__1_49057060_channel__bias_58555_68867660_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(reg__1_49057060_channel__bias_58555_68867660_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,reg__1_49057060_channel__bias_58555_68867660_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
reg__1_49057060_channel__bias_58555_68867660_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[reg__1_49057060_channel__bias_58555_68867660_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__57855900();

   return behavior;
}

Behavior __57852540;

Behavior make__57852540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57852540 = behavior;
   behavior->owner = (Object)channel__bias_58555_68867660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58573_68166240_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   _58573_68166240_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   _58573_68166240_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(_58573_68166240_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,_58573_68166240_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
_58573_68166240_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[_58573_68166240_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__57852980();

   return behavior;
}

Scope makechannel__bias_58555_68867660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__bias_58555_68867660 = scope;
   scope->owner = (Object)layer2_58_84_67847240;
   scope->name = "channel_bias:555";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_47794060();
   scope->inners[1] = makereg__1_49057060();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58556_68867320();
   scope->scopes[1] = makeraddr_58559_68866840();
   scope->scopes[2] = makewaddr_58563_68866420();
   scope->scopes[3] = makerinc_58567_68866000();
   scope->scopes[4] = makewinc_58571_68865500();
   scope->scopes[5] = makerdec_58575_68864640();
   scope->scopes[6] = makewdec_58580_68864140();
   scope->num_behaviors = 8;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__57836920();
   scope->behaviors[1] = make__57836340();
   scope->behaviors[2] = make__57859760();
   scope->behaviors[3] = make__57859340();
   scope->behaviors[4] = make__57857380();
   scope->behaviors[5] = make__57857020();
   scope->behaviors[6] = make__57853040();
   scope->behaviors[7] = make__57852540();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_58585_56365640;

SignalI reg__0_56796300_channel__z_58585_56365640_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makereg__0_56796300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_56796300_channel__z_58585_56365640_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)channel__z_58585_56365640;
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

SignalI reg__1_57054940_channel__z_58585_56365640_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makereg__1_57054940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_57054940_channel__z_58585_56365640_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)channel__z_58585_56365640;
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

Scope anum_58586_56365120;

Scope makeanum_58586_56365120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58586_56365120 = scope;
   scope->owner = (Object)channel__z_58585_56365640;
   scope->name = "anum:586";
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

Scope raddr_58589_56364140;

Scope makeraddr_58589_56364140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58589_56364140 = scope;
   scope->owner = (Object)channel__z_58585_56365640;
   scope->name = "raddr:589";
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

Scope waddr_58593_56362620;

Scope makewaddr_58593_56362620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58593_56362620 = scope;
   scope->owner = (Object)channel__z_58585_56365640;
   scope->name = "waddr:593";
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

Scope rinc_58597_56361360;

SignalI abus__r_56385320_rinc_58597_56361360_channel__z_58585_56365640_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makeabus__r_56385320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_56385320_rinc_58597_56361360_channel__z_58585_56365640_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)rinc_58597_56361360;
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

Scope makerinc_58597_56361360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58597_56361360 = scope;
   scope->owner = (Object)channel__z_58585_56365640;
   scope->name = "rinc:597";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_56385320();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58601_56385080;

SignalI abus__w_56383700_winc_58601_56385080_channel__z_58585_56365640_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makeabus__w_56383700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_56383700_winc_58601_56385080_channel__z_58585_56365640_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)winc_58601_56385080;
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

Scope makewinc_58601_56385080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58601_56385080 = scope;
   scope->owner = (Object)channel__z_58585_56365640;
   scope->name = "winc:601";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_56383700();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58605_56382960;

SignalI abus__r_56381660_rdec_58605_56382960_channel__z_58585_56365640_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makeabus__r_56381660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_56381660_rdec_58605_56382960_channel__z_58585_56365640_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)rdec_58605_56382960;
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

Scope makerdec_58605_56382960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58605_56382960 = scope;
   scope->owner = (Object)channel__z_58585_56365640;
   scope->name = "rdec:605";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_56381660();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58610_56381520;

SignalI abus__w_56380800_wdec_58610_56381520_channel__z_58585_56365640_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makeabus__w_56380800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_56380800_wdec_58610_56381520_channel__z_58585_56365640_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)wdec_58610_56381520;
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

Scope makewdec_58610_56381520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58610_56381520 = scope;
   scope->owner = (Object)channel__z_58585_56365640;
   scope->name = "wdec:610";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_56380800();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __58003300;

Behavior make__58003300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58003300 = behavior;
   behavior->owner = (Object)channel__z_58585_56365640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_56796300_channel__z_58585_56365640_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   reg__0_56796300_channel__z_58585_56365640_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   reg__0_56796300_channel__z_58585_56365640_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(reg__0_56796300_channel__z_58585_56365640_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,reg__0_56796300_channel__z_58585_56365640_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
reg__0_56796300_channel__z_58585_56365640_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[reg__0_56796300_channel__z_58585_56365640_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__58003840();

   return behavior;
}

Behavior __58002920;

Behavior make__58002920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58002920 = behavior;
   behavior->owner = (Object)channel__z_58585_56365640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58587_67345360_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   _58587_67345360_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   _58587_67345360_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(_58587_67345360_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,_58587_67345360_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
_58587_67345360_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[_58587_67345360_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__58003260();

   return behavior;
}

Behavior __58001000;

Behavior make__58001000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58001000 = behavior;
   behavior->owner = (Object)channel__z_58585_56365640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_57054940_channel__z_58585_56365640_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   reg__1_57054940_channel__z_58585_56365640_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   reg__1_57054940_channel__z_58585_56365640_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(reg__1_57054940_channel__z_58585_56365640_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,reg__1_57054940_channel__z_58585_56365640_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
reg__1_57054940_channel__z_58585_56365640_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[reg__1_57054940_channel__z_58585_56365640_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__58001900();

   return behavior;
}

Behavior __58000580;

Behavior make__58000580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58000580 = behavior;
   behavior->owner = (Object)channel__z_58585_56365640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58588_67533380_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   _58588_67533380_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   _58588_67533380_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(_58588_67533380_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,_58588_67533380_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
_58588_67533380_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[_58588_67533380_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__58000860();

   return behavior;
}

Scope makechannel__z_58585_56365640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_58585_56365640 = scope;
   scope->owner = (Object)layer2_58_84_67847240;
   scope->name = "channel_z:585";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_56796300();
   scope->inners[1] = makereg__1_57054940();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58586_56365120();
   scope->scopes[1] = makeraddr_58589_56364140();
   scope->scopes[2] = makewaddr_58593_56362620();
   scope->scopes[3] = makerinc_58597_56361360();
   scope->scopes[4] = makewinc_58601_56385080();
   scope->scopes[5] = makerdec_58605_56382960();
   scope->scopes[6] = makewdec_58610_56381520();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__58003300();
   scope->behaviors[1] = make__58002920();
   scope->behaviors[2] = make__58001000();
   scope->behaviors[3] = make__58000580();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_58615_58279320;

SignalI lv0_58570600_add__n_58615_58279320_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makelv0_58570600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_58570600_add__n_58615_58279320_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)add__n_58615_58279320;
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

SignalI lv1_58808420_add__n_58615_58279320_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makelv1_58808420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_58808420_add__n_58615_58279320_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)add__n_58615_58279320;
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

SignalI rv0_56918740_add__n_58615_58279320_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makerv0_56918740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_56918740_add__n_58615_58279320_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)add__n_58615_58279320;
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

SignalI rv1_53890000_add__n_58615_58279320_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makerv1_53890000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv1_53890000_add__n_58615_58279320_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)add__n_58615_58279320;
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

SignalI lvok0_53889960_add__n_58615_58279320_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makelvok0_53889960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_53889960_add__n_58615_58279320_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)add__n_58615_58279320;
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

SignalI lvok1_53889940_add__n_58615_58279320_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makelvok1_53889940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_53889940_add__n_58615_58279320_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)add__n_58615_58279320;
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

SignalI rvok0_53889920_add__n_58615_58279320_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makervok0_53889920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_53889920_add__n_58615_58279320_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)add__n_58615_58279320;
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

SignalI rvok1_53889900_add__n_58615_58279320_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makervok1_53889900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok1_53889900_add__n_58615_58279320_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)add__n_58615_58279320;
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

SignalI run_53889860_add__n_58615_58279320_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440;

SignalI makerun_53889860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_53889860_add__n_58615_58279320_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440 = signalI;
   signalI->owner = (Object)add__n_58615_58279320;
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

Behavior __66360940;

Behavior make__66360940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __66360940 = behavior;
   behavior->owner = (Object)add__n_58615_58279320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_67533020_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   clk_67533020_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_pos += 1;
   clk_67533020_layer2_58_840_67511140______58_84_49748700______58_840_68377440->pos = realloc(clk_67533020_layer2_58_840_67511140______58_84_49748700______58_840_68377440->pos,clk_67533020_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_pos*sizeof(Object));
clk_67533020_layer2_58_840_67511140______58_84_49748700______58_840_68377440->pos[clk_67533020_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_pos-1] = (Object)behavior;
   behavior->block = make__53889740();

   return behavior;
}

Scope makeadd__n_58615_58279320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_58615_58279320 = scope;
   scope->owner = (Object)layer2_58_84_67847240;
   scope->name = "add_n:615";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_58570600();
   scope->inners[1] = makelv1_58808420();
   scope->inners[2] = makerv0_56918740();
   scope->inners[3] = makerv1_53890000();
   scope->inners[4] = makelvok0_53889960();
   scope->inners[5] = makelvok1_53889940();
   scope->inners[6] = makervok0_53889920();
   scope->inners[7] = makervok1_53889900();
   scope->inners[8] = makerun_53889860();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__66360940();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __66081380;

Behavior make__66081380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __66081380 = behavior;
   behavior->owner = (Object)layer2_58_84_67847240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_67533020_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   clk_67533020_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_pos += 1;
   clk_67533020_layer2_58_840_67511140______58_84_49748700______58_840_68377440->pos = realloc(clk_67533020_layer2_58_840_67511140______58_84_49748700______58_840_68377440->pos,clk_67533020_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_pos*sizeof(Object));
clk_67533020_layer2_58_840_67511140______58_84_49748700______58_840_68377440->pos[clk_67533020_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_pos-1] = (Object)behavior;
   behavior->block = make__65451560();

   return behavior;
}

Behavior __66562100;

Behavior make__66562100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __66562100 = behavior;
   behavior->owner = (Object)layer2_58_84_67847240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_67533020_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   clk_67533020_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_pos += 1;
   clk_67533020_layer2_58_840_67511140______58_84_49748700______58_840_68377440->pos = realloc(clk_67533020_layer2_58_840_67511140______58_84_49748700______58_840_68377440->pos,clk_67533020_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_pos*sizeof(Object));
clk_67533020_layer2_58_840_67511140______58_84_49748700______58_840_68377440->pos[clk_67533020_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_pos-1] = (Object)behavior;
   behavior->block = make__66081260();

   return behavior;
}

Behavior __67511740;

Behavior make__67511740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __67511740 = behavior;
   behavior->owner = (Object)layer2_58_84_67847240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_67533020_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   clk_67533020_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_pos += 1;
   clk_67533020_layer2_58_840_67511140______58_84_49748700______58_840_68377440->pos = realloc(clk_67533020_layer2_58_840_67511140______58_84_49748700______58_840_68377440->pos,clk_67533020_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_pos*sizeof(Object));
clk_67533020_layer2_58_840_67511140______58_84_49748700______58_840_68377440->pos[clk_67533020_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_pos-1] = (Object)behavior;
   behavior->block = make__66561960();

   return behavior;
}

Behavior __57622960;

Behavior make__57622960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57622960 = behavior;
   behavior->owner = (Object)layer2_58_84_67847240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_67532940_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   req_67532940_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   req_67532940_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(req_67532940_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,req_67532940_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
req_67532940_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[req_67532940_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_66360760_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   ack__mac_66360760_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   ack__mac_66360760_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(ack__mac_66360760_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,ack__mac_66360760_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
ack__mac_66360760_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[ack__mac_66360760_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__57624140();

   return behavior;
}

Behavior __57676100;

Behavior make__57676100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57676100 = behavior;
   behavior->owner = (Object)layer2_58_84_67847240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 7;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_67533020_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   clk_67533020_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   clk_67533020_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(clk_67533020_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,clk_67533020_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
clk_67533020_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[clk_67533020_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_66360780_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   ack_66360780_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   ack_66360780_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(ack_66360780_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,ack_66360780_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
ack_66360780_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[ack_66360780_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_67533000_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   rst_67533000_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   rst_67533000_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(rst_67533000_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,rst_67533000_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
rst_67533000_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[rst_67533000_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_67576520_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   value__z0_67576520_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   value__z0_67576520_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(value__z0_67576520_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,value__z0_67576520_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
value__z0_67576520_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[value__z0_67576520_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,value__z1_67667640_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   value__z1_67667640_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   value__z1_67667640_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(value__z1_67667640_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,value__z1_67667640_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
value__z1_67667640_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[value__z1_67667640_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,ack__a0_67965280_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   ack__a0_67965280_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   ack__a0_67965280_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(ack__a0_67965280_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,ack__a0_67965280_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
ack__a0_67965280_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[ack__a0_67965280_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->events[6] = make_event(ANYEDGE,ack__a1_67965240_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   ack__a1_67965240_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   ack__a1_67965240_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(ack__a1_67965240_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,ack__a1_67965240_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
ack__a1_67965240_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[ack__a1_67965240_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__57624480();

   return behavior;
}

Behavior __57675540;

Behavior make__57675540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57675540 = behavior;
   behavior->owner = (Object)layer2_58_84_67847240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_68562620_counter_58_8410_68564740_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   ack__mac_68562620_counter_58_8410_68564740_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   ack__mac_68562620_counter_58_8410_68564740_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(ack__mac_68562620_counter_58_8410_68564740_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,ack__mac_68562620_counter_58_8410_68564740_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
ack__mac_68562620_counter_58_8410_68564740_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[ack__mac_68562620_counter_58_8410_68564740_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,a_65816500_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   a_65816500_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   a_65816500_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(a_65816500_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,a_65816500_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
a_65816500_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[a_65816500_func0_58_8410_65446500_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,a_58803600_func1_58_8410_58223700_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440);
   a_58803600_func1_58_8410_58223700_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any += 1;
   a_58803600_func1_58_8410_58223700_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any = realloc(a_58803600_func1_58_8410_58223700_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any,a_58803600_func1_58_8410_58223700_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any*sizeof(Object));
a_58803600_func1_58_8410_58223700_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->any[a_58803600_func1_58_8410_58223700_layer2_58_84_67847240_layer2_58_840_67511140______58_84_49748700______58_840_68377440->num_any-1] = (Object)behavior;
   behavior->block = make__57624340();

   return behavior;
}

Scope makelayer2_58_84_67847240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer2_58_84_67847240 = scope;
   scope->owner = (Object)layer2_58_840_67511140;
   scope->name = "layer2:T";
   scope->num_systemIs = 3;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_68562480();
   scope->systemIs[1] = makefunc0_65816360();
   scope->systemIs[2] = makefunc1_58802600();
   scope->num_inners = 33;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_66360800();
   scope->inners[1] = makeack_66360780();
   scope->inners[2] = makeack__mac_66360760();
   scope->inners[3] = makeack__add_66360720();
   scope->inners[4] = make_58472_66460440();
   scope->inners[5] = make_58470_66460420();
   scope->inners[6] = make_58471_66460340();
   scope->inners[7] = make_58518_66503560();
   scope->inners[8] = make_58519_66661200();
   scope->inners[9] = make_58501_66745360();
   scope->inners[10] = make_58499_66745340();
   scope->inners[11] = make_58500_66745260();
   scope->inners[12] = make_58557_66916820();
   scope->inners[13] = make_58558_67220400();
   scope->inners[14] = make_58587_67345360();
   scope->inners[15] = make_58588_67533380();
   scope->inners[16] = makevalue__z0_67576520();
   scope->inners[17] = makevalue__z1_67667640();
   scope->inners[18] = makevalue__a0_67817260();
   scope->inners[19] = makevalue__a1_67965340();
   scope->inners[20] = makeflag__z0_67965320();
   scope->inners[21] = makeflag__z1_67965300();
   scope->inners[22] = makeack__a0_67965280();
   scope->inners[23] = makeack__a1_67965240();
   scope->inners[24] = make_58572_68049340();
   scope->inners[25] = make_58573_68166240();
   scope->inners[26] = make_58574_68166160();
   scope->inners[27] = make_58474_68166140();
   scope->inners[28] = make_58475_68166060();
   scope->inners[29] = make_58476_68340020();
   scope->inners[30] = make_58503_68340000();
   scope->inners[31] = make_58504_68339920();
   scope->inners[32] = make_58505_68546400();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_58458_67846940();
   scope->scopes[1] = makechannel__w1_58487_50941540();
   scope->scopes[2] = makechannel__accum_58516_58602120();
   scope->scopes[3] = makemac__n1_58548_64624060();
   scope->scopes[4] = makechannel__bias_58555_68867660();
   scope->scopes[5] = makechannel__z_58585_56365640();
   scope->scopes[6] = makeadd__n_58615_58279320();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__66081380();
   scope->behaviors[1] = make__66562100();
   scope->behaviors[2] = make__67511740();
   scope->behaviors[3] = make__57622960();
   scope->behaviors[4] = make__57676100();
   scope->behaviors[5] = make__57675540();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer2_58_840_67511140() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer2_58_840_67511140 = systemT;
systemT->owner = NULL;
   systemT->name = "layer2:T0";
   systemT->num_inputs = 6;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_67533020();
   systemT->inputs[1] = makerst_67533000();
   systemT->inputs[2] = makefill_67532960();
   systemT->inputs[3] = makereq_67532940();
   systemT->inputs[4] = make_5873_67609840();
   systemT->inputs[5] = make_5874_67698720();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_67805100();
   systemT->num_inouts = 3;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_5875_67805000();
   systemT->inouts[1] = make_5892_67913060();
   systemT->inouts[2] = make_5893_68044920();

   systemT->scope = makelayer2_58_84_67847240();

   return systemT;
}