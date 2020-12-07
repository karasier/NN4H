#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT tanh__neural__network_58_840_76762580;

SignalI clk_76760640_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeclk_76760640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_76760640_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_840_76762580;
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

SignalI rst_76760600_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makerst_76760600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_76760600_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_840_76762580;
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

SignalI req_76760580_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makereq_76760580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_76760580_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_840_76762580;
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

SignalI fill_76760560_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makefill_76760560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_76760560_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_840_76762580;
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

SignalI _5848_77001640_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI make_5848_77001640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5848_77001640_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_840_76762580;
   signalI->name = ":48";
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

SignalI ack__fill_77001600_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeack__fill_77001600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__fill_77001600_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_840_76762580;
   signalI->name = "ack_fill";
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

SignalI ack__network_77001580_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeack__network_77001580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__network_77001580_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_840_76762580;
   signalI->name = "ack_network";
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

SignalI _5846_77001560_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI make_5846_77001560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5846_77001560_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_840_76762580;
   signalI->name = ":46";
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

SignalI _5847_77001480_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI make_5847_77001480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5847_77001480_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_840_76762580;
   signalI->name = ":47";
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

SignalI _5867_77258960_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI make_5867_77258960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5867_77258960_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_840_76762580;
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

SignalI _5868_77258860_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI make_5868_77258860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5868_77258860_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_840_76762580;
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

Block __75708120;

Block __75707900;

void code__75707900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79216740(),ack__0_47644020_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79216680(),ack__1_47643940_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__75707900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75707900 = block;
   block->owner = (Object)__75708120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75707900;

   return block;
};

void code__75708120() {
   {
      Value cond = rst_76760600_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__75707900();
   }
      }
   }
}

Block make__75708120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75708120 = block;
   block->owner = (Object)__75707100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75708120;

   return block;
};

Block __75706980;

Block __75706820;

Block __75706480;

void code__75706480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79241000(),_58433_49195000_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__75706480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75706480 = block;
   block->owner = (Object)__75706820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75706480;

   return block;
};

void code__75706820() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_76760600_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__79241100();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__75706480();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79240940(),_58432_49195460_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__75706820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75706820 = block;
   block->owner = (Object)__75706980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75706820;

   return block;
};

Block __75705780;

Block __75705460;

void code__75705460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79240720(),_5847_77001480_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__75705460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75705460 = block;
   block->owner = (Object)__75705780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75705460;

   return block;
};

void code__75705780() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_76760600_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__79240840();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__75705460();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79240660(),_5846_77001560_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__75705780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75705780 = block;
   block->owner = (Object)__75706980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75705780;

   return block;
};

Block __75704420;

void code__75704420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79240560(),address__inputs_49195580_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79240500(),flag__inputs_49195560_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79240440(),ack__inputs_49195540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__75704420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75704420 = block;
   block->owner = (Object)__75706980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75704420;

   return block;
};

Block __75703500;

Block __75703340;

Block __75703000;

Block __75774800;

Block __75774620;

void code__75774620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_5848_77001640_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,value__inputs_49195880_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__79240020(),flag__inputs_49195560_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__75774620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75774620 = block;
   block->owner = (Object)__75774800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75774620;

   return block;
};

void code__75774800() {
 code__75774620();
}

Block make__75774800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75774800 = block;
   block->owner = (Object)__75703000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75774800;

   return block;
};

Block __75702840;

void code__75702840() {
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
                  src0 = _5847_77001480_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
                  src1 = make__79239920();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__79239880();
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
                        src0 = _5847_77001480_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__79239620();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__79239560();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_5847_77001480_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79239440(),_5846_77001560_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__75702840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75702840 = block;
   block->owner = (Object)__75703000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75702840;

   return block;
};

void code__75703000() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5846_77001560_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__79240180();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__75774800();
   }
   else {
  code__75702840();
   }
      }
   }
}

Block make__75703000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75703000 = block;
   block->owner = (Object)__75703340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75703000;

   return block;
};

void code__75703340() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_76760600_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__79240280();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__75703000();
   }
      }
   }
}

Block make__75703340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75703340 = block;
   block->owner = (Object)__75703500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75703340;

   return block;
};

void code__75703500() {
 code__75703340();
}

Block make__75703500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75703500 = block;
   block->owner = (Object)__75706980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75703500;

   return block;
};

Block __76002300;

Block __76002140;

Block __76001080;

void code__76001080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__79238960(),ack__inputs_49195540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__76001080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76001080 = block;
   block->owner = (Object)__76002140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76001080;

   return block;
};

void code__76002140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0, dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = address__inputs_49195580_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__79239240();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),address__inputs_49195580_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__79239140(),flag__inputs_49195560_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address__inputs_49195580_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__79239060();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__76001080();
   }
      }
   }
}

Block make__76002140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76002140 = block;
   block->owner = (Object)__76002300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76002140;

   return block;
};

Block __76000680;

Block __76000340;

void code__76000340() {
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
                  src0 = _58433_49195000_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
                  src1 = make__79238680();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__79238640();
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
                        src0 = _58433_49195000_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__79238400();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__79238340();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58433_49195000_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79238220(),_58432_49195460_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__inputs_49195880_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,_58434_49850500_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__76000340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76000340 = block;
   block->owner = (Object)__76000680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76000340;

   return block;
};

void code__76000680() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_76760600_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__79238860();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__76000340();
   }
      }
   }
}

Block make__76000680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76000680 = block;
   block->owner = (Object)__76002300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76000680;

   return block;
};

void code__76002300() {
 code__76002140();
 code__76000680();
}

Block make__76002300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76002300 = block;
   block->owner = (Object)__75706980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76002300;

   return block;
};

Block __75704820;

void code__75704820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79238040(),flag__inputs_49195560_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__75704820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75704820 = block;
   block->owner = (Object)__75706980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75704820;

   return block;
};

void code__75706980() {
 code__75706820();
 code__75705780();
   {
      Value cond = rst_76760600_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__75704420();
   }
   else if (value2integer(fill__inputs_47643920_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value)) {
  code__75703500();
   }
   else if (value2integer(flag__inputs_49195560_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value)) {
  code__76002300();
   }
   else {
  code__75704820();
   }
      }
   }
}

Block make__75706980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75706980 = block;
   block->owner = (Object)__76193920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75706980;

   return block;
};

Block __76193800;

