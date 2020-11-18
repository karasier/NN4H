#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT sigmoid__neural__network_58_840_59750680;

SignalI clk_59748000_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeclk_59748000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_59748000_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_840_59750680;
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

SignalI rst_59747980_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makerst_59747980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_59747980_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_840_59750680;
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

SignalI req_59747940_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makereq_59747940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_59747940_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_840_59750680;
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

SignalI fill_59747920_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makefill_59747920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_59747920_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_840_59750680;
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

SignalI _5810_59957120_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI make_5810_59957120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5810_59957120_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_840_59750680;
   signalI->name = ":10";
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

SignalI ack__fill_59957040_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeack__fill_59957040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__fill_59957040_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_840_59750680;
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

SignalI ack__network_59957000_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeack__network_59957000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__network_59957000_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_840_59750680;
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

SignalI _588_59956960_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI make_588_59956960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _588_59956960_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_840_59750680;
   signalI->name = ":8";
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

SignalI _589_59956860_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI make_589_59956860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _589_59956860_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_840_59750680;
   signalI->name = ":9";
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

SignalI _5832_59956840_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI make_5832_59956840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5832_59956840_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_840_59750680;
   signalI->name = ":32";
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

SignalI _5833_59956540_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI make_5833_59956540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5833_59956540_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_840_59750680;
   signalI->name = ":33";
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

SignalI _5834_60068440_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI make_5834_60068440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5834_60068440_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_840_59750680;
   signalI->name = ":34";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Block __53321920;

Block __53346060;

void code__53346060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71112720(),ack__0_51898660_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71112600(),ack__1_51898640_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__53346060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53346060 = block;
   block->owner = (Object)__53321920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53346060;

   return block;
};

void code__53321920() {
   {
      Value cond = rst_59747980_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53346060();
   }
      }
   }
}

Block make__53321920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53321920 = block;
   block->owner = (Object)__53343600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53321920;

   return block;
};

Block __53343220;

Block __53342660;

Block __53342020;

void code__53342020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71112380(),_58106_51965180_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__53342020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53342020 = block;
   block->owner = (Object)__53342660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53342020;

   return block;
};

void code__53342660() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59747980_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__71112500();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53342020();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71112300(),_58105_51965260_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__53342660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53342660 = block;
   block->owner = (Object)__53343220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53342660;

   return block;
};

Block __53340980;

Block __53339400;

void code__53339400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71112080(),_589_59956860_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__53339400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53339400 = block;
   block->owner = (Object)__53340980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53339400;

   return block;
};

void code__53340980() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59747980_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__71112180();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53339400();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71112000(),_588_59956960_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__53340980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53340980 = block;
   block->owner = (Object)__53343220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53340980;

   return block;
};

Block __53361440;

void code__53361440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71111780(),address__inputs_51965320_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71111700(),flag__inputs_51965300_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71111620(),ack__inputs_51965280_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__53361440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53361440 = block;
   block->owner = (Object)__53343220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53361440;

   return block;
};

Block __53358220;

Block __53357980;

Block __53357460;

Block __53374680;

Block __53374120;

void code__53374120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = _5810_59957120_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),value__inputs_51965400_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__71111100(),flag__inputs_51965300_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__53374120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53374120 = block;
   block->owner = (Object)__53374680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53374120;

   return block;
};

void code__53374680() {
 code__53374120();
}

Block make__53374680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53374680 = block;
   block->owner = (Object)__53357460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53374680;

   return block;
};

Block __53357280;

void code__53357280() {
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
                  src0 = _589_59956860_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
                  src1 = make__71111000();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__71110960();
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
                        src0 = _589_59956860_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__71110640();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__71110520();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_589_59956860_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71110400(),_588_59956960_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__53357280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53357280 = block;
   block->owner = (Object)__53357460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53357280;

   return block;
};

void code__53357460() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _588_59956960_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__71111300();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53374680();
   }
   else {
  code__53357280();
   }
      }
   }
}

Block make__53357460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53357460 = block;
   block->owner = (Object)__53357980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53357460;

   return block;
};

void code__53357980() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59747980_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__71111400();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53357460();
   }
      }
   }
}

Block make__53357980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53357980 = block;
   block->owner = (Object)__53358220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53357980;

   return block;
};

void code__53358220() {
 code__53357980();
}

Block make__53358220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53358220 = block;
   block->owner = (Object)__53343220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53358220;

   return block;
};

Block __58636100;

Block __58635880;

Block __58634500;

void code__58634500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__71109420(),ack__inputs_51965280_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__58634500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58634500 = block;
   block->owner = (Object)__58635880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58634500;

   return block;
};

void code__58635880() {
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
                  src0 = address__inputs_51965320_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__71110160();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),address__inputs_51965320_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__71110040(),flag__inputs_51965300_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address__inputs_51965320_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__71109880();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58634500();
   }
      }
   }
}

Block make__58635880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58635880 = block;
   block->owner = (Object)__58636100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58635880;

   return block;
};

Block __58633960;

Block __58633540;

void code__58633540() {
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
                  src0 = _58106_51965180_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
                  src1 = make__71109140();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__71109080();
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
                        src0 = _58106_51965180_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__71108780();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__71108720();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58106_51965180_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71108560(),_58105_51965260_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__inputs_51965400_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,_58107_52244640_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__58633540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58633540 = block;
   block->owner = (Object)__58633960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58633540;

   return block;
};

void code__58633960() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59747980_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__71109280();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58633540();
   }
      }
   }
}

Block make__58633960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58633960 = block;
   block->owner = (Object)__58636100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58633960;

   return block;
};

void code__58636100() {
 code__58635880();
 code__58633960();
}

Block make__58636100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58636100 = block;
   block->owner = (Object)__53343220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58636100;

   return block;
};

Block __53362380;

void code__53362380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71108300(),flag__inputs_51965300_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__53362380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53362380 = block;
   block->owner = (Object)__53343220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53362380;

   return block;
};

void code__53343220() {
 code__53342660();
 code__53340980();
   {
      Value cond = rst_59747980_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53361440();
   }
   else if (value2integer(fill__inputs_51898620_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value)) {
  code__53358220();
   }
   else if (value2integer(flag__inputs_51965300_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value)) {
  code__58636100();
   }
   else {
  code__53362380();
   }
      }
   }
}

Block make__53343220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53343220 = block;
   block->owner = (Object)__59054000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53343220;

   return block;
};

