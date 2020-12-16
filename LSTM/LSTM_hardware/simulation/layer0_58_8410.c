#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT layer0_58_8410_83468900;

SignalI clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makeclk_83519260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)layer0_58_8410_83468900;
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

SignalI rst_83519200_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makerst_83519200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_83519200_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)layer0_58_8410_83468900;
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

SignalI req_83518800_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makereq_83518800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_83518800_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)layer0_58_8410_83468900;
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

SignalI _582505_84282340_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI make_582505_84282340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _582505_84282340_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)layer0_58_8410_83468900;
   signalI->name = ":2505";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI ack__layer_84282220_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makeack__layer_84282220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__layer_84282220_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)layer0_58_8410_83468900;
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

SignalI _582503_84282200_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI make_582503_84282200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _582503_84282200_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)layer0_58_8410_83468900;
   signalI->name = ":2503";
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

SignalI _582504_84281780_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI make_582504_84281780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _582504_84281780_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)layer0_58_8410_83468900;
   signalI->name = ":2504";
   signalI->type = get_type_vector(get_type_bit(),3);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _582594_85958700_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI make_582594_85958700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _582594_85958700_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)layer0_58_8410_83468900;
   signalI->name = ":2594";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _582595_86735440_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI make_582595_86735440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _582595_86735440_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)layer0_58_8410_83468900;
   signalI->name = ":2595";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Block __65062820;

Block __65061000;

void code__65061000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209243480(),ack_79677880_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209243380(),ack__mac_79677860_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209243260(),ack__add_79677800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__65061000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65061000 = block;
   block->owner = (Object)__65062820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65061000;

   return block;
};

void code__65062820() {
   {
      Value cond = rst_83519200_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65061000();
   }
      }
   }
}

Block make__65062820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65062820 = block;
   block->owner = (Object)__65138980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65062820;

   return block;
};

Block __65138460;

Block __65154600;

Block __65175340;

void code__65175340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_582723_106425820_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,value__z0_107642980_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209243060(),flag__z0_108821500_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__65175340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65175340 = block;
   block->owner = (Object)__65154600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65175340;

   return block;
};

Block __67087280;

void code__67087280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_582724_106913080_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,value__z1_108025440_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209242920(),flag__z1_108821440_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__67087280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __67087280 = block;
   block->owner = (Object)__65154600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__67087280;

   return block;
};

void code__65154600() {
 code__65175340();
 code__67087280();
}

Block make__65154600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65154600 = block;
   block->owner = (Object)__65138460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65154600;

   return block;
};

Block __65137700;

void code__65137700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209242860(),flag__z0_108821500_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209242780(),flag__z1_108821440_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__65137700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65137700 = block;
   block->owner = (Object)__65138460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65137700;

   return block;
};

void code__65138460() {
   {
      Value cond = ack__add_79677800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65154600();
   }
   else {
  code__65137700();
   }
      }
   }
}

Block make__65138460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65138460 = block;
   block->owner = (Object)__79730660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65138460;

   return block;
};

Block __79729780;

Block __79727620;

void code__79727620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209242660(),ack__a0_108821400_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209242560(),ack__a1_108821280_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__79727620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79727620 = block;
   block->owner = (Object)__79729780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79727620;

   return block;
};

Block __79743940;

Block __79742600;

void code__79742600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a0_108543200_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,_582594_85958700_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209241500(),ack__a0_108821400_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__79742600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79742600 = block;
   block->owner = (Object)__79743940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79742600;

   return block;
};

Block __81568760;

void code__81568760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__a1_108821540_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,_582595_86735440_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209241320(),ack__a1_108821280_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__81568760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __81568760 = block;
   block->owner = (Object)__79743940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__81568760;

   return block;
};

void code__79743940() {
 code__79742600();
 code__81568760();
}

Block make__79743940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79743940 = block;
   block->owner = (Object)__79729780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79743940;

   return block;
};

void code__79729780() {
   {
      Value cond = rst_83519200_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__79727620();
   }
   else if (value2integer(({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = flag__z0_108821500_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
         src1 = flag__z1_108821440_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; }))) {
  code__79743940();
   }
      }
   }
}

Block make__79729780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79729780 = block;
   block->owner = (Object)__83470240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79729780;

   return block;
};

Block __208791520;

void code__208791520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = req_83518800_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__mac_79677860_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),req__mac_79677920_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__208791520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __208791520 = block;
   block->owner = (Object)__208791180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__208791520;

   return block;
};

Block __208791800;

void code__208791800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,clk_108976720_counter_58_8430_108867480_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack_79677880_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,ack_108976700_counter_58_8430_108867480_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_83519200_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,rst_108976660_counter_58_8430_108867480_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z0_107642980_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,z__value_148717460_func0_58_8430_148308520_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__z1_108025440_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,z__value_166633220_func1_58_8430_166389140_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ack__a0_108821400_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
      src1 = ack__a1_108821280_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),ack__layer_84282220_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__208791800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __208791800 = block;
   block->owner = (Object)__208842500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__208791800;

   return block;
};

Block __208791740;

void code__208791740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__mac_108976520_counter_58_8430_108867480_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,ack__mac_79677860_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_83519200_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,_582696_105869960_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_83519200_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,_582711_107240780_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_63238300_func0_58_8430_148308520_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,value__a0_108543200_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(a_166829280_func1_58_8430_166389140_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,value__a1_108821540_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__208791740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __208791740 = block;
   block->owner = (Object)__208842300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__208791740;

   return block;
};

Block __152919120;

void code__152919120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_152669060_channel__w0_582622_147365940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
            idx = value2integer(abus__r_147500420_channel__w0_582622_147365940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_147500500_channel__w0_582622_147365940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__152919120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __152919120 = block;
   block->owner = (Object)__153374700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__152919120;

   return block;
};

Block __208840660;

void code__208840660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_147500500_channel__w0_582622_147365940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,_582631_71084720_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__208840660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __208840660 = block;
   block->owner = (Object)__208840380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__208840660;

   return block;
};

Block __208840200;

void code__208840200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_582631_71084720_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,dbus__r_147500500_channel__w0_582622_147365940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__208840200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __208840200 = block;
   block->owner = (Object)__208838780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__208840200;

   return block;
};

Block __208862680;

void code__208862680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_147388600_channel__w0_582622_147365940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,_582629_71084700_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__208862680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __208862680 = block;
   block->owner = (Object)__208862360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__208862680;

   return block;
};

Block __208862320;

void code__208862320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_582629_71084700_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,trig__r_147388600_channel__w0_582622_147365940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__208862320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __208862320 = block;
   block->owner = (Object)__208862160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__208862320;

   return block;
};

Block __208861780;

void code__208861780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_147500420_channel__w0_582622_147365940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,_582630_71084480_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__208861780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __208861780 = block;
   block->owner = (Object)__208861540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__208861780;

   return block;
};

Block __208861440;

void code__208861440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_582630_71084480_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,abus__r_147500420_channel__w0_582622_147365940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__208861440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __208861440 = block;
   block->owner = (Object)__208861220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__208861440;

   return block;
};

Block __156162480;

void code__156162480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_155918660_channel__w1_582637_153374540_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
            idx = value2integer(abus__r_153429180_channel__w1_582637_153374540_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_153429260_channel__w1_582637_153374540_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__156162480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __156162480 = block;
   block->owner = (Object)__156535860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__156162480;

   return block;
};

Block __208859280;

void code__208859280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_153429260_channel__w1_582637_153374540_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,_582646_105283720_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__208859280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __208859280 = block;
   block->owner = (Object)__208859100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__208859280;

   return block;
};

Block __208858980;

void code__208858980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_582646_105283720_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,dbus__r_153429260_channel__w1_582637_153374540_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__208858980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __208858980 = block;
   block->owner = (Object)__208858780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__208858980;

   return block;
};

Block __208858360;

void code__208858360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_153372180_channel__w1_582637_153374540_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,_582644_105283620_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__208858360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __208858360 = block;
   block->owner = (Object)__208858200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__208858360;

   return block;
};

Block __208858160;

void code__208858160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_582644_105283620_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,trig__r_153372180_channel__w1_582637_153374540_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__208858160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __208858160 = block;
   block->owner = (Object)__208857900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__208858160;

   return block;
};

Block __208856880;

void code__208856880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_153429180_channel__w1_582637_153374540_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,_582645_105340780_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__208856880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __208856880 = block;
   block->owner = (Object)__208856480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__208856880;

   return block;
};

Block __208856440;

void code__208856440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_582645_105340780_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,abus__r_153429180_channel__w1_582637_153374540_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__208856440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __208856440 = block;
   block->owner = (Object)__208856160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__208856440;

   return block;
};

Block __208879060;

void code__208879060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_156685020_channel__accum_582652_156535740_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,_582654_104633260_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__208879060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __208879060 = block;
   block->owner = (Object)__208878760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__208879060;

   return block;
};

Block __208878580;

void code__208878580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_582654_104633260_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,reg__0_156685020_channel__accum_582652_156535740_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__208878580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __208878580 = block;
   block->owner = (Object)__208878380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__208878580;

   return block;
};

Block __208877980;

void code__208877980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_156912200_channel__accum_582652_156535740_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,_582655_104941420_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__208877980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __208877980 = block;
   block->owner = (Object)__208877780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__208877980;

   return block;
};

Block __208877720;

void code__208877720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_582655_104941420_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,reg__1_156912200_channel__accum_582652_156535740_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__208877720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __208877720 = block;
   block->owner = (Object)__208877460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__208877720;

   return block;
};

Block __158524800;

Block __158524640;

Block __158524320;

void code__158524320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209159620(),_582645_105340780_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209159560(),_582644_105283620_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__158524320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __158524320 = block;
   block->owner = (Object)__158524640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__158524320;

   return block;
};

void code__158524640() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_83519200_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__209159700();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__158524320();
   }
      }
   }
}

Block make__158524640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __158524640 = block;
   block->owner = (Object)__158524800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__158524640;

   return block;
};

Block __158523480;

Block __158547700;

void code__158547700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209159380(),_582630_71084480_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209159300(),_582629_71084700_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__158547700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __158547700 = block;
   block->owner = (Object)__158523480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__158547700;

   return block;
};

void code__158523480() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_83519200_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__209159480();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__158547700();
   }
      }
   }
}

