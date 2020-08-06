#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__layer_58_840_45732720;

SignalI clk_45728920_my__layer_58_840_45732720___44606540______58_840_45889040;

SignalI makeclk_45728920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_45728920_my__layer_58_840_45732720___44606540______58_840_45889040 = signalI;
   signalI->owner = (Object)my__layer_58_840_45732720;
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

SignalI rst_45728820_my__layer_58_840_45732720___44606540______58_840_45889040;

SignalI makerst_45728820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_45728820_my__layer_58_840_45732720___44606540______58_840_45889040 = signalI;
   signalI->owner = (Object)my__layer_58_840_45732720;
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

SignalI req_45728800_my__layer_58_840_45732720___44606540______58_840_45889040;

SignalI makereq_45728800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_45728800_my__layer_58_840_45732720___44606540______58_840_45889040 = signalI;
   signalI->owner = (Object)my__layer_58_840_45732720;
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

SignalI flag_45728760_my__layer_58_840_45732720___44606540______58_840_45889040;

SignalI makeflag_45728760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag_45728760_my__layer_58_840_45732720___44606540______58_840_45889040 = signalI;
   signalI->owner = (Object)my__layer_58_840_45732720;
   signalI->name = "flag";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI ack_45728700_my__layer_58_840_45732720___44606540______58_840_45889040;

SignalI makeack_45728700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_45728700_my__layer_58_840_45732720___44606540______58_840_45889040 = signalI;
   signalI->owner = (Object)my__layer_58_840_45732720;
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

Block __47054620;

void code__47054620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_45728920_my__layer_58_840_45732720___44606540______58_840_45889040->c_value,clk_45735480_my__initializer_58_840_45708040___44549040_my__layer_58_840_45732720___44606540______58_840_45889040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(flag_45728760_my__layer_58_840_45732720___44606540______58_840_45889040->c_value,flag_45735340_my__initializer_58_840_45708040___44549040_my__layer_58_840_45732720___44606540______58_840_45889040);
      set_value_pos(pool_state);
   }
}

Block make__47054620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47054620 = block;
   block->owner = (Object)__47052460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47054620;

   return block;
};

Block __47051800;

void code__47051800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_45451640___44548240___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->c_value,_5862_45516940___44549040_my__layer_58_840_45732720___44606540______58_840_45889040);
      set_value_pos(pool_state);
   }
}

Block make__47051800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47051800 = block;
   block->owner = (Object)__47051640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47051800;

   return block;
};

Block __47051600;

void code__47051600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5862_45516940___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->c_value,reg__0_45451640___44548240___44549040_my__layer_58_840_45732720___44606540______58_840_45889040);
      set_value_pos(pool_state);
   }
}

Block make__47051600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47051600 = block;
   block->owner = (Object)__47051440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47051600;

   return block;
};

Block __47051140;

void code__47051140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_45451540___44548240___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->c_value,_5863_45516860___44549040_my__layer_58_840_45732720___44606540______58_840_45889040);
      set_value_pos(pool_state);
   }
}

Block make__47051140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47051140 = block;
   block->owner = (Object)__47050980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47051140;

   return block;
};

Block __47050940;

void code__47050940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5863_45516860___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->c_value,reg__1_45451540___44548240___44549040_my__layer_58_840_45732720___44606540______58_840_45889040);
      set_value_pos(pool_state);
   }
}

Block make__47050940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47050940 = block;
   block->owner = (Object)__47050780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47050940;

   return block;
};

Block __47050480;

void code__47050480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_45451640___44548240___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->c_value,_5877_45516400___44549040_my__layer_58_840_45732720___44606540______58_840_45889040);
      set_value_pos(pool_state);
   }
}

Block make__47050480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47050480 = block;
   block->owner = (Object)__47050320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47050480;

   return block;
};

Block __47050280;

void code__47050280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5877_45516400___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->c_value,reg__0_45451640___44548240___44549040_my__layer_58_840_45732720___44606540______58_840_45889040);
      set_value_pos(pool_state);
   }
}

Block make__47050280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47050280 = block;
   block->owner = (Object)__47050120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47050280;

   return block;
};

Block __47049820;

void code__47049820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_45451540___44548240___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->c_value,_5878_45515820___44549040_my__layer_58_840_45732720___44606540______58_840_45889040);
      set_value_pos(pool_state);
   }
}