Block __76218180;

Block __76217840;

void code__76217840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79237880(),_5868_77258860_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__76217840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76217840 = block;
   block->owner = (Object)__76218180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76217840;

   return block;
};

void code__76218180() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_76760600_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__79237960();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__76217840();
   }
      }
   }
}

Block make__76218180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76218180 = block;
   block->owner = (Object)__76193800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76218180;

   return block;
};

Block __76217380;

Block __76216960;

void code__76216960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79237700(),_58456_51472520_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__76216960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76216960 = block;
   block->owner = (Object)__76217380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76216960;

   return block;
};

void code__76217380() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_76760600_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__79237800();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__76216960();
   }
      }
   }
}

Block make__76217380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76217380 = block;
   block->owner = (Object)__76193800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76217380;

   return block;
};

Block __76216120;

void code__76216120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79237600(),address__outputs_51179580_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79237540(),flag__outputs_51179440_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79237480(),ack__network_77001580_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__76216120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76216120 = block;
   block->owner = (Object)__76193800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76216120;

   return block;
};

Block __76215260;

Block __76215060;

Block __76214540;

Block __76214080;

void code__76214080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58455_51472940_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,value__outputs_51179740_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__76214080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76214080 = block;
   block->owner = (Object)__76214540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76214080;

   return block;
};

void code__76214540() {
{
      Value value = _58456_51472520_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__79237200())) {
    code__76214080();
         }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79237060(),flag__outputs_51179440_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
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
                  src0 = _58456_51472520_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
                  src1 = make__79236940();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__79236900();
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
                        src0 = _58456_51472520_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__79236580();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__79236520();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58456_51472520_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__76214540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76214540 = block;
   block->owner = (Object)__76215060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76214540;

   return block;
};

void code__76215060() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_76760600_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__79237320();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__76214540();
   }
      }
   }
}

Block make__76215060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76215060 = block;
   block->owner = (Object)__76215260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76215060;

   return block;
};

void code__76215260() {
 code__76215060();
}

Block make__76215260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76215260 = block;
   block->owner = (Object)__76193800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76215260;

   return block;
};

Block __76358660;

Block __76358440;

Block __76382000;

void code__76382000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__79236000(),ack__network_77001580_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__76382000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76382000 = block;
   block->owner = (Object)__76358440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76382000;

   return block;
};

void code__76358440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0, dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = address__outputs_51179580_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__79236260();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),address__outputs_51179580_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__79236160(),flag__outputs_51179440_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address__outputs_51179580_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__79236080();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__76382000();
   }
      }
   }
}

Block make__76358440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76358440 = block;
   block->owner = (Object)__76358660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76358440;

   return block;
};

Block __76381600;

Block __76381240;

Block __76380720;

void code__76380720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__outputs_51179740_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,_5867_77258960_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__76380720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76380720 = block;
   block->owner = (Object)__76381240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76380720;

   return block;
};

void code__76381240() {
{
      Value value = _5868_77258860_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__79235800())) {
    code__76380720();
         }
      }
   }
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
                  src0 = _5868_77258860_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
                  src1 = make__79235600();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__79235560();
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
                        src0 = _5868_77258860_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__79235320();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__79235260();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_5868_77258860_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__76381240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76381240 = block;
   block->owner = (Object)__76381600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76381240;

   return block;
};

void code__76381600() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_76760600_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__79235920();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__76381240();
   }
      }
   }
}

Block make__76381600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76381600 = block;
   block->owner = (Object)__76358660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76381600;

   return block;
};

void code__76358660() {
 code__76358440();
 code__76381600();
}

Block make__76358660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76358660 = block;
   block->owner = (Object)__76193800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76358660;

   return block;
};

Block __76216500;

void code__76216500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79235100(),flag__outputs_51179440_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__76216500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76216500 = block;
   block->owner = (Object)__76193800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76216500;

   return block;
};

void code__76193800() {
 code__76218180();
 code__76217380();
   {
      Value cond = rst_76760600_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__76216120();
   }
   else if (value2integer(fill__outputs_49850480_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value)) {
  code__76215260();
   }
   else if (value2integer(flag__outputs_51179440_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value)) {
  code__76358660();
   }
   else {
  code__76216500();
   }
      }
   }
}

Block make__76193800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76193800 = block;
   block->owner = (Object)__76762940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76193800;

   return block;
};

Block __79033080;

void code__79033080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = fill_76760560_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
            src1 = ({
                  Value src0, dst;
                  dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ack__inputs_49195540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
                  dst = not_value(src0,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = and_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = flag__inputs_49195560_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),fill__inputs_47643920_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79033080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79033080 = block;
   block->owner = (Object)__79032760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79033080;

   return block;
};

Block __79032720;

void code__79032720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__1_47643940_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
            src1 = ({
                  Value src0, dst;
                  dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ack__network_77001580_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
                  dst = not_value(src0,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = and_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = flag__outputs_51179440_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),fill__outputs_49850480_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79032720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79032720 = block;
   block->owner = (Object)__79032380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79032720;

   return block;
};

Block __79016420;

void code__79016420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_76760640_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,clk_64615540_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_76760600_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,rst_64615520_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(req_76760580_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,req_64615480_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_76760640_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,clk_75192480_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_76760600_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,rst_75192460_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__0_47644020_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,req_75192440_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__inputs_49195540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,ack__fill_77001600_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79016420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79016420 = block;
   block->owner = (Object)__79032220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79016420;

   return block;
};

Block __79016360;

void code__79016360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__layer_65281280_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,ack__0_47644020_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__layer_75543700_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,ack__1_47643940_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79016360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79016360 = block;
   block->owner = (Object)__79032060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79016360;

   return block;
};

Block __63966040;

Block __64386100;

void code__64386100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_63536760_channel__inputs_58416_62916040_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,make_ref_rangeS(mem_63628300_channel__inputs_58416_62916040_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040,value2integer(abus__w_63536600_channel__inputs_58416_62916040_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value),value2integer(abus__w_63536600_channel__inputs_58416_62916040_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__64386100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64386100 = block;
   block->owner = (Object)__63966040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64386100;

   return block;
};

void code__63966040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_63628300_channel__inputs_58416_62916040_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
            idx = value2integer(abus__r_63536680_channel__inputs_58416_62916040_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_63420520_channel__inputs_58416_62916040_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_63305480_channel__inputs_58416_62916040_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__64386100();
   }
      }
   }
}