Block make__158523480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __158523480 = block;
   block->owner = (Object)__158524800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__158523480;

   return block;
};

Block __158547000;

Block __158546580;

void code__158546580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209159060(),_582504_84281780_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__158546580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __158546580 = block;
   block->owner = (Object)__158547000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__158546580;

   return block;
};

void code__158547000() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_83519200_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__209159200();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__158546580();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209158920(),_582503_84282200_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__158547000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __158547000 = block;
   block->owner = (Object)__158524800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__158547000;

   return block;
};

Block __158545380;

void code__158545380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209158460(),rvok_158525000_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209158380(),lvok0_158525040_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209158280(),wok0_158524980_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209158200(),lvok1_158525020_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209182660(),wok1_158524960_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__158545380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __158545380 = block;
   block->owner = (Object)__158524800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__158545380;

   return block;
};

Block __158760440;

Block __158759960;

Block __158759800;

Block __158759440;

Block __158757260;

Block __158756960;

void code__158756960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_582505_84282340_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,rv_158525060_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__209181780(),rvok_158525000_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__158756960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __158756960 = block;
   block->owner = (Object)__158757260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__158756960;

   return block;
};

void code__158757260() {
 code__158756960();
}

Block make__158757260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __158757260 = block;
   block->owner = (Object)__158759440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__158757260;

   return block;
};

Block __158759160;

void code__158759160() {
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
                  src0 = _582504_84281780_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
                  src1 = make__209181660();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__209181600();
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
                        src0 = _582504_84281780_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__209181260();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),3),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__209181060();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_582504_84281780_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209180660(),_582503_84282200_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__158759160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __158759160 = block;
   block->owner = (Object)__158759440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__158759160;

   return block;
};

void code__158759440() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _582503_84282200_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__209182020();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__158757260();
   }
   else {
  code__158759160();
   }
      }
   }
}

Block make__158759440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __158759440 = block;
   block->owner = (Object)__158759800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__158759440;

   return block;
};

void code__158759800() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_83519200_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__209182140();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__158759440();
   }
      }
   }
}

Block make__158759800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __158759800 = block;
   block->owner = (Object)__158759960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__158759800;

   return block;
};

void code__158759960() {
 code__158759800();
}

Block make__158759960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __158759960 = block;
   block->owner = (Object)__158760440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__158759960;

   return block;
};

Block __159156540;

Block __159156320;

Block __159155800;

Block __159178260;

Block __159178100;

void code__159178100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__209179580(),_582629_71084700_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_582631_71084720_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,lv0_158020120_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__209179280(),lvok0_158525040_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__159178100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __159178100 = block;
   block->owner = (Object)__159178260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__159178100;

   return block;
};

void code__159178260() {
 code__159178100();
}

Block make__159178260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __159178260 = block;
   block->owner = (Object)__159155800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__159178260;

   return block;
};

Block __159155640;

void code__159155640() {
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
                  src0 = _582630_71084480_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
                  src1 = make__209178640();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__209178560();
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
                        src0 = _582630_71084480_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__209178080();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),3),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__209177920();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_582630_71084480_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209177780(),_582629_71084700_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__159155640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __159155640 = block;
   block->owner = (Object)__159155800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__159155640;

   return block;
};

void code__159155800() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _582629_71084700_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__209179780();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__159178260();
   }
   else {
  code__159155640();
   }
      }
   }
}

Block make__159155800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __159155800 = block;
   block->owner = (Object)__159156320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__159155800;

   return block;
};

void code__159156320() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_83519200_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__209180260();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__159155800();
   }
      }
   }
}

Block make__159156320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __159156320 = block;
   block->owner = (Object)__159156540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__159156320;

   return block;
};

void code__159156540() {
 code__159156320();
}

Block make__159156540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __159156540 = block;
   block->owner = (Object)__158760440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__159156540;

   return block;
};

Block __159477800;

Block __159477220;

Block __159477060;

void code__159477060() {
}

Block make__159477060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __159477060 = block;
   block->owner = (Object)__159477220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__159477060;

   return block;
};

Block __162949360;

void code__162949360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av0_158346200_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,_582654_104633260_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209176660(),wok0_158524980_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__162949360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __162949360 = block;
   block->owner = (Object)__159477220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__162949360;

   return block;
};

void code__159477220() {
 code__159477060();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av0_158346200_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
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
                              src0 = lv0_158020120_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_158525060_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__209176980();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av0_158346200_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
 code__162949360();
}

Block make__159477220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __159477220 = block;
   block->owner = (Object)__159477800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__159477220;

   return block;
};

void code__159477800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209177460(),ack_79677880_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209177400(),run_158524940_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
 code__159477220();
}

Block make__159477800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __159477800 = block;
   block->owner = (Object)__158760440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__159477800;

   return block;
};

Block __163074400;

void code__163074400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209176460(),wok0_158524980_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209176400(),wok1_158524960_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209176280(),lvok0_158525040_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209176180(),lvok1_158525020_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209176120(),rvok_158525000_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__163074400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __163074400 = block;
   block->owner = (Object)__158760440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__163074400;

   return block;
};

Block __163073160;

Block __163072960;

Block __163072580;

Block __163070540;

Block __163070360;

void code__163070360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__209175320(),_582644_105283620_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_582646_105283720_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,lv1_158216180_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__209174760(),lvok1_158525020_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__163070360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __163070360 = block;
   block->owner = (Object)__163070540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__163070360;

   return block;
};

void code__163070540() {
 code__163070360();
}

Block make__163070540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __163070540 = block;
   block->owner = (Object)__163072580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__163070540;

   return block;
};

Block __163072400;

void code__163072400() {
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
                  src0 = _582645_105340780_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
                  src1 = make__209174580();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__209199020();
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
                        src0 = _582645_105340780_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__209198740();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),3),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__209198640();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_582645_105340780_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209198500(),_582644_105283620_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__163072400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __163072400 = block;
   block->owner = (Object)__163072580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__163072400;

   return block;
};

void code__163072580() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _582644_105283620_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__209175700();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__163070540();
   }
   else {
  code__163072400();
   }
      }
   }
}

Block make__163072580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __163072580 = block;
   block->owner = (Object)__163072960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__163072580;

   return block;
};

void code__163072960() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_83519200_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__209175820();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__163072580();
   }
      }
   }
}

Block make__163072960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __163072960 = block;
   block->owner = (Object)__163073160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__163072960;

   return block;
};

void code__163073160() {
 code__163072960();
}

Block make__163073160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __163073160 = block;
   block->owner = (Object)__158760440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__163073160;

   return block;
};

Block __163258640;

Block __163282700;

Block __163282540;

void code__163282540() {
}

Block make__163282540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __163282540 = block;
   block->owner = (Object)__163282700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__163282540;

   return block;
};

Block __164206000;

void code__164206000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(av1_158427960_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,_582655_104941420_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209197400(),wok1_158524960_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__164206000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __164206000 = block;
   block->owner = (Object)__163282700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__164206000;

   return block;
};

void code__163282700() {
 code__163282540();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = av1_158427960_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
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
                              src0 = lv1_158216180_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = rv_158525060_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__209197620();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),av1_158427960_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
 code__164206000();
}

Block make__163282700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __163282700 = block;
   block->owner = (Object)__163258640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__163282700;

   return block;
};

void code__163258640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209198180(),ack_79677880_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209198080(),run_158524940_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
 code__163282700();
}

Block make__163258640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __163258640 = block;
   block->owner = (Object)__158760440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__163258640;

   return block;
};

Block __164467700;

void code__164467700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209197140(),wok0_158524980_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209197060(),wok1_158524960_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209196920(),lvok0_158525040_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209196820(),lvok1_158525020_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209196740(),rvok_158525000_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__164467700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __164467700 = block;
   block->owner = (Object)__158760440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__164467700;

   return block;
};

void code__158760440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209182380(),run_158524940_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = rvok_158525000_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__158759960();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_158525040_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__159156540();
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
               src0 = lvok0_158525040_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
               src1 = rvok_158525000_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok0_158524980_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__159477800();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = wok0_158524980_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
         src1 = wok1_158524960_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__163074400();
   }
      }
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_158525020_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__163073160();
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
               src0 = lvok1_158525020_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
               src1 = rvok_158525000_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
               dst = and_value(src0,src1,dst);
               set_value_pos(pool_state);
            dst; });
         src1 = ({
               Value src0, dst;
               dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = wok1_158524960_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
               dst = not_value(src0,dst);
               set_value_pos(pool_state);
            dst; });
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__163258640();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = wok0_158524980_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
         src1 = wok1_158524960_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__164467700();
   }
      }
   }
}

Block make__158760440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __158760440 = block;
   block->owner = (Object)__158524800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__158760440;

   return block;
};

Block __158544040;

void code__158544040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209196340(),av0_158346200_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209196220(),av1_158427960_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__158544040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __158544040 = block;
   block->owner = (Object)__158524800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__158544040;

   return block;
};

void code__158524800() {
 code__158524640();
 code__158523480();
 code__158547000();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209158820(),ack_79677880_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209158740(),run_158524940_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0, dst;
         dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = run_158524940_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
         dst = not_value(src0,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__158545380();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req__mac_79677920_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
         src1 = run_158524940_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__158760440();
   }
   else {
  code__158544040();
   }
      }
   }
}

Block make__158524800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __158524800 = block;
   block->owner = (Object)__164466200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__158524800;

   return block;
};

Block __165034220;

void code__165034220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_164794460_channel__b0_582691_164466080_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
            idx = value2integer(abus__r_164594980_channel__b0_582691_164466080_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_164595140_channel__b0_582691_164466080_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__165034220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __165034220 = block;
   block->owner = (Object)__165562400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__165034220;

   return block;
};

Block __208874840;

void code__208874840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_164595140_channel__b0_582691_164466080_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,_582695_105869980_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__208874840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __208874840 = block;
   block->owner = (Object)__208874580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__208874840;

   return block;
};

Block __208874520;

void code__208874520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_582695_105869980_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,dbus__r_164595140_channel__b0_582691_164466080_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__208874520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __208874520 = block;
   block->owner = (Object)__208874140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__208874520;

   return block;
};

Block __208873800;

void code__208873800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_164464260_channel__b0_582691_164466080_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,_582693_105869940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__208873800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __208873800 = block;
   block->owner = (Object)__208873580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__208873800;

   return block;
};

Block __208873500;

