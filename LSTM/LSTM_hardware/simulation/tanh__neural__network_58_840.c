#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT tanh__neural__network_58_840_76869800;

SignalI clk_76867660_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeclk_76867660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_76867660_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_840_76869800;
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

SignalI rst_76867640_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makerst_76867640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_76867640_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_840_76869800;
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

SignalI req_76867620_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makereq_76867620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_76867620_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_840_76869800;
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

SignalI fill_76867600_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makefill_76867600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_76867600_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_840_76869800;
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

SignalI _5848_77223360_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI make_5848_77223360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5848_77223360_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_840_76869800;
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

SignalI ack__fill_77223320_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeack__fill_77223320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__fill_77223320_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_840_76869800;
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

SignalI ack__network_77223300_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeack__network_77223300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__network_77223300_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_840_76869800;
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

SignalI _5846_77223280_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI make_5846_77223280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5846_77223280_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_840_76869800;
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

SignalI _5847_77223200_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI make_5847_77223200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5847_77223200_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_840_76869800;
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

SignalI _5867_77382360_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI make_5867_77382360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5867_77382360_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_840_76869800;
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

SignalI _5868_77382260_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI make_5868_77382260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5868_77382260_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_840_76869800;
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

Block __75635240;

Block __75635020;

void code__75635020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79118380(),ack__0_49704000_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79142860(),ack__1_49703980_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__75635020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75635020 = block;
   block->owner = (Object)__75635240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75635020;

   return block;
};

void code__75635240() {
   {
      Value cond = rst_76867640_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__75635020();
   }
      }
   }
}

Block make__75635240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75635240 = block;
   block->owner = (Object)__75634140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75635240;

   return block;
};

Block __75634020;

Block __75633860;

Block __75633540;

void code__75633540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79142700(),_58433_50526280_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__75633540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75633540 = block;
   block->owner = (Object)__75633860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75633540;

   return block;
};

void code__75633860() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_76867640_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__79142780();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__75633540();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79142640(),_58432_50526520_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__75633860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75633860 = block;
   block->owner = (Object)__75634020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75633860;

   return block;
};

Block __75632900;

Block __75632560;

void code__75632560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79142460(),_5847_77223200_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__75632560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75632560 = block;
   block->owner = (Object)__75632900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75632560;

   return block;
};

void code__75632900() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_76867640_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__79142540();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__75632560();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79142400(),_5846_77223280_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__75632900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75632900 = block;
   block->owner = (Object)__75634020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75632900;

   return block;
};

Block __75631480;

void code__75631480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79142300(),address__inputs_50526620_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79142240(),flag__inputs_50526600_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79142180(),ack__inputs_50526580_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__75631480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75631480 = block;
   block->owner = (Object)__75634020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75631480;

   return block;
};

Block __75630620;

Block __75630440;

Block __75630040;

Block __75652720;

Block __75652500;

void code__75652500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_5848_77223360_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,value__inputs_50526720_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__79141740(),flag__inputs_50526600_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__75652500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75652500 = block;
   block->owner = (Object)__75652720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75652500;

   return block;
};

void code__75652720() {
 code__75652500();
}

Block make__75652720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75652720 = block;
   block->owner = (Object)__75630040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75652720;

   return block;
};

Block __75629880;

void code__75629880() {
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
                  src0 = _5847_77223200_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
                  src1 = make__79141620();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__79141580();
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
                        src0 = _5847_77223200_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__79141280();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__79141220();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_5847_77223200_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79141100(),_5846_77223280_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__75629880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75629880 = block;
   block->owner = (Object)__75630040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75629880;

   return block;
};

void code__75630040() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _5846_77223280_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__79141920();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__75652720();
   }
   else {
  code__75629880();
   }
      }
   }
}

Block make__75630040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75630040 = block;
   block->owner = (Object)__75630440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75630040;

   return block;
};

void code__75630440() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_76867640_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__79142020();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__75630040();
   }
      }
   }
}

Block make__75630440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75630440 = block;
   block->owner = (Object)__75630620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75630440;

   return block;
};

void code__75630620() {
 code__75630440();
}

Block make__75630620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75630620 = block;
   block->owner = (Object)__75634020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75630620;

   return block;
};

Block __75839040;

Block __75838880;

Block __75837900;

void code__75837900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__79140640(),ack__inputs_50526580_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__75837900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75837900 = block;
   block->owner = (Object)__75838880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75837900;

   return block;
};

void code__75838880() {
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
                  src0 = address__inputs_50526620_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__79140900();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),address__inputs_50526620_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__79140800(),flag__inputs_50526600_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address__inputs_50526620_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__79140720();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__75837900();
   }
      }
   }
}

Block make__75838880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75838880 = block;
   block->owner = (Object)__75839040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75838880;

   return block;
};

Block __75837480;

Block __75837080;

void code__75837080() {
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
                  src0 = _58433_50526280_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
                  src1 = make__79140420();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__79140380();
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
                        src0 = _58433_50526280_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__79140140();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__79140080();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58433_50526280_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79139960(),_58432_50526520_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__inputs_50526720_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,_58434_51018880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__75837080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75837080 = block;
   block->owner = (Object)__75837480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75837080;

   return block;
};

void code__75837480() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_76867640_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__79140560();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__75837080();
   }
      }
   }
}

Block make__75837480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75837480 = block;
   block->owner = (Object)__75839040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75837480;

   return block;
};

void code__75839040() {
 code__75838880();
 code__75837480();
}

Block make__75839040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75839040 = block;
   block->owner = (Object)__75634020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75839040;

   return block;
};

Block __75631860;

void code__75631860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79139780(),flag__inputs_50526600_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__75631860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75631860 = block;
   block->owner = (Object)__75634020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75631860;

   return block;
};

void code__75634020() {
 code__75633860();
 code__75632900();
   {
      Value cond = rst_76867640_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__75631480();
   }
   else if (value2integer(fill__inputs_49703960_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value)) {
  code__75630620();
   }
   else if (value2integer(flag__inputs_50526600_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value)) {
  code__75839040();
   }
   else {
  code__75631860();
   }
      }
   }
}

Block make__75634020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __75634020 = block;
   block->owner = (Object)__76120840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__75634020;

   return block;
};

Block __76120720;

Block __76120520;

