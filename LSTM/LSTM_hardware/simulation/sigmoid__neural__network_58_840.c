#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT sigmoid__neural__network_58_840_56864280;

SignalI clk_56901000_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeclk_56901000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_56901000_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_840_56864280;
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

SignalI rst_56900980_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makerst_56900980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_56900980_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_840_56864280;
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

SignalI req_56900940_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makereq_56900940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_56900940_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_840_56864280;
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

SignalI fill_56900920_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makefill_56900920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_56900920_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_840_56864280;
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

SignalI _5810_57323740_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI make_5810_57323740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5810_57323740_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_840_56864280;
   signalI->name = ":10";
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

SignalI ack__fill_57323660_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeack__fill_57323660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__fill_57323660_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_840_56864280;
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

SignalI ack__network_57323580_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeack__network_57323580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__network_57323580_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_840_56864280;
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

SignalI _588_57323340_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI make_588_57323340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _588_57323340_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_840_56864280;
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

SignalI _589_57323060_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI make_589_57323060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _589_57323060_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_840_56864280;
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

SignalI _5829_57554900_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI make_5829_57554900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5829_57554900_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_840_56864280;
   signalI->name = ":29";
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

SignalI _5830_57554680_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI make_5830_57554680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5830_57554680_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_840_56864280;
   signalI->name = ":30";
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

Block __53828800;

Block __53828400;

void code__53828400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76638000(),ack__0_57336840_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76637940(),ack__1_57336820_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__53828400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53828400 = block;
   block->owner = (Object)__53828800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53828400;

   return block;
};

void code__53828800() {
   {
      Value cond = rst_56900980_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53828400();
   }
      }
   }
}

Block make__53828800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53828800 = block;
   block->owner = (Object)__53826360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53828800;

   return block;
};

Block __53826220;

Block __53826020;

Block __53825060;

void code__53825060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76637780(),_58117_57481220_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__53825060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53825060 = block;
   block->owner = (Object)__53826020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53825060;

   return block;
};

void code__53826020() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_56900980_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__76637860();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53825060();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76637720(),_58116_57481300_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__53826020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53826020 = block;
   block->owner = (Object)__53826220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53826020;

   return block;
};

Block __53823780;

Block __53822900;

void code__53822900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76637560(),_589_57323060_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__53822900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53822900 = block;
   block->owner = (Object)__53823780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53822900;

   return block;
};

void code__53823780() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_56900980_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__76637640();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53822900();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76637500(),_588_57323340_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__53823780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53823780 = block;
   block->owner = (Object)__53826220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53823780;

   return block;
};

Block __50969840;

void code__50969840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76637400(),address__inputs_57481360_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76637340(),flag__inputs_57481340_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76637260(),ack__inputs_57481320_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__50969840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50969840 = block;
   block->owner = (Object)__53826220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50969840;

   return block;
};

Block __50967560;

Block __50966920;

Block __50966420;

Block __50962440;

Block __52657780;

void code__52657780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_5810_57323740_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,value__inputs_57481440_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__76636840(),flag__inputs_57481340_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__52657780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52657780 = block;
   block->owner = (Object)__50962440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52657780;

   return block;
};

void code__50962440() {
 code__52657780();
}

Block make__50962440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50962440 = block;
   block->owner = (Object)__50966420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50962440;

   return block;
};

Block __50966160;

void code__50966160() {
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
                  src0 = _589_57323060_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
                  src1 = make__76636740();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__76636700();
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
                        src0 = _589_57323060_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__76636440();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__76636360();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_589_57323060_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76636220(),_588_57323340_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__50966160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50966160 = block;
   block->owner = (Object)__50966420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50966160;

   return block;
};

void code__50966420() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _588_57323340_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__76637000();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50962440();
   }
   else {
  code__50966160();
   }
      }
   }
}

Block make__50966420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50966420 = block;
   block->owner = (Object)__50966920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50966420;

   return block;
};

void code__50966920() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_56900980_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__76637100();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50966420();
   }
      }
   }
}

Block make__50966920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50966920 = block;
   block->owner = (Object)__50967560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50966920;

   return block;
};

void code__50967560() {
 code__50966920();
}

Block make__50967560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50967560 = block;
   block->owner = (Object)__53826220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50967560;

   return block;
};

Block __54749720;

Block __54749420;

Block __54771620;

void code__54771620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__76791320(),ack__inputs_57481320_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__54771620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54771620 = block;
   block->owner = (Object)__54749420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54771620;

   return block;
};

void code__54749420() {
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
                  src0 = address__inputs_57481360_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__76791580();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),address__inputs_57481360_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__76791480(),flag__inputs_57481340_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address__inputs_57481360_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__76791400();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54771620();
   }
      }
   }
}

Block make__54749420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54749420 = block;
   block->owner = (Object)__54749720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54749420;

   return block;
};

Block __54770840;

Block __54769800;

void code__54769800() {
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
                  src0 = _58117_57481220_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
                  src1 = make__76791120();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__76791080();
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
                        src0 = _58117_57481220_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__76790840();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__76790760();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58117_57481220_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76790640(),_58116_57481300_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__inputs_57481440_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,_58118_57527580_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__54769800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54769800 = block;
   block->owner = (Object)__54770840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54769800;

   return block;
};

void code__54770840() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_56900980_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__76791240();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54769800();
   }
      }
   }
}

Block make__54770840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54770840 = block;
   block->owner = (Object)__54749720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54770840;

   return block;
};

void code__54749720() {
 code__54749420();
 code__54770840();
}

Block make__54749720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54749720 = block;
   block->owner = (Object)__53826220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54749720;

   return block;
};

Block __50970580;

void code__50970580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76790460(),flag__inputs_57481340_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__50970580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50970580 = block;
   block->owner = (Object)__53826220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50970580;

   return block;
};

void code__53826220() {
 code__53826020();
 code__53823780();
   {
      Value cond = rst_56900980_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50969840();
   }
   else if (value2integer(fill__inputs_57336800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value)) {
  code__50967560();
   }
   else if (value2integer(flag__inputs_57481340_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value)) {
  code__54749720();
   }
   else {
  code__50970580();
   }
      }
   }
}

Block make__53826220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53826220 = block;
   block->owner = (Object)__55492140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53826220;

   return block;
};

Block __55492000;

Block __55491360;

Block __55490600;