void code__208873500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_582693_105869940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,trig__r_164464260_channel__b0_582691_164466080_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__208873500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __208873500 = block;
   block->owner = (Object)__208873300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__208873500;

   return block;
};

Block __208872880;

void code__208872880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_164594980_channel__b0_582691_164466080_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,_582694_105869800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__208872880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __208872880 = block;
   block->owner = (Object)__208872640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__208872880;

   return block;
};

Block __208872600;

void code__208872600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_582694_105869800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,abus__r_164594980_channel__b0_582691_164466080_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__208872600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __208872600 = block;
   block->owner = (Object)__208872260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__208872600;

   return block;
};

Block __166130660;

void code__166130660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_165998700_channel__b1_582706_165562220_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
            idx = value2integer(abus__r_165627420_channel__b1_582706_165562220_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_165627500_channel__b1_582706_165562220_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__166130660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __166130660 = block;
   block->owner = (Object)__166477920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__166130660;

   return block;
};

Block __208895060;

void code__208895060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_165627500_channel__b1_582706_165562220_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,_582710_107240820_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__208895060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __208895060 = block;
   block->owner = (Object)__208894780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__208895060;

   return block;
};

Block __208894740;

void code__208894740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_582710_107240820_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,dbus__r_165627500_channel__b1_582706_165562220_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__208894740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __208894740 = block;
   block->owner = (Object)__208894540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__208894740;

   return block;
};

Block __208893960;

void code__208893960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_165584660_channel__b1_582706_165562220_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,_582708_107240760_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__208893960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __208893960 = block;
   block->owner = (Object)__208893640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__208893960;

   return block;
};

Block __208893560;

void code__208893560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_582708_107240760_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,trig__r_165584660_channel__b1_582706_165562220_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__208893560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __208893560 = block;
   block->owner = (Object)__208893300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__208893560;

   return block;
};

Block __208892960;

void code__208892960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_165627420_channel__b1_582706_165562220_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,_582709_107240660_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__208892960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __208892960 = block;
   block->owner = (Object)__208892780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__208892960;

   return block;
};

Block __208892740;

void code__208892740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_582709_107240660_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,abus__r_165627420_channel__b1_582706_165562220_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__208892740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __208892740 = block;
   block->owner = (Object)__208892540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__208892740;

   return block;
};

Block __208890380;

void code__208890380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_166659160_channel__z_582721_166567800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,_582723_106425820_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__208890380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __208890380 = block;
   block->owner = (Object)__208890220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__208890380;

   return block;
};

Block __208890180;

void code__208890180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_582723_106425820_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,reg__0_166659160_channel__z_582721_166567800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__208890180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __208890180 = block;
   block->owner = (Object)__208889980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__208890180;

   return block;
};

Block __208889420;

void code__208889420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_166855720_channel__z_582721_166567800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,_582724_106913080_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__208889420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __208889420 = block;
   block->owner = (Object)__208889160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__208889420;

   return block;
};

Block __208889100;

void code__208889100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_582724_106913080_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,reg__1_166855720_channel__z_582721_166567800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__208889100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __208889100 = block;
   block->owner = (Object)__208888900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__208889100;

   return block;
};

Block __65186020;

Block __65185140;

void code__65185140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209192700(),_582708_107240760_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__65185140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65185140 = block;
   block->owner = (Object)__65186020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65185140;

   return block;
};

Block __65205100;

void code__65205100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209192600(),_582693_105869940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__65205100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65205100 = block;
   block->owner = (Object)__65186020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65205100;

   return block;
};

Block __65237020;

Block __65234940;

void code__65234940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_582654_104633260_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,lv0_59637000_add__n_582751_53692800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209192120(),lvok0_65190000_add__n_582751_53692800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__65234940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65234940 = block;
   block->owner = (Object)__65237020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65234940;

   return block;
};

Block __66963260;

Block __66982800;

Block __66996560;

void code__66996560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_582695_105869980_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,rv0_64246720_add__n_582751_53692800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209191240(),_582693_105869940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209191180(),rvok0_65186860_add__n_582751_53692800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__66996560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66996560 = block;
   block->owner = (Object)__66982800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66996560;

   return block;
};

Block __66981760;

void code__66981760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209191120(),_582694_105869800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209191040(),_582693_105869940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__66981760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66981760 = block;
   block->owner = (Object)__66982800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66981760;

   return block;
};

void code__66982800() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _582693_105869940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__209191440();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__66996560();
   }
   else {
  code__66981760();
   }
      }
   }
}

Block make__66982800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66982800 = block;
   block->owner = (Object)__66963260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66982800;

   return block;
};

void code__66963260() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _582696_105869960_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__209191980();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__66982800();
   }
      }
   }
}

Block make__66963260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __66963260 = block;
   block->owner = (Object)__65237020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__66963260;

   return block;
};

Block __79641760;

Block __79637940;

void code__79637940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_59637000_add__n_582751_53692800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
      src1 = rv0_64246720_add__n_582751_53692800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_582723_106425820_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__79637940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79637940 = block;
   block->owner = (Object)__79641760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79637940;

   return block;
};

void code__79641760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209248100(),run_65186360_add__n_582751_53692800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209248000(),ack__add_79677800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
 code__79637940();
}

Block make__79641760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79641760 = block;
   block->owner = (Object)__65237020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79641760;

   return block;
};

Block __82871300;

void code__82871300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_582655_104941420_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,lv1_61792280_add__n_582751_53692800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209247500(),lvok1_65187520_add__n_582751_53692800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__82871300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __82871300 = block;
   block->owner = (Object)__65237020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__82871300;

   return block;
};

Block __84459760;

Block __84582280;

Block __84723140;

void code__84723140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_582710_107240820_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value,rv1_65190300_add__n_582751_53692800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209246940(),_582708_107240760_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209246800(),rvok1_65186540_add__n_582751_53692800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__84723140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __84723140 = block;
   block->owner = (Object)__84582280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__84723140;

   return block;
};

Block __84580580;

void code__84580580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209246740(),_582709_107240660_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209246660(),_582708_107240760_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__84580580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __84580580 = block;
   block->owner = (Object)__84582280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__84580580;

   return block;
};

void code__84582280() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _582708_107240760_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__209247160();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__84723140();
   }
   else {
  code__84580580();
   }
      }
   }
}

Block make__84582280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __84582280 = block;
   block->owner = (Object)__84459760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__84582280;

   return block;
};

void code__84459760() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _582711_107240780_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__209247400();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__84582280();
   }
      }
   }
}

Block make__84459760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __84459760 = block;
   block->owner = (Object)__65237020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__84459760;

   return block;
};

Block __86829120;

Block __86915460;

void code__86915460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv1_61792280_add__n_582751_53692800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
      src1 = rv1_65190300_add__n_582751_53692800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_582724_106913080_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__86915460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __86915460 = block;
   block->owner = (Object)__86829120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__86915460;

   return block;
};

void code__86829120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209246420(),run_65186360_add__n_582751_53692800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209246340(),ack__add_79677800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
 code__86915460();
}

Block make__86829120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __86829120 = block;
   block->owner = (Object)__65237020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__86829120;

   return block;
};

void code__65237020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209192300(),run_65186360_add__n_582751_53692800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
 code__65234940();
 code__66963260();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_65190000_add__n_582751_53692800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
         src1 = rvok0_65186860_add__n_582751_53692800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__79641760();
   }
      }
   }
 code__82871300();
 code__84459760();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_65187520_add__n_582751_53692800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
         src1 = rvok1_65186540_add__n_582751_53692800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__86829120();
   }
      }
   }
}

Block make__65237020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65237020 = block;
   block->owner = (Object)__65186020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65237020;

   return block;
};

Block __65222060;

void code__65222060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209245920(),lvok0_65190000_add__n_582751_53692800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209245860(),rvok0_65186860_add__n_582751_53692800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209245760(),lvok1_65187520_add__n_582751_53692800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209245700(),rvok1_65186540_add__n_582751_53692800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
}

Block make__65222060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65222060 = block;
   block->owner = (Object)__65186020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65222060;

   return block;
};

void code__65186020() {
 code__65185140();
 code__65205100();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209192540(),ack__add_79677800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__209192480(),run_65186360_add__n_582751_53692800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ack__mac_79677860_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
         src1 = run_65186360_add__n_582751_53692800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65237020();
   }
   else {
  code__65222060();
   }
      }
   }
}

Block make__65186020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65186020 = block;
   block->owner = (Object)__79678120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65186020;

   return block;
};

