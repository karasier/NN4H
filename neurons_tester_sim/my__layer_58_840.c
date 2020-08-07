#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__layer_58_840_43269740;

SignalI clk_43264460_my__layer_58_840_43269740___42310940______58_840_42670060;

SignalI makeclk_43264460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_43264460_my__layer_58_840_43269740___42310940______58_840_42670060 = signalI;
   signalI->owner = (Object)my__layer_58_840_43269740;
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

SignalI rst_43264440_my__layer_58_840_43269740___42310940______58_840_42670060;

SignalI makerst_43264440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_43264440_my__layer_58_840_43269740___42310940______58_840_42670060 = signalI;
   signalI->owner = (Object)my__layer_58_840_43269740;
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

SignalI req_43264400_my__layer_58_840_43269740___42310940______58_840_42670060;

SignalI makereq_43264400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_43264400_my__layer_58_840_43269740___42310940______58_840_42670060 = signalI;
   signalI->owner = (Object)my__layer_58_840_43269740;
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

SignalI flag_43264360_my__layer_58_840_43269740___42310940______58_840_42670060;

SignalI makeflag_43264360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag_43264360_my__layer_58_840_43269740___42310940______58_840_42670060 = signalI;
   signalI->owner = (Object)my__layer_58_840_43269740;
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

SignalI ack_43264160_my__layer_58_840_43269740___42310940______58_840_42670060;

SignalI makeack_43264160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack_43264160_my__layer_58_840_43269740___42310940______58_840_42670060 = signalI;
   signalI->owner = (Object)my__layer_58_840_43269740;
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

Block __45872960;

void code__45872960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_43264460_my__layer_58_840_43269740___42310940______58_840_42670060->c_value,clk_43240080_my__initializer_58_840_42495260___40164880_my__layer_58_840_43269740___42310940______58_840_42670060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(flag_43264360_my__layer_58_840_43269740___42310940______58_840_42670060->c_value,flag_43240060_my__initializer_58_840_42495260___40164880_my__layer_58_840_43269740___42310940______58_840_42670060);
      set_value_pos(pool_state);
   }
}

Block make__45872960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45872960 = block;
   block->owner = (Object)__45870020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45872960;

   return block;
};

Block __45869180;

void code__45869180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_47954300___40162000___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->c_value,_5862_41793320___40164880_my__layer_58_840_43269740___42310940______58_840_42670060);
      set_value_pos(pool_state);
   }
}

Block make__45869180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45869180 = block;
   block->owner = (Object)__45868740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45869180;

   return block;
};

Block __45868680;

void code__45868680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5862_41793320___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->c_value,reg__0_47954300___40162000___40164880_my__layer_58_840_43269740___42310940______58_840_42670060);
      set_value_pos(pool_state);
   }
}

Block make__45868680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45868680 = block;
   block->owner = (Object)__45868160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45868680;

   return block;
};

Block __45867700;

void code__45867700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_47954220___40162000___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->c_value,_5863_41792760___40164880_my__layer_58_840_43269740___42310940______58_840_42670060);
      set_value_pos(pool_state);
   }
}

Block make__45867700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45867700 = block;
   block->owner = (Object)__45867420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45867700;

   return block;
};

Block __45867360;

void code__45867360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5863_41792760___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->c_value,reg__1_47954220___40162000___40164880_my__layer_58_840_43269740___42310940______58_840_42670060);
      set_value_pos(pool_state);
   }
}

Block make__45867360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45867360 = block;
   block->owner = (Object)__45867160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45867360;

   return block;
};

Block __45891260;

void code__45891260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_47954300___40162000___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->c_value,_5877_41789620___40164880_my__layer_58_840_43269740___42310940______58_840_42670060);
      set_value_pos(pool_state);
   }
}

Block make__45891260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45891260 = block;
   block->owner = (Object)__45891080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45891260;

   return block;
};

Block __45891000;

void code__45891000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5877_41789620___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->c_value,reg__0_47954300___40162000___40164880_my__layer_58_840_43269740___42310940______58_840_42670060);
      set_value_pos(pool_state);
   }
}

Block make__45891000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45891000 = block;
   block->owner = (Object)__45890820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45891000;

   return block;
};