Block __76120140;

void code__76120140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79139580(),_5868_77382260_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__76120140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76120140 = block;
   block->owner = (Object)__76120520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76120140;

   return block;
};

void code__76120520() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_76867640_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__79139680();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__76120140();
   }
      }
   }
}

Block make__76120520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76120520 = block;
   block->owner = (Object)__76120720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76120520;

   return block;
};

Block __76209740;

Block __76209400;

void code__76209400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79139400(),_58456_53429380_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__76209400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76209400 = block;
   block->owner = (Object)__76209740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76209400;

   return block;
};

void code__76209740() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_76867640_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__79139500();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__76209400();
   }
      }
   }
}

Block make__76209740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76209740 = block;
   block->owner = (Object)__76120720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76209740;

   return block;
};

Block __76208520;

void code__76208520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79139260(),address__outputs_51431260_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79139200(),flag__outputs_51431240_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79139140(),ack__network_77223300_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__76208520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76208520 = block;
   block->owner = (Object)__76120720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76208520;

   return block;
};

Block __76207620;

Block __76207460;

Block __76207120;

Block __76206660;

void code__76206660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58455_53429640_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,value__outputs_51431560_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__76206660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76206660 = block;
   block->owner = (Object)__76207120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76206660;

   return block;
};

void code__76207120() {
{
      Value value = _58456_53429380_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__79138860())) {
    code__76206660();
         }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79138720(),flag__outputs_51431240_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
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
                  src0 = _58456_53429380_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
                  src1 = make__79138620();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__79138580();
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
                        src0 = _58456_53429380_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__79138320();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__79138260();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58456_53429380_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__76207120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76207120 = block;
   block->owner = (Object)__76207460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76207120;

   return block;
};

void code__76207460() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_76867640_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__79138980();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__76207120();
   }
      }
   }
}

Block make__76207460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76207460 = block;
   block->owner = (Object)__76207620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76207460;

   return block;
};

void code__76207620() {
 code__76207460();
}

Block make__76207620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76207620 = block;
   block->owner = (Object)__76120720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76207620;

   return block;
};

Block __76637920;

Block __76637760;

Block __76636700;

void code__76636700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__79137740(),ack__network_77223300_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__76636700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76636700 = block;
   block->owner = (Object)__76637760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76636700;

   return block;
};

void code__76637760() {
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
                  src0 = address__outputs_51431260_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__79138000();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),address__outputs_51431260_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__79137900(),flag__outputs_51431240_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address__outputs_51431260_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__79137820();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__76636700();
   }
      }
   }
}

Block make__76637760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76637760 = block;
   block->owner = (Object)__76637920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76637760;

   return block;
};

Block __76636300;

Block __76660500;

Block __76660020;

void code__76660020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__outputs_51431560_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,_5867_77382360_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__76660020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76660020 = block;
   block->owner = (Object)__76660500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76660020;

   return block;
};

void code__76660500() {
{
      Value value = _5868_77382260_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__79137500())) {
    code__76660020();
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
                  src0 = _5868_77382260_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
                  src1 = make__79137260();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__79137220();
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
                        src0 = _5868_77382260_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__79136980();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__79136920();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_5868_77382260_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__76660500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76660500 = block;
   block->owner = (Object)__76636300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76660500;

   return block;
};

void code__76636300() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_76867640_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__79137660();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__76660500();
   }
      }
   }
}

Block make__76636300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76636300 = block;
   block->owner = (Object)__76637920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76636300;

   return block;
};

void code__76637920() {
 code__76637760();
 code__76636300();
}

Block make__76637920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76637920 = block;
   block->owner = (Object)__76120720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76637920;

   return block;
};

Block __76208940;

void code__76208940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__79136760(),flag__outputs_51431240_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__76208940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76208940 = block;
   block->owner = (Object)__76120720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76208940;

   return block;
};

void code__76120720() {
 code__76120520();
 code__76209740();
   {
      Value cond = rst_76867640_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__76208520();
   }
   else if (value2integer(fill__outputs_51018860_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value)) {
  code__76207620();
   }
   else if (value2integer(flag__outputs_51431240_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value)) {
  code__76637920();
   }
   else {
  code__76208940();
   }
      }
   }
}

Block make__76120720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76120720 = block;
   block->owner = (Object)__76870120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76120720;

   return block;
};

Block __78960140;

void code__78960140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = fill_76867600_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
            src1 = ({
                  Value src0, dst;
                  dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ack__inputs_50526580_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
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
            src0 = flag__inputs_50526600_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),fill__inputs_49703960_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__78960140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78960140 = block;
   block->owner = (Object)__78959820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78960140;

   return block;
};

Block __78959780;

void code__78959780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__1_49703980_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
            src1 = ({
                  Value src0, dst;
                  dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ack__network_77223300_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
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
            src0 = flag__outputs_51431240_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),fill__outputs_51018860_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__78959780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78959780 = block;
   block->owner = (Object)__78959400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78959780;

   return block;
};

Block __78943600;

void code__78943600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_76867660_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,clk_66021540_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_76867640_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,rst_66021520_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(req_76867620_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,req_66021480_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_76867660_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,clk_75373460_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_76867640_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,rst_75373440_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__0_49704000_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,req_75373420_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__inputs_50526580_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,ack__fill_77223320_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__78943600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78943600 = block;
   block->owner = (Object)__78959200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78943600;

   return block;
};

Block __78943540;

void code__78943540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__layer_47101340_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,ack__0_49704000_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__layer_75536200_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,ack__1_49703980_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__78943540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78943540 = block;
   block->owner = (Object)__78959040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78943540;

   return block;
};

Block __63836300;

Block __64256500;

void code__64256500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_63497320_channel__inputs_58416_62942040_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,make_ref_rangeS(mem_63580440_channel__inputs_58416_62942040_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140,value2integer(abus__w_63497140_channel__inputs_58416_62942040_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value),value2integer(abus__w_63497140_channel__inputs_58416_62942040_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__64256500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64256500 = block;
   block->owner = (Object)__63836300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64256500;

   return block;
};

void code__63836300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_63580440_channel__inputs_58416_62942040_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
            idx = value2integer(abus__r_63497240_channel__inputs_58416_62942040_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_63438260_channel__inputs_58416_62942040_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_63338280_channel__inputs_58416_62942040_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__64256500();
   }
      }
   }
}