Value make__209164060() {
   static unsigned long long data[] = { 4294967267ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__209164040() {
   static unsigned long long data[] = { 4294967270ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__209164020() {
   static unsigned long long data[] = { 4294967284ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__209164000() {
   static unsigned long long data[] = { 4294967285ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__209163980() {
   static unsigned long long data[] = { 4294967267ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__209163960() {
   static unsigned long long data[] = { 4294967270ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__209163940() {
   static unsigned long long data[] = { 4294967284ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__209163920() {
   static unsigned long long data[] = { 4294967285ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__209162180() {
   static unsigned long long data[] = { 4294967267ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__209162160() {
   static unsigned long long data[] = { 4294967270ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__209162140() {
   static unsigned long long data[] = { 4294967284ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__209162120() {
   static unsigned long long data[] = { 4294967285ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__209162100() {
   static unsigned long long data[] = { 4294967267ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__209162060() {
   static unsigned long long data[] = { 4294967270ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__209162040() {
   static unsigned long long data[] = { 4294967284ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__209162020() {
   static unsigned long long data[] = { 4294967285ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__209196200() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_vector(get_type_signed(),8),1),1,data);
}

Value make__209194900() {
   static unsigned long long data[] = { 33ULL };
   return make_set_value(get_type_vector(get_type_vector(get_type_signed(),8),1),1,data);
}

Value make__209159700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__209159620() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),3),1,data);
}

Value make__209159560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209159480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__209159380() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),3),1,data);
}

Value make__209159300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209159200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__209159060() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),3),1,data);
}

Value make__209158920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209158820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209158740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209158460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209158380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209158280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209158200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209182660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209182380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209182140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__209182020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__209181780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209181660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__209181600() {
   static unsigned long long data[] = { 8ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__209181260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__209181060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),3),1,data);
}

Value make__209180660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209180260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__209179780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__209179580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209179280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209178640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__209178560() {
   static unsigned long long data[] = { 8ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__209178080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__209177920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),3),1,data);
}

Value make__209177780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209177460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209177400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209176980() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__209176660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209176460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209176400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209176280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209176180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209176120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209175820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__209175700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__209175320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209174760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209174580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__209199020() {
   static unsigned long long data[] = { 8ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__209198740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__209198640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),3),1,data);
}

Value make__209198500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209198180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209198080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209197620() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__209197400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209197140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209197060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209196920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209196820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209196740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209196340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__209196220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__209192700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209192600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209192540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209192480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209192300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209192120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209191980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__209191440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__209191240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209191180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209191120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__209191040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209248100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209248000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209247500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209247400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__209247160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__209246940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209246800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209246740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__209246660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209246420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209246340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209245920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209245860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209245760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209245700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209243480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209243380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209243260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209243060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209242920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209242860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209242780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209242660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209242560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209241500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__209241320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope layer0_58_841_147366420;

SignalI req__mac_79677920_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makereq__mac_79677920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req__mac_79677920_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)layer0_58_841_147366420;
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

SignalI ack_79677880_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makeack_79677880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_79677880_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)layer0_58_841_147366420;
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

SignalI ack__mac_79677860_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makeack__mac_79677860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__mac_79677860_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)layer0_58_841_147366420;
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

SignalI ack__add_79677800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makeack__add_79677800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__add_79677800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)layer0_58_841_147366420;
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

SignalI _582631_71084720_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI make_582631_71084720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _582631_71084720_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)layer0_58_841_147366420;
   signalI->name = ":2631";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _582629_71084700_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI make_582629_71084700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _582629_71084700_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)layer0_58_841_147366420;
   signalI->name = ":2629";
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

SignalI _582630_71084480_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI make_582630_71084480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _582630_71084480_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)layer0_58_841_147366420;
   signalI->name = ":2630";
   signalI->type = get_type_vector(get_type_bit(),3);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _582654_104633260_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI make_582654_104633260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _582654_104633260_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)layer0_58_841_147366420;
   signalI->name = ":2654";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _582655_104941420_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI make_582655_104941420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _582655_104941420_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)layer0_58_841_147366420;
   signalI->name = ":2655";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _582646_105283720_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI make_582646_105283720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _582646_105283720_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)layer0_58_841_147366420;
   signalI->name = ":2646";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _582644_105283620_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI make_582644_105283620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _582644_105283620_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)layer0_58_841_147366420;
   signalI->name = ":2644";
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

SignalI _582645_105340780_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI make_582645_105340780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _582645_105340780_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)layer0_58_841_147366420;
   signalI->name = ":2645";
   signalI->type = get_type_vector(get_type_bit(),3);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _582695_105869980_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI make_582695_105869980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _582695_105869980_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)layer0_58_841_147366420;
   signalI->name = ":2695";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _582696_105869960_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI make_582696_105869960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _582696_105869960_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)layer0_58_841_147366420;
   signalI->name = ":2696";
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

SignalI _582693_105869940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI make_582693_105869940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _582693_105869940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)layer0_58_841_147366420;
   signalI->name = ":2693";
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

SignalI _582694_105869800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI make_582694_105869800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _582694_105869800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)layer0_58_841_147366420;
   signalI->name = ":2694";
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

SignalI _582723_106425820_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI make_582723_106425820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _582723_106425820_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)layer0_58_841_147366420;
   signalI->name = ":2723";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _582724_106913080_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI make_582724_106913080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _582724_106913080_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)layer0_58_841_147366420;
   signalI->name = ":2724";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _582710_107240820_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI make_582710_107240820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _582710_107240820_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)layer0_58_841_147366420;
   signalI->name = ":2710";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _582711_107240780_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI make_582711_107240780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _582711_107240780_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)layer0_58_841_147366420;
   signalI->name = ":2711";
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

SignalI _582708_107240760_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI make_582708_107240760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _582708_107240760_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)layer0_58_841_147366420;
   signalI->name = ":2708";
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

SignalI _582709_107240660_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI make_582709_107240660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _582709_107240660_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)layer0_58_841_147366420;
   signalI->name = ":2709";
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

SignalI value__z0_107642980_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makevalue__z0_107642980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z0_107642980_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)layer0_58_841_147366420;
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

SignalI value__z1_108025440_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makevalue__z1_108025440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__z1_108025440_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)layer0_58_841_147366420;
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

SignalI value__a0_108543200_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makevalue__a0_108543200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a0_108543200_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)layer0_58_841_147366420;
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

SignalI value__a1_108821540_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makevalue__a1_108821540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__a1_108821540_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)layer0_58_841_147366420;
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

SignalI flag__z0_108821500_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makeflag__z0_108821500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z0_108821500_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)layer0_58_841_147366420;
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

SignalI flag__z1_108821440_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makeflag__z1_108821440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__z1_108821440_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)layer0_58_841_147366420;
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

SignalI ack__a0_108821400_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makeack__a0_108821400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a0_108821400_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)layer0_58_841_147366420;
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

SignalI ack__a1_108821280_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makeack__a1_108821280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__a1_108821280_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)layer0_58_841_147366420;
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

SystemI counter_108976200;

SystemI makecounter_108976200() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   counter_108976200 = systemI;
   systemI->owner = (Object)layer0_58_841_147366420;
   systemI->name = "counter";
   systemI->system = counter_58_8430_108867480;

   return systemI;
};

SystemI func0_63238160;

SystemI makefunc0_63238160() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func0_63238160 = systemI;
   systemI->owner = (Object)layer0_58_841_147366420;
   systemI->name = "func0";
   systemI->system = func0_58_8430_148308520;

   return systemI;
};

SystemI func1_166829140;

SystemI makefunc1_166829140() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   func1_166829140 = systemI;
   systemI->owner = (Object)layer0_58_841_147366420;
   systemI->name = "func1";
   systemI->system = func1_58_8430_166389140;

   return systemI;
};

Scope channel__w0_582622_147365940;

SignalI trig__r_147388600_channel__w0_582622_147365940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI maketrig__r_147388600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_147388600_channel__w0_582622_147365940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)channel__w0_582622_147365940;
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

SignalI dbus__r_147500500_channel__w0_582622_147365940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makedbus__r_147500500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_147500500_channel__w0_582622_147365940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)channel__w0_582622_147365940;
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