Block __45890480;

void code__45890480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_47954220___40162000___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->c_value,_5878_41789120___40164880_my__layer_58_840_43269740___42310940______58_840_42670060);
      set_value_pos(pool_state);
   }
}

Block make__45890480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45890480 = block;
   block->owner = (Object)__45890220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45890480;

   return block;
};

Block __45890080;

void code__45890080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5878_41789120___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->c_value,reg__1_47954220___40162000___40164880_my__layer_58_840_43269740___42310940______58_840_42670060);
      set_value_pos(pool_state);
   }
}

Block make__45890080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45890080 = block;
   block->owner = (Object)__45889720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45890080;

   return block;
};

Block __45885960;

void code__45885960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_47955760___21439480___40162000___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->c_value,_5879_41788280___40164880_my__layer_58_840_43269740___42310940______58_840_42670060);
      set_value_pos(pool_state);
   }
}

Block make__45885960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45885960 = block;
   block->owner = (Object)__45885140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45885960;

   return block;
};

Block __45885020;

void code__45885020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5879_41788280___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->c_value,abus__w_47955760___21439480___40162000___40164880_my__layer_58_840_43269740___42310940______58_840_42670060);
      set_value_pos(pool_state);
   }
}

Block make__45885020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45885020 = block;
   block->owner = (Object)__45884680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45885020;

   return block;
};

Block __47952220;

Block __47950780;

Block __47950460;

void code__47950460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_582_41705820___42310940______58_840_42670060->c_value,lv0_47952680___47953060___40164880_my__layer_58_840_43269740___42310940______58_840_42670060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__46712240(),lvok0_47952420___47953060___40164880_my__layer_58_840_43269740___42310940______58_840_42670060);
      set_value_pos(pool_state);
   }
}

Block make__47950460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47950460 = block;
   block->owner = (Object)__47950780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47950460;

   return block;
};

Block __47949880;

void code__47949880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5862_41793320___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->c_value,rv0_47952520___47953060___40164880_my__layer_58_840_43269740___42310940______58_840_42670060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__46712060(),rvok0_47952380___47953060___40164880_my__layer_58_840_43269740___42310940______58_840_42670060);
      set_value_pos(pool_state);
   }
}

Block make__47949880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47949880 = block;
   block->owner = (Object)__47950780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47949880;

   return block;
};

Block __47949160;

Block __47948680;

void code__47948680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv0_47952680___47953060___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->c_value;
      src1 = rv0_47952520___47953060___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_5832_41488100___42310940______58_840_42670060);
      set_value_pos(pool_state);
   }
}

Block make__47948680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47948680 = block;
   block->owner = (Object)__47949160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47948680;

   return block;
};

void code__47949160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__46711860(),run_47952340___47953060___40164880_my__layer_58_840_43269740___42310940______58_840_42670060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__46711800(),ack_43264160_my__layer_58_840_43269740___42310940______58_840_42670060);
      set_value_pos(pool_state);
   }
 code__47948680();
}

Block make__47949160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47949160 = block;
   block->owner = (Object)__47950780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47949160;

   return block;
};

Block __47947980;

void code__47947980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_583_41548560___42310940______58_840_42670060->c_value,lv1_47952600___47953060___40164880_my__layer_58_840_43269740___42310940______58_840_42670060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__46711520(),lvok1_47952400___47953060___40164880_my__layer_58_840_43269740___42310940______58_840_42670060);
      set_value_pos(pool_state);
   }
}

Block make__47947980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47947980 = block;
   block->owner = (Object)__47950780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47947980;

   return block;
};

Block __21504600;

void code__21504600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5863_41792760___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->c_value,rv1_47952440___47953060___40164880_my__layer_58_840_43269740___42310940______58_840_42670060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__46711380(),rvok1_47952360___47953060___40164880_my__layer_58_840_43269740___42310940______58_840_42670060);
      set_value_pos(pool_state);
   }
}

Block make__21504600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __21504600 = block;
   block->owner = (Object)__47950780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__21504600;

   return block;
};

Block __41487280;

Block __41709440;

void code__41709440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = lv1_47952600___47953060___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->c_value;
      src1 = rv1_47952440___47953060___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->c_value;
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),_5833_41486720___42310940______58_840_42670060);
      set_value_pos(pool_state);
   }
}