Block make__47049820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47049820 = block;
   block->owner = (Object)__47049660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47049820;

   return block;
};

Block __47049620;

void code__47049620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5878_45515820___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->c_value,reg__1_45451540___44548240___44549040_my__layer_58_840_45732720___44606540______58_840_45889040);
      set_value_pos(pool_state);
   }
}

Block make__47049620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47049620 = block;
   block->owner = (Object)__47049460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47049620;

   return block;
};

Block __47048040;

void code__47048040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_45386760___45380660___44548240___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->c_value,_5879_45515180___44549040_my__layer_58_840_45732720___44606540______58_840_45889040);
      set_value_pos(pool_state);
   }
}

Block make__47048040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47048040 = block;
   block->owner = (Object)__47047880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47048040;

   return block;
};

Block __47047840;

void code__47047840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5879_45515180___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->c_value,abus__w_45386760___45380660___44548240___44549040_my__layer_58_840_45732720___44606540______58_840_45889040);
      set_value_pos(pool_state);
   }
}

Block make__47047840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47047840 = block;
   block->owner = (Object)__47047680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47047840;

   return block;
};

Block __45546520;

Block __45540480;

Block __45539980;

void code__45539980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_582_44550160___44606540______58_840_45889040->c_value,lv0_45449520___45450060___44549040_my__layer_58_840_45732720___44606540______58_840_45889040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47126280(),lvok0_45547160___45450060___44549040_my__layer_58_840_45732720___44606540______58_840_45889040);
      set_value_pos(pool_state);
   }
}

Block make__45539980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45539980 = block;
   block->owner = (Object)__45540480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45539980;

   return block;
};

Block __45522820;

void code__45522820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5862_45516940___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->c_value,rv0_45449340___45450060___44549040_my__layer_58_840_45732720___44606540______58_840_45889040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47126140(),rvok0_45547020___45450060___44549040_my__layer_58_840_45732720___44606540______58_840_45889040);
      set_value_pos(pool_state);
   }
}

Block make__45522820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45522820 = block;
   block->owner = (Object)__45540480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45522820;

   return block;
};

Block __45522000;

Block __45521420;

void code__45521420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_45449520___45450060___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->c_value;
      src1 = rv0_45449340___45450060___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_5832_44549920___44606540______58_840_45889040);
      set_value_pos(pool_state);
   }
}

Block make__45521420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45521420 = block;
   block->owner = (Object)__45522000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45521420;

   return block;
};

void code__45522000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47125980(),run_45546940___45450060___44549040_my__layer_58_840_45732720___44606540______58_840_45889040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47125920(),ack_45728700_my__layer_58_840_45732720___44606540______58_840_45889040);
      set_value_pos(pool_state);
   }
 code__45521420();
}

Block make__45522000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45522000 = block;
   block->owner = (Object)__45540480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45522000;

   return block;
};

Block __45520600;

void code__45520600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_583_44550040___44606540______58_840_45889040->c_value,lv1_45449420___45450060___44549040_my__layer_58_840_45732720___44606540______58_840_45889040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47125640(),lvok1_45547140___45450060___44549040_my__layer_58_840_45732720___44606540______58_840_45889040);
      set_value_pos(pool_state);
   }
}

Block make__45520600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45520600 = block;
   block->owner = (Object)__45540480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45520600;

   return block;
};

Block __45519880;

void code__45519880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5863_45516860___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->c_value,rv1_45547260___45450060___44549040_my__layer_58_840_45732720___44606540______58_840_45889040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47125500(),rvok1_45547000___45450060___44549040_my__layer_58_840_45732720___44606540______58_840_45889040);
      set_value_pos(pool_state);
   }
}

Block make__45519880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45519880 = block;
   block->owner = (Object)__45540480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45519880;

   return block;
};

Block __45519100;

Block __45518440;

void code__45518440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv1_45449420___45450060___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->c_value;
      src1 = rv1_45547260___45450060___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_5833_44549800___44606540______58_840_45889040);
      set_value_pos(pool_state);
   }
}

Block make__45518440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45518440 = block;
   block->owner = (Object)__45519100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45518440;

   return block;
};