SignalI abus__r_147500420_channel__w0_582622_147365940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makeabus__r_147500420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_147500420_channel__w0_582622_147365940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)channel__w0_582622_147365940;
   signalI->name = "abus_r";
   signalI->type = get_type_vector(get_type_bit(),3);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI mem_152669060_channel__w0_582622_147365940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makemem_152669060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_152669060_channel__w0_582622_147365940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)channel__w0_582622_147365940;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(({
         Value src0,src1,src2,src3,src4,src5,src6,src7;
         Value dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = make__209164060();
         src1 = make__209164040();
         src2 = make__209164020();
         src3 = make__209164000();
         src4 = make__209163980();
         src5 = make__209163960();
         src6 = make__209163940();
         src7 = make__209163920();
         concat_value(8,0,dst,src0,src1,src2,src3,src4,src5,src6,src7);
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

Scope raddr_582623_147390040;

Scope makeraddr_582623_147390040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_582623_147390040 = scope;
   scope->owner = (Object)channel__w0_582622_147365940;
   scope->name = "raddr:2623";
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

Scope rinc_582628_147389580;

Scope makerinc_582628_147389580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_582628_147389580 = scope;
   scope->owner = (Object)channel__w0_582622_147365940;
   scope->name = "rinc:2628";
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

Scope rdec_582632_147389040;

Scope makerdec_582632_147389040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_582632_147389040 = scope;
   scope->owner = (Object)channel__w0_582622_147365940;
   scope->name = "rdec:2632";
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

Behavior __153374700;

Behavior make__153374700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __153374700 = behavior;
   behavior->owner = (Object)channel__w0_582622_147365940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_neg += 1;
   clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->neg = realloc(clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->neg,clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_neg*sizeof(Object));
clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->neg[clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_neg-1] = (Object)behavior;
   behavior->block = make__152919120();

   return behavior;
}

Behavior __208840380;

Behavior make__208840380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __208840380 = behavior;
   behavior->owner = (Object)channel__w0_582622_147365940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_147500500_channel__w0_582622_147365940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   dbus__r_147500500_channel__w0_582622_147365940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   dbus__r_147500500_channel__w0_582622_147365940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(dbus__r_147500500_channel__w0_582622_147365940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,dbus__r_147500500_channel__w0_582622_147365940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
dbus__r_147500500_channel__w0_582622_147365940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[dbus__r_147500500_channel__w0_582622_147365940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__208840660();

   return behavior;
}

Behavior __208838780;

Behavior make__208838780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __208838780 = behavior;
   behavior->owner = (Object)channel__w0_582622_147365940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_582631_71084720_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   _582631_71084720_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   _582631_71084720_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(_582631_71084720_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,_582631_71084720_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
_582631_71084720_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[_582631_71084720_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__208840200();

   return behavior;
}

Behavior __208862360;

Behavior make__208862360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __208862360 = behavior;
   behavior->owner = (Object)channel__w0_582622_147365940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_147388600_channel__w0_582622_147365940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   trig__r_147388600_channel__w0_582622_147365940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   trig__r_147388600_channel__w0_582622_147365940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(trig__r_147388600_channel__w0_582622_147365940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,trig__r_147388600_channel__w0_582622_147365940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
trig__r_147388600_channel__w0_582622_147365940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[trig__r_147388600_channel__w0_582622_147365940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__208862680();

   return behavior;
}

Behavior __208862160;

Behavior make__208862160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __208862160 = behavior;
   behavior->owner = (Object)channel__w0_582622_147365940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_582629_71084700_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   _582629_71084700_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   _582629_71084700_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(_582629_71084700_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,_582629_71084700_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
_582629_71084700_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[_582629_71084700_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__208862320();

   return behavior;
}

Behavior __208861540;

Behavior make__208861540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __208861540 = behavior;
   behavior->owner = (Object)channel__w0_582622_147365940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_147500420_channel__w0_582622_147365940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   abus__r_147500420_channel__w0_582622_147365940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   abus__r_147500420_channel__w0_582622_147365940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(abus__r_147500420_channel__w0_582622_147365940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,abus__r_147500420_channel__w0_582622_147365940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
abus__r_147500420_channel__w0_582622_147365940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[abus__r_147500420_channel__w0_582622_147365940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__208861780();

   return behavior;
}

Behavior __208861220;

Behavior make__208861220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __208861220 = behavior;
   behavior->owner = (Object)channel__w0_582622_147365940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_582630_71084480_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   _582630_71084480_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   _582630_71084480_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(_582630_71084480_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,_582630_71084480_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
_582630_71084480_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[_582630_71084480_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__208861440();

   return behavior;
}

Scope makechannel__w0_582622_147365940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w0_582622_147365940 = scope;
   scope->owner = (Object)layer0_58_841_147366420;
   scope->name = "channel_w0:2622";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_147388600();
   scope->inners[1] = makedbus__r_147500500();
   scope->inners[2] = makeabus__r_147500420();
   scope->inners[3] = makemem_152669060();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_582623_147390040();
   scope->scopes[1] = makerinc_582628_147389580();
   scope->scopes[2] = makerdec_582632_147389040();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__153374700();
   scope->behaviors[1] = make__208840380();
   scope->behaviors[2] = make__208838780();
   scope->behaviors[3] = make__208862360();
   scope->behaviors[4] = make__208862160();
   scope->behaviors[5] = make__208861540();
   scope->behaviors[6] = make__208861220();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__w1_582637_153374540;

SignalI trig__r_153372180_channel__w1_582637_153374540_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI maketrig__r_153372180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_153372180_channel__w1_582637_153374540_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)channel__w1_582637_153374540;
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

SignalI dbus__r_153429260_channel__w1_582637_153374540_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makedbus__r_153429260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_153429260_channel__w1_582637_153374540_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)channel__w1_582637_153374540;
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

SignalI abus__r_153429180_channel__w1_582637_153374540_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makeabus__r_153429180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_153429180_channel__w1_582637_153374540_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)channel__w1_582637_153374540;
   signalI->name = "abus_r";
   signalI->type = get_type_vector(get_type_bit(),3);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI mem_155918660_channel__w1_582637_153374540_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makemem_155918660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_155918660_channel__w1_582637_153374540_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)channel__w1_582637_153374540;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(({
         Value src0,src1,src2,src3,src4,src5,src6,src7;
         Value dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = make__209162180();
         src1 = make__209162160();
         src2 = make__209162140();
         src3 = make__209162120();
         src4 = make__209162100();
         src5 = make__209162060();
         src6 = make__209162040();
         src7 = make__209162020();
         concat_value(8,0,dst,src0,src1,src2,src3,src4,src5,src6,src7);
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

Scope raddr_582638_153374000;

Scope makeraddr_582638_153374000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_582638_153374000 = scope;
   scope->owner = (Object)channel__w1_582637_153374540;
   scope->name = "raddr:2638";
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

Scope rinc_582643_153373540;

Scope makerinc_582643_153373540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_582643_153373540 = scope;
   scope->owner = (Object)channel__w1_582637_153374540;
   scope->name = "rinc:2643";
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

Scope rdec_582647_153373120;

Scope makerdec_582647_153373120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_582647_153373120 = scope;
   scope->owner = (Object)channel__w1_582637_153374540;
   scope->name = "rdec:2647";
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

Behavior __156535860;

Behavior make__156535860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __156535860 = behavior;
   behavior->owner = (Object)channel__w1_582637_153374540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_neg += 1;
   clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->neg = realloc(clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->neg,clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_neg*sizeof(Object));
clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->neg[clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_neg-1] = (Object)behavior;
   behavior->block = make__156162480();

   return behavior;
}

Behavior __208859100;

Behavior make__208859100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __208859100 = behavior;
   behavior->owner = (Object)channel__w1_582637_153374540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_153429260_channel__w1_582637_153374540_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   dbus__r_153429260_channel__w1_582637_153374540_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   dbus__r_153429260_channel__w1_582637_153374540_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(dbus__r_153429260_channel__w1_582637_153374540_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,dbus__r_153429260_channel__w1_582637_153374540_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
dbus__r_153429260_channel__w1_582637_153374540_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[dbus__r_153429260_channel__w1_582637_153374540_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__208859280();

   return behavior;
}

Behavior __208858780;

Behavior make__208858780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __208858780 = behavior;
   behavior->owner = (Object)channel__w1_582637_153374540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_582646_105283720_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   _582646_105283720_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   _582646_105283720_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(_582646_105283720_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,_582646_105283720_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
_582646_105283720_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[_582646_105283720_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__208858980();

   return behavior;
}

Behavior __208858200;

Behavior make__208858200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __208858200 = behavior;
   behavior->owner = (Object)channel__w1_582637_153374540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_153372180_channel__w1_582637_153374540_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   trig__r_153372180_channel__w1_582637_153374540_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   trig__r_153372180_channel__w1_582637_153374540_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(trig__r_153372180_channel__w1_582637_153374540_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,trig__r_153372180_channel__w1_582637_153374540_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
trig__r_153372180_channel__w1_582637_153374540_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[trig__r_153372180_channel__w1_582637_153374540_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__208858360();

   return behavior;
}

Behavior __208857900;

Behavior make__208857900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __208857900 = behavior;
   behavior->owner = (Object)channel__w1_582637_153374540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_582644_105283620_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   _582644_105283620_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   _582644_105283620_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(_582644_105283620_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,_582644_105283620_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
_582644_105283620_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[_582644_105283620_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__208858160();

   return behavior;
}

Behavior __208856480;

Behavior make__208856480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __208856480 = behavior;
   behavior->owner = (Object)channel__w1_582637_153374540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_153429180_channel__w1_582637_153374540_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   abus__r_153429180_channel__w1_582637_153374540_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   abus__r_153429180_channel__w1_582637_153374540_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(abus__r_153429180_channel__w1_582637_153374540_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,abus__r_153429180_channel__w1_582637_153374540_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
abus__r_153429180_channel__w1_582637_153374540_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[abus__r_153429180_channel__w1_582637_153374540_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__208856880();

   return behavior;
}

Behavior __208856160;

Behavior make__208856160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __208856160 = behavior;
   behavior->owner = (Object)channel__w1_582637_153374540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_582645_105340780_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   _582645_105340780_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   _582645_105340780_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(_582645_105340780_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,_582645_105340780_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
_582645_105340780_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[_582645_105340780_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__208856440();

   return behavior;
}

Scope makechannel__w1_582637_153374540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__w1_582637_153374540 = scope;
   scope->owner = (Object)layer0_58_841_147366420;
   scope->name = "channel_w1:2637";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_153372180();
   scope->inners[1] = makedbus__r_153429260();
   scope->inners[2] = makeabus__r_153429180();
   scope->inners[3] = makemem_155918660();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_582638_153374000();
   scope->scopes[1] = makerinc_582643_153373540();
   scope->scopes[2] = makerdec_582647_153373120();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__156535860();
   scope->behaviors[1] = make__208859100();
   scope->behaviors[2] = make__208858780();
   scope->behaviors[3] = make__208858200();
   scope->behaviors[4] = make__208857900();
   scope->behaviors[5] = make__208856480();
   scope->behaviors[6] = make__208856160();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__accum_582652_156535740;

SignalI reg__0_156685020_channel__accum_582652_156535740_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makereg__0_156685020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_156685020_channel__accum_582652_156535740_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)channel__accum_582652_156535740;
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

SignalI reg__1_156912200_channel__accum_582652_156535740_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makereg__1_156912200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_156912200_channel__accum_582652_156535740_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)channel__accum_582652_156535740;
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

Scope anum_582653_156535360;

Scope makeanum_582653_156535360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_582653_156535360 = scope;
   scope->owner = (Object)channel__accum_582652_156535740;
   scope->name = "anum:2653";
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

Scope raddr_582656_156534360;

Scope makeraddr_582656_156534360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_582656_156534360 = scope;
   scope->owner = (Object)channel__accum_582652_156535740;
   scope->name = "raddr:2656";
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

Scope waddr_582660_156533360;

Scope makewaddr_582660_156533360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_582660_156533360 = scope;
   scope->owner = (Object)channel__accum_582652_156535740;
   scope->name = "waddr:2660";
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

Scope rinc_582664_156557160;

SignalI abus__r_156556760_rinc_582664_156557160_channel__accum_582652_156535740_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makeabus__r_156556760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_156556760_rinc_582664_156557160_channel__accum_582652_156535740_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)rinc_582664_156557160;
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

Scope makerinc_582664_156557160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_582664_156557160 = scope;
   scope->owner = (Object)channel__accum_582652_156535740;
   scope->name = "rinc:2664";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_156556760();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_582669_156556600;

SignalI abus__w_156556140_winc_582669_156556600_channel__accum_582652_156535740_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makeabus__w_156556140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_156556140_winc_582669_156556600_channel__accum_582652_156535740_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)winc_582669_156556600;
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

Scope makewinc_582669_156556600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_582669_156556600 = scope;
   scope->owner = (Object)channel__accum_582652_156535740;
   scope->name = "winc:2669";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_156556140();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_582674_156556020;

SignalI abus__r_156555480_rdec_582674_156556020_channel__accum_582652_156535740_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makeabus__r_156555480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_156555480_rdec_582674_156556020_channel__accum_582652_156535740_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)rdec_582674_156556020;
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

Scope makerdec_582674_156556020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_582674_156556020 = scope;
   scope->owner = (Object)channel__accum_582652_156535740;
   scope->name = "rdec:2674";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_156555480();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_582679_156555320;

SignalI abus__w_156554920_wdec_582679_156555320_channel__accum_582652_156535740_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makeabus__w_156554920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_156554920_wdec_582679_156555320_channel__accum_582652_156535740_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)wdec_582679_156555320;
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

Scope makewdec_582679_156555320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_582679_156555320 = scope;
   scope->owner = (Object)channel__accum_582652_156535740;
   scope->name = "wdec:2679";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_156554920();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __208878760;

Behavior make__208878760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __208878760 = behavior;
   behavior->owner = (Object)channel__accum_582652_156535740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_156685020_channel__accum_582652_156535740_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   reg__0_156685020_channel__accum_582652_156535740_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   reg__0_156685020_channel__accum_582652_156535740_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(reg__0_156685020_channel__accum_582652_156535740_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,reg__0_156685020_channel__accum_582652_156535740_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
reg__0_156685020_channel__accum_582652_156535740_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[reg__0_156685020_channel__accum_582652_156535740_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__208879060();

   return behavior;
}

Behavior __208878380;

Behavior make__208878380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __208878380 = behavior;
   behavior->owner = (Object)channel__accum_582652_156535740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_582654_104633260_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   _582654_104633260_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   _582654_104633260_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(_582654_104633260_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,_582654_104633260_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
_582654_104633260_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[_582654_104633260_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__208878580();

   return behavior;
}

Behavior __208877780;

Behavior make__208877780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __208877780 = behavior;
   behavior->owner = (Object)channel__accum_582652_156535740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_156912200_channel__accum_582652_156535740_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   reg__1_156912200_channel__accum_582652_156535740_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   reg__1_156912200_channel__accum_582652_156535740_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(reg__1_156912200_channel__accum_582652_156535740_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,reg__1_156912200_channel__accum_582652_156535740_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
reg__1_156912200_channel__accum_582652_156535740_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[reg__1_156912200_channel__accum_582652_156535740_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__208877980();

   return behavior;
}

Behavior __208877460;

Behavior make__208877460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __208877460 = behavior;
   behavior->owner = (Object)channel__accum_582652_156535740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_582655_104941420_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   _582655_104941420_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   _582655_104941420_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(_582655_104941420_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,_582655_104941420_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
_582655_104941420_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[_582655_104941420_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__208877720();

   return behavior;
}

Scope makechannel__accum_582652_156535740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__accum_582652_156535740 = scope;
   scope->owner = (Object)layer0_58_841_147366420;
   scope->name = "channel_accum:2652";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_156685020();
   scope->inners[1] = makereg__1_156912200();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_582653_156535360();
   scope->scopes[1] = makeraddr_582656_156534360();
   scope->scopes[2] = makewaddr_582660_156533360();
   scope->scopes[3] = makerinc_582664_156557160();
   scope->scopes[4] = makewinc_582669_156556600();
   scope->scopes[5] = makerdec_582674_156556020();
   scope->scopes[6] = makewdec_582679_156555320();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__208878760();
   scope->behaviors[1] = make__208878380();
   scope->behaviors[2] = make__208877780();
   scope->behaviors[3] = make__208877460();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope mac__n1_582684_157873940;

SignalI lv0_158020120_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makelv0_158020120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_158020120_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)mac__n1_582684_157873940;
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

SignalI lv1_158216180_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makelv1_158216180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_158216180_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)mac__n1_582684_157873940;
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

SignalI av0_158346200_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makeav0_158346200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av0_158346200_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)mac__n1_582684_157873940;
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

SignalI av1_158427960_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makeav1_158427960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   av1_158427960_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)mac__n1_582684_157873940;
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

SignalI rv_158525060_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makerv_158525060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv_158525060_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)mac__n1_582684_157873940;
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

SignalI lvok0_158525040_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makelvok0_158525040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_158525040_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)mac__n1_582684_157873940;
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

SignalI lvok1_158525020_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makelvok1_158525020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_158525020_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)mac__n1_582684_157873940;
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

SignalI rvok_158525000_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makervok_158525000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok_158525000_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)mac__n1_582684_157873940;
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

SignalI wok0_158524980_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makewok0_158524980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok0_158524980_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)mac__n1_582684_157873940;
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

SignalI wok1_158524960_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makewok1_158524960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   wok1_158524960_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)mac__n1_582684_157873940;
   signalI->name = "wok1";
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