Block make__41709440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __41709440 = block;
   block->owner = (Object)__41487280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__41709440;

   return block;
};

void code__41487280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__46711180(),run_47952340___47953060___40164880_my__layer_58_840_43269740___42310940______58_840_42670060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__46711120(),ack_43264160_my__layer_58_840_43269740___42310940______58_840_42670060);
      set_value_pos(pool_state);
   }
 code__41709440();
}

Block make__41487280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __41487280 = block;
   block->owner = (Object)__47950780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__41487280;

   return block;
};

void code__47950780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__46712400(),run_47952340___47953060___40164880_my__layer_58_840_43269740___42310940______58_840_42670060);
      set_value_pos(pool_state);
   }
 code__47950460();
 code__47949880();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok0_47952420___47953060___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->c_value;
         src1 = rvok0_47952380___47953060___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47949160();
   }
      }
   }
 code__47947980();
 code__21504600();
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = lvok1_47952400___47953060___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->c_value;
         src1 = rvok1_47952360___47953060___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->c_value;
         dst = and_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__41487280();
   }
      }
   }
}

Block make__47950780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47950780 = block;
   block->owner = (Object)__47952220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47950780;

   return block;
};

Block __47951720;

void code__47951720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__46710920(),lvok0_47952420___47953060___40164880_my__layer_58_840_43269740___42310940______58_840_42670060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__46710860(),rvok0_47952380___47953060___40164880_my__layer_58_840_43269740___42310940______58_840_42670060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47153100(),lvok1_47952400___47953060___40164880_my__layer_58_840_43269740___42310940______58_840_42670060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47153040(),rvok1_47952360___47953060___40164880_my__layer_58_840_43269740___42310940______58_840_42670060);
      set_value_pos(pool_state);
   }
}

Block make__47951720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47951720 = block;
   block->owner = (Object)__47952220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47951720;

   return block;
};

void code__47952220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__46712620(),ack_43264160_my__layer_58_840_43269740___42310940______58_840_42670060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__46712560(),run_47952340___47953060___40164880_my__layer_58_840_43269740___42310940______58_840_42670060);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = req_43264400_my__layer_58_840_43269740___42310940______58_840_42670060->c_value;
         src1 = run_47952340___47953060___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->c_value;
         dst = or_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47950780();
   }
   else {
  code__47951720();
   }
      }
   }
}

Block make__47952220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47952220 = block;
   block->owner = (Object)__41773920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47952220;

   return block;
};

Value make__46712620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__46712560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__46712400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__46712240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__46712060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__46711860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__46711800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__46711520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__46711380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__46711180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__46711120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__46710920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__46710860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47153100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47153040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope __40164880;

SignalI _5862_41793320___40164880_my__layer_58_840_43269740___42310940______58_840_42670060;

SignalI make_5862_41793320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5862_41793320___40164880_my__layer_58_840_43269740___42310940______58_840_42670060 = signalI;
   signalI->owner = (Object)__40164880;
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

SignalI _5863_41792760___40164880_my__layer_58_840_43269740___42310940______58_840_42670060;

SignalI make_5863_41792760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5863_41792760___40164880_my__layer_58_840_43269740___42310940______58_840_42670060 = signalI;
   signalI->owner = (Object)__40164880;
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

SignalI _5877_41789620___40164880_my__layer_58_840_43269740___42310940______58_840_42670060;

SignalI make_5877_41789620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5877_41789620___40164880_my__layer_58_840_43269740___42310940______58_840_42670060 = signalI;
   signalI->owner = (Object)__40164880;
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

SignalI _5878_41789120___40164880_my__layer_58_840_43269740___42310940______58_840_42670060;

SignalI make_5878_41789120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5878_41789120___40164880_my__layer_58_840_43269740___42310940______58_840_42670060 = signalI;
   signalI->owner = (Object)__40164880;
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

SignalI _5879_41788280___40164880_my__layer_58_840_43269740___42310940______58_840_42670060;

SignalI make_5879_41788280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5879_41788280___40164880_my__layer_58_840_43269740___42310940______58_840_42670060 = signalI;
   signalI->owner = (Object)__40164880;
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