void code__45519100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47125340(),run_45546940___45450060___44549040_my__layer_58_840_45732720___44606540______58_840_45889040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47125280(),ack_45728700_my__layer_58_840_45732720___44606540______58_840_45889040);
      set_value_pos(pool_state);
   }
 code__45518440();
}

Block make__45519100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45519100 = block;
   block->owner = (Object)__45540480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45519100;

   return block;
};

void code__45540480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47126500(),run_45546940___45450060___44549040_my__layer_58_840_45732720___44606540______58_840_45889040);
      set_value_pos(pool_state);
   }
 code__45539980();
 code__45522820();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_45547160___45450060___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->c_value;
         src1 = rvok0_45547020___45450060___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45522000();
   }
      }
   }
 code__45520600();
 code__45519880();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_45547140___45450060___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->c_value;
         src1 = rvok1_45547000___45450060___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45519100();
   }
      }
   }
}

Block make__45540480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45540480 = block;
   block->owner = (Object)__45546520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45540480;

   return block;
};

Block __45545000;

void code__45545000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47125080(),lvok0_45547160___45450060___44549040_my__layer_58_840_45732720___44606540______58_840_45889040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47125020(),rvok0_45547020___45450060___44549040_my__layer_58_840_45732720___44606540______58_840_45889040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47124960(),lvok1_45547140___45450060___44549040_my__layer_58_840_45732720___44606540______58_840_45889040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47124900(),rvok1_45547000___45450060___44549040_my__layer_58_840_45732720___44606540______58_840_45889040);
      set_value_pos(pool_state);
   }
}

Block make__45545000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45545000 = block;
   block->owner = (Object)__45546520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45545000;

   return block;
};

void code__45546520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47126840(),ack_45728700_my__layer_58_840_45732720___44606540______58_840_45889040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47126740(),run_45546940___45450060___44549040_my__layer_58_840_45732720___44606540______58_840_45889040);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req_45728800_my__layer_58_840_45732720___44606540______58_840_45889040->c_value;
         src1 = run_45546940___45450060___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__45540480();
   }
   else {
  code__45545000();
   }
      }
   }
}

Block make__45546520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45546520 = block;
   block->owner = (Object)__45517220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45546520;

   return block;
};

Value make__47126840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47126740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47126500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47126280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47126140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47125980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47125920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47125640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47125500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47125340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47125280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47125080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47125020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47124960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47124900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope __44549040;

SignalI _5862_45516940___44549040_my__layer_58_840_45732720___44606540______58_840_45889040;