void code__55490600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76790300(),_5830_57554680_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__55490600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55490600 = block;
   block->owner = (Object)__55491360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55490600;

   return block;
};

void code__55491360() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_56900980_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__76790380();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55490600();
   }
      }
   }
}

Block make__55491360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55491360 = block;
   block->owner = (Object)__55492000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55491360;

   return block;
};

Block __55489120;

Block __55487900;

void code__55487900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76790140(),_58140_57677420_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__55487900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55487900 = block;
   block->owner = (Object)__55489120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55487900;

   return block;
};

void code__55489120() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_56900980_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__76790220();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55487900();
   }
      }
   }
}

Block make__55489120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55489120 = block;
   block->owner = (Object)__55492000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55489120;

   return block;
};

Block __55485340;

void code__55485340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76790020(),address__outputs_57582020_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76789960(),flag__outputs_57582000_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76789880(),ack__network_57323580_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__55485340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55485340 = block;
   block->owner = (Object)__55492000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55485340;

   return block;
};

Block __55507700;

Block __55507140;

Block __55506440;

Block __55505520;

void code__55505520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58139_57677500_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,value__outputs_57582100_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__55505520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55505520 = block;
   block->owner = (Object)__55506440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55505520;

   return block;
};

void code__55506440() {
{
      Value value = _58140_57677420_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__76789540())) {
    code__55505520();
         }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76789400(),flag__outputs_57582000_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
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
                  src0 = _58140_57677420_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
                  src1 = make__76789300();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__76789260();
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
                        src0 = _58140_57677420_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__76789020();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__76788960();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58140_57677420_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__55506440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55506440 = block;
   block->owner = (Object)__55507140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55506440;

   return block;
};

void code__55507140() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_56900980_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__76789660();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55506440();
   }
      }
   }
}

Block make__55507140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55507140 = block;
   block->owner = (Object)__55507700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55507140;

   return block;
};

void code__55507700() {
 code__55507140();
}

Block make__55507700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55507700 = block;
   block->owner = (Object)__55492000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55507700;

   return block;
};

Block __56044200;

Block __56043860;

Block __56041980;

void code__56041980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__76788420(),ack__network_57323580_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__56041980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56041980 = block;
   block->owner = (Object)__56043860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56041980;

   return block;
};

void code__56043860() {
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
                  src0 = address__outputs_57582020_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__76788680();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),address__outputs_57582020_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__76788580(),flag__outputs_57582000_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address__outputs_57582020_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__76788500();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56041980();
   }
      }
   }
}

Block make__56043860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56043860 = block;
   block->owner = (Object)__56044200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56043860;

   return block;
};

Block __56065380;

Block __56064420;

Block __56063680;

void code__56063680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__outputs_57582100_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,_5829_57554900_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__56063680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56063680 = block;
   block->owner = (Object)__56064420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56063680;

   return block;
};

void code__56064420() {
{
      Value value = _5830_57554680_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__76788220())) {
    code__56063680();
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
                  src0 = _5830_57554680_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
                  src1 = make__76788040();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__76788000();
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
                        src0 = _5830_57554680_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__76787720();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__76787600();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_5830_57554680_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__56064420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56064420 = block;
   block->owner = (Object)__56065380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56064420;

   return block;
};

void code__56065380() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_56900980_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__76788340();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56064420();
   }
      }
   }
}

Block make__56065380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56065380 = block;
   block->owner = (Object)__56044200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56065380;

   return block;
};

void code__56044200() {
 code__56043860();
 code__56065380();
}

Block make__56044200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56044200 = block;
   block->owner = (Object)__55492000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56044200;

   return block;
};

Block __55486320;

void code__55486320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__76787440(),flag__outputs_57582000_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__55486320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55486320 = block;
   block->owner = (Object)__55492000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55486320;

   return block;
};

void code__55492000() {
 code__55491360();
 code__55489120();
   {
      Value cond = rst_56900980_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55485340();
   }
   else if (value2integer(fill__outputs_57527560_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value)) {
  code__55507700();
   }
   else if (value2integer(flag__outputs_57582000_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value)) {
  code__56044200();
   }
   else {
  code__55486320();
   }
      }
   }
}

Block make__55492000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55492000 = block;
   block->owner = (Object)__56865120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55492000;

   return block;
};

Block __76479140;

void code__76479140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = fill_56900920_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
            src1 = ({
                  Value src0, dst;
                  dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ack__inputs_57481320_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
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
            src0 = flag__inputs_57481340_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),fill__inputs_57336800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__76479140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76479140 = block;
   block->owner = (Object)__76478820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76479140;

   return block;
};

Block __76478780;

void code__76478780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__1_57336820_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
            src1 = ({
                  Value src0, dst;
                  dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ack__network_57323580_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
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
            src0 = flag__outputs_57582000_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),fill__outputs_57527560_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__76478780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76478780 = block;
   block->owner = (Object)__76478460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76478780;

   return block;
};

Block __76446080;

void code__76446080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_56901000_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,clk_56845260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_56900980_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,rst_56845240_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(req_56900940_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,req_56845220_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_56901000_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,clk_51459160_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_56900980_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,rst_51459140_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__0_57336840_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,req_51459080_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__inputs_57481320_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,ack__fill_57323660_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__76446080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76446080 = block;
   block->owner = (Object)__76478260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76446080;

   return block;
};

Block __76446020;

void code__76446020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__layer_57134280_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,ack__0_57336840_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__layer_52004280_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,ack__1_57336820_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__76446020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76446020 = block;
   block->owner = (Object)__76478040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76446020;

   return block;
};

Block __54686260;

Block __54906740;

void code__54906740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_54318660_channel__inputs_58100_52026900_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,make_ref_rangeS(mem_54381200_channel__inputs_58100_52026900_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420,value2integer(abus__w_54318500_channel__inputs_58100_52026900_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value),value2integer(abus__w_54318500_channel__inputs_58100_52026900_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__54906740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54906740 = block;
   block->owner = (Object)__54686260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54906740;

   return block;
};

void code__54686260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_54381200_channel__inputs_58100_52026900_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
            idx = value2integer(abus__r_54318580_channel__inputs_58100_52026900_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_52650300_channel__inputs_58100_52026900_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_52303840_channel__inputs_58100_52026900_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54906740();
   }
      }
   }
}