SystemI my__initializer_43239580;

SystemI makemy__initializer_43239580() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__initializer_43239580 = systemI;
   systemI->owner = (Object)__40164880;
   systemI->name = "my_initializer";
   systemI->system = my__initializer_58_840_42495260;

   return systemI;
};

Scope __40162000;

SignalI reg__0_47954300___40162000___40164880_my__layer_58_840_43269740___42310940______58_840_42670060;

SignalI makereg__0_47954300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_47954300___40162000___40164880_my__layer_58_840_43269740___42310940______58_840_42670060 = signalI;
   signalI->owner = (Object)__40162000;
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

SignalI reg__1_47954220___40162000___40164880_my__layer_58_840_43269740___42310940______58_840_42670060;

SignalI makereg__1_47954220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_47954220___40162000___40164880_my__layer_58_840_43269740___42310940______58_840_42670060 = signalI;
   signalI->owner = (Object)__40162000;
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

Scope __40157820;

Scope make__40157820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __40157820 = scope;
   scope->owner = (Object)__40162000;
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

Scope __39716800;

Scope make__39716800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __39716800 = scope;
   scope->owner = (Object)__40162000;
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

Scope __21701540;

Scope make__21701540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __21701540 = scope;
   scope->owner = (Object)__40162000;
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

Scope __21495600;

SignalI abus__r_21444880___21495600___40162000___40164880_my__layer_58_840_43269740___42310940______58_840_42670060;

SignalI makeabus__r_21444880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_21444880___21495600___40162000___40164880_my__layer_58_840_43269740___42310940______58_840_42670060 = signalI;
   signalI->owner = (Object)__21495600;
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

Scope make__21495600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __21495600 = scope;
   scope->owner = (Object)__40162000;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_21444880();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __21439480;

SignalI abus__w_47955760___21439480___40162000___40164880_my__layer_58_840_43269740___42310940______58_840_42670060;

SignalI makeabus__w_47955760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47955760___21439480___40162000___40164880_my__layer_58_840_43269740___42310940______58_840_42670060 = signalI;
   signalI->owner = (Object)__21439480;
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

Behavior __45885140;

Behavior make__45885140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45885140 = behavior;
   behavior->owner = (Object)__21439480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_47955760___21439480___40162000___40164880_my__layer_58_840_43269740___42310940______58_840_42670060);
   abus__w_47955760___21439480___40162000___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->num_any += 1;
   abus__w_47955760___21439480___40162000___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->any = realloc(abus__w_47955760___21439480___40162000___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->any,abus__w_47955760___21439480___40162000___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->num_any*sizeof(Object));
abus__w_47955760___21439480___40162000___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->any[abus__w_47955760___21439480___40162000___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->num_any-1] = (Object)behavior;
   behavior->block = make__45885960();

   return behavior;
}

Behavior __45884680;

Behavior make__45884680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45884680 = behavior;
   behavior->owner = (Object)__21439480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5879_41788280___40164880_my__layer_58_840_43269740___42310940______58_840_42670060);
   _5879_41788280___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->num_any += 1;
   _5879_41788280___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->any = realloc(_5879_41788280___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->any,_5879_41788280___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->num_any*sizeof(Object));
_5879_41788280___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->any[_5879_41788280___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->num_any-1] = (Object)behavior;
   behavior->block = make__45885020();

   return behavior;
}

Scope make__21439480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __21439480 = scope;
   scope->owner = (Object)__40162000;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47955760();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__45885140();
   scope->behaviors[1] = make__45884680();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __47955380;

SignalI abus__r_47955000___47955380___40162000___40164880_my__layer_58_840_43269740___42310940______58_840_42670060;

SignalI makeabus__r_47955000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47955000___47955380___40162000___40164880_my__layer_58_840_43269740___42310940______58_840_42670060 = signalI;
   signalI->owner = (Object)__47955380;
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

Scope make__47955380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47955380 = scope;
   scope->owner = (Object)__40162000;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47955000();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __47954880;

SignalI abus__w_47954500___47954880___40162000___40164880_my__layer_58_840_43269740___42310940______58_840_42670060;