Block make__63836300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63836300 = block;
   block->owner = (Object)__64936660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63836300;

   return block;
};

Block __78958300;

void code__78958300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_63338280_channel__inputs_58416_62942040_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,_58432_50526520_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__78958300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78958300 = block;
   block->owner = (Object)__78958140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78958300;

   return block;
};

Block __78958100;

void code__78958100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58432_50526520_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,trig__w_63338280_channel__inputs_58416_62942040_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__78958100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78958100 = block;
   block->owner = (Object)__78957940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78958100;

   return block;
};

Block __78957640;

void code__78957640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_63497140_channel__inputs_58416_62942040_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,_58433_50526280_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__78957640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78957640 = block;
   block->owner = (Object)__78957440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78957640;

   return block;
};

Block __78957400;

void code__78957400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58433_50526280_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,abus__w_63497140_channel__inputs_58416_62942040_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__78957400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78957400 = block;
   block->owner = (Object)__78957180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78957400;

   return block;
};

Block __78956880;

void code__78956880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_63497320_channel__inputs_58416_62942040_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,_58434_51018880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__78956880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78956880 = block;
   block->owner = (Object)__78956720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78956880;

   return block;
};

Block __78956680;

void code__78956680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58434_51018880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,dbus__w_63497320_channel__inputs_58416_62942040_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__78956680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78956680 = block;
   block->owner = (Object)__78956520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78956680;

   return block;
};

Block __78955860;

void code__78955860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_63438260_channel__inputs_58416_62942040_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,_58430_47101600_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__78955860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78955860 = block;
   block->owner = (Object)__78990300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78955860;

   return block;
};

Block __78955800;

void code__78955800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58428_47101180_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,trig__r_63338300_channel__inputs_58416_62942040_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58429_47100160_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,abus__r_63497240_channel__inputs_58416_62942040_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__78955800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78955800 = block;
   block->owner = (Object)__78990100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78955800;

   return block;
};

Block __78989020;

void code__78989020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_65335880_channel__outputs_58445_64936540_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,_58455_53429640_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__78989020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78989020 = block;
   block->owner = (Object)__78988840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78989020;

   return block;
};

Block __78988800;

void code__78988800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58455_53429640_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,reg__0_65335880_channel__outputs_58445_64936540_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__78988800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78988800 = block;
   block->owner = (Object)__78988640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78988800;

   return block;
};

Block __79027640;

void code__79027640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_65335880_channel__outputs_58445_64936540_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,_58447_75613400_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__79027640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79027640 = block;
   block->owner = (Object)__79027460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79027640;

   return block;
};

Block __79027420;

void code__79027420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58447_75613400_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,reg__0_65335880_channel__outputs_58445_64936540_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__79027420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79027420 = block;
   block->owner = (Object)__79027240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79027420;

   return block;
};

Block __79025760;

void code__79025760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_65239580_rinc_58454_65239960_channel__outputs_58445_64936540_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,_58456_53429380_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__79025760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79025760 = block;
   block->owner = (Object)__79025580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79025760;

   return block;
};

Block __79025540;

void code__79025540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58456_53429380_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,abus__r_65239580_rinc_58454_65239960_channel__outputs_58445_64936540_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__79025540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79025540 = block;
   block->owner = (Object)__79025380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79025540;

   return block;
};

Block __79023060;

void code__79023060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_48768480_channel__a0_58468_65550120_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,_58470_50624220_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__79023060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79023060 = block;
   block->owner = (Object)__79022880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79023060;

   return block;
};

Block __79022840;

void code__79022840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58470_50624220_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,reg__0_48768480_channel__a0_58468_65550120_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__79022840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79022840 = block;
   block->owner = (Object)__79022620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79022840;

   return block;
};

Block __79021360;

void code__79021360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_49704460_channel__a0_58468_65550120_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,_58471_53485380_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__79021360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79021360 = block;
   block->owner = (Object)__79021180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79021360;

   return block;
};

Block __79021140;

void code__79021140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58471_53485380_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,reg__1_49704460_channel__a0_58468_65550120_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__79021140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79021140 = block;
   block->owner = (Object)__79020960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79021140;

   return block;
};

Block __79039520;

void code__79039520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_66037040_rinc_58480_66037540_channel__a0_58468_65550120_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,_58483_75536100_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__79039520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79039520 = block;
   block->owner = (Object)__79039340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79039520;

   return block;
};

Block __79039300;

void code__79039300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58483_75536100_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,abus__r_66037040_rinc_58480_66037540_channel__a0_58468_65550120_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__79039300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79039300 = block;
   block->owner = (Object)__79039120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79039300;

   return block;
};

Block __79020060;

void code__79020060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_48768480_channel__a0_58468_65550120_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,_58481_75450760_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_49704460_channel__a0_58468_65550120_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->c_value,_58482_75536240_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
      set_value_pos(pool_state);
   }
}

Block make__79020060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __79020060 = block;
   block->owner = (Object)__79038960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__79020060;

   return block;
};

Value make__79118380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79142860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79142780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79142700() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79142640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79142540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79142460() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79142400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79142300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__79142240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79142180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79142020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79141920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79141740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79141620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79141580() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79141280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79141220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79141100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79140900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79140800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79140720() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79140640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79140560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79140420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79140380() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79140140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79140080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79139960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79139780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79139680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79139580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79139500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79139400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79139260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79139200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79139140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79138980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79138860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79138720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79138620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79138580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79138320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79138260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79138000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79137900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79137820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79137740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__79137660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79137500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79137260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79137220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79136980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__79136920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__79136760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope tanh__neural__network_58_84_62942400;

SignalI ack__0_49704000_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeack__0_49704000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__0_49704000_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_84_62942400;
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

SignalI ack__1_49703980_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeack__1_49703980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__1_49703980_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_84_62942400;
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

SignalI fill__inputs_49703960_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makefill__inputs_49703960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill__inputs_49703960_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_84_62942400;
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

SignalI value__inputs_50526720_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makevalue__inputs_50526720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__inputs_50526720_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_84_62942400;
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

SignalI address__inputs_50526620_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeaddress__inputs_50526620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address__inputs_50526620_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_84_62942400;
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