SignalI make_5862_45516940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5862_45516940___44549040_my__layer_58_840_45732720___44606540______58_840_45889040 = signalI;
   signalI->owner = (Object)__44549040;
   signalI->name = ":62";
   signalI->type = get_type_vector(get_type_bit(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _5863_45516860___44549040_my__layer_58_840_45732720___44606540______58_840_45889040;

SignalI make_5863_45516860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5863_45516860___44549040_my__layer_58_840_45732720___44606540______58_840_45889040 = signalI;
   signalI->owner = (Object)__44549040;
   signalI->name = ":63";
   signalI->type = get_type_vector(get_type_bit(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _5877_45516400___44549040_my__layer_58_840_45732720___44606540______58_840_45889040;

SignalI make_5877_45516400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5877_45516400___44549040_my__layer_58_840_45732720___44606540______58_840_45889040 = signalI;
   signalI->owner = (Object)__44549040;
   signalI->name = ":77";
   signalI->type = get_type_vector(get_type_bit(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _5878_45515820___44549040_my__layer_58_840_45732720___44606540______58_840_45889040;

SignalI make_5878_45515820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5878_45515820___44549040_my__layer_58_840_45732720___44606540______58_840_45889040 = signalI;
   signalI->owner = (Object)__44549040;
   signalI->name = ":78";
   signalI->type = get_type_vector(get_type_bit(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _5879_45515180___44549040_my__layer_58_840_45732720___44606540______58_840_45889040;

SignalI make_5879_45515180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5879_45515180___44549040_my__layer_58_840_45732720___44606540______58_840_45889040 = signalI;
   signalI->owner = (Object)__44549040;
   signalI->name = ":79";
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

SystemI my__initializer_45734900;

SystemI makemy__initializer_45734900() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__initializer_45734900 = systemI;
   systemI->owner = (Object)__44549040;
   systemI->name = "my_initializer";
   systemI->system = my__initializer_58_840_45708040;

   return systemI;
};

Scope __44548240;

SignalI reg__0_45451640___44548240___44549040_my__layer_58_840_45732720___44606540______58_840_45889040;

SignalI makereg__0_45451640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_45451640___44548240___44549040_my__layer_58_840_45732720___44606540______58_840_45889040 = signalI;
   signalI->owner = (Object)__44548240;
   signalI->name = "reg_0";
   signalI->type = get_type_vector(get_type_bit(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI reg__1_45451540___44548240___44549040_my__layer_58_840_45732720___44606540______58_840_45889040;

SignalI makereg__1_45451540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_45451540___44548240___44549040_my__layer_58_840_45732720___44606540______58_840_45889040 = signalI;
   signalI->owner = (Object)__44548240;
   signalI->name = "reg_1";
   signalI->type = get_type_vector(get_type_bit(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope __45364760;

Scope make__45364760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45364760 = scope;
   scope->owner = (Object)__44548240;
   scope->name = "";
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

Scope __45360980;

Scope make__45360980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45360980 = scope;
   scope->owner = (Object)__44548240;
   scope->name = "";
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

Scope __45359400;

Scope make__45359400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45359400 = scope;
   scope->owner = (Object)__44548240;
   scope->name = "";
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

Scope __45382500;

SignalI abus__r_45381060___45382500___44548240___44549040_my__layer_58_840_45732720___44606540______58_840_45889040;

SignalI makeabus__r_45381060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_45381060___45382500___44548240___44549040_my__layer_58_840_45732720___44606540______58_840_45889040 = signalI;
   signalI->owner = (Object)__45382500;
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

Scope make__45382500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45382500 = scope;
   scope->owner = (Object)__44548240;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_45381060();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __45380660;

SignalI abus__w_45386760___45380660___44548240___44549040_my__layer_58_840_45732720___44606540______58_840_45889040;

SignalI makeabus__w_45386760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_45386760___45380660___44548240___44549040_my__layer_58_840_45732720___44606540______58_840_45889040 = signalI;
   signalI->owner = (Object)__45380660;
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

Behavior __47047880;

Behavior make__47047880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47047880 = behavior;
   behavior->owner = (Object)__45380660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_45386760___45380660___44548240___44549040_my__layer_58_840_45732720___44606540______58_840_45889040);
   abus__w_45386760___45380660___44548240___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->num_any += 1;
   abus__w_45386760___45380660___44548240___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->any = realloc(abus__w_45386760___45380660___44548240___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->any,abus__w_45386760___45380660___44548240___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->num_any*sizeof(Object));
abus__w_45386760___45380660___44548240___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->any[abus__w_45386760___45380660___44548240___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->num_any-1] = (Object)behavior;
   behavior->block = make__47048040();

   return behavior;
}

Behavior __47047680;

Behavior make__47047680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47047680 = behavior;
   behavior->owner = (Object)__45380660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5879_45515180___44549040_my__layer_58_840_45732720___44606540______58_840_45889040);
   _5879_45515180___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->num_any += 1;
   _5879_45515180___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->any = realloc(_5879_45515180___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->any,_5879_45515180___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->num_any*sizeof(Object));
_5879_45515180___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->any[_5879_45515180___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->num_any-1] = (Object)behavior;
   behavior->block = make__47047840();

   return behavior;
}

Scope make__45380660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45380660 = scope;
   scope->owner = (Object)__44548240;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_45386760();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47047880();
   scope->behaviors[1] = make__47047680();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __45385440;

SignalI abus__r_45384620___45385440___44548240___44549040_my__layer_58_840_45732720___44606540______58_840_45889040;

SignalI makeabus__r_45384620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_45384620___45385440___44548240___44549040_my__layer_58_840_45732720___44606540______58_840_45889040 = signalI;
   signalI->owner = (Object)__45385440;
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

Scope make__45385440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45385440 = scope;
   scope->owner = (Object)__44548240;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_45384620();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __45384360;

SignalI abus__w_45452700___45384360___44548240___44549040_my__layer_58_840_45732720___44606540______58_840_45889040;

SignalI makeabus__w_45452700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_45452700___45384360___44548240___44549040_my__layer_58_840_45732720___44606540______58_840_45889040 = signalI;
   signalI->owner = (Object)__45384360;
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

Scope make__45384360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45384360 = scope;
   scope->owner = (Object)__44548240;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_45452700();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __47051640;

Behavior make__47051640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47051640 = behavior;
   behavior->owner = (Object)__44548240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_45451640___44548240___44549040_my__layer_58_840_45732720___44606540______58_840_45889040);
   reg__0_45451640___44548240___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->num_any += 1;
   reg__0_45451640___44548240___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->any = realloc(reg__0_45451640___44548240___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->any,reg__0_45451640___44548240___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->num_any*sizeof(Object));
reg__0_45451640___44548240___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->any[reg__0_45451640___44548240___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->num_any-1] = (Object)behavior;
   behavior->block = make__47051800();

   return behavior;
}

Behavior __47051440;

Behavior make__47051440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47051440 = behavior;
   behavior->owner = (Object)__44548240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5862_45516940___44549040_my__layer_58_840_45732720___44606540______58_840_45889040);
   _5862_45516940___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->num_any += 1;
   _5862_45516940___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->any = realloc(_5862_45516940___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->any,_5862_45516940___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->num_any*sizeof(Object));
_5862_45516940___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->any[_5862_45516940___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->num_any-1] = (Object)behavior;
   behavior->block = make__47051600();

   return behavior;
}

Behavior __47050980;

Behavior make__47050980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47050980 = behavior;
   behavior->owner = (Object)__44548240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_45451540___44548240___44549040_my__layer_58_840_45732720___44606540______58_840_45889040);
   reg__1_45451540___44548240___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->num_any += 1;
   reg__1_45451540___44548240___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->any = realloc(reg__1_45451540___44548240___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->any,reg__1_45451540___44548240___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->num_any*sizeof(Object));
reg__1_45451540___44548240___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->any[reg__1_45451540___44548240___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->num_any-1] = (Object)behavior;
   behavior->block = make__47051140();

   return behavior;
}

Behavior __47050780;

Behavior make__47050780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47050780 = behavior;
   behavior->owner = (Object)__44548240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5863_45516860___44549040_my__layer_58_840_45732720___44606540______58_840_45889040);
   _5863_45516860___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->num_any += 1;
   _5863_45516860___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->any = realloc(_5863_45516860___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->any,_5863_45516860___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->num_any*sizeof(Object));