SignalI makeabus__w_47954500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47954500___47954880___40162000___40164880_my__layer_58_840_43269740___42310940______58_840_42670060 = signalI;
   signalI->owner = (Object)__47954880;
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

Scope make__47954880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47954880 = scope;
   scope->owner = (Object)__40162000;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47954500();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __45868740;

Behavior make__45868740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45868740 = behavior;
   behavior->owner = (Object)__40162000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_47954300___40162000___40164880_my__layer_58_840_43269740___42310940______58_840_42670060);
   reg__0_47954300___40162000___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->num_any += 1;
   reg__0_47954300___40162000___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->any = realloc(reg__0_47954300___40162000___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->any,reg__0_47954300___40162000___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->num_any*sizeof(Object));
reg__0_47954300___40162000___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->any[reg__0_47954300___40162000___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->num_any-1] = (Object)behavior;
   behavior->block = make__45869180();

   return behavior;
}

Behavior __45868160;

Behavior make__45868160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45868160 = behavior;
   behavior->owner = (Object)__40162000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5862_41793320___40164880_my__layer_58_840_43269740___42310940______58_840_42670060);
   _5862_41793320___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->num_any += 1;
   _5862_41793320___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->any = realloc(_5862_41793320___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->any,_5862_41793320___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->num_any*sizeof(Object));
_5862_41793320___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->any[_5862_41793320___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->num_any-1] = (Object)behavior;
   behavior->block = make__45868680();

   return behavior;
}

Behavior __45867420;

Behavior make__45867420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45867420 = behavior;
   behavior->owner = (Object)__40162000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_47954220___40162000___40164880_my__layer_58_840_43269740___42310940______58_840_42670060);
   reg__1_47954220___40162000___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->num_any += 1;
   reg__1_47954220___40162000___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->any = realloc(reg__1_47954220___40162000___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->any,reg__1_47954220___40162000___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->num_any*sizeof(Object));
reg__1_47954220___40162000___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->any[reg__1_47954220___40162000___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->num_any-1] = (Object)behavior;
   behavior->block = make__45867700();

   return behavior;
}

Behavior __45867160;

Behavior make__45867160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45867160 = behavior;
   behavior->owner = (Object)__40162000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5863_41792760___40164880_my__layer_58_840_43269740___42310940______58_840_42670060);
   _5863_41792760___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->num_any += 1;
   _5863_41792760___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->any = realloc(_5863_41792760___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->any,_5863_41792760___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->num_any*sizeof(Object));
_5863_41792760___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->any[_5863_41792760___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->num_any-1] = (Object)behavior;
   behavior->block = make__45867360();

   return behavior;
}

Behavior __45891080;

Behavior make__45891080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45891080 = behavior;
   behavior->owner = (Object)__40162000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_47954300___40162000___40164880_my__layer_58_840_43269740___42310940______58_840_42670060);
   reg__0_47954300___40162000___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->num_any += 1;
   reg__0_47954300___40162000___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->any = realloc(reg__0_47954300___40162000___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->any,reg__0_47954300___40162000___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->num_any*sizeof(Object));
reg__0_47954300___40162000___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->any[reg__0_47954300___40162000___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->num_any-1] = (Object)behavior;
   behavior->block = make__45891260();

   return behavior;
}

Behavior __45890820;

Behavior make__45890820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45890820 = behavior;
   behavior->owner = (Object)__40162000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5877_41789620___40164880_my__layer_58_840_43269740___42310940______58_840_42670060);
   _5877_41789620___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->num_any += 1;
   _5877_41789620___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->any = realloc(_5877_41789620___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->any,_5877_41789620___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->num_any*sizeof(Object));
_5877_41789620___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->any[_5877_41789620___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->num_any-1] = (Object)behavior;
   behavior->block = make__45891000();

   return behavior;
}

Behavior __45890220;

Behavior make__45890220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45890220 = behavior;
   behavior->owner = (Object)__40162000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_47954220___40162000___40164880_my__layer_58_840_43269740___42310940______58_840_42670060);
   reg__1_47954220___40162000___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->num_any += 1;
   reg__1_47954220___40162000___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->any = realloc(reg__1_47954220___40162000___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->any,reg__1_47954220___40162000___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->num_any*sizeof(Object));