SignalI flag__inputs_50526600_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeflag__inputs_50526600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__inputs_50526600_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_84_62942400;
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

SignalI ack__inputs_50526580_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeack__inputs_50526580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__inputs_50526580_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_84_62942400;
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

SignalI _58432_50526520_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI make_58432_50526520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58432_50526520_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_84_62942400;
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

SignalI _58433_50526280_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI make_58433_50526280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58433_50526280_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_84_62942400;
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

SignalI _58434_51018880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI make_58434_51018880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58434_51018880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_84_62942400;
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

SignalI fill__outputs_51018860_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makefill__outputs_51018860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill__outputs_51018860_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_84_62942400;
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

SignalI value__outputs_51431560_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makevalue__outputs_51431560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__outputs_51431560_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_84_62942400;
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

SignalI address__outputs_51431260_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeaddress__outputs_51431260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address__outputs_51431260_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_84_62942400;
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

SignalI flag__outputs_51431240_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeflag__outputs_51431240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__outputs_51431240_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_84_62942400;
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

SignalI _58455_53429640_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI make_58455_53429640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58455_53429640_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_84_62942400;
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

SignalI _58456_53429380_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI make_58456_53429380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58456_53429380_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)tanh__neural__network_58_84_62942400;
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

SystemI layer0_53485000;

SystemI makelayer0_53485000() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer0_53485000 = systemI;
   systemI->owner = (Object)tanh__neural__network_58_84_62942400;
   systemI->name = "layer0";
   systemI->system = layer0_58_8400_66024780;

   return systemI;
};

SystemI layer1_75613280;

SystemI makelayer1_75613280() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer1_75613280 = systemI;
   systemI->owner = (Object)tanh__neural__network_58_84_62942400;
   systemI->name = "layer1";
   systemI->system = layer1_58_8400_75350880;

   return systemI;
};

Scope channel__inputs_58416_62942040;

SignalI trig__r_63338300_channel__inputs_58416_62942040_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI maketrig__r_63338300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_63338300_channel__inputs_58416_62942040_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__inputs_58416_62942040;
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

SignalI trig__w_63338280_channel__inputs_58416_62942040_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI maketrig__w_63338280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_63338280_channel__inputs_58416_62942040_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__inputs_58416_62942040;
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

SignalI dbus__r_63438260_channel__inputs_58416_62942040_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makedbus__r_63438260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_63438260_channel__inputs_58416_62942040_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__inputs_58416_62942040;
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

SignalI dbus__w_63497320_channel__inputs_58416_62942040_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makedbus__w_63497320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_63497320_channel__inputs_58416_62942040_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__inputs_58416_62942040;
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

SignalI abus__r_63497240_channel__inputs_58416_62942040_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeabus__r_63497240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_63497240_channel__inputs_58416_62942040_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__inputs_58416_62942040;
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

SignalI abus__w_63497140_channel__inputs_58416_62942040_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeabus__w_63497140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_63497140_channel__inputs_58416_62942040_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__inputs_58416_62942040;
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

SignalI mem_63580440_channel__inputs_58416_62942040_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makemem_63580440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_63580440_channel__inputs_58416_62942040_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__inputs_58416_62942040;
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

Scope raddr_58417_62941680;

Scope makeraddr_58417_62941680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58417_62941680 = scope;
   scope->owner = (Object)channel__inputs_58416_62942040;
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

Scope waddr_58422_62941260;

Scope makewaddr_58422_62941260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58422_62941260 = scope;
   scope->owner = (Object)channel__inputs_58416_62942040;
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

Scope rinc_58427_62940720;

Behavior __78990300;