Block make__54686260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54686260 = block;
   block->owner = (Object)__55446480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54686260;

   return block;
};

Block __76477320;

void code__76477320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_52303840_channel__inputs_58100_52026900_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,_58116_57481300_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__76477320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76477320 = block;
   block->owner = (Object)__76477160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76477320;

   return block;
};

Block __76477100;

void code__76477100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58116_57481300_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,trig__w_52303840_channel__inputs_58100_52026900_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__76477100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76477100 = block;
   block->owner = (Object)__76476940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76477100;

   return block;
};

Block __76476640;

void code__76476640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_54318500_channel__inputs_58100_52026900_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,_58117_57481220_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__76476640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76476640 = block;
   block->owner = (Object)__76476480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76476640;

   return block;
};

Block __76476440;

void code__76476440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58117_57481220_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,abus__w_54318500_channel__inputs_58100_52026900_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__76476440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76476440 = block;
   block->owner = (Object)__76476240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76476440;

   return block;
};

Block __76475880;

void code__76475880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_54318660_channel__inputs_58100_52026900_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,_58118_57527580_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__76475880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76475880 = block;
   block->owner = (Object)__76475720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76475880;

   return block;
};

Block __76475680;

void code__76475680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58118_57527580_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,dbus__w_54318660_channel__inputs_58100_52026900_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__76475680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76475680 = block;
   block->owner = (Object)__76475520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76475680;

   return block;
};

Block __76474860;

void code__76474860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_52650300_channel__inputs_58100_52026900_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,_58114_57134380_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__76474860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76474860 = block;
   block->owner = (Object)__76492680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76474860;

   return block;
};

Block __76474800;

void code__76474800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58112_57134260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,trig__r_52303860_channel__inputs_58100_52026900_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58113_57134160_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,abus__r_54318580_channel__inputs_58100_52026900_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__76474800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76474800 = block;
   block->owner = (Object)__76492520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76474800;

   return block;
};

Block __76491400;

void code__76491400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_55753400_channel__outputs_58129_55446360_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,_58139_57677500_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__76491400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76491400 = block;
   block->owner = (Object)__76491240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76491400;

   return block;
};

Block __76491200;

void code__76491200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58139_57677500_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,reg__0_55753400_channel__outputs_58129_55446360_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__76491200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76491200 = block;
   block->owner = (Object)__76491040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76491200;

   return block;
};

Block __76489120;

void code__76489120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_55753400_channel__outputs_58129_55446360_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,_58131_52346060_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__76489120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76489120 = block;
   block->owner = (Object)__76488940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76489120;

   return block;
};

Block __76488880;

void code__76488880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58131_52346060_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,reg__0_55753400_channel__outputs_58129_55446360_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__76488880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76488880 = block;
   block->owner = (Object)__76513240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76488880;

   return block;
};

Block __76511760;

void code__76511760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_55627040_rinc_58138_55627420_channel__outputs_58129_55446360_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,_58140_57677420_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__76511760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76511760 = block;
   block->owner = (Object)__76511600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76511760;

   return block;
};

Block __76511560;

void code__76511560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58140_57677420_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,abus__r_55627040_rinc_58138_55627420_channel__outputs_58129_55446360_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__76511560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76511560 = block;
   block->owner = (Object)__76511400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76511560;

   return block;
};

Block __76509060;

void code__76509060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_57216900_channel__a0_58152_55862280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,_58154_57419580_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__76509060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76509060 = block;
   block->owner = (Object)__76508880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76509060;

   return block;
};

Block __76508840;

void code__76508840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58154_57419580_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,reg__0_57216900_channel__a0_58152_55862280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__76508840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76508840 = block;
   block->owner = (Object)__76508660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76508840;

   return block;
};

Block __76507380;

void code__76507380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_57336980_channel__a0_58152_55862280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,_58155_57554060_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__76507380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76507380 = block;
   block->owner = (Object)__76507180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76507380;

   return block;
};

Block __76507140;

void code__76507140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58155_57554060_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,reg__1_57336980_channel__a0_58152_55862280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__76507140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76507140 = block;
   block->owner = (Object)__76506960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76507140;

   return block;
};

Block __76558460;

void code__76558460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_56422200_rinc_58164_56422580_channel__a0_58152_55862280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,_58167_52004000_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__76558460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76558460 = block;
   block->owner = (Object)__76558280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76558460;

   return block;
};

Block __76558220;

void code__76558220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58167_52004000_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,abus__r_56422200_rinc_58164_56422580_channel__a0_58152_55862280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__76558220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76558220 = block;
   block->owner = (Object)__76558040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76558220;

   return block;
};

Block __76506280;

void code__76506280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_57216900_channel__a0_58152_55862280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,_58165_51728820_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_57336980_channel__a0_58152_55862280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->c_value,_58166_52004560_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
      set_value_pos(pool_state);
   }
}

Block make__76506280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __76506280 = block;
   block->owner = (Object)__76557880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__76506280;

   return block;
};

Value make__76638000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76637940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76637860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76637780() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__76637720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76637640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76637560() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__76637500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76637400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__76637340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76637260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76637100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76637000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76636840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76636740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76636700() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76636440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76636360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__76636220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76791580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76791480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76791400() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76791320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76791240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76791120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76791080() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76790840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76790760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__76790640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76790460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76790380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76790300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__76790220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76790140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__76790020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__76789960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76789880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76789660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76789540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__76789400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76789300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76789260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76789020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76788960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__76788680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76788580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76788500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76788420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__76788340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76788220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__76788040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76788000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76787720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__76787600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__76787440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope sigmoid__neural__network_58_84_52027200;

SignalI ack__0_57336840_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeack__0_57336840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__0_57336840_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_84_52027200;
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

SignalI ack__1_57336820_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeack__1_57336820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__1_57336820_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_84_52027200;
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

SignalI fill__inputs_57336800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makefill__inputs_57336800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill__inputs_57336800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_84_52027200;
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

SignalI value__inputs_57481440_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makevalue__inputs_57481440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__inputs_57481440_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_84_52027200;
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

SignalI address__inputs_57481360_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeaddress__inputs_57481360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address__inputs_57481360_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_84_52027200;
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

SignalI flag__inputs_57481340_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeflag__inputs_57481340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__inputs_57481340_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_84_52027200;
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