reg__1_47954220___40162000___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->any[reg__1_47954220___40162000___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->num_any-1] = (Object)behavior;
   behavior->block = make__45890480();

   return behavior;
}

Behavior __45889720;

Behavior make__45889720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45889720 = behavior;
   behavior->owner = (Object)__40162000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5878_41789120___40164880_my__layer_58_840_43269740___42310940______58_840_42670060);
   _5878_41789120___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->num_any += 1;
   _5878_41789120___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->any = realloc(_5878_41789120___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->any,_5878_41789120___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->num_any*sizeof(Object));
_5878_41789120___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->any[_5878_41789120___40164880_my__layer_58_840_43269740___42310940______58_840_42670060->num_any-1] = (Object)behavior;
   behavior->block = make__45890080();

   return behavior;
}

Scope make__40162000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __40162000 = scope;
   scope->owner = (Object)__40164880;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_47954300();
   scope->inners[1] = makereg__1_47954220();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__40157820();
   scope->scopes[1] = make__39716800();
   scope->scopes[2] = make__21701540();
   scope->scopes[3] = make__21495600();
   scope->scopes[4] = make__21439480();
   scope->scopes[5] = make__47955380();
   scope->scopes[6] = make__47954880();
   scope->num_behaviors = 8;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__45868740();
   scope->behaviors[1] = make__45868160();
   scope->behaviors[2] = make__45867420();
   scope->behaviors[3] = make__45867160();
   scope->behaviors[4] = make__45891080();
   scope->behaviors[5] = make__45890820();
   scope->behaviors[6] = make__45890220();
   scope->behaviors[7] = make__45889720();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope __47953060;

SignalI lv0_47952680___47953060___40164880_my__layer_58_840_43269740___42310940______58_840_42670060;

SignalI makelv0_47952680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv0_47952680___47953060___40164880_my__layer_58_840_43269740___42310940______58_840_42670060 = signalI;
   signalI->owner = (Object)__47953060;
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

SignalI lv1_47952600___47953060___40164880_my__layer_58_840_43269740___42310940______58_840_42670060;

SignalI makelv1_47952600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lv1_47952600___47953060___40164880_my__layer_58_840_43269740___42310940______58_840_42670060 = signalI;
   signalI->owner = (Object)__47953060;
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

SignalI rv0_47952520___47953060___40164880_my__layer_58_840_43269740___42310940______58_840_42670060;

SignalI makerv0_47952520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv0_47952520___47953060___40164880_my__layer_58_840_43269740___42310940______58_840_42670060 = signalI;
   signalI->owner = (Object)__47953060;
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

SignalI rv1_47952440___47953060___40164880_my__layer_58_840_43269740___42310940______58_840_42670060;

SignalI makerv1_47952440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rv1_47952440___47953060___40164880_my__layer_58_840_43269740___42310940______58_840_42670060 = signalI;
   signalI->owner = (Object)__47953060;
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

SignalI lvok0_47952420___47953060___40164880_my__layer_58_840_43269740___42310940______58_840_42670060;

SignalI makelvok0_47952420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok0_47952420___47953060___40164880_my__layer_58_840_43269740___42310940______58_840_42670060 = signalI;
   signalI->owner = (Object)__47953060;
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

SignalI lvok1_47952400___47953060___40164880_my__layer_58_840_43269740___42310940______58_840_42670060;

SignalI makelvok1_47952400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lvok1_47952400___47953060___40164880_my__layer_58_840_43269740___42310940______58_840_42670060 = signalI;
   signalI->owner = (Object)__47953060;
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

SignalI rvok0_47952380___47953060___40164880_my__layer_58_840_43269740___42310940______58_840_42670060;

SignalI makervok0_47952380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok0_47952380___47953060___40164880_my__layer_58_840_43269740___42310940______58_840_42670060 = signalI;
   signalI->owner = (Object)__47953060;
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

SignalI rvok1_47952360___47953060___40164880_my__layer_58_840_43269740___42310940______58_840_42670060;

SignalI makervok1_47952360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rvok1_47952360___47953060___40164880_my__layer_58_840_43269740___42310940______58_840_42670060 = signalI;
   signalI->owner = (Object)__47953060;
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