SignalI run_158524940_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makerun_158524940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_158524940_mac__n1_582684_157873940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)mac__n1_582684_157873940;
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

Behavior __164466200;

Behavior make__164466200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __164466200 = behavior;
   behavior->owner = (Object)mac__n1_582684_157873940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_pos += 1;
   clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->pos = realloc(clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->pos,clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_pos*sizeof(Object));
clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->pos[clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_pos-1] = (Object)behavior;
   behavior->block = make__158524800();

   return behavior;
}

Scope makemac__n1_582684_157873940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   mac__n1_582684_157873940 = scope;
   scope->owner = (Object)layer0_58_841_147366420;
   scope->name = "mac_n1:2684";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 11;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_158020120();
   scope->inners[1] = makelv1_158216180();
   scope->inners[2] = makeav0_158346200();
   scope->inners[3] = makeav1_158427960();
   scope->inners[4] = makerv_158525060();
   scope->inners[5] = makelvok0_158525040();
   scope->inners[6] = makelvok1_158525020();
   scope->inners[7] = makervok_158525000();
   scope->inners[8] = makewok0_158524980();
   scope->inners[9] = makewok1_158524960();
   scope->inners[10] = makerun_158524940();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__164466200();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__b0_582691_164466080;

SignalI trig__r_164464260_channel__b0_582691_164466080_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI maketrig__r_164464260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_164464260_channel__b0_582691_164466080_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)channel__b0_582691_164466080;
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

SignalI dbus__r_164595140_channel__b0_582691_164466080_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makedbus__r_164595140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_164595140_channel__b0_582691_164466080_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)channel__b0_582691_164466080;
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

SignalI abus__r_164594980_channel__b0_582691_164466080_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makeabus__r_164594980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_164594980_channel__b0_582691_164466080_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)channel__b0_582691_164466080;
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

SignalI mem_164794460_channel__b0_582691_164466080_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makemem_164794460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_164794460_channel__b0_582691_164466080_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)channel__b0_582691_164466080;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(make__209196200(),signalI->c_value);
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope raddr_582692_164465740;

Scope makeraddr_582692_164465740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_582692_164465740 = scope;
   scope->owner = (Object)channel__b0_582691_164466080;
   scope->name = "raddr:2692";
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

Scope rinc_582697_164465240;

Scope makerinc_582697_164465240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_582697_164465240 = scope;
   scope->owner = (Object)channel__b0_582691_164466080;
   scope->name = "rinc:2697";
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

Scope rdec_582701_164464720;

Scope makerdec_582701_164464720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_582701_164464720 = scope;
   scope->owner = (Object)channel__b0_582691_164466080;
   scope->name = "rdec:2701";
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

Behavior __165562400;

Behavior make__165562400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __165562400 = behavior;
   behavior->owner = (Object)channel__b0_582691_164466080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_neg += 1;
   clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->neg = realloc(clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->neg,clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_neg*sizeof(Object));
clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->neg[clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_neg-1] = (Object)behavior;
   behavior->block = make__165034220();

   return behavior;
}

Behavior __208874580;