SignalI ack__inputs_57481320_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeack__inputs_57481320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__inputs_57481320_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_84_52027200;
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

SignalI _58116_57481300_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI make_58116_57481300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58116_57481300_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_84_52027200;
   signalI->name = ":116";
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

SignalI _58117_57481220_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI make_58117_57481220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58117_57481220_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_84_52027200;
   signalI->name = ":117";
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

SignalI _58118_57527580_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI make_58118_57527580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58118_57527580_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_84_52027200;
   signalI->name = ":118";
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

SignalI fill__outputs_57527560_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makefill__outputs_57527560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill__outputs_57527560_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_84_52027200;
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

SignalI value__outputs_57582100_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makevalue__outputs_57582100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__outputs_57582100_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_84_52027200;
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

SignalI address__outputs_57582020_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeaddress__outputs_57582020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address__outputs_57582020_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_84_52027200;
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

SignalI flag__outputs_57582000_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeflag__outputs_57582000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__outputs_57582000_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_84_52027200;
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

SignalI _58139_57677500_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI make_58139_57677500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58139_57677500_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_84_52027200;
   signalI->name = ":139";
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

SignalI _58140_57677420_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI make_58140_57677420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58140_57677420_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_84_52027200;
   signalI->name = ":140";
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

SystemI layer0_57553900;

SystemI makelayer0_57553900() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer0_57553900 = systemI;
   systemI->owner = (Object)sigmoid__neural__network_58_84_52027200;
   systemI->name = "layer0";
   systemI->system = layer0_58_841_56849280;

   return systemI;
};

SystemI layer1_52345860;

SystemI makelayer1_52345860() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer1_52345860 = systemI;
   systemI->owner = (Object)sigmoid__neural__network_58_84_52027200;
   systemI->name = "layer1";
   systemI->system = layer1_58_841_51439800;

   return systemI;
};

Scope channel__inputs_58100_52026900;

SignalI trig__r_52303860_channel__inputs_58100_52026900_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI maketrig__r_52303860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_52303860_channel__inputs_58100_52026900_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__inputs_58100_52026900;
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

SignalI trig__w_52303840_channel__inputs_58100_52026900_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI maketrig__w_52303840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_52303840_channel__inputs_58100_52026900_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__inputs_58100_52026900;
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

SignalI dbus__r_52650300_channel__inputs_58100_52026900_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makedbus__r_52650300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_52650300_channel__inputs_58100_52026900_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__inputs_58100_52026900;
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

SignalI dbus__w_54318660_channel__inputs_58100_52026900_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makedbus__w_54318660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_54318660_channel__inputs_58100_52026900_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__inputs_58100_52026900;
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

SignalI abus__r_54318580_channel__inputs_58100_52026900_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeabus__r_54318580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_54318580_channel__inputs_58100_52026900_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__inputs_58100_52026900;
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

SignalI abus__w_54318500_channel__inputs_58100_52026900_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeabus__w_54318500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_54318500_channel__inputs_58100_52026900_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__inputs_58100_52026900;
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

SignalI mem_54381200_channel__inputs_58100_52026900_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makemem_54381200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_54381200_channel__inputs_58100_52026900_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__inputs_58100_52026900;
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

Scope raddr_58101_52026580;

Scope makeraddr_58101_52026580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58101_52026580 = scope;
   scope->owner = (Object)channel__inputs_58100_52026900;
   scope->name = "raddr:101";
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

Scope waddr_58106_52026140;

Scope makewaddr_58106_52026140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58106_52026140 = scope;
   scope->owner = (Object)channel__inputs_58100_52026900;
   scope->name = "waddr:106";
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

Scope rinc_58111_52025620;

Behavior __76492680;