SignalI run_47952340___47953060___40164880_my__layer_58_840_43269740___42310940______58_840_42670060;

SignalI makerun_47952340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   run_47952340___47953060___40164880_my__layer_58_840_43269740___42310940______58_840_42670060 = signalI;
   signalI->owner = (Object)__47953060;
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

Behavior __41773920;

Behavior make__41773920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __41773920 = behavior;
   behavior->owner = (Object)__47953060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_43264460_my__layer_58_840_43269740___42310940______58_840_42670060);
   clk_43264460_my__layer_58_840_43269740___42310940______58_840_42670060->num_pos += 1;
   clk_43264460_my__layer_58_840_43269740___42310940______58_840_42670060->pos = realloc(clk_43264460_my__layer_58_840_43269740___42310940______58_840_42670060->pos,clk_43264460_my__layer_58_840_43269740___42310940______58_840_42670060->num_pos*sizeof(Object));
clk_43264460_my__layer_58_840_43269740___42310940______58_840_42670060->pos[clk_43264460_my__layer_58_840_43269740___42310940______58_840_42670060->num_pos-1] = (Object)behavior;
   behavior->block = make__47952220();

   return behavior;
}

Scope make__47953060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47953060 = scope;
   scope->owner = (Object)__40164880;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelv0_47952680();
   scope->inners[1] = makelv1_47952600();
   scope->inners[2] = makerv0_47952520();
   scope->inners[3] = makerv1_47952440();
   scope->inners[4] = makelvok0_47952420();
   scope->inners[5] = makelvok1_47952400();
   scope->inners[6] = makervok0_47952380();
   scope->inners[7] = makervok1_47952360();
   scope->inners[8] = makerun_47952340();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__41773920();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __45870020;

Behavior make__45870020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45870020 = behavior;
   behavior->owner = (Object)__40164880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_43264460_my__layer_58_840_43269740___42310940______58_840_42670060);
   clk_43264460_my__layer_58_840_43269740___42310940______58_840_42670060->num_any += 1;
   clk_43264460_my__layer_58_840_43269740___42310940______58_840_42670060->any = realloc(clk_43264460_my__layer_58_840_43269740___42310940______58_840_42670060->any,clk_43264460_my__layer_58_840_43269740___42310940______58_840_42670060->num_any*sizeof(Object));
clk_43264460_my__layer_58_840_43269740___42310940______58_840_42670060->any[clk_43264460_my__layer_58_840_43269740___42310940______58_840_42670060->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,flag_43264360_my__layer_58_840_43269740___42310940______58_840_42670060);
   flag_43264360_my__layer_58_840_43269740___42310940______58_840_42670060->num_any += 1;
   flag_43264360_my__layer_58_840_43269740___42310940______58_840_42670060->any = realloc(flag_43264360_my__layer_58_840_43269740___42310940______58_840_42670060->any,flag_43264360_my__layer_58_840_43269740___42310940______58_840_42670060->num_any*sizeof(Object));
flag_43264360_my__layer_58_840_43269740___42310940______58_840_42670060->any[flag_43264360_my__layer_58_840_43269740___42310940______58_840_42670060->num_any-1] = (Object)behavior;
   behavior->block = make__45872960();

   return behavior;
}

Scope make__40164880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __40164880 = scope;
   scope->owner = (Object)my__layer_58_840_43269740;
   scope->name = "";
   scope->num_systemIs = 1;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__initializer_43239580();
   scope->num_inners = 5;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = make_5862_41793320();
   scope->inners[1] = make_5863_41792760();
   scope->inners[2] = make_5877_41789620();
   scope->inners[3] = make_5878_41789120();
   scope->inners[4] = make_5879_41788280();
   scope->num_scopes = 2;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__40162000();
   scope->scopes[1] = make__47953060();
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__45870020();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__layer_58_840_43269740() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__layer_58_840_43269740 = systemT;
systemT->owner = NULL;
   systemT->name = "my_layer:T0";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_43264460();
   systemT->inputs[1] = makerst_43264440();
   systemT->inputs[2] = makereq_43264400();
   systemT->inputs[3] = makeflag_43264360();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack_43264160();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__40164880();

   return systemT;
}