Behavior make__208874580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __208874580 = behavior;
   behavior->owner = (Object)channel__b0_582691_164466080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_164595140_channel__b0_582691_164466080_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   dbus__r_164595140_channel__b0_582691_164466080_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   dbus__r_164595140_channel__b0_582691_164466080_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(dbus__r_164595140_channel__b0_582691_164466080_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,dbus__r_164595140_channel__b0_582691_164466080_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
dbus__r_164595140_channel__b0_582691_164466080_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[dbus__r_164595140_channel__b0_582691_164466080_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__208874840();

   return behavior;
}

Behavior __208874140;

Behavior make__208874140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __208874140 = behavior;
   behavior->owner = (Object)channel__b0_582691_164466080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_582695_105869980_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   _582695_105869980_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   _582695_105869980_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(_582695_105869980_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,_582695_105869980_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
_582695_105869980_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[_582695_105869980_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__208874520();

   return behavior;
}

Behavior __208873580;

Behavior make__208873580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __208873580 = behavior;
   behavior->owner = (Object)channel__b0_582691_164466080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_164464260_channel__b0_582691_164466080_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   trig__r_164464260_channel__b0_582691_164466080_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   trig__r_164464260_channel__b0_582691_164466080_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(trig__r_164464260_channel__b0_582691_164466080_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,trig__r_164464260_channel__b0_582691_164466080_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
trig__r_164464260_channel__b0_582691_164466080_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[trig__r_164464260_channel__b0_582691_164466080_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__208873800();

   return behavior;
}

Behavior __208873300;

Behavior make__208873300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __208873300 = behavior;
   behavior->owner = (Object)channel__b0_582691_164466080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_582693_105869940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   _582693_105869940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   _582693_105869940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(_582693_105869940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,_582693_105869940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
_582693_105869940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[_582693_105869940_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__208873500();

   return behavior;
}

Behavior __208872640;

Behavior make__208872640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __208872640 = behavior;
   behavior->owner = (Object)channel__b0_582691_164466080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_164594980_channel__b0_582691_164466080_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   abus__r_164594980_channel__b0_582691_164466080_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   abus__r_164594980_channel__b0_582691_164466080_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(abus__r_164594980_channel__b0_582691_164466080_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,abus__r_164594980_channel__b0_582691_164466080_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
abus__r_164594980_channel__b0_582691_164466080_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[abus__r_164594980_channel__b0_582691_164466080_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__208872880();

   return behavior;
}

Behavior __208872260;

Behavior make__208872260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __208872260 = behavior;
   behavior->owner = (Object)channel__b0_582691_164466080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_582694_105869800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   _582694_105869800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   _582694_105869800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(_582694_105869800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,_582694_105869800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
_582694_105869800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[_582694_105869800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__208872600();

   return behavior;
}

Scope makechannel__b0_582691_164466080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__b0_582691_164466080 = scope;
   scope->owner = (Object)layer0_58_841_147366420;
   scope->name = "channel_b0:2691";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_164464260();
   scope->inners[1] = makedbus__r_164595140();
   scope->inners[2] = makeabus__r_164594980();
   scope->inners[3] = makemem_164794460();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_582692_164465740();
   scope->scopes[1] = makerinc_582697_164465240();
   scope->scopes[2] = makerdec_582701_164464720();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__165562400();
   scope->behaviors[1] = make__208874580();
   scope->behaviors[2] = make__208874140();
   scope->behaviors[3] = make__208873580();
   scope->behaviors[4] = make__208873300();
   scope->behaviors[5] = make__208872640();
   scope->behaviors[6] = make__208872260();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__b1_582706_165562220;

SignalI trig__r_165584660_channel__b1_582706_165562220_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI maketrig__r_165584660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_165584660_channel__b1_582706_165562220_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)channel__b1_582706_165562220;
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

SignalI dbus__r_165627500_channel__b1_582706_165562220_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makedbus__r_165627500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_165627500_channel__b1_582706_165562220_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)channel__b1_582706_165562220;
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

SignalI abus__r_165627420_channel__b1_582706_165562220_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makeabus__r_165627420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_165627420_channel__b1_582706_165562220_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)channel__b1_582706_165562220;
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

SignalI mem_165998700_channel__b1_582706_165562220_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makemem_165998700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_165998700_channel__b1_582706_165562220_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)channel__b1_582706_165562220;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(make__209194900(),signalI->c_value);
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope raddr_582707_165561900;

Scope makeraddr_582707_165561900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_582707_165561900 = scope;
   scope->owner = (Object)channel__b1_582706_165562220;
   scope->name = "raddr:2707";
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

Scope rinc_582712_165561160;

Scope makerinc_582712_165561160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_582712_165561160 = scope;
   scope->owner = (Object)channel__b1_582706_165562220;
   scope->name = "rinc:2712";
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

Scope rdec_582716_165560740;

Scope makerdec_582716_165560740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_582716_165560740 = scope;
   scope->owner = (Object)channel__b1_582706_165562220;
   scope->name = "rdec:2716";
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

Behavior __166477920;

Behavior make__166477920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __166477920 = behavior;
   behavior->owner = (Object)channel__b1_582706_165562220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_neg += 1;
   clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->neg = realloc(clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->neg,clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_neg*sizeof(Object));
clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->neg[clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_neg-1] = (Object)behavior;
   behavior->block = make__166130660();

   return behavior;
}

Behavior __208894780;

Behavior make__208894780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __208894780 = behavior;
   behavior->owner = (Object)channel__b1_582706_165562220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_165627500_channel__b1_582706_165562220_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   dbus__r_165627500_channel__b1_582706_165562220_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   dbus__r_165627500_channel__b1_582706_165562220_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(dbus__r_165627500_channel__b1_582706_165562220_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,dbus__r_165627500_channel__b1_582706_165562220_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
dbus__r_165627500_channel__b1_582706_165562220_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[dbus__r_165627500_channel__b1_582706_165562220_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__208895060();

   return behavior;
}

Behavior __208894540;

Behavior make__208894540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __208894540 = behavior;
   behavior->owner = (Object)channel__b1_582706_165562220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_582710_107240820_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   _582710_107240820_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   _582710_107240820_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(_582710_107240820_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,_582710_107240820_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
_582710_107240820_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[_582710_107240820_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__208894740();

   return behavior;
}

Behavior __208893640;

Behavior make__208893640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __208893640 = behavior;
   behavior->owner = (Object)channel__b1_582706_165562220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_165584660_channel__b1_582706_165562220_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   trig__r_165584660_channel__b1_582706_165562220_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   trig__r_165584660_channel__b1_582706_165562220_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(trig__r_165584660_channel__b1_582706_165562220_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,trig__r_165584660_channel__b1_582706_165562220_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
trig__r_165584660_channel__b1_582706_165562220_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[trig__r_165584660_channel__b1_582706_165562220_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__208893960();

   return behavior;
}

Behavior __208893300;

Behavior make__208893300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __208893300 = behavior;
   behavior->owner = (Object)channel__b1_582706_165562220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_582708_107240760_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   _582708_107240760_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   _582708_107240760_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(_582708_107240760_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,_582708_107240760_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
_582708_107240760_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[_582708_107240760_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__208893560();

   return behavior;
}

Behavior __208892780;

Behavior make__208892780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __208892780 = behavior;
   behavior->owner = (Object)channel__b1_582706_165562220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_165627420_channel__b1_582706_165562220_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   abus__r_165627420_channel__b1_582706_165562220_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   abus__r_165627420_channel__b1_582706_165562220_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(abus__r_165627420_channel__b1_582706_165562220_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,abus__r_165627420_channel__b1_582706_165562220_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
abus__r_165627420_channel__b1_582706_165562220_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[abus__r_165627420_channel__b1_582706_165562220_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__208892960();

   return behavior;
}

Behavior __208892540;

Behavior make__208892540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __208892540 = behavior;
   behavior->owner = (Object)channel__b1_582706_165562220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_582709_107240660_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   _582709_107240660_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   _582709_107240660_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(_582709_107240660_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,_582709_107240660_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
_582709_107240660_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[_582709_107240660_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__208892740();

   return behavior;
}

Scope makechannel__b1_582706_165562220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__b1_582706_165562220 = scope;
   scope->owner = (Object)layer0_58_841_147366420;
   scope->name = "channel_b1:2706";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_165584660();
   scope->inners[1] = makedbus__r_165627500();
   scope->inners[2] = makeabus__r_165627420();
   scope->inners[3] = makemem_165998700();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_582707_165561900();
   scope->scopes[1] = makerinc_582712_165561160();
   scope->scopes[2] = makerdec_582716_165560740();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__166477920();
   scope->behaviors[1] = make__208894780();
   scope->behaviors[2] = make__208894540();
   scope->behaviors[3] = make__208893640();
   scope->behaviors[4] = make__208893300();
   scope->behaviors[5] = make__208892780();
   scope->behaviors[6] = make__208892540();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__z_582721_166567800;

SignalI reg__0_166659160_channel__z_582721_166567800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makereg__0_166659160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_166659160_channel__z_582721_166567800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)channel__z_582721_166567800;
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

SignalI reg__1_166855720_channel__z_582721_166567800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makereg__1_166855720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_166855720_channel__z_582721_166567800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)channel__z_582721_166567800;
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

Scope anum_582722_166567500;

Scope makeanum_582722_166567500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_582722_166567500 = scope;
   scope->owner = (Object)channel__z_582721_166567800;
   scope->name = "anum:2722";
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

Scope raddr_582725_166567080;

Scope makeraddr_582725_166567080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_582725_166567080 = scope;
   scope->owner = (Object)channel__z_582721_166567800;
   scope->name = "raddr:2725";
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

Scope waddr_582729_166566620;

Scope makewaddr_582729_166566620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_582729_166566620 = scope;
   scope->owner = (Object)channel__z_582721_166567800;
   scope->name = "waddr:2729";
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

Scope rinc_582733_166566180;

SignalI abus__r_166565620_rinc_582733_166566180_channel__z_582721_166567800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makeabus__r_166565620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_166565620_rinc_582733_166566180_channel__z_582721_166567800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)rinc_582733_166566180;
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

Scope makerinc_582733_166566180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_582733_166566180 = scope;
   scope->owner = (Object)channel__z_582721_166567800;
   scope->name = "rinc:2733";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_166565620();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_582737_166565500;

SignalI abus__w_166565120_winc_582737_166565500_channel__z_582721_166567800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makeabus__w_166565120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_166565120_winc_582737_166565500_channel__z_582721_166567800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)winc_582737_166565500;
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

Scope makewinc_582737_166565500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_582737_166565500 = scope;
   scope->owner = (Object)channel__z_582721_166567800;
   scope->name = "winc:2737";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_166565120();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_582741_166565000;

SignalI abus__r_166564580_rdec_582741_166565000_channel__z_582721_166567800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makeabus__r_166564580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_166564580_rdec_582741_166565000_channel__z_582721_166567800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)rdec_582741_166565000;
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

Scope makerdec_582741_166565000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_582741_166565000 = scope;
   scope->owner = (Object)channel__z_582721_166567800;
   scope->name = "rdec:2741";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_166564580();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_582746_166564460;

SignalI abus__w_166564080_wdec_582746_166564460_channel__z_582721_166567800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makeabus__w_166564080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_166564080_wdec_582746_166564460_channel__z_582721_166567800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)wdec_582746_166564460;
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

Scope makewdec_582746_166564460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_582746_166564460 = scope;
   scope->owner = (Object)channel__z_582721_166567800;
   scope->name = "wdec:2746";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_166564080();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __208890220;

Behavior make__208890220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __208890220 = behavior;
   behavior->owner = (Object)channel__z_582721_166567800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_166659160_channel__z_582721_166567800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   reg__0_166659160_channel__z_582721_166567800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   reg__0_166659160_channel__z_582721_166567800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(reg__0_166659160_channel__z_582721_166567800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,reg__0_166659160_channel__z_582721_166567800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
reg__0_166659160_channel__z_582721_166567800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[reg__0_166659160_channel__z_582721_166567800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__208890380();

   return behavior;
}

Behavior __208889980;

Behavior make__208889980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __208889980 = behavior;
   behavior->owner = (Object)channel__z_582721_166567800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_582723_106425820_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   _582723_106425820_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   _582723_106425820_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(_582723_106425820_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,_582723_106425820_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
_582723_106425820_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[_582723_106425820_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__208890180();

   return behavior;
}

Behavior __208889160;

Behavior make__208889160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __208889160 = behavior;
   behavior->owner = (Object)channel__z_582721_166567800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_166855720_channel__z_582721_166567800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   reg__1_166855720_channel__z_582721_166567800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   reg__1_166855720_channel__z_582721_166567800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(reg__1_166855720_channel__z_582721_166567800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,reg__1_166855720_channel__z_582721_166567800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
reg__1_166855720_channel__z_582721_166567800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[reg__1_166855720_channel__z_582721_166567800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__208889420();

   return behavior;
}

Behavior __208888900;

Behavior make__208888900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __208888900 = behavior;
   behavior->owner = (Object)channel__z_582721_166567800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_582724_106913080_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   _582724_106913080_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   _582724_106913080_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(_582724_106913080_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,_582724_106913080_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
_582724_106913080_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[_582724_106913080_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__208889100();

   return behavior;
}

Scope makechannel__z_582721_166567800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__z_582721_166567800 = scope;
   scope->owner = (Object)layer0_58_841_147366420;
   scope->name = "channel_z:2721";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_166659160();
   scope->inners[1] = makereg__1_166855720();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_582722_166567500();
   scope->scopes[1] = makeraddr_582725_166567080();
   scope->scopes[2] = makewaddr_582729_166566620();
   scope->scopes[3] = makerinc_582733_166566180();
   scope->scopes[4] = makewinc_582737_166565500();
   scope->scopes[5] = makerdec_582741_166565000();
   scope->scopes[6] = makewdec_582746_166564460();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__208890220();
   scope->behaviors[1] = make__208889980();
   scope->behaviors[2] = make__208889160();
   scope->behaviors[3] = make__208888900();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope add__n_582751_53692800;

SignalI lv0_59637000_add__n_582751_53692800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makelv0_59637000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_59637000_add__n_582751_53692800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)add__n_582751_53692800;
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

SignalI lv1_61792280_add__n_582751_53692800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makelv1_61792280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_61792280_add__n_582751_53692800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)add__n_582751_53692800;
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

SignalI rv0_64246720_add__n_582751_53692800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makerv0_64246720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_64246720_add__n_582751_53692800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)add__n_582751_53692800;
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

SignalI rv1_65190300_add__n_582751_53692800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makerv1_65190300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv1_65190300_add__n_582751_53692800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)add__n_582751_53692800;
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

SignalI lvok0_65190000_add__n_582751_53692800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makelvok0_65190000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_65190000_add__n_582751_53692800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)add__n_582751_53692800;
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