Block make__63966040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63966040 = block;
   block->owner = (Object)__65017220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63966040;

   return block;
};

Block __79031240;

void code__79031240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_63305480_channel__inputs_58416_62916040_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,_58432_49195460_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79031240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79031240 = block;
   block->owner = (Object)__79031080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79031240;

   return block;
};

Block __79031040;

void code__79031040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58432_49195460_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,trig__w_63305480_channel__inputs_58416_62916040_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79031040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79031040 = block;
   block->owner = (Object)__79030880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79031040;

   return block;
};

Block __79030580;

void code__79030580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_63536600_channel__inputs_58416_62916040_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,_58433_49195000_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79030580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79030580 = block;
   block->owner = (Object)__79030420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79030580;

   return block;
};

Block __79030360;

void code__79030360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58433_49195000_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,abus__w_63536600_channel__inputs_58416_62916040_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79030360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79030360 = block;
   block->owner = (Object)__79030200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79030360;

   return block;
};

Block __79029900;

void code__79029900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_63536760_channel__inputs_58416_62916040_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,_58434_49850500_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79029900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79029900 = block;
   block->owner = (Object)__79029740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79029900;

   return block;
};

Block __79029700;

void code__79029700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58434_49850500_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,dbus__w_63536760_channel__inputs_58416_62916040_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79029700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79029700 = block;
   block->owner = (Object)__79029500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79029700;

   return block;
};

Block __79028800;

void code__79028800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_63420520_channel__inputs_58416_62916040_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,_58430_65281320_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79028800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79028800 = block;
   block->owner = (Object)__79112200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79028800;

   return block;
};

Block __79028740;

void code__79028740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58428_65281220_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,trig__r_63305500_channel__inputs_58416_62916040_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58429_65281140_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,abus__r_63536680_channel__inputs_58416_62916040_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79028740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79028740 = block;
   block->owner = (Object)__79112040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79028740;

   return block;
};

Block __79110960;

void code__79110960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_65433080_channel__outputs_58445_65017080_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,_58455_51472940_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79110960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79110960 = block;
   block->owner = (Object)__79110740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79110960;

   return block;
};

Block __79110700;

void code__79110700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58455_51472940_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,reg__0_65433080_channel__outputs_58445_65017080_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79110700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79110700 = block;
   block->owner = (Object)__79110540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79110700;

   return block;
};

Block __79133160;

void code__79133160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_65433080_channel__outputs_58445_65017080_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,_58447_75686340_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79133160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79133160 = block;
   block->owner = (Object)__79132980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79133160;

   return block;
};

Block __79132940;

void code__79132940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58447_75686340_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,reg__0_65433080_channel__outputs_58445_65017080_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79132940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79132940 = block;
   block->owner = (Object)__79132760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79132940;

   return block;
};

Block __79131320;

void code__79131320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_65295420_rinc_58454_65295800_channel__outputs_58445_65017080_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,_58456_51472520_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79131320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79131320 = block;
   block->owner = (Object)__79131100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79131320;

   return block;
};

Block __79131060;

void code__79131060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58456_51472520_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,abus__r_65295420_rinc_58454_65295800_channel__outputs_58445_65017080_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79131060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79131060 = block;
   block->owner = (Object)__79130900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79131060;

   return block;
};

Block __79128580;

void code__79128580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_66892880_channel__a0_58468_65630820_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,_58470_65660660_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79128580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79128580 = block;
   block->owner = (Object)__79128400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79128580;

   return block;
};

Block __79128360;

void code__79128360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58470_65660660_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,reg__0_66892880_channel__a0_58468_65630820_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79128360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79128360 = block;
   block->owner = (Object)__79128180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79128360;

   return block;
};

Block __79126880;

void code__79126880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_47644420_channel__a0_58468_65630820_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,_58471_66080980_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79126880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79126880 = block;
   block->owner = (Object)__79126700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79126880;

   return block;
};

Block __79126660;

void code__79126660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58471_66080980_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,reg__1_47644420_channel__a0_58468_65630820_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79126660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79126660 = block;
   block->owner = (Object)__79151020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79126660;

   return block;
};

Block __79145200;

void code__79145200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_66101140_rinc_58480_66076980_channel__a0_58468_65630820_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,_58483_75543560_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79145200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79145200 = block;
   block->owner = (Object)__79145020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79145200;

   return block;
};

Block __79144980;

void code__79144980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58483_75543560_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,abus__r_66101140_rinc_58480_66076980_channel__a0_58468_65630820_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79144980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79144980 = block;
   block->owner = (Object)__79144800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79144980;

   return block;
};

Block __79150360;

void code__79150360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_66892880_channel__a0_58468_65630820_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,_58481_75269820_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_47644420_channel__a0_58468_65630820_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->c_value,_58482_75543740_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__79150360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79150360 = block;
   block->owner = (Object)__79144640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79150360;

   return block;
};

Value make__79216740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79216680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79241100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79241000() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79240940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79240840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79240720() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79240660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79240560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__79240500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79240440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79240280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79240180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79240020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79239920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79239880() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79239620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79239560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79239440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79239240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79239140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79239060() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79238960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79238860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79238680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79238640() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79238400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79238340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79238220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79238040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79237960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79237880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79237800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79237700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79237600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79237540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79237480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79237320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79237200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79237060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79236940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79236900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79236580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79236520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79236260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79236160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79236080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79236000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79235920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79235800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79235600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79235560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79235320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79235260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79235100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope tanh__neural__network_58_84_62916340;

SignalI ack__0_47644020_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeack__0_47644020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__0_47644020_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_84_62916340;
   signalI->name = "ack_0";
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

SignalI ack__1_47643940_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeack__1_47643940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__1_47643940_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_84_62916340;
   signalI->name = "ack_1";
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

SignalI fill__inputs_47643920_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makefill__inputs_47643920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill__inputs_47643920_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_84_62916340;
   signalI->name = "fill_inputs";
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

SignalI value__inputs_49195880_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makevalue__inputs_49195880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__inputs_49195880_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_84_62916340;
   signalI->name = "value_inputs";
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

SignalI address__inputs_49195580_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeaddress__inputs_49195580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address__inputs_49195580_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_84_62916340;
   signalI->name = "address_inputs";
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