Behavior make__76492680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76492680 = behavior;
   behavior->owner = (Object)rinc_58111_52025620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_52650300_channel__inputs_58100_52026900_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   dbus__r_52650300_channel__inputs_58100_52026900_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   dbus__r_52650300_channel__inputs_58100_52026900_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(dbus__r_52650300_channel__inputs_58100_52026900_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,dbus__r_52650300_channel__inputs_58100_52026900_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
dbus__r_52650300_channel__inputs_58100_52026900_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[dbus__r_52650300_channel__inputs_58100_52026900_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__76474860();

   return behavior;
}

Behavior __76492520;

Behavior make__76492520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76492520 = behavior;
   behavior->owner = (Object)rinc_58111_52025620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58112_57134260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   _58112_57134260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   _58112_57134260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(_58112_57134260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,_58112_57134260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
_58112_57134260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[_58112_57134260_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,_58113_57134160_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   _58113_57134160_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   _58113_57134160_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(_58113_57134160_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,_58113_57134160_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
_58113_57134160_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[_58113_57134160_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__76474800();

   return behavior;
}

Scope makerinc_58111_52025620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58111_52025620 = scope;
   scope->owner = (Object)channel__inputs_58100_52026900;
   scope->name = "rinc:111";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__76492680();
   scope->behaviors[1] = make__76492520();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58115_52305460;

Scope makewinc_58115_52305460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58115_52305460 = scope;
   scope->owner = (Object)channel__inputs_58100_52026900;
   scope->name = "winc:115";
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

Scope rdec_58119_52304940;

Scope makerdec_58119_52304940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58119_52304940 = scope;
   scope->owner = (Object)channel__inputs_58100_52026900;
   scope->name = "rdec:119";
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

Scope wdec_58124_52304400;

Scope makewdec_58124_52304400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58124_52304400 = scope;
   scope->owner = (Object)channel__inputs_58100_52026900;
   scope->name = "wdec:124";
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

Behavior __55446480;

Behavior make__55446480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55446480 = behavior;
   behavior->owner = (Object)channel__inputs_58100_52026900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_56901000_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   clk_56901000_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_neg += 1;
   clk_56901000_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->neg = realloc(clk_56901000_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->neg,clk_56901000_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_neg*sizeof(Object));
clk_56901000_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->neg[clk_56901000_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_neg-1] = (Object)behavior;
   behavior->block = make__54686260();

   return behavior;
}

Behavior __76477160;

Behavior make__76477160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76477160 = behavior;
   behavior->owner = (Object)channel__inputs_58100_52026900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_52303840_channel__inputs_58100_52026900_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   trig__w_52303840_channel__inputs_58100_52026900_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   trig__w_52303840_channel__inputs_58100_52026900_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(trig__w_52303840_channel__inputs_58100_52026900_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,trig__w_52303840_channel__inputs_58100_52026900_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
trig__w_52303840_channel__inputs_58100_52026900_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[trig__w_52303840_channel__inputs_58100_52026900_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__76477320();

   return behavior;
}

Behavior __76476940;

Behavior make__76476940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76476940 = behavior;
   behavior->owner = (Object)channel__inputs_58100_52026900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58116_57481300_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   _58116_57481300_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   _58116_57481300_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(_58116_57481300_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,_58116_57481300_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
_58116_57481300_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[_58116_57481300_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__76477100();

   return behavior;
}

Behavior __76476480;

Behavior make__76476480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76476480 = behavior;
   behavior->owner = (Object)channel__inputs_58100_52026900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_54318500_channel__inputs_58100_52026900_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   abus__w_54318500_channel__inputs_58100_52026900_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   abus__w_54318500_channel__inputs_58100_52026900_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(abus__w_54318500_channel__inputs_58100_52026900_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,abus__w_54318500_channel__inputs_58100_52026900_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
abus__w_54318500_channel__inputs_58100_52026900_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[abus__w_54318500_channel__inputs_58100_52026900_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__76476640();

   return behavior;
}

Behavior __76476240;

Behavior make__76476240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76476240 = behavior;
   behavior->owner = (Object)channel__inputs_58100_52026900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58117_57481220_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   _58117_57481220_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   _58117_57481220_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(_58117_57481220_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,_58117_57481220_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
_58117_57481220_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[_58117_57481220_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__76476440();

   return behavior;
}

Behavior __76475720;

Behavior make__76475720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76475720 = behavior;
   behavior->owner = (Object)channel__inputs_58100_52026900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_54318660_channel__inputs_58100_52026900_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   dbus__w_54318660_channel__inputs_58100_52026900_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   dbus__w_54318660_channel__inputs_58100_52026900_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(dbus__w_54318660_channel__inputs_58100_52026900_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,dbus__w_54318660_channel__inputs_58100_52026900_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
dbus__w_54318660_channel__inputs_58100_52026900_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[dbus__w_54318660_channel__inputs_58100_52026900_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__76475880();

   return behavior;
}

Behavior __76475520;

Behavior make__76475520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76475520 = behavior;
   behavior->owner = (Object)channel__inputs_58100_52026900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58118_57527580_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   _58118_57527580_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   _58118_57527580_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(_58118_57527580_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,_58118_57527580_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
_58118_57527580_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[_58118_57527580_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__76475680();

   return behavior;
}

Scope makechannel__inputs_58100_52026900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__inputs_58100_52026900 = scope;
   scope->owner = (Object)sigmoid__neural__network_58_84_52027200;
   scope->name = "channel_inputs:100";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_52303860();
   scope->inners[1] = maketrig__w_52303840();
   scope->inners[2] = makedbus__r_52650300();
   scope->inners[3] = makedbus__w_54318660();
   scope->inners[4] = makeabus__r_54318580();
   scope->inners[5] = makeabus__w_54318500();
   scope->inners[6] = makemem_54381200();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58101_52026580();
   scope->scopes[1] = makewaddr_58106_52026140();
   scope->scopes[2] = makerinc_58111_52025620();
   scope->scopes[3] = makewinc_58115_52305460();
   scope->scopes[4] = makerdec_58119_52304940();
   scope->scopes[5] = makewdec_58124_52304400();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__55446480();
   scope->behaviors[1] = make__76477160();
   scope->behaviors[2] = make__76476940();
   scope->behaviors[3] = make__76476480();
   scope->behaviors[4] = make__76476240();
   scope->behaviors[5] = make__76475720();
   scope->behaviors[6] = make__76475520();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__outputs_58129_55446360;

SignalI reg__0_55753400_channel__outputs_58129_55446360_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makereg__0_55753400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_55753400_channel__outputs_58129_55446360_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__outputs_58129_55446360;
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

Scope anum_58130_55446060;

Behavior __76488940;

Behavior make__76488940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76488940 = behavior;
   behavior->owner = (Object)anum_58130_55446060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_55753400_channel__outputs_58129_55446360_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   reg__0_55753400_channel__outputs_58129_55446360_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   reg__0_55753400_channel__outputs_58129_55446360_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(reg__0_55753400_channel__outputs_58129_55446360_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,reg__0_55753400_channel__outputs_58129_55446360_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
reg__0_55753400_channel__outputs_58129_55446360_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[reg__0_55753400_channel__outputs_58129_55446360_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__76489120();

   return behavior;
}

Behavior __76513240;

Behavior make__76513240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76513240 = behavior;
   behavior->owner = (Object)anum_58130_55446060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58131_52346060_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   _58131_52346060_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   _58131_52346060_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(_58131_52346060_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,_58131_52346060_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
_58131_52346060_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[_58131_52346060_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__76488880();

   return behavior;
}

Scope makeanum_58130_55446060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58130_55446060 = scope;
   scope->owner = (Object)channel__outputs_58129_55446360;
   scope->name = "anum:130";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__76488940();
   scope->behaviors[1] = make__76513240();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope raddr_58132_55628260;

Scope makeraddr_58132_55628260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58132_55628260 = scope;
   scope->owner = (Object)channel__outputs_58129_55446360;
   scope->name = "raddr:132";
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

Scope waddr_58135_55627840;

Scope makewaddr_58135_55627840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58135_55627840 = scope;
   scope->owner = (Object)channel__outputs_58129_55446360;
   scope->name = "waddr:135";
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

Scope rinc_58138_55627420;

SignalI abus__r_55627040_rinc_58138_55627420_channel__outputs_58129_55446360_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeabus__r_55627040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_55627040_rinc_58138_55627420_channel__outputs_58129_55446360_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)rinc_58138_55627420;
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

Behavior __76511600;

Behavior make__76511600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76511600 = behavior;
   behavior->owner = (Object)rinc_58138_55627420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_55627040_rinc_58138_55627420_channel__outputs_58129_55446360_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   abus__r_55627040_rinc_58138_55627420_channel__outputs_58129_55446360_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   abus__r_55627040_rinc_58138_55627420_channel__outputs_58129_55446360_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(abus__r_55627040_rinc_58138_55627420_channel__outputs_58129_55446360_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,abus__r_55627040_rinc_58138_55627420_channel__outputs_58129_55446360_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
abus__r_55627040_rinc_58138_55627420_channel__outputs_58129_55446360_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[abus__r_55627040_rinc_58138_55627420_channel__outputs_58129_55446360_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__76511760();

   return behavior;
}

Behavior __76511400;

Behavior make__76511400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76511400 = behavior;
   behavior->owner = (Object)rinc_58138_55627420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58140_57677420_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   _58140_57677420_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   _58140_57677420_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(_58140_57677420_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,_58140_57677420_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
_58140_57677420_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[_58140_57677420_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__76511560();

   return behavior;
}

Scope makerinc_58138_55627420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58138_55627420 = scope;
   scope->owner = (Object)channel__outputs_58129_55446360;
   scope->name = "rinc:138";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_55627040();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__76511600();
   scope->behaviors[1] = make__76511400();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58141_55626660;

SignalI abus__w_55626280_winc_58141_55626660_channel__outputs_58129_55446360_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeabus__w_55626280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_55626280_winc_58141_55626660_channel__outputs_58129_55446360_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)winc_58141_55626660;
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

Scope makewinc_58141_55626660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58141_55626660 = scope;
   scope->owner = (Object)channel__outputs_58129_55446360;
   scope->name = "winc:141";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_55626280();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58144_55626160;

SignalI abus__r_55625780_rdec_58144_55626160_channel__outputs_58129_55446360_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeabus__r_55625780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_55625780_rdec_58144_55626160_channel__outputs_58129_55446360_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)rdec_58144_55626160;
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

Scope makerdec_58144_55626160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58144_55626160 = scope;
   scope->owner = (Object)channel__outputs_58129_55446360;
   scope->name = "rdec:144";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_55625780();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58148_55625660;

SignalI abus__w_55625280_wdec_58148_55625660_channel__outputs_58129_55446360_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeabus__w_55625280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_55625280_wdec_58148_55625660_channel__outputs_58129_55446360_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)wdec_58148_55625660;
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

Scope makewdec_58148_55625660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58148_55625660 = scope;
   scope->owner = (Object)channel__outputs_58129_55446360;
   scope->name = "wdec:148";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_55625280();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __76491240;

Behavior make__76491240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76491240 = behavior;
   behavior->owner = (Object)channel__outputs_58129_55446360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_55753400_channel__outputs_58129_55446360_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   reg__0_55753400_channel__outputs_58129_55446360_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   reg__0_55753400_channel__outputs_58129_55446360_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(reg__0_55753400_channel__outputs_58129_55446360_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,reg__0_55753400_channel__outputs_58129_55446360_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
reg__0_55753400_channel__outputs_58129_55446360_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[reg__0_55753400_channel__outputs_58129_55446360_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__76491400();

   return behavior;
}

Behavior __76491040;

Behavior make__76491040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76491040 = behavior;
   behavior->owner = (Object)channel__outputs_58129_55446360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58139_57677500_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   _58139_57677500_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   _58139_57677500_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(_58139_57677500_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,_58139_57677500_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
_58139_57677500_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[_58139_57677500_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__76491200();

   return behavior;
}

Scope makechannel__outputs_58129_55446360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__outputs_58129_55446360 = scope;
   scope->owner = (Object)sigmoid__neural__network_58_84_52027200;
   scope->name = "channel_outputs:129";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_55753400();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58130_55446060();
   scope->scopes[1] = makeraddr_58132_55628260();
   scope->scopes[2] = makewaddr_58135_55627840();
   scope->scopes[3] = makerinc_58138_55627420();
   scope->scopes[4] = makewinc_58141_55626660();
   scope->scopes[5] = makerdec_58144_55626160();
   scope->scopes[6] = makewdec_58148_55625660();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__76491240();
   scope->behaviors[1] = make__76491040();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__a0_58152_55862280;

SignalI reg__0_57216900_channel__a0_58152_55862280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makereg__0_57216900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_57216900_channel__a0_58152_55862280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__a0_58152_55862280;
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

SignalI reg__1_57336980_channel__a0_58152_55862280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makereg__1_57336980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_57336980_channel__a0_58152_55862280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)channel__a0_58152_55862280;
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

Scope anum_58153_55861980;

Behavior __76508880;

Behavior make__76508880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76508880 = behavior;
   behavior->owner = (Object)anum_58153_55861980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_57216900_channel__a0_58152_55862280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   reg__0_57216900_channel__a0_58152_55862280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   reg__0_57216900_channel__a0_58152_55862280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(reg__0_57216900_channel__a0_58152_55862280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,reg__0_57216900_channel__a0_58152_55862280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
reg__0_57216900_channel__a0_58152_55862280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[reg__0_57216900_channel__a0_58152_55862280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__76509060();

   return behavior;
}

Behavior __76508660;

Behavior make__76508660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76508660 = behavior;
   behavior->owner = (Object)anum_58153_55861980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58154_57419580_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   _58154_57419580_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   _58154_57419580_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(_58154_57419580_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,_58154_57419580_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
_58154_57419580_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[_58154_57419580_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__76508840();

   return behavior;
}

Behavior __76507180;

Behavior make__76507180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76507180 = behavior;
   behavior->owner = (Object)anum_58153_55861980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_57336980_channel__a0_58152_55862280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   reg__1_57336980_channel__a0_58152_55862280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   reg__1_57336980_channel__a0_58152_55862280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(reg__1_57336980_channel__a0_58152_55862280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,reg__1_57336980_channel__a0_58152_55862280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
reg__1_57336980_channel__a0_58152_55862280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[reg__1_57336980_channel__a0_58152_55862280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__76507380();

   return behavior;
}

Behavior __76506960;

Behavior make__76506960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76506960 = behavior;
   behavior->owner = (Object)anum_58153_55861980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58155_57554060_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   _58155_57554060_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   _58155_57554060_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(_58155_57554060_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,_58155_57554060_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
_58155_57554060_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[_58155_57554060_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__76507140();

   return behavior;
}

Scope makeanum_58153_55861980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58153_55861980 = scope;
   scope->owner = (Object)channel__a0_58152_55862280;
   scope->name = "anum:153";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__76508880();
   scope->behaviors[1] = make__76508660();
   scope->behaviors[2] = make__76507180();
   scope->behaviors[3] = make__76506960();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope raddr_58156_56423420;

Scope makeraddr_58156_56423420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58156_56423420 = scope;
   scope->owner = (Object)channel__a0_58152_55862280;
   scope->name = "raddr:156";
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

Scope waddr_58160_56423000;

Scope makewaddr_58160_56423000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58160_56423000 = scope;
   scope->owner = (Object)channel__a0_58152_55862280;
   scope->name = "waddr:160";
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

Scope rinc_58164_56422580;

SignalI abus__r_56422200_rinc_58164_56422580_channel__a0_58152_55862280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeabus__r_56422200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_56422200_rinc_58164_56422580_channel__a0_58152_55862280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)rinc_58164_56422580;
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

Behavior __76558280;

Behavior make__76558280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76558280 = behavior;
   behavior->owner = (Object)rinc_58164_56422580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_56422200_rinc_58164_56422580_channel__a0_58152_55862280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   abus__r_56422200_rinc_58164_56422580_channel__a0_58152_55862280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   abus__r_56422200_rinc_58164_56422580_channel__a0_58152_55862280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(abus__r_56422200_rinc_58164_56422580_channel__a0_58152_55862280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,abus__r_56422200_rinc_58164_56422580_channel__a0_58152_55862280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
abus__r_56422200_rinc_58164_56422580_channel__a0_58152_55862280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[abus__r_56422200_rinc_58164_56422580_channel__a0_58152_55862280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__76558460();

   return behavior;
}

Behavior __76558040;

Behavior make__76558040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76558040 = behavior;
   behavior->owner = (Object)rinc_58164_56422580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58167_52004000_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   _58167_52004000_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   _58167_52004000_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(_58167_52004000_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,_58167_52004000_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
_58167_52004000_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[_58167_52004000_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__76558220();

   return behavior;
}

Behavior __76557880;

Behavior make__76557880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76557880 = behavior;
   behavior->owner = (Object)rinc_58164_56422580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_57216900_channel__a0_58152_55862280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   reg__0_57216900_channel__a0_58152_55862280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   reg__0_57216900_channel__a0_58152_55862280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(reg__0_57216900_channel__a0_58152_55862280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,reg__0_57216900_channel__a0_58152_55862280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
reg__0_57216900_channel__a0_58152_55862280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[reg__0_57216900_channel__a0_58152_55862280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,reg__1_57336980_channel__a0_58152_55862280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   reg__1_57336980_channel__a0_58152_55862280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   reg__1_57336980_channel__a0_58152_55862280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(reg__1_57336980_channel__a0_58152_55862280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,reg__1_57336980_channel__a0_58152_55862280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
reg__1_57336980_channel__a0_58152_55862280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[reg__1_57336980_channel__a0_58152_55862280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__76506280();

   return behavior;
}

Scope makerinc_58164_56422580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58164_56422580 = scope;
   scope->owner = (Object)channel__a0_58152_55862280;
   scope->name = "rinc:164";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_56422200();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__76558280();
   scope->behaviors[1] = make__76558040();
   scope->behaviors[2] = make__76557880();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58168_57057380;

SignalI abus__w_57081520_winc_58168_57057380_channel__a0_58152_55862280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeabus__w_57081520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_57081520_winc_58168_57057380_channel__a0_58152_55862280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)winc_58168_57057380;
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

Scope makewinc_58168_57057380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58168_57057380 = scope;
   scope->owner = (Object)channel__a0_58152_55862280;
   scope->name = "winc:168";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_57081520();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58172_57081400;

SignalI abus__r_57081020_rdec_58172_57081400_channel__a0_58152_55862280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeabus__r_57081020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_57081020_rdec_58172_57081400_channel__a0_58152_55862280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)rdec_58172_57081400;
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

Scope makerdec_58172_57081400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58172_57081400 = scope;
   scope->owner = (Object)channel__a0_58152_55862280;
   scope->name = "rdec:172";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_57081020();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58177_57080900;

SignalI abus__w_57080520_wdec_58177_57080900_channel__a0_58152_55862280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420;

SignalI makeabus__w_57080520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_57080520_wdec_58177_57080900_channel__a0_58152_55862280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420 = signalI;
   signalI->owner = (Object)wdec_58177_57080900;
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

Scope makewdec_58177_57080900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58177_57080900 = scope;
   scope->owner = (Object)channel__a0_58152_55862280;
   scope->name = "wdec:177";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_57080520();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope makechannel__a0_58152_55862280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__a0_58152_55862280 = scope;
   scope->owner = (Object)sigmoid__neural__network_58_84_52027200;
   scope->name = "channel_a0:152";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_57216900();
   scope->inners[1] = makereg__1_57336980();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58153_55861980();
   scope->scopes[1] = makeraddr_58156_56423420();
   scope->scopes[2] = makewaddr_58160_56423000();
   scope->scopes[3] = makerinc_58164_56422580();
   scope->scopes[4] = makewinc_58168_57057380();
   scope->scopes[5] = makerdec_58172_57081400();
   scope->scopes[6] = makewdec_58177_57080900();
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __53826360;

Behavior make__53826360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53826360 = behavior;
   behavior->owner = (Object)sigmoid__neural__network_58_84_52027200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_56901000_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   clk_56901000_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_pos += 1;
   clk_56901000_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->pos = realloc(clk_56901000_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->pos,clk_56901000_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_pos*sizeof(Object));
clk_56901000_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->pos[clk_56901000_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_pos-1] = (Object)behavior;
   behavior->block = make__53828800();

   return behavior;
}

Behavior __55492140;

Behavior make__55492140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55492140 = behavior;
   behavior->owner = (Object)sigmoid__neural__network_58_84_52027200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_56901000_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   clk_56901000_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_pos += 1;
   clk_56901000_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->pos = realloc(clk_56901000_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->pos,clk_56901000_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_pos*sizeof(Object));
clk_56901000_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->pos[clk_56901000_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_pos-1] = (Object)behavior;
   behavior->block = make__53826220();

   return behavior;
}

Behavior __56865120;

Behavior make__56865120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56865120 = behavior;
   behavior->owner = (Object)sigmoid__neural__network_58_84_52027200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_56901000_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   clk_56901000_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_pos += 1;
   clk_56901000_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->pos = realloc(clk_56901000_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->pos,clk_56901000_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_pos*sizeof(Object));
clk_56901000_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->pos[clk_56901000_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_pos-1] = (Object)behavior;
   behavior->block = make__55492000();

   return behavior;
}

Behavior __76478820;

Behavior make__76478820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76478820 = behavior;
   behavior->owner = (Object)sigmoid__neural__network_58_84_52027200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,fill_56900920_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   fill_56900920_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   fill_56900920_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(fill_56900920_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,fill_56900920_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
fill_56900920_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[fill_56900920_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__inputs_57481320_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   ack__inputs_57481320_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   ack__inputs_57481320_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(ack__inputs_57481320_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,ack__inputs_57481320_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
ack__inputs_57481320_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[ack__inputs_57481320_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,flag__inputs_57481340_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   flag__inputs_57481340_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   flag__inputs_57481340_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(flag__inputs_57481340_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,flag__inputs_57481340_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
flag__inputs_57481340_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[flag__inputs_57481340_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__76479140();

   return behavior;
}

Behavior __76478460;

Behavior make__76478460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76478460 = behavior;
   behavior->owner = (Object)sigmoid__neural__network_58_84_52027200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__1_57336820_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   ack__1_57336820_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   ack__1_57336820_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(ack__1_57336820_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,ack__1_57336820_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
ack__1_57336820_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[ack__1_57336820_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__network_57323580_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   ack__network_57323580_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   ack__network_57323580_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(ack__network_57323580_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,ack__network_57323580_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
ack__network_57323580_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[ack__network_57323580_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,flag__outputs_57582000_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   flag__outputs_57582000_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   flag__outputs_57582000_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(flag__outputs_57582000_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,flag__outputs_57582000_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
flag__outputs_57582000_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[flag__outputs_57582000_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__76478780();

   return behavior;
}

Behavior __76478260;

Behavior make__76478260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76478260 = behavior;
   behavior->owner = (Object)sigmoid__neural__network_58_84_52027200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_56901000_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   clk_56901000_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   clk_56901000_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(clk_56901000_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,clk_56901000_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
clk_56901000_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[clk_56901000_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_56900980_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   rst_56900980_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   rst_56900980_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(rst_56900980_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,rst_56900980_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
rst_56900980_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[rst_56900980_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,req_56900940_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   req_56900940_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   req_56900940_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(req_56900940_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,req_56900940_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
req_56900940_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[req_56900940_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,ack__0_57336840_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   ack__0_57336840_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   ack__0_57336840_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(ack__0_57336840_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,ack__0_57336840_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
ack__0_57336840_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[ack__0_57336840_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__inputs_57481320_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   ack__inputs_57481320_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   ack__inputs_57481320_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(ack__inputs_57481320_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,ack__inputs_57481320_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
ack__inputs_57481320_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[ack__inputs_57481320_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__76446080();

   return behavior;
}

Behavior __76478040;

Behavior make__76478040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __76478040 = behavior;
   behavior->owner = (Object)sigmoid__neural__network_58_84_52027200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__layer_57134280_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   ack__layer_57134280_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   ack__layer_57134280_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(ack__layer_57134280_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,ack__layer_57134280_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
ack__layer_57134280_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[ack__layer_57134280_layer0_58_841_56849280_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__layer_52004280_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420);
   ack__layer_52004280_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any += 1;
   ack__layer_52004280_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any = realloc(ack__layer_52004280_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any,ack__layer_52004280_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any*sizeof(Object));
ack__layer_52004280_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->any[ack__layer_52004280_layer1_58_841_51439800_sigmoid__neural__network_58_84_52027200_sigmoid__neural__network_58_840_56864280______58_84_52267520______58_840_76060420->num_any-1] = (Object)behavior;
   behavior->block = make__76446020();

   return behavior;
}

Scope makesigmoid__neural__network_58_84_52027200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   sigmoid__neural__network_58_84_52027200 = scope;
   scope->owner = (Object)sigmoid__neural__network_58_840_56864280;
   scope->name = "sigmoid_neural_network:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makelayer0_57553900();
   scope->systemIs[1] = makelayer1_52345860();
   scope->num_inners = 16;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeack__0_57336840();
   scope->inners[1] = makeack__1_57336820();
   scope->inners[2] = makefill__inputs_57336800();
   scope->inners[3] = makevalue__inputs_57481440();
   scope->inners[4] = makeaddress__inputs_57481360();
   scope->inners[5] = makeflag__inputs_57481340();
   scope->inners[6] = makeack__inputs_57481320();
   scope->inners[7] = make_58116_57481300();
   scope->inners[8] = make_58117_57481220();
   scope->inners[9] = make_58118_57527580();
   scope->inners[10] = makefill__outputs_57527560();
   scope->inners[11] = makevalue__outputs_57582100();
   scope->inners[12] = makeaddress__outputs_57582020();
   scope->inners[13] = makeflag__outputs_57582000();
   scope->inners[14] = make_58139_57677500();
   scope->inners[15] = make_58140_57677420();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__inputs_58100_52026900();
   scope->scopes[1] = makechannel__outputs_58129_55446360();
   scope->scopes[2] = makechannel__a0_58152_55862280();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53826360();
   scope->behaviors[1] = make__55492140();
   scope->behaviors[2] = make__56865120();
   scope->behaviors[3] = make__76478820();
   scope->behaviors[4] = make__76478460();
   scope->behaviors[5] = make__76478260();
   scope->behaviors[6] = make__76478040();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makesigmoid__neural__network_58_840_56864280() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   sigmoid__neural__network_58_840_56864280 = systemT;
systemT->owner = NULL;
   systemT->name = "sigmoid_neural_network:T0";
   systemT->num_inputs = 5;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_56901000();
   systemT->inputs[1] = makerst_56900980();
   systemT->inputs[2] = makereq_56900940();
   systemT->inputs[3] = makefill_56900920();
   systemT->inputs[4] = make_5810_57323740();
   systemT->num_outputs = 5;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__fill_57323660();
   systemT->outputs[1] = makeack__network_57323580();
   systemT->outputs[2] = make_588_57323340();
   systemT->outputs[3] = make_589_57323060();
   systemT->outputs[4] = make_5829_57554900();
   systemT->num_inouts = 1;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_5830_57554680();

   systemT->scope = makesigmoid__neural__network_58_84_52027200();

   return systemT;
}