Behavior make__78990300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78990300 = behavior;
   behavior->owner = (Object)rinc_58427_62940720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_63438260_channel__inputs_58416_62942040_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   dbus__r_63438260_channel__inputs_58416_62942040_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   dbus__r_63438260_channel__inputs_58416_62942040_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(dbus__r_63438260_channel__inputs_58416_62942040_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,dbus__r_63438260_channel__inputs_58416_62942040_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
dbus__r_63438260_channel__inputs_58416_62942040_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[dbus__r_63438260_channel__inputs_58416_62942040_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__78955860();

   return behavior;
}

Behavior __78990100;

Behavior make__78990100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78990100 = behavior;
   behavior->owner = (Object)rinc_58427_62940720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58428_47101180_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   _58428_47101180_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   _58428_47101180_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(_58428_47101180_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,_58428_47101180_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
_58428_47101180_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[_58428_47101180_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,_58429_47100160_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   _58429_47100160_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   _58429_47100160_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(_58429_47100160_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,_58429_47100160_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
_58429_47100160_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[_58429_47100160_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__78955800();

   return behavior;
}

Scope makerinc_58427_62940720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58427_62940720 = scope;
   scope->owner = (Object)channel__inputs_58416_62942040;
   scope->name = "rinc:427";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__78990300();
   scope->behaviors[1] = make__78990100();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58431_63340400;

Scope makewinc_58431_63340400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58431_63340400 = scope;
   scope->owner = (Object)channel__inputs_58416_62942040;
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

Scope rdec_58435_63339820;

Scope makerdec_58435_63339820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58435_63339820 = scope;
   scope->owner = (Object)channel__inputs_58416_62942040;
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

Scope wdec_58440_63338980;

Scope makewdec_58440_63338980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58440_63338980 = scope;
   scope->owner = (Object)channel__inputs_58416_62942040;
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

Behavior __64936660;

Behavior make__64936660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __64936660 = behavior;
   behavior->owner = (Object)channel__inputs_58416_62942040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_76867660_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   clk_76867660_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_neg += 1;
   clk_76867660_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->neg = realloc(clk_76867660_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->neg,clk_76867660_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_neg*sizeof(Object));
clk_76867660_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->neg[clk_76867660_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_neg-1] = (Object)behavior;
   behavior->block = make__63836300();

   return behavior;
}

Behavior __78958140;

Behavior make__78958140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78958140 = behavior;
   behavior->owner = (Object)channel__inputs_58416_62942040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_63338280_channel__inputs_58416_62942040_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   trig__w_63338280_channel__inputs_58416_62942040_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   trig__w_63338280_channel__inputs_58416_62942040_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(trig__w_63338280_channel__inputs_58416_62942040_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,trig__w_63338280_channel__inputs_58416_62942040_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
trig__w_63338280_channel__inputs_58416_62942040_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[trig__w_63338280_channel__inputs_58416_62942040_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__78958300();

   return behavior;
}

Behavior __78957940;

Behavior make__78957940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78957940 = behavior;
   behavior->owner = (Object)channel__inputs_58416_62942040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58432_50526520_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   _58432_50526520_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   _58432_50526520_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(_58432_50526520_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,_58432_50526520_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
_58432_50526520_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[_58432_50526520_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__78958100();

   return behavior;
}

Behavior __78957440;

Behavior make__78957440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78957440 = behavior;
   behavior->owner = (Object)channel__inputs_58416_62942040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_63497140_channel__inputs_58416_62942040_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   abus__w_63497140_channel__inputs_58416_62942040_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   abus__w_63497140_channel__inputs_58416_62942040_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(abus__w_63497140_channel__inputs_58416_62942040_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,abus__w_63497140_channel__inputs_58416_62942040_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
abus__w_63497140_channel__inputs_58416_62942040_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[abus__w_63497140_channel__inputs_58416_62942040_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__78957640();

   return behavior;
}

Behavior __78957180;

Behavior make__78957180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78957180 = behavior;
   behavior->owner = (Object)channel__inputs_58416_62942040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58433_50526280_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   _58433_50526280_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   _58433_50526280_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(_58433_50526280_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,_58433_50526280_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
_58433_50526280_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[_58433_50526280_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__78957400();

   return behavior;
}

Behavior __78956720;

Behavior make__78956720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78956720 = behavior;
   behavior->owner = (Object)channel__inputs_58416_62942040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_63497320_channel__inputs_58416_62942040_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   dbus__w_63497320_channel__inputs_58416_62942040_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   dbus__w_63497320_channel__inputs_58416_62942040_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(dbus__w_63497320_channel__inputs_58416_62942040_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,dbus__w_63497320_channel__inputs_58416_62942040_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
dbus__w_63497320_channel__inputs_58416_62942040_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[dbus__w_63497320_channel__inputs_58416_62942040_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__78956880();

   return behavior;
}

Behavior __78956520;

Behavior make__78956520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78956520 = behavior;
   behavior->owner = (Object)channel__inputs_58416_62942040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58434_51018880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   _58434_51018880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   _58434_51018880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(_58434_51018880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,_58434_51018880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
_58434_51018880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[_58434_51018880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__78956680();

   return behavior;
}

Scope makechannel__inputs_58416_62942040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__inputs_58416_62942040 = scope;
   scope->owner = (Object)tanh__neural__network_58_84_62942400;
   scope->name = "channel_inputs:416";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_63338300();
   scope->inners[1] = maketrig__w_63338280();
   scope->inners[2] = makedbus__r_63438260();
   scope->inners[3] = makedbus__w_63497320();
   scope->inners[4] = makeabus__r_63497240();
   scope->inners[5] = makeabus__w_63497140();
   scope->inners[6] = makemem_63580440();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58417_62941680();
   scope->scopes[1] = makewaddr_58422_62941260();
   scope->scopes[2] = makerinc_58427_62940720();
   scope->scopes[3] = makewinc_58431_63340400();
   scope->scopes[4] = makerdec_58435_63339820();
   scope->scopes[5] = makewdec_58440_63338980();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__64936660();
   scope->behaviors[1] = make__78958140();
   scope->behaviors[2] = make__78957940();
   scope->behaviors[3] = make__78957440();
   scope->behaviors[4] = make__78957180();
   scope->behaviors[5] = make__78956720();
   scope->behaviors[6] = make__78956520();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__outputs_58445_64936540;

SignalI reg__0_65335880_channel__outputs_58445_64936540_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makereg__0_65335880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_65335880_channel__outputs_58445_64936540_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__outputs_58445_64936540;
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

Scope anum_58446_64936200;

Behavior __79027460;

Behavior make__79027460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79027460 = behavior;
   behavior->owner = (Object)anum_58446_64936200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_65335880_channel__outputs_58445_64936540_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   reg__0_65335880_channel__outputs_58445_64936540_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   reg__0_65335880_channel__outputs_58445_64936540_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(reg__0_65335880_channel__outputs_58445_64936540_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,reg__0_65335880_channel__outputs_58445_64936540_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
reg__0_65335880_channel__outputs_58445_64936540_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[reg__0_65335880_channel__outputs_58445_64936540_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__79027640();

   return behavior;
}

Behavior __79027240;

Behavior make__79027240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79027240 = behavior;
   behavior->owner = (Object)anum_58446_64936200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58447_75613400_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   _58447_75613400_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   _58447_75613400_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(_58447_75613400_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,_58447_75613400_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
_58447_75613400_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[_58447_75613400_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__79027420();

   return behavior;
}

Scope makeanum_58446_64936200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58446_64936200 = scope;
   scope->owner = (Object)channel__outputs_58445_64936540;
   scope->name = "anum:446";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__79027460();
   scope->behaviors[1] = make__79027240();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope raddr_58448_65240920;

Scope makeraddr_58448_65240920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58448_65240920 = scope;
   scope->owner = (Object)channel__outputs_58445_64936540;
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

Scope waddr_58451_65240500;

Scope makewaddr_58451_65240500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58451_65240500 = scope;
   scope->owner = (Object)channel__outputs_58445_64936540;
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

Scope rinc_58454_65239960;

SignalI abus__r_65239580_rinc_58454_65239960_channel__outputs_58445_64936540_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeabus__r_65239580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_65239580_rinc_58454_65239960_channel__outputs_58445_64936540_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)rinc_58454_65239960;
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

Behavior __79025580;

Behavior make__79025580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79025580 = behavior;
   behavior->owner = (Object)rinc_58454_65239960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_65239580_rinc_58454_65239960_channel__outputs_58445_64936540_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   abus__r_65239580_rinc_58454_65239960_channel__outputs_58445_64936540_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   abus__r_65239580_rinc_58454_65239960_channel__outputs_58445_64936540_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(abus__r_65239580_rinc_58454_65239960_channel__outputs_58445_64936540_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,abus__r_65239580_rinc_58454_65239960_channel__outputs_58445_64936540_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
abus__r_65239580_rinc_58454_65239960_channel__outputs_58445_64936540_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[abus__r_65239580_rinc_58454_65239960_channel__outputs_58445_64936540_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__79025760();

   return behavior;
}

Behavior __79025380;

Behavior make__79025380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79025380 = behavior;
   behavior->owner = (Object)rinc_58454_65239960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58456_53429380_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   _58456_53429380_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   _58456_53429380_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(_58456_53429380_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,_58456_53429380_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
_58456_53429380_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[_58456_53429380_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__79025540();

   return behavior;
}

Scope makerinc_58454_65239960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58454_65239960 = scope;
   scope->owner = (Object)channel__outputs_58445_64936540;
   scope->name = "rinc:454";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_65239580();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__79025580();
   scope->behaviors[1] = make__79025380();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58457_65238960;

SignalI abus__w_65238020_winc_58457_65238960_channel__outputs_58445_64936540_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeabus__w_65238020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_65238020_winc_58457_65238960_channel__outputs_58445_64936540_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)winc_58457_65238960;
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

Scope makewinc_58457_65238960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58457_65238960 = scope;
   scope->owner = (Object)channel__outputs_58445_64936540;
   scope->name = "winc:457";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_65238020();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58460_65237840;

SignalI abus__r_65236860_rdec_58460_65237840_channel__outputs_58445_64936540_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeabus__r_65236860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_65236860_rdec_58460_65237840_channel__outputs_58445_64936540_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)rdec_58460_65237840;
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

Scope makerdec_58460_65237840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58460_65237840 = scope;
   scope->owner = (Object)channel__outputs_58445_64936540;
   scope->name = "rdec:460";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_65236860();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58464_65236740;

SignalI abus__w_65236360_wdec_58464_65236740_channel__outputs_58445_64936540_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeabus__w_65236360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_65236360_wdec_58464_65236740_channel__outputs_58445_64936540_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)wdec_58464_65236740;
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

Scope makewdec_58464_65236740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58464_65236740 = scope;
   scope->owner = (Object)channel__outputs_58445_64936540;
   scope->name = "wdec:464";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_65236360();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __78988840;

Behavior make__78988840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78988840 = behavior;
   behavior->owner = (Object)channel__outputs_58445_64936540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_65335880_channel__outputs_58445_64936540_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   reg__0_65335880_channel__outputs_58445_64936540_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   reg__0_65335880_channel__outputs_58445_64936540_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(reg__0_65335880_channel__outputs_58445_64936540_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,reg__0_65335880_channel__outputs_58445_64936540_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
reg__0_65335880_channel__outputs_58445_64936540_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[reg__0_65335880_channel__outputs_58445_64936540_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__78989020();

   return behavior;
}

Behavior __78988640;

Behavior make__78988640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78988640 = behavior;
   behavior->owner = (Object)channel__outputs_58445_64936540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58455_53429640_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   _58455_53429640_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   _58455_53429640_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(_58455_53429640_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,_58455_53429640_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
_58455_53429640_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[_58455_53429640_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__78988800();

   return behavior;
}

Scope makechannel__outputs_58445_64936540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__outputs_58445_64936540 = scope;
   scope->owner = (Object)tanh__neural__network_58_84_62942400;
   scope->name = "channel_outputs:445";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_65335880();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58446_64936200();
   scope->scopes[1] = makeraddr_58448_65240920();
   scope->scopes[2] = makewaddr_58451_65240500();
   scope->scopes[3] = makerinc_58454_65239960();
   scope->scopes[4] = makewinc_58457_65238960();
   scope->scopes[5] = makerdec_58460_65237840();
   scope->scopes[6] = makewdec_58464_65236740();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__78988840();
   scope->behaviors[1] = make__78988640();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__a0_58468_65550120;

SignalI reg__0_48768480_channel__a0_58468_65550120_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makereg__0_48768480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_48768480_channel__a0_58468_65550120_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__a0_58468_65550120;
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

SignalI reg__1_49704460_channel__a0_58468_65550120_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makereg__1_49704460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_49704460_channel__a0_58468_65550120_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)channel__a0_58468_65550120;
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

Scope anum_58469_65549780;

Behavior __79022880;

Behavior make__79022880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79022880 = behavior;
   behavior->owner = (Object)anum_58469_65549780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_48768480_channel__a0_58468_65550120_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   reg__0_48768480_channel__a0_58468_65550120_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   reg__0_48768480_channel__a0_58468_65550120_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(reg__0_48768480_channel__a0_58468_65550120_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,reg__0_48768480_channel__a0_58468_65550120_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
reg__0_48768480_channel__a0_58468_65550120_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[reg__0_48768480_channel__a0_58468_65550120_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__79023060();

   return behavior;
}

Behavior __79022620;

Behavior make__79022620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79022620 = behavior;
   behavior->owner = (Object)anum_58469_65549780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58470_50624220_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   _58470_50624220_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   _58470_50624220_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(_58470_50624220_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,_58470_50624220_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
_58470_50624220_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[_58470_50624220_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__79022840();

   return behavior;
}

Behavior __79021180;

Behavior make__79021180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79021180 = behavior;
   behavior->owner = (Object)anum_58469_65549780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_49704460_channel__a0_58468_65550120_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   reg__1_49704460_channel__a0_58468_65550120_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   reg__1_49704460_channel__a0_58468_65550120_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(reg__1_49704460_channel__a0_58468_65550120_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,reg__1_49704460_channel__a0_58468_65550120_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
reg__1_49704460_channel__a0_58468_65550120_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[reg__1_49704460_channel__a0_58468_65550120_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__79021360();

   return behavior;
}

Behavior __79020960;

Behavior make__79020960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79020960 = behavior;
   behavior->owner = (Object)anum_58469_65549780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58471_53485380_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   _58471_53485380_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   _58471_53485380_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(_58471_53485380_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,_58471_53485380_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
_58471_53485380_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[_58471_53485380_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__79021140();

   return behavior;
}

Scope makeanum_58469_65549780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58469_65549780 = scope;
   scope->owner = (Object)channel__a0_58468_65550120;
   scope->name = "anum:469";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__79022880();
   scope->behaviors[1] = make__79022620();
   scope->behaviors[2] = make__79021180();
   scope->behaviors[3] = make__79020960();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope raddr_58472_66038420;

Scope makeraddr_58472_66038420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58472_66038420 = scope;
   scope->owner = (Object)channel__a0_58468_65550120;
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

Scope waddr_58476_66037980;

Scope makewaddr_58476_66037980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58476_66037980 = scope;
   scope->owner = (Object)channel__a0_58468_65550120;
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

Scope rinc_58480_66037540;

SignalI abus__r_66037040_rinc_58480_66037540_channel__a0_58468_65550120_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeabus__r_66037040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_66037040_rinc_58480_66037540_channel__a0_58468_65550120_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)rinc_58480_66037540;
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

Behavior __79039340;

Behavior make__79039340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79039340 = behavior;
   behavior->owner = (Object)rinc_58480_66037540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_66037040_rinc_58480_66037540_channel__a0_58468_65550120_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   abus__r_66037040_rinc_58480_66037540_channel__a0_58468_65550120_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   abus__r_66037040_rinc_58480_66037540_channel__a0_58468_65550120_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(abus__r_66037040_rinc_58480_66037540_channel__a0_58468_65550120_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,abus__r_66037040_rinc_58480_66037540_channel__a0_58468_65550120_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
abus__r_66037040_rinc_58480_66037540_channel__a0_58468_65550120_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[abus__r_66037040_rinc_58480_66037540_channel__a0_58468_65550120_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__79039520();

   return behavior;
}

Behavior __79039120;

Behavior make__79039120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79039120 = behavior;
   behavior->owner = (Object)rinc_58480_66037540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58483_75536100_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   _58483_75536100_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   _58483_75536100_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(_58483_75536100_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,_58483_75536100_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
_58483_75536100_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[_58483_75536100_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__79039300();

   return behavior;
}

Behavior __79038960;

Behavior make__79038960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __79038960 = behavior;
   behavior->owner = (Object)rinc_58480_66037540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_48768480_channel__a0_58468_65550120_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   reg__0_48768480_channel__a0_58468_65550120_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   reg__0_48768480_channel__a0_58468_65550120_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(reg__0_48768480_channel__a0_58468_65550120_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,reg__0_48768480_channel__a0_58468_65550120_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
reg__0_48768480_channel__a0_58468_65550120_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[reg__0_48768480_channel__a0_58468_65550120_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,reg__1_49704460_channel__a0_58468_65550120_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   reg__1_49704460_channel__a0_58468_65550120_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   reg__1_49704460_channel__a0_58468_65550120_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(reg__1_49704460_channel__a0_58468_65550120_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,reg__1_49704460_channel__a0_58468_65550120_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
reg__1_49704460_channel__a0_58468_65550120_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[reg__1_49704460_channel__a0_58468_65550120_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__79020060();

   return behavior;
}

Scope makerinc_58480_66037540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58480_66037540 = scope;
   scope->owner = (Object)channel__a0_58468_65550120;
   scope->name = "rinc:480";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_66037040();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__79039340();
   scope->behaviors[1] = make__79039120();
   scope->behaviors[2] = make__79038960();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58484_45780440;

SignalI abus__w_45830780_winc_58484_45780440_channel__a0_58468_65550120_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeabus__w_45830780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_45830780_winc_58484_45780440_channel__a0_58468_65550120_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)winc_58484_45780440;
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

Scope makewinc_58484_45780440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58484_45780440 = scope;
   scope->owner = (Object)channel__a0_58468_65550120;
   scope->name = "winc:484";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_45830780();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58488_45829900;

SignalI abus__r_45827580_rdec_58488_45829900_channel__a0_58468_65550120_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeabus__r_45827580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_45827580_rdec_58488_45829900_channel__a0_58468_65550120_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)rdec_58488_45829900;
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

Scope makerdec_58488_45829900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58488_45829900 = scope;
   scope->owner = (Object)channel__a0_58468_65550120;
   scope->name = "rdec:488";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_45827580();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58493_45826780;

SignalI abus__w_45847400_wdec_58493_45826780_channel__a0_58468_65550120_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140;

SignalI makeabus__w_45847400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_45847400_wdec_58493_45826780_channel__a0_58468_65550120_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140 = signalI;
   signalI->owner = (Object)wdec_58493_45826780;
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

Scope makewdec_58493_45826780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58493_45826780 = scope;
   scope->owner = (Object)channel__a0_58468_65550120;
   scope->name = "wdec:493";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_45847400();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope makechannel__a0_58468_65550120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__a0_58468_65550120 = scope;
   scope->owner = (Object)tanh__neural__network_58_84_62942400;
   scope->name = "channel_a0:468";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_48768480();
   scope->inners[1] = makereg__1_49704460();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58469_65549780();
   scope->scopes[1] = makeraddr_58472_66038420();
   scope->scopes[2] = makewaddr_58476_66037980();
   scope->scopes[3] = makerinc_58480_66037540();
   scope->scopes[4] = makewinc_58484_45780440();
   scope->scopes[5] = makerdec_58488_45829900();
   scope->scopes[6] = makewdec_58493_45826780();
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __75634140;

Behavior make__75634140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __75634140 = behavior;
   behavior->owner = (Object)tanh__neural__network_58_84_62942400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_76867660_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   clk_76867660_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_pos += 1;
   clk_76867660_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->pos = realloc(clk_76867660_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->pos,clk_76867660_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_pos*sizeof(Object));
clk_76867660_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->pos[clk_76867660_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_pos-1] = (Object)behavior;
   behavior->block = make__75635240();

   return behavior;
}

Behavior __76120840;

Behavior make__76120840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76120840 = behavior;
   behavior->owner = (Object)tanh__neural__network_58_84_62942400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_76867660_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   clk_76867660_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_pos += 1;
   clk_76867660_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->pos = realloc(clk_76867660_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->pos,clk_76867660_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_pos*sizeof(Object));
clk_76867660_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->pos[clk_76867660_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_pos-1] = (Object)behavior;
   behavior->block = make__75634020();

   return behavior;
}

Behavior __76870120;

Behavior make__76870120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76870120 = behavior;
   behavior->owner = (Object)tanh__neural__network_58_84_62942400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_76867660_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   clk_76867660_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_pos += 1;
   clk_76867660_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->pos = realloc(clk_76867660_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->pos,clk_76867660_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_pos*sizeof(Object));
clk_76867660_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->pos[clk_76867660_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_pos-1] = (Object)behavior;
   behavior->block = make__76120720();

   return behavior;
}

Behavior __78959820;

Behavior make__78959820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78959820 = behavior;
   behavior->owner = (Object)tanh__neural__network_58_84_62942400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,fill_76867600_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   fill_76867600_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   fill_76867600_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(fill_76867600_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,fill_76867600_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
fill_76867600_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[fill_76867600_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__inputs_50526580_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   ack__inputs_50526580_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   ack__inputs_50526580_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(ack__inputs_50526580_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,ack__inputs_50526580_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
ack__inputs_50526580_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[ack__inputs_50526580_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,flag__inputs_50526600_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   flag__inputs_50526600_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   flag__inputs_50526600_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(flag__inputs_50526600_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,flag__inputs_50526600_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
flag__inputs_50526600_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[flag__inputs_50526600_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__78960140();

   return behavior;
}

Behavior __78959400;

Behavior make__78959400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78959400 = behavior;
   behavior->owner = (Object)tanh__neural__network_58_84_62942400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__1_49703980_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   ack__1_49703980_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   ack__1_49703980_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(ack__1_49703980_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,ack__1_49703980_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
ack__1_49703980_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[ack__1_49703980_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__network_77223300_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   ack__network_77223300_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   ack__network_77223300_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(ack__network_77223300_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,ack__network_77223300_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
ack__network_77223300_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[ack__network_77223300_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,flag__outputs_51431240_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   flag__outputs_51431240_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   flag__outputs_51431240_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(flag__outputs_51431240_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,flag__outputs_51431240_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
flag__outputs_51431240_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[flag__outputs_51431240_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__78959780();

   return behavior;
}

Behavior __78959200;

Behavior make__78959200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78959200 = behavior;
   behavior->owner = (Object)tanh__neural__network_58_84_62942400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_76867660_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   clk_76867660_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   clk_76867660_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(clk_76867660_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,clk_76867660_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
clk_76867660_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[clk_76867660_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_76867640_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   rst_76867640_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   rst_76867640_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(rst_76867640_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,rst_76867640_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
rst_76867640_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[rst_76867640_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,req_76867620_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   req_76867620_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   req_76867620_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(req_76867620_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,req_76867620_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
req_76867620_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[req_76867620_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,ack__0_49704000_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   ack__0_49704000_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   ack__0_49704000_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(ack__0_49704000_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,ack__0_49704000_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
ack__0_49704000_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[ack__0_49704000_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__inputs_50526580_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   ack__inputs_50526580_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   ack__inputs_50526580_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(ack__inputs_50526580_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,ack__inputs_50526580_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
ack__inputs_50526580_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[ack__inputs_50526580_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__78943600();

   return behavior;
}

Behavior __78959040;

Behavior make__78959040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78959040 = behavior;
   behavior->owner = (Object)tanh__neural__network_58_84_62942400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__layer_47101340_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   ack__layer_47101340_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   ack__layer_47101340_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(ack__layer_47101340_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,ack__layer_47101340_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
ack__layer_47101340_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[ack__layer_47101340_layer0_58_8400_66024780_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__layer_75536200_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140);
   ack__layer_75536200_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any += 1;
   ack__layer_75536200_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any = realloc(ack__layer_75536200_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any,ack__layer_75536200_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any*sizeof(Object));
ack__layer_75536200_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->any[ack__layer_75536200_layer1_58_8400_75350880_tanh__neural__network_58_84_62942400_tanh__neural__network_58_840_76869800______58_84_50209200______58_840_77432140->num_any-1] = (Object)behavior;
   behavior->block = make__78943540();

   return behavior;
}

Scope maketanh__neural__network_58_84_62942400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   tanh__neural__network_58_84_62942400 = scope;
   scope->owner = (Object)tanh__neural__network_58_840_76869800;
   scope->name = "tanh_neural_network:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makelayer0_53485000();
   scope->systemIs[1] = makelayer1_75613280();
   scope->num_inners = 16;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeack__0_49704000();
   scope->inners[1] = makeack__1_49703980();
   scope->inners[2] = makefill__inputs_49703960();
   scope->inners[3] = makevalue__inputs_50526720();
   scope->inners[4] = makeaddress__inputs_50526620();
   scope->inners[5] = makeflag__inputs_50526600();
   scope->inners[6] = makeack__inputs_50526580();
   scope->inners[7] = make_58432_50526520();
   scope->inners[8] = make_58433_50526280();
   scope->inners[9] = make_58434_51018880();
   scope->inners[10] = makefill__outputs_51018860();
   scope->inners[11] = makevalue__outputs_51431560();
   scope->inners[12] = makeaddress__outputs_51431260();
   scope->inners[13] = makeflag__outputs_51431240();
   scope->inners[14] = make_58455_53429640();
   scope->inners[15] = make_58456_53429380();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__inputs_58416_62942040();
   scope->scopes[1] = makechannel__outputs_58445_64936540();
   scope->scopes[2] = makechannel__a0_58468_65550120();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__75634140();
   scope->behaviors[1] = make__76120840();
   scope->behaviors[2] = make__76870120();
   scope->behaviors[3] = make__78959820();
   scope->behaviors[4] = make__78959400();
   scope->behaviors[5] = make__78959200();
   scope->behaviors[6] = make__78959040();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT maketanh__neural__network_58_840_76869800() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   tanh__neural__network_58_840_76869800 = systemT;
systemT->owner = NULL;
   systemT->name = "tanh_neural_network:T0";
   systemT->num_inputs = 5;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_76867660();
   systemT->inputs[1] = makerst_76867640();
   systemT->inputs[2] = makereq_76867620();
   systemT->inputs[3] = makefill_76867600();
   systemT->inputs[4] = make_5848_77223360();
   systemT->num_outputs = 5;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__fill_77223320();
   systemT->outputs[1] = makeack__network_77223300();
   systemT->outputs[2] = make_5846_77223280();
   systemT->outputs[3] = make_5847_77223200();
   systemT->outputs[4] = make_5867_77382360();
   systemT->num_inouts = 1;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_5868_77382260();

   systemT->scope = maketanh__neural__network_58_84_62942400();

   return systemT;
}