Block __59053720;

Block __59053560;

Block __59053120;

void code__59053120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71108120(),_5833_59956540_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__59053120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59053120 = block;
   block->owner = (Object)__59053560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59053120;

   return block;
};

void code__59053560() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59747980_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__71108220();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59053120();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71108060(),_5832_59956840_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__59053560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59053560 = block;
   block->owner = (Object)__59053720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59053560;

   return block;
};

Block __59052300;

Block __59051560;

void code__59051560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71107880(),_58129_52408280_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__59051560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59051560 = block;
   block->owner = (Object)__59052300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59051560;

   return block;
};

void code__59052300() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59747980_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__71107980();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59051560();
   }
      }
   }
}

Block make__59052300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59052300 = block;
   block->owner = (Object)__59053720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59052300;

   return block;
};

Block __59050440;

void code__59050440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71107760(),address__outputs_52342100_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71107680(),flag__outputs_52342080_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71107600(),ack__network_59957000_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__59050440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59050440 = block;
   block->owner = (Object)__59053720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59050440;

   return block;
};

Block __59049000;

Block __59048720;

Block __59048300;

Block __59088660;

void code__59088660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58128_52408400_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,value__outputs_52342180_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__59088660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59088660 = block;
   block->owner = (Object)__59048300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59088660;

   return block;
};

void code__59048300() {
{
      Value value = _58129_52408280_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__71107140())) {
    code__59088660();
         }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71106980(),flag__outputs_52342080_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
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
                  src0 = _58129_52408280_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
                  src1 = make__71106840();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__71106740();
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
                        src0 = _58129_52408280_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__71130840();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__71130780();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58129_52408280_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__59048300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59048300 = block;
   block->owner = (Object)__59048720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59048300;

   return block;
};

void code__59048720() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59747980_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__71107340();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59048300();
   }
      }
   }
}

Block make__59048720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59048720 = block;
   block->owner = (Object)__59049000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59048720;

   return block;
};

void code__59049000() {
 code__59048720();
}

Block make__59049000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59049000 = block;
   block->owner = (Object)__59053720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59049000;

   return block;
};

Block __59360620;

Block __59360380;

Block __59399960;

void code__59399960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__71130240(),ack__network_59957000_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__59399960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59399960 = block;
   block->owner = (Object)__59360380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59399960;

   return block;
};

void code__59360380() {
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
                  src0 = address__outputs_52342100_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__71130500();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),address__outputs_52342100_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__71130400(),flag__outputs_52342080_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address__outputs_52342100_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__71130320();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59399960();
   }
      }
   }
}

Block make__59360380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59360380 = block;
   block->owner = (Object)__59360620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59360380;

   return block;
};

Block __59399360;

Block __59398820;

void code__59398820() {
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
                  src0 = _5833_59956540_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
                  src1 = make__71129980();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__71129900();
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
                        src0 = _5833_59956540_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__71129560();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__71129480();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_5833_59956540_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71129320(),_5832_59956840_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = value__outputs_52342180_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
      dst = cast_value(src0,get_type_vector(get_type_vector(get_type_signed(),8),1),dst);
      set_value_pos(pool_state);
   dst; }),_5834_60068440_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__59398820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59398820 = block;
   block->owner = (Object)__59399360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59398820;

   return block;
};

void code__59399360() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_59747980_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__71130160();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59398820();
   }
      }
   }
}

Block make__59399360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59399360 = block;
   block->owner = (Object)__59360620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59399360;

   return block;
};

void code__59360620() {
 code__59360380();
 code__59399360();
}

Block make__59360620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59360620 = block;
   block->owner = (Object)__59053720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59360620;

   return block;
};

Block __59050920;

void code__59050920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__71129080(),flag__outputs_52342080_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__59050920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59050920 = block;
   block->owner = (Object)__59053720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59050920;

   return block;
};

void code__59053720() {
 code__59053560();
 code__59052300();
   {
      Value cond = rst_59747980_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59050440();
   }
   else if (value2integer(fill__outputs_52244620_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value)) {
  code__59049000();
   }
   else if (value2integer(flag__outputs_52342080_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value)) {
  code__59360620();
   }
   else {
  code__59050920();
   }
      }
   }
}

Block make__59053720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59053720 = block;
   block->owner = (Object)__59751160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59053720;

   return block;
};

Block __70864520;

void code__70864520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = fill_59747920_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
            src1 = ({
                  Value src0, dst;
                  dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ack__inputs_51965280_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
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
            src0 = flag__inputs_51965300_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),fill__inputs_51898620_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__70864520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __70864520 = block;
   block->owner = (Object)__70864180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__70864520;

   return block;
};

Block __70864140;

void code__70864140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__1_51898640_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
            src1 = ({
                  Value src0, dst;
                  dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ack__network_59957000_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
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
            src0 = flag__outputs_52342080_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),fill__outputs_52244620_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__70864140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __70864140 = block;
   block->owner = (Object)__70863760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__70864140;

   return block;
};

Block __70850060;

void code__70850060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_59748000_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,clk_59733180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_59747980_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,rst_59733160_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(req_59747940_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,req_59733140_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_59748000_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,clk_52708520_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_59747980_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,rst_52708500_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__0_51898660_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,req_52708420_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__inputs_51965280_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,ack__fill_59957040_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__70850060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __70850060 = block;
   block->owner = (Object)__70863600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__70850060;

   return block;
};

Block __70850000;

void code__70850000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__layer_59841180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,ack__0_51898660_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__layer_53116080_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,ack__1_51898640_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__70850000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __70850000 = block;
   block->owner = (Object)__70863400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__70850000;

   return block;
};

Block __52921200;

Block __53143380;

void code__53143380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_52713000_channel__inputs_5889_52407860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,make_ref_rangeS(mem_52757080_channel__inputs_5889_52407860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800,value2integer(abus__w_52712840_channel__inputs_5889_52407860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value),value2integer(abus__w_52712840_channel__inputs_5889_52407860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__53143380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53143380 = block;
   block->owner = (Object)__52921200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53143380;

   return block;
};

void code__52921200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_52757080_channel__inputs_5889_52407860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
            idx = value2integer(abus__r_52712920_channel__inputs_5889_52407860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_52644540_channel__inputs_5889_52407860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_52582240_channel__inputs_5889_52407860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53143380();
   }
      }
   }
}