_5863_45516860___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->any[_5863_45516860___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->num_any-1] = (Object)behavior;
   behavior->block = make__47050940();

   return behavior;
}

Behavior __47050320;

Behavior make__47050320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47050320 = behavior;
   behavior->owner = (Object)__44548240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_45451640___44548240___44549040_my__layer_58_840_45732720___44606540______58_840_45889040);
   reg__0_45451640___44548240___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->num_any += 1;
   reg__0_45451640___44548240___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->any = realloc(reg__0_45451640___44548240___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->any,reg__0_45451640___44548240___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->num_any*sizeof(Object));
reg__0_45451640___44548240___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->any[reg__0_45451640___44548240___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->num_any-1] = (Object)behavior;
   behavior->block = make__47050480();

   return behavior;
}

Behavior __47050120;

Behavior make__47050120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47050120 = behavior;
   behavior->owner = (Object)__44548240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5877_45516400___44549040_my__layer_58_840_45732720___44606540______58_840_45889040);
   _5877_45516400___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->num_any += 1;
   _5877_45516400___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->any = realloc(_5877_45516400___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->any,_5877_45516400___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->num_any*sizeof(Object));
_5877_45516400___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->any[_5877_45516400___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->num_any-1] = (Object)behavior;
   behavior->block = make__47050280();

   return behavior;
}

Behavior __47049660;

Behavior make__47049660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47049660 = behavior;
   behavior->owner = (Object)__44548240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_45451540___44548240___44549040_my__layer_58_840_45732720___44606540______58_840_45889040);
   reg__1_45451540___44548240___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->num_any += 1;
   reg__1_45451540___44548240___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->any = realloc(reg__1_45451540___44548240___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->any,reg__1_45451540___44548240___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->num_any*sizeof(Object));