SignalI flag__inputs_49195560_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeflag__inputs_49195560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__inputs_49195560_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_84_62916340;
   signalI->name = "flag_inputs";
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

SignalI ack__inputs_49195540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeack__inputs_49195540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__inputs_49195540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_84_62916340;
   signalI->name = "ack_inputs";
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

SignalI _58432_49195460_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI make_58432_49195460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58432_49195460_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_84_62916340;
   signalI->name = ":432";
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

SignalI _58433_49195000_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI make_58433_49195000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58433_49195000_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_84_62916340;
   signalI->name = ":433";
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

SignalI _58434_49850500_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI make_58434_49850500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58434_49850500_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_84_62916340;
   signalI->name = ":434";
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

SignalI fill__outputs_49850480_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makefill__outputs_49850480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill__outputs_49850480_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_84_62916340;
   signalI->name = "fill_outputs";
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

SignalI value__outputs_51179740_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makevalue__outputs_51179740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__outputs_51179740_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_84_62916340;
   signalI->name = "value_outputs";
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

SignalI address__outputs_51179580_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeaddress__outputs_51179580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address__outputs_51179580_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_84_62916340;
   signalI->name = "address_outputs";
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

SignalI flag__outputs_51179440_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeflag__outputs_51179440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__outputs_51179440_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_84_62916340;
   signalI->name = "flag_outputs";
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

SignalI _58455_51472940_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI make_58455_51472940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58455_51472940_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_84_62916340;
   signalI->name = ":455";
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

SignalI _58456_51472520_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI make_58456_51472520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58456_51472520_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_84_62916340;
   signalI->name = ":456";
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

SystemI layer0_66080800;

SystemI makelayer0_66080800() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer0_66080800 = systemI;
   systemI->owner = (Object)tanh__neural__network_58_84_62916340;
   systemI->name = "layer0";
   systemI->system = layer0_58_8400_64497540;

   return systemI;
};

SystemI layer1_75686220;

SystemI makelayer1_75686220() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer1_75686220 = systemI;
   systemI->owner = (Object)tanh__neural__network_58_84_62916340;
   systemI->name = "layer1";
   systemI->system = layer1_58_8400_75137140;

   return systemI;
};

Scope channel__inputs_58416_62916040;

SignalI trig__r_63305500_channel__inputs_58416_62916040_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI maketrig__r_63305500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_63305500_channel__inputs_58416_62916040_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)channel__inputs_58416_62916040;
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

SignalI trig__w_63305480_channel__inputs_58416_62916040_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI maketrig__w_63305480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_63305480_channel__inputs_58416_62916040_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)channel__inputs_58416_62916040;
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

SignalI dbus__r_63420520_channel__inputs_58416_62916040_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makedbus__r_63420520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_63420520_channel__inputs_58416_62916040_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)channel__inputs_58416_62916040;
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

SignalI dbus__w_63536760_channel__inputs_58416_62916040_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makedbus__w_63536760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_63536760_channel__inputs_58416_62916040_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)channel__inputs_58416_62916040;
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

SignalI abus__r_63536680_channel__inputs_58416_62916040_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeabus__r_63536680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_63536680_channel__inputs_58416_62916040_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)channel__inputs_58416_62916040;
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

SignalI abus__w_63536600_channel__inputs_58416_62916040_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeabus__w_63536600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_63536600_channel__inputs_58416_62916040_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)channel__inputs_58416_62916040;
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

SignalI mem_63628300_channel__inputs_58416_62916040_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makemem_63628300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_63628300_channel__inputs_58416_62916040_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)channel__inputs_58416_62916040;
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

Scope raddr_58417_62915680;

Scope makeraddr_58417_62915680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58417_62915680 = scope;
   scope->owner = (Object)channel__inputs_58416_62916040;
   scope->name = "raddr:417";
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

Scope waddr_58422_62915180;

Scope makewaddr_58422_62915180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58422_62915180 = scope;
   scope->owner = (Object)channel__inputs_58416_62916040;
   scope->name = "waddr:422";
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

Scope rinc_58427_62939020;

Behavior __79112200;