Block make__52921200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52921200 = block;
   block->owner = (Object)__53390860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52921200;

   return block;
};

Block __70861540;

void code__70861540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_52582240_channel__inputs_5889_52407860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,_58105_51965260_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__70861540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __70861540 = block;
   block->owner = (Object)__70861380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__70861540;

   return block;
};

Block __70861340;

void code__70861340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58105_51965260_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,trig__w_52582240_channel__inputs_5889_52407860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__70861340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __70861340 = block;
   block->owner = (Object)__70861180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__70861340;

   return block;
};

Block __70860820;

void code__70860820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_52712840_channel__inputs_5889_52407860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,_58106_51965180_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__70860820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __70860820 = block;
   block->owner = (Object)__70885120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__70860820;

   return block;
};

Block __70885080;

void code__70885080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58106_51965180_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,abus__w_52712840_channel__inputs_5889_52407860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__70885080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __70885080 = block;
   block->owner = (Object)__70884860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__70885080;

   return block;
};

Block __70884440;

void code__70884440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_52713000_channel__inputs_5889_52407860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,_58107_52244640_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__70884440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __70884440 = block;
   block->owner = (Object)__70884120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__70884440;

   return block;
};

Block __70884060;

void code__70884060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58107_52244640_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,dbus__w_52713000_channel__inputs_5889_52407860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__70884060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __70884060 = block;
   block->owner = (Object)__70883780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__70884060;

   return block;
};

Block __70883060;

void code__70883060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_52644540_channel__inputs_5889_52407860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,_58103_59841220_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__70883060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __70883060 = block;
   block->owner = (Object)__70898980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__70883060;

   return block;
};

Block __70883000;

void code__70883000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58101_59841160_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,trig__r_52582380_channel__inputs_5889_52407860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58102_59841080_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,abus__r_52712920_channel__inputs_5889_52407860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__70883000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __70883000 = block;
   block->owner = (Object)__70898800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__70883000;

   return block;
};

Block __70897460;

void code__70897460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_49057480_channel__outputs_58118_53390740_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,_58128_52408400_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__70897460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __70897460 = block;
   block->owner = (Object)__70897240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__70897460;

   return block;
};

Block __70897200;

void code__70897200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58128_52408400_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,reg__0_49057480_channel__outputs_58118_53390740_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__70897200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __70897200 = block;
   block->owner = (Object)__70896940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__70897200;

   return block;
};

Block __70917860;

void code__70917860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_49057480_channel__outputs_58118_53390740_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,_58120_53306040_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__70917860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __70917860 = block;
   block->owner = (Object)__70917640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__70917860;

   return block;
};

Block __70917600;

void code__70917600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58120_53306040_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,reg__0_49057480_channel__outputs_58118_53390740_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__70917600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __70917600 = block;
   block->owner = (Object)__70917360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__70917600;

   return block;
};

Block __70915440;

void code__70915440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_48866760_rinc_58127_48867380_channel__outputs_58118_53390740_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,_58129_52408280_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__70915440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __70915440 = block;
   block->owner = (Object)__70915220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__70915440;

   return block;
};

Block __70915180;

void code__70915180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58129_52408280_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,abus__r_48866760_rinc_58127_48867380_channel__outputs_58118_53390740_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__70915180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __70915180 = block;
   block->owner = (Object)__70915020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__70915180;

   return block;
};

Block __70912100;

void code__70912100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_51735980_channel__a0_58141_49573120_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,_58143_59971600_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__70912100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __70912100 = block;
   block->owner = (Object)__70911760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__70912100;

   return block;
};

Block __70911720;

void code__70911720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58143_59971600_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,reg__0_51735980_channel__a0_58141_49573120_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__70911720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __70911720 = block;
   block->owner = (Object)__70911480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__70911720;

   return block;
};

Block __70909980;

void code__70909980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_51898800_channel__a0_58141_49573120_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,_58144_60071460_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__70909980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __70909980 = block;
   block->owner = (Object)__70950640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__70909980;

   return block;
};

Block __70950560;

void code__70950560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58144_60071460_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,reg__1_51898800_channel__a0_58141_49573120_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__70950560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __70950560 = block;
   block->owner = (Object)__70950240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__70950560;

   return block;
};

Block __70983360;

void code__70983360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_50680800_rinc_58153_50681700_channel__a0_58141_49573120_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,_58156_53115660_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__70983360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __70983360 = block;
   block->owner = (Object)__70983180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__70983360;

   return block;
};

Block __70983140;

void code__70983140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58156_53115660_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,abus__r_50680800_rinc_58153_50681700_channel__a0_58141_49573120_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__70983140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __70983140 = block;
   block->owner = (Object)__70982920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__70983140;

   return block;
};

Block __70949280;

void code__70949280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_51735980_channel__a0_58141_49573120_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,_58154_52906580_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_51898800_channel__a0_58141_49573120_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->c_value,_58155_53116160_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
      set_value_pos(pool_state);
   }
}

Block make__70949280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __70949280 = block;
   block->owner = (Object)__70982740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__70949280;

   return block;
};

Value make__71112720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71112600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71112500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__71112380() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__71112300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71112180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__71112080() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__71112000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71111780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__71111700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71111620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71111400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__71111300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__71111100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71111000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__71110960() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__71110640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__71110520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__71110400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71110160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__71110040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71109880() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__71109420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71109280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__71109140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__71109080() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__71108780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__71108720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__71108560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71108300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71108220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__71108120() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__71108060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71107980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__71107880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__71107760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__71107680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71107600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71107340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__71107140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__71106980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71106840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__71106740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__71130840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__71130780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__71130500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__71130400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71130320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__71130240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71130160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__71129980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__71129900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__71129560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__71129480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__71129320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__71129080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope sigmoid__neural__network_58_84_52408180;

SignalI ack__0_51898660_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeack__0_51898660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__0_51898660_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_84_52408180;
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

SignalI ack__1_51898640_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeack__1_51898640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__1_51898640_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_84_52408180;
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

SignalI fill__inputs_51898620_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makefill__inputs_51898620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill__inputs_51898620_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_84_52408180;
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

SignalI value__inputs_51965400_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makevalue__inputs_51965400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__inputs_51965400_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_84_52408180;
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

SignalI address__inputs_51965320_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeaddress__inputs_51965320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address__inputs_51965320_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_84_52408180;
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