reg__1_45451540___44548240___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->any[reg__1_45451540___44548240___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->num_any-1] = (Object)behavior;
   behavior->block = make__47049820();

   return behavior;
}

Behavior __47049460;

Behavior make__47049460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47049460 = behavior;
   behavior->owner = (Object)__44548240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5878_45515820___44549040_my__layer_58_840_45732720___44606540______58_840_45889040);
   _5878_45515820___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->num_any += 1;
   _5878_45515820___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->any = realloc(_5878_45515820___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->any,_5878_45515820___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->num_any*sizeof(Object));
_5878_45515820___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->any[_5878_45515820___44549040_my__layer_58_840_45732720___44606540______58_840_45889040->num_any-1] = (Object)behavior;
   behavior->block = make__47049620();

   return behavior;
}

Scope make__44548240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __44548240 = scope;
   scope->owner = (Object)__44549040;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_45451640();
   scope->inners[1] = makereg__1_45451540();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__45364760();
   scope->scopes[1] = make__45360980();
   scope->scopes[2] = make__45359400();
   scope->scopes[3] = make__45382500();
   scope->scopes[4] = make__45380660();
   scope->scopes[5] = make__45385440();
   scope->scopes[6] = make__45384360();
   scope->num_behaviors = 8;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47051640();
   scope->behaviors[1] = make__47051440();
   scope->behaviors[2] = make__47050980();
   scope->behaviors[3] = make__47050780();
   scope->behaviors[4] = make__47050320();
   scope->behaviors[5] = make__47050120();
   scope->behaviors[6] = make__47049660();
   scope->behaviors[7] = make__47049460();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __45450060;

SignalI lv0_45449520___45450060___44549040_my__layer_58_840_45732720___44606540______58_840_45889040;