Behavior make__79112200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79112200 = behavior;
   behavior->owner = (Object)rinc_58427_62939020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_63420520_channel__inputs_58416_62916040_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   dbus__r_63420520_channel__inputs_58416_62916040_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   dbus__r_63420520_channel__inputs_58416_62916040_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(dbus__r_63420520_channel__inputs_58416_62916040_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,dbus__r_63420520_channel__inputs_58416_62916040_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
dbus__r_63420520_channel__inputs_58416_62916040_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[dbus__r_63420520_channel__inputs_58416_62916040_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79028800();

   return behavior;
}

Behavior __79112040;

Behavior make__79112040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79112040 = behavior;
   behavior->owner = (Object)rinc_58427_62939020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58428_65281220_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   _58428_65281220_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   _58428_65281220_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(_58428_65281220_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,_58428_65281220_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
_58428_65281220_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[_58428_65281220_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,_58429_65281140_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   _58429_65281140_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   _58429_65281140_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(_58429_65281140_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,_58429_65281140_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
_58429_65281140_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[_58429_65281140_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79028740();

   return behavior;
}

Scope makerinc_58427_62939020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58427_62939020 = scope;
   scope->owner = (Object)channel__inputs_58416_62916040;
   scope->name = "rinc:427";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__79112200();
   scope->behaviors[1] = make__79112040();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58431_63306920;

Scope makewinc_58431_63306920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58431_63306920 = scope;
   scope->owner = (Object)channel__inputs_58416_62916040;
   scope->name = "winc:431";
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

Scope rdec_58435_63306400;

Scope makerdec_58435_63306400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58435_63306400 = scope;
   scope->owner = (Object)channel__inputs_58416_62916040;
   scope->name = "rdec:435";
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

Scope wdec_58440_63305960;

Scope makewdec_58440_63305960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58440_63305960 = scope;
   scope->owner = (Object)channel__inputs_58416_62916040;
   scope->name = "wdec:440";
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

Behavior __65017220;

Behavior make__65017220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __65017220 = behavior;
   behavior->owner = (Object)channel__inputs_58416_62916040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_76760640_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   clk_76760640_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_neg += 1;
   clk_76760640_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->neg = realloc(clk_76760640_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->neg,clk_76760640_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_neg*sizeof(Object));
clk_76760640_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->neg[clk_76760640_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_neg-1] = (Object)behavior;
   behavior->block = make__63966040();

   return behavior;
}

Behavior __79031080;

Behavior make__79031080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79031080 = behavior;
   behavior->owner = (Object)channel__inputs_58416_62916040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_63305480_channel__inputs_58416_62916040_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   trig__w_63305480_channel__inputs_58416_62916040_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   trig__w_63305480_channel__inputs_58416_62916040_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(trig__w_63305480_channel__inputs_58416_62916040_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,trig__w_63305480_channel__inputs_58416_62916040_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
trig__w_63305480_channel__inputs_58416_62916040_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[trig__w_63305480_channel__inputs_58416_62916040_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79031240();

   return behavior;
}

Behavior __79030880;

Behavior make__79030880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79030880 = behavior;
   behavior->owner = (Object)channel__inputs_58416_62916040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58432_49195460_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   _58432_49195460_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   _58432_49195460_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(_58432_49195460_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,_58432_49195460_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
_58432_49195460_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[_58432_49195460_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79031040();

   return behavior;
}

Behavior __79030420;

Behavior make__79030420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79030420 = behavior;
   behavior->owner = (Object)channel__inputs_58416_62916040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_63536600_channel__inputs_58416_62916040_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   abus__w_63536600_channel__inputs_58416_62916040_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   abus__w_63536600_channel__inputs_58416_62916040_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(abus__w_63536600_channel__inputs_58416_62916040_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,abus__w_63536600_channel__inputs_58416_62916040_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
abus__w_63536600_channel__inputs_58416_62916040_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[abus__w_63536600_channel__inputs_58416_62916040_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79030580();

   return behavior;
}

Behavior __79030200;

Behavior make__79030200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79030200 = behavior;
   behavior->owner = (Object)channel__inputs_58416_62916040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58433_49195000_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   _58433_49195000_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   _58433_49195000_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(_58433_49195000_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,_58433_49195000_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
_58433_49195000_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[_58433_49195000_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79030360();

   return behavior;
}

Behavior __79029740;

Behavior make__79029740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79029740 = behavior;
   behavior->owner = (Object)channel__inputs_58416_62916040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_63536760_channel__inputs_58416_62916040_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   dbus__w_63536760_channel__inputs_58416_62916040_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   dbus__w_63536760_channel__inputs_58416_62916040_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(dbus__w_63536760_channel__inputs_58416_62916040_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,dbus__w_63536760_channel__inputs_58416_62916040_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
dbus__w_63536760_channel__inputs_58416_62916040_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[dbus__w_63536760_channel__inputs_58416_62916040_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79029900();

   return behavior;
}

Behavior __79029500;

Behavior make__79029500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79029500 = behavior;
   behavior->owner = (Object)channel__inputs_58416_62916040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58434_49850500_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   _58434_49850500_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   _58434_49850500_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(_58434_49850500_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,_58434_49850500_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
_58434_49850500_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[_58434_49850500_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79029700();

   return behavior;
}

Scope makechannel__inputs_58416_62916040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__inputs_58416_62916040 = scope;
   scope->owner = (Object)tanh__neural__network_58_84_62916340;
   scope->name = "channel_inputs:416";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_63305500();
   scope->inners[1] = maketrig__w_63305480();
   scope->inners[2] = makedbus__r_63420520();
   scope->inners[3] = makedbus__w_63536760();
   scope->inners[4] = makeabus__r_63536680();
   scope->inners[5] = makeabus__w_63536600();
   scope->inners[6] = makemem_63628300();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58417_62915680();
   scope->scopes[1] = makewaddr_58422_62915180();
   scope->scopes[2] = makerinc_58427_62939020();
   scope->scopes[3] = makewinc_58431_63306920();
   scope->scopes[4] = makerdec_58435_63306400();
   scope->scopes[5] = makewdec_58440_63305960();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__65017220();
   scope->behaviors[1] = make__79031080();
   scope->behaviors[2] = make__79030880();
   scope->behaviors[3] = make__79030420();
   scope->behaviors[4] = make__79030200();
   scope->behaviors[5] = make__79029740();
   scope->behaviors[6] = make__79029500();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__outputs_58445_65017080;

SignalI reg__0_65433080_channel__outputs_58445_65017080_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makereg__0_65433080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_65433080_channel__outputs_58445_65017080_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)channel__outputs_58445_65017080;
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

Scope anum_58446_65016440;

Behavior __79132980;

Behavior make__79132980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79132980 = behavior;
   behavior->owner = (Object)anum_58446_65016440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_65433080_channel__outputs_58445_65017080_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   reg__0_65433080_channel__outputs_58445_65017080_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   reg__0_65433080_channel__outputs_58445_65017080_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(reg__0_65433080_channel__outputs_58445_65017080_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,reg__0_65433080_channel__outputs_58445_65017080_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
reg__0_65433080_channel__outputs_58445_65017080_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[reg__0_65433080_channel__outputs_58445_65017080_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79133160();

   return behavior;
}

Behavior __79132760;

Behavior make__79132760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79132760 = behavior;
   behavior->owner = (Object)anum_58446_65016440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58447_75686340_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   _58447_75686340_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   _58447_75686340_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(_58447_75686340_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,_58447_75686340_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
_58447_75686340_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[_58447_75686340_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79132940();

   return behavior;
}

Scope makeanum_58446_65016440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58446_65016440 = scope;
   scope->owner = (Object)channel__outputs_58445_65017080;
   scope->name = "anum:446";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__79132980();
   scope->behaviors[1] = make__79132760();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope raddr_58448_65296760;

Scope makeraddr_58448_65296760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58448_65296760 = scope;
   scope->owner = (Object)channel__outputs_58445_65017080;
   scope->name = "raddr:448";
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

Scope waddr_58451_65296320;

Scope makewaddr_58451_65296320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58451_65296320 = scope;
   scope->owner = (Object)channel__outputs_58445_65017080;
   scope->name = "waddr:451";
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

Scope rinc_58454_65295800;

SignalI abus__r_65295420_rinc_58454_65295800_channel__outputs_58445_65017080_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeabus__r_65295420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_65295420_rinc_58454_65295800_channel__outputs_58445_65017080_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)rinc_58454_65295800;
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

Behavior __79131100;

Behavior make__79131100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79131100 = behavior;
   behavior->owner = (Object)rinc_58454_65295800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_65295420_rinc_58454_65295800_channel__outputs_58445_65017080_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   abus__r_65295420_rinc_58454_65295800_channel__outputs_58445_65017080_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   abus__r_65295420_rinc_58454_65295800_channel__outputs_58445_65017080_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(abus__r_65295420_rinc_58454_65295800_channel__outputs_58445_65017080_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,abus__r_65295420_rinc_58454_65295800_channel__outputs_58445_65017080_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
abus__r_65295420_rinc_58454_65295800_channel__outputs_58445_65017080_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[abus__r_65295420_rinc_58454_65295800_channel__outputs_58445_65017080_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79131320();

   return behavior;
}

Behavior __79130900;

Behavior make__79130900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79130900 = behavior;
   behavior->owner = (Object)rinc_58454_65295800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58456_51472520_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   _58456_51472520_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   _58456_51472520_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(_58456_51472520_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,_58456_51472520_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
_58456_51472520_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[_58456_51472520_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79131060();

   return behavior;
}

Scope makerinc_58454_65295800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58454_65295800 = scope;
   scope->owner = (Object)channel__outputs_58445_65017080;
   scope->name = "rinc:454";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_65295420();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__79131100();
   scope->behaviors[1] = make__79130900();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58457_65295020;

SignalI abus__w_65294540_winc_58457_65295020_channel__outputs_58445_65017080_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeabus__w_65294540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_65294540_winc_58457_65295020_channel__outputs_58445_65017080_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)winc_58457_65295020;
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

Scope makewinc_58457_65295020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58457_65295020 = scope;
   scope->owner = (Object)channel__outputs_58445_65017080;
   scope->name = "winc:457";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_65294540();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58460_65294420;

SignalI abus__r_65294000_rdec_58460_65294420_channel__outputs_58445_65017080_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeabus__r_65294000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_65294000_rdec_58460_65294420_channel__outputs_58445_65017080_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)rdec_58460_65294420;
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

Scope makerdec_58460_65294420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58460_65294420 = scope;
   scope->owner = (Object)channel__outputs_58445_65017080;
   scope->name = "rdec:460";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_65294000();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58464_65293860;

SignalI abus__w_65293420_wdec_58464_65293860_channel__outputs_58445_65017080_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeabus__w_65293420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_65293420_wdec_58464_65293860_channel__outputs_58445_65017080_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)wdec_58464_65293860;
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

Scope makewdec_58464_65293860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58464_65293860 = scope;
   scope->owner = (Object)channel__outputs_58445_65017080;
   scope->name = "wdec:464";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_65293420();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __79110740;

Behavior make__79110740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79110740 = behavior;
   behavior->owner = (Object)channel__outputs_58445_65017080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_65433080_channel__outputs_58445_65017080_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   reg__0_65433080_channel__outputs_58445_65017080_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   reg__0_65433080_channel__outputs_58445_65017080_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(reg__0_65433080_channel__outputs_58445_65017080_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,reg__0_65433080_channel__outputs_58445_65017080_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
reg__0_65433080_channel__outputs_58445_65017080_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[reg__0_65433080_channel__outputs_58445_65017080_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79110960();

   return behavior;
}

Behavior __79110540;

Behavior make__79110540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79110540 = behavior;
   behavior->owner = (Object)channel__outputs_58445_65017080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58455_51472940_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   _58455_51472940_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   _58455_51472940_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(_58455_51472940_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,_58455_51472940_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
_58455_51472940_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[_58455_51472940_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79110700();

   return behavior;
}

Scope makechannel__outputs_58445_65017080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__outputs_58445_65017080 = scope;
   scope->owner = (Object)tanh__neural__network_58_84_62916340;
   scope->name = "channel_outputs:445";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_65433080();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58446_65016440();
   scope->scopes[1] = makeraddr_58448_65296760();
   scope->scopes[2] = makewaddr_58451_65296320();
   scope->scopes[3] = makerinc_58454_65295800();
   scope->scopes[4] = makewinc_58457_65295020();
   scope->scopes[5] = makerdec_58460_65294420();
   scope->scopes[6] = makewdec_58464_65293860();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__79110740();
   scope->behaviors[1] = make__79110540();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__a0_58468_65630820;

SignalI reg__0_66892880_channel__a0_58468_65630820_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makereg__0_66892880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_66892880_channel__a0_58468_65630820_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)channel__a0_58468_65630820;
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

SignalI reg__1_47644420_channel__a0_58468_65630820_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makereg__1_47644420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_47644420_channel__a0_58468_65630820_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)channel__a0_58468_65630820;
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

Scope anum_58469_65630480;

Behavior __79128400;

Behavior make__79128400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79128400 = behavior;
   behavior->owner = (Object)anum_58469_65630480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_66892880_channel__a0_58468_65630820_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   reg__0_66892880_channel__a0_58468_65630820_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   reg__0_66892880_channel__a0_58468_65630820_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(reg__0_66892880_channel__a0_58468_65630820_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,reg__0_66892880_channel__a0_58468_65630820_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
reg__0_66892880_channel__a0_58468_65630820_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[reg__0_66892880_channel__a0_58468_65630820_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79128580();

   return behavior;
}

Behavior __79128180;

Behavior make__79128180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79128180 = behavior;
   behavior->owner = (Object)anum_58469_65630480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58470_65660660_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   _58470_65660660_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   _58470_65660660_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(_58470_65660660_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,_58470_65660660_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
_58470_65660660_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[_58470_65660660_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79128360();

   return behavior;
}

Behavior __79126700;

Behavior make__79126700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79126700 = behavior;
   behavior->owner = (Object)anum_58469_65630480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_47644420_channel__a0_58468_65630820_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   reg__1_47644420_channel__a0_58468_65630820_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   reg__1_47644420_channel__a0_58468_65630820_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(reg__1_47644420_channel__a0_58468_65630820_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,reg__1_47644420_channel__a0_58468_65630820_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
reg__1_47644420_channel__a0_58468_65630820_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[reg__1_47644420_channel__a0_58468_65630820_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79126880();

   return behavior;
}

Behavior __79151020;

Behavior make__79151020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79151020 = behavior;
   behavior->owner = (Object)anum_58469_65630480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58471_66080980_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   _58471_66080980_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   _58471_66080980_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(_58471_66080980_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,_58471_66080980_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
_58471_66080980_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[_58471_66080980_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79126660();

   return behavior;
}

Scope makeanum_58469_65630480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58469_65630480 = scope;
   scope->owner = (Object)channel__a0_58468_65630820;
   scope->name = "anum:469";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__79128400();
   scope->behaviors[1] = make__79128180();
   scope->behaviors[2] = make__79126700();
   scope->behaviors[3] = make__79151020();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope raddr_58472_66078020;

Scope makeraddr_58472_66078020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58472_66078020 = scope;
   scope->owner = (Object)channel__a0_58468_65630820;
   scope->name = "raddr:472";
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

Scope waddr_58476_66077560;

Scope makewaddr_58476_66077560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58476_66077560 = scope;
   scope->owner = (Object)channel__a0_58468_65630820;
   scope->name = "waddr:476";
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

Scope rinc_58480_66076980;

SignalI abus__r_66101140_rinc_58480_66076980_channel__a0_58468_65630820_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeabus__r_66101140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_66101140_rinc_58480_66076980_channel__a0_58468_65630820_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)rinc_58480_66076980;
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

Behavior __79145020;

Behavior make__79145020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79145020 = behavior;
   behavior->owner = (Object)rinc_58480_66076980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_66101140_rinc_58480_66076980_channel__a0_58468_65630820_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   abus__r_66101140_rinc_58480_66076980_channel__a0_58468_65630820_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   abus__r_66101140_rinc_58480_66076980_channel__a0_58468_65630820_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(abus__r_66101140_rinc_58480_66076980_channel__a0_58468_65630820_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,abus__r_66101140_rinc_58480_66076980_channel__a0_58468_65630820_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
abus__r_66101140_rinc_58480_66076980_channel__a0_58468_65630820_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[abus__r_66101140_rinc_58480_66076980_channel__a0_58468_65630820_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79145200();

   return behavior;
}

Behavior __79144800;

Behavior make__79144800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79144800 = behavior;
   behavior->owner = (Object)rinc_58480_66076980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58483_75543560_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   _58483_75543560_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   _58483_75543560_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(_58483_75543560_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,_58483_75543560_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
_58483_75543560_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[_58483_75543560_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79144980();

   return behavior;
}

Behavior __79144640;

Behavior make__79144640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79144640 = behavior;
   behavior->owner = (Object)rinc_58480_66076980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_66892880_channel__a0_58468_65630820_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   reg__0_66892880_channel__a0_58468_65630820_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   reg__0_66892880_channel__a0_58468_65630820_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(reg__0_66892880_channel__a0_58468_65630820_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,reg__0_66892880_channel__a0_58468_65630820_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
reg__0_66892880_channel__a0_58468_65630820_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[reg__0_66892880_channel__a0_58468_65630820_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,reg__1_47644420_channel__a0_58468_65630820_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   reg__1_47644420_channel__a0_58468_65630820_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   reg__1_47644420_channel__a0_58468_65630820_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(reg__1_47644420_channel__a0_58468_65630820_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,reg__1_47644420_channel__a0_58468_65630820_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
reg__1_47644420_channel__a0_58468_65630820_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[reg__1_47644420_channel__a0_58468_65630820_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79150360();

   return behavior;
}

Scope makerinc_58480_66076980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58480_66076980 = scope;
   scope->owner = (Object)channel__a0_58468_65630820;
   scope->name = "rinc:480";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_66101140();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__79145020();
   scope->behaviors[1] = make__79144800();
   scope->behaviors[2] = make__79144640();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58484_66794580;

SignalI abus__w_66794200_winc_58484_66794580_channel__a0_58468_65630820_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeabus__w_66794200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_66794200_winc_58484_66794580_channel__a0_58468_65630820_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)winc_58484_66794580;
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

Scope makewinc_58484_66794580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58484_66794580 = scope;
   scope->owner = (Object)channel__a0_58468_65630820;
   scope->name = "winc:484";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_66794200();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58488_66794060;

SignalI abus__r_66793660_rdec_58488_66794060_channel__a0_58468_65630820_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeabus__r_66793660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_66793660_rdec_58488_66794060_channel__a0_58468_65630820_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)rdec_58488_66794060;
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

Scope makerdec_58488_66794060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58488_66794060 = scope;
   scope->owner = (Object)channel__a0_58468_65630820;
   scope->name = "rdec:488";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_66793660();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58493_66793540;

SignalI abus__w_66793120_wdec_58493_66793540_channel__a0_58468_65630820_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040;

SignalI makeabus__w_66793120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_66793120_wdec_58493_66793540_channel__a0_58468_65630820_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)wdec_58493_66793540;
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

Scope makewdec_58493_66793540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58493_66793540 = scope;
   scope->owner = (Object)channel__a0_58468_65630820;
   scope->name = "wdec:493";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_66793120();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope makechannel__a0_58468_65630820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__a0_58468_65630820 = scope;
   scope->owner = (Object)tanh__neural__network_58_84_62916340;
   scope->name = "channel_a0:468";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_66892880();
   scope->inners[1] = makereg__1_47644420();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58469_65630480();
   scope->scopes[1] = makeraddr_58472_66078020();
   scope->scopes[2] = makewaddr_58476_66077560();
   scope->scopes[3] = makerinc_58480_66076980();
   scope->scopes[4] = makewinc_58484_66794580();
   scope->scopes[5] = makerdec_58488_66794060();
   scope->scopes[6] = makewdec_58493_66793540();
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __75707100;

Behavior make__75707100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __75707100 = behavior;
   behavior->owner = (Object)tanh__neural__network_58_84_62916340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_76760640_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   clk_76760640_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_pos += 1;
   clk_76760640_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->pos = realloc(clk_76760640_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->pos,clk_76760640_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_pos*sizeof(Object));
clk_76760640_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->pos[clk_76760640_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_pos-1] = (Object)behavior;
   behavior->block = make__75708120();

   return behavior;
}

Behavior __76193920;

Behavior make__76193920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76193920 = behavior;
   behavior->owner = (Object)tanh__neural__network_58_84_62916340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_76760640_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   clk_76760640_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_pos += 1;
   clk_76760640_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->pos = realloc(clk_76760640_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->pos,clk_76760640_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_pos*sizeof(Object));
clk_76760640_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->pos[clk_76760640_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_pos-1] = (Object)behavior;
   behavior->block = make__75706980();

   return behavior;
}

Behavior __76762940;

Behavior make__76762940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76762940 = behavior;
   behavior->owner = (Object)tanh__neural__network_58_84_62916340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_76760640_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   clk_76760640_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_pos += 1;
   clk_76760640_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->pos = realloc(clk_76760640_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->pos,clk_76760640_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_pos*sizeof(Object));
clk_76760640_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->pos[clk_76760640_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_pos-1] = (Object)behavior;
   behavior->block = make__76193800();

   return behavior;
}

Behavior __79032760;

Behavior make__79032760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79032760 = behavior;
   behavior->owner = (Object)tanh__neural__network_58_84_62916340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,fill_76760560_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   fill_76760560_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   fill_76760560_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(fill_76760560_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,fill_76760560_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
fill_76760560_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[fill_76760560_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__inputs_49195540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   ack__inputs_49195540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   ack__inputs_49195540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(ack__inputs_49195540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,ack__inputs_49195540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
ack__inputs_49195540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[ack__inputs_49195540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,flag__inputs_49195560_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   flag__inputs_49195560_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   flag__inputs_49195560_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(flag__inputs_49195560_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,flag__inputs_49195560_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
flag__inputs_49195560_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[flag__inputs_49195560_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79033080();

   return behavior;
}

Behavior __79032380;

Behavior make__79032380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79032380 = behavior;
   behavior->owner = (Object)tanh__neural__network_58_84_62916340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__1_47643940_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   ack__1_47643940_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   ack__1_47643940_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(ack__1_47643940_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,ack__1_47643940_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
ack__1_47643940_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[ack__1_47643940_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__network_77001580_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   ack__network_77001580_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   ack__network_77001580_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(ack__network_77001580_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,ack__network_77001580_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
ack__network_77001580_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[ack__network_77001580_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,flag__outputs_51179440_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   flag__outputs_51179440_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   flag__outputs_51179440_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(flag__outputs_51179440_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,flag__outputs_51179440_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
flag__outputs_51179440_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[flag__outputs_51179440_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79032720();

   return behavior;
}

Behavior __79032220;

Behavior make__79032220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79032220 = behavior;
   behavior->owner = (Object)tanh__neural__network_58_84_62916340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_76760640_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   clk_76760640_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   clk_76760640_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(clk_76760640_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,clk_76760640_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
clk_76760640_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[clk_76760640_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_76760600_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   rst_76760600_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   rst_76760600_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(rst_76760600_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,rst_76760600_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
rst_76760600_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[rst_76760600_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,req_76760580_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   req_76760580_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   req_76760580_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(req_76760580_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,req_76760580_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
req_76760580_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[req_76760580_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,ack__0_47644020_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   ack__0_47644020_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   ack__0_47644020_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(ack__0_47644020_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,ack__0_47644020_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
ack__0_47644020_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[ack__0_47644020_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__inputs_49195540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   ack__inputs_49195540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   ack__inputs_49195540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(ack__inputs_49195540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,ack__inputs_49195540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
ack__inputs_49195540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[ack__inputs_49195540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79016420();

   return behavior;
}

Behavior __79032060;

Behavior make__79032060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79032060 = behavior;
   behavior->owner = (Object)tanh__neural__network_58_84_62916340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__layer_65281280_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   ack__layer_65281280_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   ack__layer_65281280_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(ack__layer_65281280_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,ack__layer_65281280_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
ack__layer_65281280_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[ack__layer_65281280_layer0_58_8400_64497540_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__layer_75543700_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040);
   ack__layer_75543700_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any += 1;
   ack__layer_75543700_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any = realloc(ack__layer_75543700_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any,ack__layer_75543700_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
ack__layer_75543700_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->any[ack__layer_75543700_layer1_58_8400_75137140_tanh__neural__network_58_84_62916340_tanh__neural__network_58_840_76762580______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__79016360();

   return behavior;
}

Scope maketanh__neural__network_58_84_62916340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   tanh__neural__network_58_84_62916340 = scope;
   scope->owner = (Object)tanh__neural__network_58_840_76762580;
   scope->name = "tanh_neural_network:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makelayer0_66080800();
   scope->systemIs[1] = makelayer1_75686220();
   scope->num_inners = 16;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeack__0_47644020();
   scope->inners[1] = makeack__1_47643940();
   scope->inners[2] = makefill__inputs_47643920();
   scope->inners[3] = makevalue__inputs_49195880();
   scope->inners[4] = makeaddress__inputs_49195580();
   scope->inners[5] = makeflag__inputs_49195560();
   scope->inners[6] = makeack__inputs_49195540();
   scope->inners[7] = make_58432_49195460();
   scope->inners[8] = make_58433_49195000();
   scope->inners[9] = make_58434_49850500();
   scope->inners[10] = makefill__outputs_49850480();
   scope->inners[11] = makevalue__outputs_51179740();
   scope->inners[12] = makeaddress__outputs_51179580();
   scope->inners[13] = makeflag__outputs_51179440();
   scope->inners[14] = make_58455_51472940();
   scope->inners[15] = make_58456_51472520();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__inputs_58416_62916040();
   scope->scopes[1] = makechannel__outputs_58445_65017080();
   scope->scopes[2] = makechannel__a0_58468_65630820();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__75707100();
   scope->behaviors[1] = make__76193920();
   scope->behaviors[2] = make__76762940();
   scope->behaviors[3] = make__79032760();
   scope->behaviors[4] = make__79032380();
   scope->behaviors[5] = make__79032220();
   scope->behaviors[6] = make__79032060();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT maketanh__neural__network_58_840_76762580() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   tanh__neural__network_58_840_76762580 = systemT;
systemT->owner = NULL;
   systemT->name = "tanh_neural_network:T0";
   systemT->num_inputs = 5;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_76760640();
   systemT->inputs[1] = makerst_76760600();
   systemT->inputs[2] = makereq_76760580();
   systemT->inputs[3] = makefill_76760560();
   systemT->inputs[4] = make_5848_77001640();
   systemT->num_outputs = 5;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__fill_77001600();
   systemT->outputs[1] = makeack__network_77001580();
   systemT->outputs[2] = make_5846_77001560();
   systemT->outputs[3] = make_5847_77001480();
   systemT->outputs[4] = make_5867_77258960();
   systemT->num_inouts = 1;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_5868_77258860();

   systemT->scope = maketanh__neural__network_58_84_62916340();

   return systemT;
}