SignalI flag__inputs_51965300_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeflag__inputs_51965300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__inputs_51965300_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_84_52408180;
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

SignalI ack__inputs_51965280_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeack__inputs_51965280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__inputs_51965280_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_84_52408180;
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

SignalI _58105_51965260_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI make_58105_51965260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58105_51965260_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_84_52408180;
   signalI->name = ":105";
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

SignalI _58106_51965180_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI make_58106_51965180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58106_51965180_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_84_52408180;
   signalI->name = ":106";
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

SignalI _58107_52244640_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI make_58107_52244640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58107_52244640_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_84_52408180;
   signalI->name = ":107";
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

SignalI fill__outputs_52244620_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makefill__outputs_52244620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill__outputs_52244620_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_84_52408180;
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

SignalI value__outputs_52342180_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makevalue__outputs_52342180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__outputs_52342180_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_84_52408180;
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

SignalI address__outputs_52342100_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeaddress__outputs_52342100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address__outputs_52342100_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_84_52408180;
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

SignalI flag__outputs_52342080_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeflag__outputs_52342080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__outputs_52342080_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_84_52408180;
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

SignalI _58128_52408400_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI make_58128_52408400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58128_52408400_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_84_52408180;
   signalI->name = ":128";
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

SignalI _58129_52408280_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI make_58129_52408280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58129_52408280_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_84_52408180;
   signalI->name = ":129";
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

SystemI layer0_60071340;

SystemI makelayer0_60071340() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer0_60071340 = systemI;
   systemI->owner = (Object)sigmoid__neural__network_58_84_52408180;
   systemI->name = "layer0";
   systemI->system = layer0_58_841_59735240;

   return systemI;
};

SystemI layer1_53305780;

SystemI makelayer1_53305780() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer1_53305780 = systemI;
   systemI->owner = (Object)sigmoid__neural__network_58_84_52408180;
   systemI->name = "layer1";
   systemI->system = layer1_58_841_52694860;

   return systemI;
};

Scope channel__inputs_5889_52407860;

SignalI trig__r_52582380_channel__inputs_5889_52407860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI maketrig__r_52582380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_52582380_channel__inputs_5889_52407860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__inputs_5889_52407860;
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

SignalI trig__w_52582240_channel__inputs_5889_52407860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI maketrig__w_52582240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_52582240_channel__inputs_5889_52407860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__inputs_5889_52407860;
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

SignalI dbus__r_52644540_channel__inputs_5889_52407860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makedbus__r_52644540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_52644540_channel__inputs_5889_52407860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__inputs_5889_52407860;
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

SignalI dbus__w_52713000_channel__inputs_5889_52407860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makedbus__w_52713000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_52713000_channel__inputs_5889_52407860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__inputs_5889_52407860;
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

SignalI abus__r_52712920_channel__inputs_5889_52407860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeabus__r_52712920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_52712920_channel__inputs_5889_52407860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__inputs_5889_52407860;
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

SignalI abus__w_52712840_channel__inputs_5889_52407860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeabus__w_52712840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_52712840_channel__inputs_5889_52407860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__inputs_5889_52407860;
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

SignalI mem_52757080_channel__inputs_5889_52407860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makemem_52757080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_52757080_channel__inputs_5889_52407860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__inputs_5889_52407860;
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

Scope raddr_5890_52407560;

Scope makeraddr_5890_52407560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5890_52407560 = scope;
   scope->owner = (Object)channel__inputs_5889_52407860;
   scope->name = "raddr:90";
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

Scope waddr_5895_52407120;

Scope makewaddr_5895_52407120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5895_52407120 = scope;
   scope->owner = (Object)channel__inputs_5889_52407860;
   scope->name = "waddr:95";
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

Scope rinc_58100_52406620;

Behavior __70898980;