SignalI lvok1_65187520_add__n_582751_53692800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makelvok1_65187520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_65187520_add__n_582751_53692800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)add__n_582751_53692800;
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

SignalI rvok0_65186860_add__n_582751_53692800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makervok0_65186860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_65186860_add__n_582751_53692800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)add__n_582751_53692800;
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

SignalI rvok1_65186540_add__n_582751_53692800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makervok1_65186540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok1_65186540_add__n_582751_53692800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)add__n_582751_53692800;
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

SignalI run_65186360_add__n_582751_53692800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400;

SignalI makerun_65186360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_65186360_add__n_582751_53692800_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400 = signalI;
   signalI->owner = (Object)add__n_582751_53692800;
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

Behavior __79678120;

Behavior make__79678120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79678120 = behavior;
   behavior->owner = (Object)add__n_582751_53692800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_pos += 1;
   clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->pos = realloc(clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->pos,clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_pos*sizeof(Object));
clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->pos[clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_pos-1] = (Object)behavior;
   behavior->block = make__65186020();

   return behavior;
}

Scope makeadd__n_582751_53692800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   add__n_582751_53692800 = scope;
   scope->owner = (Object)layer0_58_841_147366420;
   scope->name = "add_n:2751";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_59637000();
   scope->inners[1] = makelv1_61792280();
   scope->inners[2] = makerv0_64246720();
   scope->inners[3] = makerv1_65190300();
   scope->inners[4] = makelvok0_65190000();
   scope->inners[5] = makelvok1_65187520();
   scope->inners[6] = makervok0_65186860();
   scope->inners[7] = makervok1_65186540();
   scope->inners[8] = makerun_65186360();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__79678120();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __65138980;

Behavior make__65138980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __65138980 = behavior;
   behavior->owner = (Object)layer0_58_841_147366420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_pos += 1;
   clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->pos = realloc(clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->pos,clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_pos*sizeof(Object));
clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->pos[clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_pos-1] = (Object)behavior;
   behavior->block = make__65062820();

   return behavior;
}

Behavior __79730660;

Behavior make__79730660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79730660 = behavior;
   behavior->owner = (Object)layer0_58_841_147366420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_pos += 1;
   clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->pos = realloc(clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->pos,clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_pos*sizeof(Object));
clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->pos[clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_pos-1] = (Object)behavior;
   behavior->block = make__65138460();

   return behavior;
}

Behavior __83470240;

Behavior make__83470240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __83470240 = behavior;
   behavior->owner = (Object)layer0_58_841_147366420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_pos += 1;
   clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->pos = realloc(clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->pos,clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_pos*sizeof(Object));
clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->pos[clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_pos-1] = (Object)behavior;
   behavior->block = make__79729780();

   return behavior;
}

Behavior __208791180;

Behavior make__208791180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __208791180 = behavior;
   behavior->owner = (Object)layer0_58_841_147366420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,req_83518800_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   req_83518800_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   req_83518800_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(req_83518800_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,req_83518800_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
req_83518800_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[req_83518800_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__mac_79677860_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   ack__mac_79677860_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   ack__mac_79677860_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(ack__mac_79677860_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,ack__mac_79677860_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
ack__mac_79677860_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[ack__mac_79677860_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__208791520();

   return behavior;
}

Behavior __208842500;

Behavior make__208842500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __208842500 = behavior;
   behavior->owner = (Object)layer0_58_841_147366420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 7;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[clk_83519260_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack_79677880_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   ack_79677880_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   ack_79677880_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(ack_79677880_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,ack_79677880_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
ack_79677880_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[ack_79677880_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_83519200_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   rst_83519200_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   rst_83519200_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(rst_83519200_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,rst_83519200_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
rst_83519200_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[rst_83519200_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,value__z0_107642980_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   value__z0_107642980_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   value__z0_107642980_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(value__z0_107642980_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,value__z0_107642980_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
value__z0_107642980_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[value__z0_107642980_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,value__z1_108025440_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   value__z1_108025440_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   value__z1_108025440_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(value__z1_108025440_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,value__z1_108025440_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
value__z1_108025440_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[value__z1_108025440_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,ack__a0_108821400_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   ack__a0_108821400_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   ack__a0_108821400_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(ack__a0_108821400_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,ack__a0_108821400_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
ack__a0_108821400_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[ack__a0_108821400_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[6] = make_event(ANYEDGE,ack__a1_108821280_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   ack__a1_108821280_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   ack__a1_108821280_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(ack__a1_108821280_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,ack__a1_108821280_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
ack__a1_108821280_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[ack__a1_108821280_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__208791800();

   return behavior;
}

Behavior __208842300;

Behavior make__208842300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __208842300 = behavior;
   behavior->owner = (Object)layer0_58_841_147366420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 4;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__mac_108976520_counter_58_8430_108867480_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   ack__mac_108976520_counter_58_8430_108867480_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   ack__mac_108976520_counter_58_8430_108867480_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(ack__mac_108976520_counter_58_8430_108867480_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,ack__mac_108976520_counter_58_8430_108867480_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
ack__mac_108976520_counter_58_8430_108867480_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[ack__mac_108976520_counter_58_8430_108867480_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_83519200_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   rst_83519200_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   rst_83519200_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(rst_83519200_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,rst_83519200_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
rst_83519200_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[rst_83519200_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,a_63238300_func0_58_8430_148308520_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   a_63238300_func0_58_8430_148308520_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   a_63238300_func0_58_8430_148308520_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(a_63238300_func0_58_8430_148308520_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,a_63238300_func0_58_8430_148308520_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
a_63238300_func0_58_8430_148308520_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[a_63238300_func0_58_8430_148308520_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,a_166829280_func1_58_8430_166389140_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400);
   a_166829280_func1_58_8430_166389140_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any += 1;
   a_166829280_func1_58_8430_166389140_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any = realloc(a_166829280_func1_58_8430_166389140_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any,a_166829280_func1_58_8430_166389140_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any*sizeof(Object));
a_166829280_func1_58_8430_166389140_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->any[a_166829280_func1_58_8430_166389140_layer0_58_841_147366420_layer0_58_8410_83468900_input__tanh__nn_58_84_112119420_input__tanh__nn_58_840_193083620______58_84_66380400______58_840_190520400->num_any-1] = (Object)behavior;
   behavior->block = make__208791740();

   return behavior;
}

Scope makelayer0_58_841_147366420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   layer0_58_841_147366420 = scope;
   scope->owner = (Object)layer0_58_8410_83468900;
   scope->name = "layer0:T1";
   scope->num_systemIs = 3;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makecounter_108976200();
   scope->systemIs[1] = makefunc0_63238160();
   scope->systemIs[2] = makefunc1_166829140();
   scope->num_inners = 30;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereq__mac_79677920();
   scope->inners[1] = makeack_79677880();
   scope->inners[2] = makeack__mac_79677860();
   scope->inners[3] = makeack__add_79677800();
   scope->inners[4] = make_582631_71084720();
   scope->inners[5] = make_582629_71084700();
   scope->inners[6] = make_582630_71084480();
   scope->inners[7] = make_582654_104633260();
   scope->inners[8] = make_582655_104941420();
   scope->inners[9] = make_582646_105283720();
   scope->inners[10] = make_582644_105283620();
   scope->inners[11] = make_582645_105340780();
   scope->inners[12] = make_582695_105869980();
   scope->inners[13] = make_582696_105869960();
   scope->inners[14] = make_582693_105869940();
   scope->inners[15] = make_582694_105869800();
   scope->inners[16] = make_582723_106425820();
   scope->inners[17] = make_582724_106913080();
   scope->inners[18] = make_582710_107240820();
   scope->inners[19] = make_582711_107240780();
   scope->inners[20] = make_582708_107240760();
   scope->inners[21] = make_582709_107240660();
   scope->inners[22] = makevalue__z0_107642980();
   scope->inners[23] = makevalue__z1_108025440();
   scope->inners[24] = makevalue__a0_108543200();
   scope->inners[25] = makevalue__a1_108821540();
   scope->inners[26] = makeflag__z0_108821500();
   scope->inners[27] = makeflag__z1_108821440();
   scope->inners[28] = makeack__a0_108821400();
   scope->inners[29] = makeack__a1_108821280();
   scope->num_scopes = 8;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__w0_582622_147365940();
   scope->scopes[1] = makechannel__w1_582637_153374540();
   scope->scopes[2] = makechannel__accum_582652_156535740();
   scope->scopes[3] = makemac__n1_582684_157873940();
   scope->scopes[4] = makechannel__b0_582691_164466080();
   scope->scopes[5] = makechannel__b1_582706_165562220();
   scope->scopes[6] = makechannel__z_582721_166567800();
   scope->scopes[7] = makeadd__n_582751_53692800();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__65138980();
   scope->behaviors[1] = make__79730660();
   scope->behaviors[2] = make__83470240();
   scope->behaviors[3] = make__208791180();
   scope->behaviors[4] = make__208842500();
   scope->behaviors[5] = make__208842300();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makelayer0_58_8410_83468900() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   layer0_58_8410_83468900 = systemT;
systemT->owner = NULL;
   systemT->name = "layer0:T10";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_83519260();
   systemT->inputs[1] = makerst_83519200();
   systemT->inputs[2] = makereq_83518800();
   systemT->inputs[3] = make_582505_84282340();
   systemT->num_outputs = 3;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__layer_84282220();
   systemT->outputs[1] = make_582503_84282200();
   systemT->outputs[2] = make_582504_84281780();
   systemT->num_inouts = 2;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_582594_85958700();
   systemT->inouts[1] = make_582595_86735440();

   systemT->scope = makelayer0_58_841_147366420();

   return systemT;
}