SignalI makelv0_45449520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_45449520___45450060___44549040_my__layer_58_840_45732720___44606540______58_840_45889040 = signalI;
   signalI->owner = (Object)__45450060;
   signalI->name = "lv0";
   signalI->type = get_type_vector(get_type_bit(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI lv1_45449420___45450060___44549040_my__layer_58_840_45732720___44606540______58_840_45889040;

SignalI makelv1_45449420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_45449420___45450060___44549040_my__layer_58_840_45732720___44606540______58_840_45889040 = signalI;
   signalI->owner = (Object)__45450060;
   signalI->name = "lv1";
   signalI->type = get_type_vector(get_type_bit(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI rv0_45449340___45450060___44549040_my__layer_58_840_45732720___44606540______58_840_45889040;

SignalI makerv0_45449340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_45449340___45450060___44549040_my__layer_58_840_45732720___44606540______58_840_45889040 = signalI;
   signalI->owner = (Object)__45450060;
   signalI->name = "rv0";
   signalI->type = get_type_vector(get_type_bit(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI rv1_45547260___45450060___44549040_my__layer_58_840_45732720___44606540______58_840_45889040;

SignalI makerv1_45547260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv1_45547260___45450060___44549040_my__layer_58_840_45732720___44606540______58_840_45889040 = signalI;
   signalI->owner = (Object)__45450060;
   signalI->name = "rv1";
   signalI->type = get_type_vector(get_type_bit(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI lvok0_45547160___45450060___44549040_my__layer_58_840_45732720___44606540______58_840_45889040;

SignalI makelvok0_45547160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_45547160___45450060___44549040_my__layer_58_840_45732720___44606540______58_840_45889040 = signalI;
   signalI->owner = (Object)__45450060;
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

SignalI lvok1_45547140___45450060___44549040_my__layer_58_840_45732720___44606540______58_840_45889040;

SignalI makelvok1_45547140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_45547140___45450060___44549040_my__layer_58_840_45732720___44606540______58_840_45889040 = signalI;
   signalI->owner = (Object)__45450060;
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

SignalI rvok0_45547020___45450060___44549040_my__layer_58_840_45732720___44606540______58_840_45889040;

SignalI makervok0_45547020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_45547020___45450060___44549040_my__layer_58_840_45732720___44606540______58_840_45889040 = signalI;
   signalI->owner = (Object)__45450060;
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

SignalI rvok1_45547000___45450060___44549040_my__layer_58_840_45732720___44606540______58_840_45889040;

SignalI makervok1_45547000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok1_45547000___45450060___44549040_my__layer_58_840_45732720___44606540______58_840_45889040 = signalI;
   signalI->owner = (Object)__45450060;
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

SignalI run_45546940___45450060___44549040_my__layer_58_840_45732720___44606540______58_840_45889040;

SignalI makerun_45546940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_45546940___45450060___44549040_my__layer_58_840_45732720___44606540______58_840_45889040 = signalI;
   signalI->owner = (Object)__45450060;
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

Behavior __45517220;

Behavior make__45517220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45517220 = behavior;
   behavior->owner = (Object)__45450060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_45728920_my__layer_58_840_45732720___44606540______58_840_45889040);
   clk_45728920_my__layer_58_840_45732720___44606540______58_840_45889040->num_pos += 1;
   clk_45728920_my__layer_58_840_45732720___44606540______58_840_45889040->pos = realloc(clk_45728920_my__layer_58_840_45732720___44606540______58_840_45889040->pos,clk_45728920_my__layer_58_840_45732720___44606540______58_840_45889040->num_pos*sizeof(Object));
clk_45728920_my__layer_58_840_45732720___44606540______58_840_45889040->pos[clk_45728920_my__layer_58_840_45732720___44606540______58_840_45889040->num_pos-1] = (Object)behavior;
   behavior->block = make__45546520();

   return behavior;
}

Scope make__45450060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __45450060 = scope;
   scope->owner = (Object)__44549040;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_45449520();
   scope->inners[1] = makelv1_45449420();
   scope->inners[2] = makerv0_45449340();
   scope->inners[3] = makerv1_45547260();
   scope->inners[4] = makelvok0_45547160();
   scope->inners[5] = makelvok1_45547140();
   scope->inners[6] = makervok0_45547020();
   scope->inners[7] = makervok1_45547000();
   scope->inners[8] = makerun_45546940();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__45517220();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __47052460;

Behavior make__47052460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47052460 = behavior;
   behavior->owner = (Object)__44549040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_45728920_my__layer_58_840_45732720___44606540______58_840_45889040);
   clk_45728920_my__layer_58_840_45732720___44606540______58_840_45889040->num_any += 1;
   clk_45728920_my__layer_58_840_45732720___44606540______58_840_45889040->any = realloc(clk_45728920_my__layer_58_840_45732720___44606540______58_840_45889040->any,clk_45728920_my__layer_58_840_45732720___44606540______58_840_45889040->num_any*sizeof(Object));
clk_45728920_my__layer_58_840_45732720___44606540______58_840_45889040->any[clk_45728920_my__layer_58_840_45732720___44606540______58_840_45889040->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,flag_45728760_my__layer_58_840_45732720___44606540______58_840_45889040);
   flag_45728760_my__layer_58_840_45732720___44606540______58_840_45889040->num_any += 1;
   flag_45728760_my__layer_58_840_45732720___44606540______58_840_45889040->any = realloc(flag_45728760_my__layer_58_840_45732720___44606540______58_840_45889040->any,flag_45728760_my__layer_58_840_45732720___44606540______58_840_45889040->num_any*sizeof(Object));
flag_45728760_my__layer_58_840_45732720___44606540______58_840_45889040->any[flag_45728760_my__layer_58_840_45732720___44606540______58_840_45889040->num_any-1] = (Object)behavior;
   behavior->block = make__47054620();

   return behavior;
}

Scope make__44549040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __44549040 = scope;
   scope->owner = (Object)my__layer_58_840_45732720;
   scope->name = "";
   scope->num_systemIs = 1;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__initializer_45734900();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = make_5862_45516940();
   scope->inners[1] = make_5863_45516860();
   scope->inners[2] = make_5877_45516400();
   scope->inners[3] = make_5878_45515820();
   scope->inners[4] = make_5879_45515180();
   scope->num_scopes = 2;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__44548240();
   scope->scopes[1] = make__45450060();
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47052460();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__layer_58_840_45732720() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__layer_58_840_45732720 = systemT;
systemT->owner = NULL;
   systemT->name = "my_layer:T0";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_45728920();
   systemT->inputs[1] = makerst_45728820();
   systemT->inputs[2] = makereq_45728800();
   systemT->inputs[3] = makeflag_45728760();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack_45728700();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__44549040();

   return systemT;
}