Behavior make__70898980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __70898980 = behavior;
   behavior->owner = (Object)rinc_58100_52406620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_52644540_channel__inputs_5889_52407860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   dbus__r_52644540_channel__inputs_5889_52407860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   dbus__r_52644540_channel__inputs_5889_52407860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(dbus__r_52644540_channel__inputs_5889_52407860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,dbus__r_52644540_channel__inputs_5889_52407860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
dbus__r_52644540_channel__inputs_5889_52407860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[dbus__r_52644540_channel__inputs_5889_52407860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__70883060();

   return behavior;
}

Behavior __70898800;

Behavior make__70898800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __70898800 = behavior;
   behavior->owner = (Object)rinc_58100_52406620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58101_59841160_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   _58101_59841160_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   _58101_59841160_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(_58101_59841160_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,_58101_59841160_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
_58101_59841160_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[_58101_59841160_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,_58102_59841080_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   _58102_59841080_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   _58102_59841080_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(_58102_59841080_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,_58102_59841080_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
_58102_59841080_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[_58102_59841080_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__70883000();

   return behavior;
}

Scope makerinc_58100_52406620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58100_52406620 = scope;
   scope->owner = (Object)channel__inputs_5889_52407860;
   scope->name = "rinc:100";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__70898980();
   scope->behaviors[1] = make__70898800();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58104_52584100;

Scope makewinc_58104_52584100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58104_52584100 = scope;
   scope->owner = (Object)channel__inputs_5889_52407860;
   scope->name = "winc:104";
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

Scope rdec_58108_52583680;

Scope makerdec_58108_52583680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58108_52583680 = scope;
   scope->owner = (Object)channel__inputs_5889_52407860;
   scope->name = "rdec:108";
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

Scope wdec_58113_52583160;

Scope makewdec_58113_52583160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58113_52583160 = scope;
   scope->owner = (Object)channel__inputs_5889_52407860;
   scope->name = "wdec:113";
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

Behavior __53390860;

Behavior make__53390860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53390860 = behavior;
   behavior->owner = (Object)channel__inputs_5889_52407860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_59748000_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   clk_59748000_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_neg += 1;
   clk_59748000_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->neg = realloc(clk_59748000_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->neg,clk_59748000_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_neg*sizeof(Object));
clk_59748000_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->neg[clk_59748000_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_neg-1] = (Object)behavior;
   behavior->block = make__52921200();

   return behavior;
}

Behavior __70861380;

Behavior make__70861380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __70861380 = behavior;
   behavior->owner = (Object)channel__inputs_5889_52407860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_52582240_channel__inputs_5889_52407860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   trig__w_52582240_channel__inputs_5889_52407860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   trig__w_52582240_channel__inputs_5889_52407860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(trig__w_52582240_channel__inputs_5889_52407860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,trig__w_52582240_channel__inputs_5889_52407860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
trig__w_52582240_channel__inputs_5889_52407860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[trig__w_52582240_channel__inputs_5889_52407860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__70861540();

   return behavior;
}

Behavior __70861180;

Behavior make__70861180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __70861180 = behavior;
   behavior->owner = (Object)channel__inputs_5889_52407860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58105_51965260_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   _58105_51965260_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   _58105_51965260_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(_58105_51965260_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,_58105_51965260_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
_58105_51965260_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[_58105_51965260_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__70861340();

   return behavior;
}

Behavior __70885120;

Behavior make__70885120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __70885120 = behavior;
   behavior->owner = (Object)channel__inputs_5889_52407860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_52712840_channel__inputs_5889_52407860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   abus__w_52712840_channel__inputs_5889_52407860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   abus__w_52712840_channel__inputs_5889_52407860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(abus__w_52712840_channel__inputs_5889_52407860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,abus__w_52712840_channel__inputs_5889_52407860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
abus__w_52712840_channel__inputs_5889_52407860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[abus__w_52712840_channel__inputs_5889_52407860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__70860820();

   return behavior;
}

Behavior __70884860;

Behavior make__70884860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __70884860 = behavior;
   behavior->owner = (Object)channel__inputs_5889_52407860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58106_51965180_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   _58106_51965180_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   _58106_51965180_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(_58106_51965180_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,_58106_51965180_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
_58106_51965180_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[_58106_51965180_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__70885080();

   return behavior;
}

Behavior __70884120;

Behavior make__70884120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __70884120 = behavior;
   behavior->owner = (Object)channel__inputs_5889_52407860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_52713000_channel__inputs_5889_52407860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   dbus__w_52713000_channel__inputs_5889_52407860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   dbus__w_52713000_channel__inputs_5889_52407860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(dbus__w_52713000_channel__inputs_5889_52407860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,dbus__w_52713000_channel__inputs_5889_52407860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
dbus__w_52713000_channel__inputs_5889_52407860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[dbus__w_52713000_channel__inputs_5889_52407860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__70884440();

   return behavior;
}

Behavior __70883780;

Behavior make__70883780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __70883780 = behavior;
   behavior->owner = (Object)channel__inputs_5889_52407860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58107_52244640_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   _58107_52244640_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   _58107_52244640_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(_58107_52244640_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,_58107_52244640_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
_58107_52244640_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[_58107_52244640_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__70884060();

   return behavior;
}

Scope makechannel__inputs_5889_52407860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__inputs_5889_52407860 = scope;
   scope->owner = (Object)sigmoid__neural__network_58_84_52408180;
   scope->name = "channel_inputs:89";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_52582380();
   scope->inners[1] = maketrig__w_52582240();
   scope->inners[2] = makedbus__r_52644540();
   scope->inners[3] = makedbus__w_52713000();
   scope->inners[4] = makeabus__r_52712920();
   scope->inners[5] = makeabus__w_52712840();
   scope->inners[6] = makemem_52757080();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_5890_52407560();
   scope->scopes[1] = makewaddr_5895_52407120();
   scope->scopes[2] = makerinc_58100_52406620();
   scope->scopes[3] = makewinc_58104_52584100();
   scope->scopes[4] = makerdec_58108_52583680();
   scope->scopes[5] = makewdec_58113_52583160();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53390860();
   scope->behaviors[1] = make__70861380();
   scope->behaviors[2] = make__70861180();
   scope->behaviors[3] = make__70885120();
   scope->behaviors[4] = make__70884860();
   scope->behaviors[5] = make__70884120();
   scope->behaviors[6] = make__70883780();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__outputs_58118_53390740;

SignalI reg__0_49057480_channel__outputs_58118_53390740_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makereg__0_49057480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_49057480_channel__outputs_58118_53390740_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__outputs_58118_53390740;
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

Scope anum_58119_53390440;

Behavior __70917640;

Behavior make__70917640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __70917640 = behavior;
   behavior->owner = (Object)anum_58119_53390440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_49057480_channel__outputs_58118_53390740_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   reg__0_49057480_channel__outputs_58118_53390740_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   reg__0_49057480_channel__outputs_58118_53390740_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(reg__0_49057480_channel__outputs_58118_53390740_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,reg__0_49057480_channel__outputs_58118_53390740_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
reg__0_49057480_channel__outputs_58118_53390740_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[reg__0_49057480_channel__outputs_58118_53390740_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__70917860();

   return behavior;
}

Behavior __70917360;

Behavior make__70917360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __70917360 = behavior;
   behavior->owner = (Object)anum_58119_53390440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58120_53306040_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   _58120_53306040_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   _58120_53306040_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(_58120_53306040_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,_58120_53306040_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
_58120_53306040_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[_58120_53306040_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__70917600();

   return behavior;
}

Scope makeanum_58119_53390440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58119_53390440 = scope;
   scope->owner = (Object)channel__outputs_58118_53390740;
   scope->name = "anum:119";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__70917640();
   scope->behaviors[1] = make__70917360();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope raddr_58121_48849120;

Scope makeraddr_58121_48849120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58121_48849120 = scope;
   scope->owner = (Object)channel__outputs_58118_53390740;
   scope->name = "raddr:121";
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

Scope waddr_58124_48869360;

Scope makewaddr_58124_48869360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58124_48869360 = scope;
   scope->owner = (Object)channel__outputs_58118_53390740;
   scope->name = "waddr:124";
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

Scope rinc_58127_48867380;

SignalI abus__r_48866760_rinc_58127_48867380_channel__outputs_58118_53390740_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeabus__r_48866760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48866760_rinc_58127_48867380_channel__outputs_58118_53390740_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)rinc_58127_48867380;
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

Behavior __70915220;

Behavior make__70915220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __70915220 = behavior;
   behavior->owner = (Object)rinc_58127_48867380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_48866760_rinc_58127_48867380_channel__outputs_58118_53390740_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   abus__r_48866760_rinc_58127_48867380_channel__outputs_58118_53390740_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   abus__r_48866760_rinc_58127_48867380_channel__outputs_58118_53390740_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(abus__r_48866760_rinc_58127_48867380_channel__outputs_58118_53390740_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,abus__r_48866760_rinc_58127_48867380_channel__outputs_58118_53390740_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
abus__r_48866760_rinc_58127_48867380_channel__outputs_58118_53390740_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[abus__r_48866760_rinc_58127_48867380_channel__outputs_58118_53390740_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__70915440();

   return behavior;
}

Behavior __70915020;

Behavior make__70915020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __70915020 = behavior;
   behavior->owner = (Object)rinc_58127_48867380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58129_52408280_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   _58129_52408280_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   _58129_52408280_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(_58129_52408280_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,_58129_52408280_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
_58129_52408280_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[_58129_52408280_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__70915180();

   return behavior;
}

Scope makerinc_58127_48867380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58127_48867380 = scope;
   scope->owner = (Object)channel__outputs_58118_53390740;
   scope->name = "rinc:127";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_48866760();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__70915220();
   scope->behaviors[1] = make__70915020();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58130_48866040;

SignalI abus__w_48865360_winc_58130_48866040_channel__outputs_58118_53390740_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeabus__w_48865360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48865360_winc_58130_48866040_channel__outputs_58118_53390740_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)winc_58130_48866040;
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

Scope makewinc_58130_48866040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58130_48866040 = scope;
   scope->owner = (Object)channel__outputs_58118_53390740;
   scope->name = "winc:130";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_48865360();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58133_48914060;

SignalI abus__r_48909660_rdec_58133_48914060_channel__outputs_58118_53390740_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeabus__r_48909660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48909660_rdec_58133_48914060_channel__outputs_58118_53390740_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)rdec_58133_48914060;
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

Scope makerdec_58133_48914060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58133_48914060 = scope;
   scope->owner = (Object)channel__outputs_58118_53390740;
   scope->name = "rdec:133";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_48909660();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58137_48908980;

SignalI abus__w_48907040_wdec_58137_48908980_channel__outputs_58118_53390740_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeabus__w_48907040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48907040_wdec_58137_48908980_channel__outputs_58118_53390740_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)wdec_58137_48908980;
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

Scope makewdec_58137_48908980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58137_48908980 = scope;
   scope->owner = (Object)channel__outputs_58118_53390740;
   scope->name = "wdec:137";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_48907040();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __70897240;

Behavior make__70897240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __70897240 = behavior;
   behavior->owner = (Object)channel__outputs_58118_53390740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_49057480_channel__outputs_58118_53390740_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   reg__0_49057480_channel__outputs_58118_53390740_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   reg__0_49057480_channel__outputs_58118_53390740_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(reg__0_49057480_channel__outputs_58118_53390740_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,reg__0_49057480_channel__outputs_58118_53390740_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
reg__0_49057480_channel__outputs_58118_53390740_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[reg__0_49057480_channel__outputs_58118_53390740_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__70897460();

   return behavior;
}

Behavior __70896940;

Behavior make__70896940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __70896940 = behavior;
   behavior->owner = (Object)channel__outputs_58118_53390740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58128_52408400_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   _58128_52408400_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   _58128_52408400_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(_58128_52408400_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,_58128_52408400_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
_58128_52408400_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[_58128_52408400_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__70897200();

   return behavior;
}

Scope makechannel__outputs_58118_53390740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__outputs_58118_53390740 = scope;
   scope->owner = (Object)sigmoid__neural__network_58_84_52408180;
   scope->name = "channel_outputs:118";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_49057480();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58119_53390440();
   scope->scopes[1] = makeraddr_58121_48849120();
   scope->scopes[2] = makewaddr_58124_48869360();
   scope->scopes[3] = makerinc_58127_48867380();
   scope->scopes[4] = makewinc_58130_48866040();
   scope->scopes[5] = makerdec_58133_48914060();
   scope->scopes[6] = makewdec_58137_48908980();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__70897240();
   scope->behaviors[1] = make__70896940();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__a0_58141_49573120;

SignalI reg__0_51735980_channel__a0_58141_49573120_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makereg__0_51735980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_51735980_channel__a0_58141_49573120_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__a0_58141_49573120;
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

SignalI reg__1_51898800_channel__a0_58141_49573120_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makereg__1_51898800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_51898800_channel__a0_58141_49573120_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)channel__a0_58141_49573120;
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

Scope anum_58142_49592400;

Behavior __70911760;

Behavior make__70911760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __70911760 = behavior;
   behavior->owner = (Object)anum_58142_49592400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_51735980_channel__a0_58141_49573120_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   reg__0_51735980_channel__a0_58141_49573120_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   reg__0_51735980_channel__a0_58141_49573120_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(reg__0_51735980_channel__a0_58141_49573120_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,reg__0_51735980_channel__a0_58141_49573120_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
reg__0_51735980_channel__a0_58141_49573120_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[reg__0_51735980_channel__a0_58141_49573120_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__70912100();

   return behavior;
}

Behavior __70911480;

Behavior make__70911480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __70911480 = behavior;
   behavior->owner = (Object)anum_58142_49592400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58143_59971600_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   _58143_59971600_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   _58143_59971600_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(_58143_59971600_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,_58143_59971600_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
_58143_59971600_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[_58143_59971600_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__70911720();

   return behavior;
}

Behavior __70950640;

Behavior make__70950640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __70950640 = behavior;
   behavior->owner = (Object)anum_58142_49592400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_51898800_channel__a0_58141_49573120_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   reg__1_51898800_channel__a0_58141_49573120_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   reg__1_51898800_channel__a0_58141_49573120_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(reg__1_51898800_channel__a0_58141_49573120_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,reg__1_51898800_channel__a0_58141_49573120_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
reg__1_51898800_channel__a0_58141_49573120_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[reg__1_51898800_channel__a0_58141_49573120_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__70909980();

   return behavior;
}

Behavior __70950240;

Behavior make__70950240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __70950240 = behavior;
   behavior->owner = (Object)anum_58142_49592400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58144_60071460_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   _58144_60071460_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   _58144_60071460_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(_58144_60071460_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,_58144_60071460_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
_58144_60071460_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[_58144_60071460_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__70950560();

   return behavior;
}

Scope makeanum_58142_49592400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58142_49592400 = scope;
   scope->owner = (Object)channel__a0_58141_49573120;
   scope->name = "anum:142";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__70911760();
   scope->behaviors[1] = make__70911480();
   scope->behaviors[2] = make__70950640();
   scope->behaviors[3] = make__70950240();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope raddr_58145_50660120;

Scope makeraddr_58145_50660120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58145_50660120 = scope;
   scope->owner = (Object)channel__a0_58141_49573120;
   scope->name = "raddr:145";
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

Scope waddr_58149_50682680;

Scope makewaddr_58149_50682680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58149_50682680 = scope;
   scope->owner = (Object)channel__a0_58141_49573120;
   scope->name = "waddr:149";
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

Scope rinc_58153_50681700;

SignalI abus__r_50680800_rinc_58153_50681700_channel__a0_58141_49573120_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeabus__r_50680800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50680800_rinc_58153_50681700_channel__a0_58141_49573120_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)rinc_58153_50681700;
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

Behavior __70983180;

Behavior make__70983180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __70983180 = behavior;
   behavior->owner = (Object)rinc_58153_50681700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_50680800_rinc_58153_50681700_channel__a0_58141_49573120_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   abus__r_50680800_rinc_58153_50681700_channel__a0_58141_49573120_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   abus__r_50680800_rinc_58153_50681700_channel__a0_58141_49573120_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(abus__r_50680800_rinc_58153_50681700_channel__a0_58141_49573120_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,abus__r_50680800_rinc_58153_50681700_channel__a0_58141_49573120_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
abus__r_50680800_rinc_58153_50681700_channel__a0_58141_49573120_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[abus__r_50680800_rinc_58153_50681700_channel__a0_58141_49573120_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__70983360();

   return behavior;
}

Behavior __70982920;

Behavior make__70982920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __70982920 = behavior;
   behavior->owner = (Object)rinc_58153_50681700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58156_53115660_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   _58156_53115660_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   _58156_53115660_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(_58156_53115660_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,_58156_53115660_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
_58156_53115660_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[_58156_53115660_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__70983140();

   return behavior;
}

Behavior __70982740;

Behavior make__70982740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __70982740 = behavior;
   behavior->owner = (Object)rinc_58153_50681700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_51735980_channel__a0_58141_49573120_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   reg__0_51735980_channel__a0_58141_49573120_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   reg__0_51735980_channel__a0_58141_49573120_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(reg__0_51735980_channel__a0_58141_49573120_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,reg__0_51735980_channel__a0_58141_49573120_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
reg__0_51735980_channel__a0_58141_49573120_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[reg__0_51735980_channel__a0_58141_49573120_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,reg__1_51898800_channel__a0_58141_49573120_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   reg__1_51898800_channel__a0_58141_49573120_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   reg__1_51898800_channel__a0_58141_49573120_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(reg__1_51898800_channel__a0_58141_49573120_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,reg__1_51898800_channel__a0_58141_49573120_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
reg__1_51898800_channel__a0_58141_49573120_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[reg__1_51898800_channel__a0_58141_49573120_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__70949280();

   return behavior;
}

Scope makerinc_58153_50681700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58153_50681700 = scope;
   scope->owner = (Object)channel__a0_58141_49573120;
   scope->name = "rinc:153";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_50680800();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__70983180();
   scope->behaviors[1] = make__70982920();
   scope->behaviors[2] = make__70982740();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58157_51508940;

SignalI abus__w_51508560_winc_58157_51508940_channel__a0_58141_49573120_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeabus__w_51508560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_51508560_winc_58157_51508940_channel__a0_58141_49573120_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)winc_58157_51508940;
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

Scope makewinc_58157_51508940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58157_51508940 = scope;
   scope->owner = (Object)channel__a0_58141_49573120;
   scope->name = "winc:157";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_51508560();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58161_51508440;

SignalI abus__r_51508020_rdec_58161_51508440_channel__a0_58141_49573120_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeabus__r_51508020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_51508020_rdec_58161_51508440_channel__a0_58141_49573120_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)rdec_58161_51508440;
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

Scope makerdec_58161_51508440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58161_51508440 = scope;
   scope->owner = (Object)channel__a0_58141_49573120;
   scope->name = "rdec:161";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_51508020();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58166_51507900;

SignalI abus__w_51507500_wdec_58166_51507900_channel__a0_58141_49573120_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800;

SignalI makeabus__w_51507500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_51507500_wdec_58166_51507900_channel__a0_58141_49573120_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800 = signalI;
   signalI->owner = (Object)wdec_58166_51507900;
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

Scope makewdec_58166_51507900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58166_51507900 = scope;
   scope->owner = (Object)channel__a0_58141_49573120;
   scope->name = "wdec:166";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_51507500();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope makechannel__a0_58141_49573120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__a0_58141_49573120 = scope;
   scope->owner = (Object)sigmoid__neural__network_58_84_52408180;
   scope->name = "channel_a0:141";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_51735980();
   scope->inners[1] = makereg__1_51898800();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58142_49592400();
   scope->scopes[1] = makeraddr_58145_50660120();
   scope->scopes[2] = makewaddr_58149_50682680();
   scope->scopes[3] = makerinc_58153_50681700();
   scope->scopes[4] = makewinc_58157_51508940();
   scope->scopes[5] = makerdec_58161_51508440();
   scope->scopes[6] = makewdec_58166_51507900();
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __53343600;

Behavior make__53343600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53343600 = behavior;
   behavior->owner = (Object)sigmoid__neural__network_58_84_52408180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_59748000_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   clk_59748000_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_pos += 1;
   clk_59748000_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->pos = realloc(clk_59748000_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->pos,clk_59748000_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_pos*sizeof(Object));
clk_59748000_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->pos[clk_59748000_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_pos-1] = (Object)behavior;
   behavior->block = make__53321920();

   return behavior;
}

Behavior __59054000;

Behavior make__59054000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59054000 = behavior;
   behavior->owner = (Object)sigmoid__neural__network_58_84_52408180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_59748000_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   clk_59748000_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_pos += 1;
   clk_59748000_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->pos = realloc(clk_59748000_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->pos,clk_59748000_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_pos*sizeof(Object));
clk_59748000_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->pos[clk_59748000_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_pos-1] = (Object)behavior;
   behavior->block = make__53343220();

   return behavior;
}

Behavior __59751160;

Behavior make__59751160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59751160 = behavior;
   behavior->owner = (Object)sigmoid__neural__network_58_84_52408180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_59748000_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   clk_59748000_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_pos += 1;
   clk_59748000_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->pos = realloc(clk_59748000_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->pos,clk_59748000_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_pos*sizeof(Object));
clk_59748000_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->pos[clk_59748000_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_pos-1] = (Object)behavior;
   behavior->block = make__59053720();

   return behavior;
}

Behavior __70864180;

Behavior make__70864180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __70864180 = behavior;
   behavior->owner = (Object)sigmoid__neural__network_58_84_52408180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,fill_59747920_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   fill_59747920_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   fill_59747920_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(fill_59747920_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,fill_59747920_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
fill_59747920_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[fill_59747920_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__inputs_51965280_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   ack__inputs_51965280_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   ack__inputs_51965280_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(ack__inputs_51965280_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,ack__inputs_51965280_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
ack__inputs_51965280_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[ack__inputs_51965280_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,flag__inputs_51965300_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   flag__inputs_51965300_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   flag__inputs_51965300_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(flag__inputs_51965300_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,flag__inputs_51965300_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
flag__inputs_51965300_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[flag__inputs_51965300_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__70864520();

   return behavior;
}

Behavior __70863760;

Behavior make__70863760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __70863760 = behavior;
   behavior->owner = (Object)sigmoid__neural__network_58_84_52408180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__1_51898640_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   ack__1_51898640_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   ack__1_51898640_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(ack__1_51898640_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,ack__1_51898640_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
ack__1_51898640_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[ack__1_51898640_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__network_59957000_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   ack__network_59957000_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   ack__network_59957000_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(ack__network_59957000_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,ack__network_59957000_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
ack__network_59957000_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[ack__network_59957000_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,flag__outputs_52342080_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   flag__outputs_52342080_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   flag__outputs_52342080_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(flag__outputs_52342080_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,flag__outputs_52342080_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
flag__outputs_52342080_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[flag__outputs_52342080_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__70864140();

   return behavior;
}

Behavior __70863600;

Behavior make__70863600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __70863600 = behavior;
   behavior->owner = (Object)sigmoid__neural__network_58_84_52408180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_59748000_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   clk_59748000_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   clk_59748000_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(clk_59748000_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,clk_59748000_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
clk_59748000_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[clk_59748000_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_59747980_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   rst_59747980_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   rst_59747980_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(rst_59747980_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,rst_59747980_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
rst_59747980_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[rst_59747980_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,req_59747940_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   req_59747940_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   req_59747940_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(req_59747940_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,req_59747940_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
req_59747940_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[req_59747940_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,ack__0_51898660_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   ack__0_51898660_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   ack__0_51898660_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(ack__0_51898660_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,ack__0_51898660_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
ack__0_51898660_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[ack__0_51898660_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__inputs_51965280_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   ack__inputs_51965280_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   ack__inputs_51965280_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(ack__inputs_51965280_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,ack__inputs_51965280_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
ack__inputs_51965280_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[ack__inputs_51965280_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__70850060();

   return behavior;
}

Behavior __70863400;

Behavior make__70863400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __70863400 = behavior;
   behavior->owner = (Object)sigmoid__neural__network_58_84_52408180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__layer_59841180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   ack__layer_59841180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   ack__layer_59841180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(ack__layer_59841180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,ack__layer_59841180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
ack__layer_59841180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[ack__layer_59841180_layer0_58_841_59735240_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__layer_53116080_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800);
   ack__layer_53116080_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any += 1;
   ack__layer_53116080_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any = realloc(ack__layer_53116080_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any,ack__layer_53116080_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any*sizeof(Object));
ack__layer_53116080_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->any[ack__layer_53116080_layer1_58_841_52694860_sigmoid__neural__network_58_84_52408180_sigmoid__neural__network_58_840_59750680______58_84_51099120______58_840_70256800->num_any-1] = (Object)behavior;
   behavior->block = make__70850000();

   return behavior;
}

Scope makesigmoid__neural__network_58_84_52408180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   sigmoid__neural__network_58_84_52408180 = scope;
   scope->owner = (Object)sigmoid__neural__network_58_840_59750680;
   scope->name = "sigmoid_neural_network:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makelayer0_60071340();
   scope->systemIs[1] = makelayer1_53305780();
   scope->num_inners = 16;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeack__0_51898660();
   scope->inners[1] = makeack__1_51898640();
   scope->inners[2] = makefill__inputs_51898620();
   scope->inners[3] = makevalue__inputs_51965400();
   scope->inners[4] = makeaddress__inputs_51965320();
   scope->inners[5] = makeflag__inputs_51965300();
   scope->inners[6] = makeack__inputs_51965280();
   scope->inners[7] = make_58105_51965260();
   scope->inners[8] = make_58106_51965180();
   scope->inners[9] = make_58107_52244640();
   scope->inners[10] = makefill__outputs_52244620();
   scope->inners[11] = makevalue__outputs_52342180();
   scope->inners[12] = makeaddress__outputs_52342100();
   scope->inners[13] = makeflag__outputs_52342080();
   scope->inners[14] = make_58128_52408400();
   scope->inners[15] = make_58129_52408280();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__inputs_5889_52407860();
   scope->scopes[1] = makechannel__outputs_58118_53390740();
   scope->scopes[2] = makechannel__a0_58141_49573120();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53343600();
   scope->behaviors[1] = make__59054000();
   scope->behaviors[2] = make__59751160();
   scope->behaviors[3] = make__70864180();
   scope->behaviors[4] = make__70863760();
   scope->behaviors[5] = make__70863600();
   scope->behaviors[6] = make__70863400();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makesigmoid__neural__network_58_840_59750680() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   sigmoid__neural__network_58_840_59750680 = systemT;
systemT->owner = NULL;
   systemT->name = "sigmoid_neural_network:T0";
   systemT->num_inputs = 5;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_59748000();
   systemT->inputs[1] = makerst_59747980();
   systemT->inputs[2] = makereq_59747940();
   systemT->inputs[3] = makefill_59747920();
   systemT->inputs[4] = make_5810_59957120();
   systemT->num_outputs = 7;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__fill_59957040();
   systemT->outputs[1] = makeack__network_59957000();
   systemT->outputs[2] = make_588_59956960();
   systemT->outputs[3] = make_589_59956860();
   systemT->outputs[4] = make_5832_59956840();
   systemT->outputs[5] = make_5833_59956540();
   systemT->outputs[6] = make_5834_60068440();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makesigmoid__neural__network_58_84_52408180();

   return systemT;
}