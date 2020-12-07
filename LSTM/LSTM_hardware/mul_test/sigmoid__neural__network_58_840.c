#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT sigmoid__neural__network_58_840_62663260;

SignalI clk_62661200_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makeclk_62661200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_62661200_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_840_62663260;
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

SignalI rst_62661160_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makerst_62661160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_62661160_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_840_62663260;
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

SignalI req_62661140_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makereq_62661140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_62661140_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_840_62663260;
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

SignalI fill_62661120_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makefill_62661120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_62661120_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_840_62663260;
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

SignalI _5810_62761000_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI make_5810_62761000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5810_62761000_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_840_62663260;
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

SignalI ack__fill_62760960_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makeack__fill_62760960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__fill_62760960_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_840_62663260;
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

SignalI ack__network_62760940_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makeack__network_62760940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__network_62760940_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_840_62663260;
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

SignalI _588_62760920_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI make_588_62760920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _588_62760920_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_840_62663260;
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

SignalI _589_62760840_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI make_589_62760840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _589_62760840_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_840_62663260;
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

SignalI _5829_62916920_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI make_5829_62916920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5829_62916920_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_840_62663260;
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

SignalI _5830_62916820_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI make_5830_62916820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5830_62916820_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_840_62663260;
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

Block __56614280;

Block __56613820;

void code__56613820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78091080(),ack__0_48114080_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78091020(),ack__1_48114060_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__56613820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56613820 = block;
   block->owner = (Object)__56614280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56613820;

   return block;
};

void code__56614280() {
   {
      Value cond = rst_62661160_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56613820();
   }
      }
   }
}

Block make__56614280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56614280 = block;
   block->owner = (Object)__56607160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56614280;

   return block;
};

Block __56639000;

Block __56638500;

Block __56637900;

void code__56637900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78090860(),_58117_48292440_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__56637900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56637900 = block;
   block->owner = (Object)__56638500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56637900;

   return block;
};

void code__56638500() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_62661160_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78090940();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56637900();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78090800(),_58116_48292520_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__56638500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56638500 = block;
   block->owner = (Object)__56639000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56638500;

   return block;
};

Block __56636220;

Block __56635540;

void code__56635540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78090640(),_589_62760840_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__56635540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56635540 = block;
   block->owner = (Object)__56636220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56635540;

   return block;
};

void code__56636220() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_62661160_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78090720();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56635540();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78090580(),_588_62760920_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__56636220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56636220 = block;
   block->owner = (Object)__56639000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56636220;

   return block;
};

Block __56633640;

void code__56633640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78090460(),address__inputs_48292580_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78090380(),flag__inputs_48292560_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78090320(),ack__inputs_48292540_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__56633640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56633640 = block;
   block->owner = (Object)__56639000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56633640;

   return block;
};

Block __56687860;

Block __56687120;

Block __56684740;

Block __56924220;

Block __56923040;

void code__56923040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_5810_62761000_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,value__inputs_48292680_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__78089840(),flag__inputs_48292560_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__56923040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56923040 = block;
   block->owner = (Object)__56924220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56923040;

   return block;
};

void code__56924220() {
 code__56923040();
}

Block make__56924220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56924220 = block;
   block->owner = (Object)__56684740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56924220;

   return block;
};

Block __56683960;

void code__56683960() {
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
                  src0 = _589_62760840_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
                  src1 = make__78089740();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__78089700();
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
                        src0 = _589_62760840_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__78089460();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__78089400();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_589_62760840_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78089280(),_588_62760920_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__56683960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56683960 = block;
   block->owner = (Object)__56684740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56683960;

   return block;
};

void code__56684740() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _588_62760920_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78090000();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56924220();
   }
   else {
  code__56683960();
   }
      }
   }
}

Block make__56684740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56684740 = block;
   block->owner = (Object)__56687120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56684740;

   return block;
};

void code__56687120() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_62661160_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78090100();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56684740();
   }
      }
   }
}

Block make__56687120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56687120 = block;
   block->owner = (Object)__56687860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56687120;

   return block;
};

void code__56687860() {
 code__56687120();
}

Block make__56687860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56687860 = block;
   block->owner = (Object)__56639000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56687860;

   return block;
};

Block __62108800;

Block __62108640;

Block __62107560;

void code__62107560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__78088800(),ack__inputs_48292540_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__62107560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62107560 = block;
   block->owner = (Object)__62108640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62107560;

   return block;
};

void code__62108640() {
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
                  src0 = address__inputs_48292580_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__78089060();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),address__inputs_48292580_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__78088960(),flag__inputs_48292560_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address__inputs_48292580_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78088880();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__62107560();
   }
      }
   }
}

Block make__62108640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62108640 = block;
   block->owner = (Object)__62108800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62108640;

   return block;
};

Block __62107140;

Block __62106720;

void code__62106720() {
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
                  src0 = _58117_48292440_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
                  src1 = make__78088600();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__78088560();
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
                        src0 = _58117_48292440_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__78088280();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__78088220();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58117_48292440_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78088040(),_58116_48292520_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__inputs_48292680_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,_58118_49576080_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__62106720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62106720 = block;
   block->owner = (Object)__62107140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62106720;

   return block;
};

void code__62107140() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_62661160_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78088720();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__62106720();
   }
      }
   }
}

Block make__62107140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62107140 = block;
   block->owner = (Object)__62108800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62107140;

   return block;
};

void code__62108800() {
 code__62108640();
 code__62107140();
}

Block make__62108800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62108800 = block;
   block->owner = (Object)__56639000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62108800;

   return block;
};

Block __56634200;

void code__56634200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78087860(),flag__inputs_48292560_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__56634200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56634200 = block;
   block->owner = (Object)__56639000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56634200;

   return block;
};

void code__56639000() {
 code__56638500();
 code__56636220();
   {
      Value cond = rst_62661160_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56633640();
   }
   else if (value2integer(fill__inputs_48114040_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value)) {
  code__56687860();
   }
   else if (value2integer(flag__inputs_48292560_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value)) {
  code__62108800();
   }
   else {
  code__56634200();
   }
      }
   }
}

Block make__56639000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56639000 = block;
   block->owner = (Object)__62188960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56639000;

   return block;
};

Block __62188820;

Block __62188660;

Block __62188340;

void code__62188340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78087700(),_5830_62916820_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__62188340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62188340 = block;
   block->owner = (Object)__62188660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62188340;

   return block;
};

void code__62188660() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_62661160_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78087780();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__62188340();
   }
      }
   }
}

Block make__62188660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62188660 = block;
   block->owner = (Object)__62188820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62188660;

   return block;
};

Block __62187680;

Block __62187360;

void code__62187360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78087540(),_58140_50157560_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__62187360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62187360 = block;
   block->owner = (Object)__62187680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62187360;

   return block;
};

void code__62187680() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_62661160_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78087620();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__62187360();
   }
      }
   }
}

Block make__62187680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62187680 = block;
   block->owner = (Object)__62188820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62187680;

   return block;
};

Block __62186480;

void code__62186480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78087440(),address__outputs_49988140_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78087380(),flag__outputs_49988120_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78087320(),ack__network_62760940_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__62186480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62186480 = block;
   block->owner = (Object)__62188820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62186480;

   return block;
};

Block __62209980;

Block __62209820;

Block __62209500;

Block __62209000;

void code__62209000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58139_50157660_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,value__outputs_49988220_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__62209000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62209000 = block;
   block->owner = (Object)__62209500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62209000;

   return block;
};

void code__62209500() {
{
      Value value = _58140_50157560_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__78087020())) {
    code__62209000();
         }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78086880(),flag__outputs_49988120_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
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
                  src0 = _58140_50157560_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
                  src1 = make__78086780();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__78086740();
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
                        src0 = _58140_50157560_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__78086500();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__78086440();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_58140_50157560_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__62209500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62209500 = block;
   block->owner = (Object)__62209820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62209500;

   return block;
};

void code__62209820() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_62661160_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78087160();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__62209500();
   }
      }
   }
}

Block make__62209820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62209820 = block;
   block->owner = (Object)__62209980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62209820;

   return block;
};

void code__62209980() {
 code__62209820();
}

Block make__62209980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62209980 = block;
   block->owner = (Object)__62188820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62209980;

   return block;
};

Block __62420080;

Block __62419920;

Block __62418760;

void code__62418760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__78143120(),ack__network_62760940_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__62418760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62418760 = block;
   block->owner = (Object)__62419920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62418760;

   return block;
};

void code__62419920() {
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
                  src0 = address__outputs_49988140_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__78143440();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),address__outputs_49988140_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__78143280(),flag__outputs_49988120_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address__outputs_49988140_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78143200();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__62418760();
   }
      }
   }
}

Block make__62419920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62419920 = block;
   block->owner = (Object)__62420080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62419920;

   return block;
};

Block __62418340;

Block __62418000;

Block __62417520;

void code__62417520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__outputs_49988220_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,_5829_62916920_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__62417520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62417520 = block;
   block->owner = (Object)__62418000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62417520;

   return block;
};

void code__62418000() {
{
      Value value = _5830_62916820_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__78142920())) {
    code__62417520();
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
                  src0 = _5830_62916820_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
                  src1 = make__78142740();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__78142700();
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
                        src0 = _5830_62916820_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__78142460();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__78142400();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_5830_62916820_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__62418000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62418000 = block;
   block->owner = (Object)__62418340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62418000;

   return block;
};

void code__62418340() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_62661160_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__78143040();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__62418000();
   }
      }
   }
}

Block make__62418340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62418340 = block;
   block->owner = (Object)__62420080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62418340;

   return block;
};

void code__62420080() {
 code__62419920();
 code__62418340();
}

Block make__62420080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62420080 = block;
   block->owner = (Object)__62188820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62420080;

   return block;
};

Block __62186900;

void code__62186900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__78142220(),flag__outputs_49988120_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__62186900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62186900 = block;
   block->owner = (Object)__62188820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62186900;

   return block;
};

void code__62188820() {
 code__62188660();
 code__62187680();
   {
      Value cond = rst_62661160_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__62186480();
   }
   else if (value2integer(fill__outputs_49576020_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value)) {
  code__62209980();
   }
   else if (value2integer(flag__outputs_49988120_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value)) {
  code__62420080();
   }
   else {
  code__62186900();
   }
      }
   }
}

Block make__62188820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62188820 = block;
   block->owner = (Object)__62663600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62188820;

   return block;
};

Block __77866700;

void code__77866700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = fill_62661120_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
            src1 = ({
                  Value src0, dst;
                  dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ack__inputs_48292540_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
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
            src0 = flag__inputs_48292560_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),fill__inputs_48114040_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__77866700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77866700 = block;
   block->owner = (Object)__77866320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77866700;

   return block;
};

Block __77866280;

void code__77866280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__1_48114060_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
            src1 = ({
                  Value src0, dst;
                  dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ack__network_62760940_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
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
            src0 = flag__outputs_49988120_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),fill__outputs_49576020_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__77866280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77866280 = block;
   block->owner = (Object)__77865960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77866280;

   return block;
};

Block __77800820;

void code__77800820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_62661200_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,clk_54156580_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_62661160_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,rst_54156540_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(req_62661140_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,req_54156520_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_62661200_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,clk_55776620_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_62661160_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,rst_55776560_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__0_48114080_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,req_55776380_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__inputs_48292540_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,ack__fill_62760960_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__77800820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77800820 = block;
   block->owner = (Object)__77865800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77800820;

   return block;
};

Block __77800760;

void code__77800760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__layer_54521500_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,ack__0_48114080_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__layer_56259160_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,ack__1_48114060_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__77800760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77800760 = block;
   block->owner = (Object)__77865640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77800760;

   return block;
};

Block __55056560;

Block __55408120;

void code__55408120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_54672620_channel__inputs_58100_54204100_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,make_ref_rangeS(mem_54808900_channel__inputs_58100_54204100_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040,value2integer(abus__w_54672460_channel__inputs_58100_54204100_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value),value2integer(abus__w_54672460_channel__inputs_58100_54204100_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__55408120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55408120 = block;
   block->owner = (Object)__55056560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55408120;

   return block;
};

void code__55056560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_54808900_channel__inputs_58100_54204100_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
            idx = value2integer(abus__r_54672540_channel__inputs_58100_54204100_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_54380540_channel__inputs_58100_54204100_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_54334160_channel__inputs_58100_54204100_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55408120();
   }
      }
   }
}

Block make__55056560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55056560 = block;
   block->owner = (Object)__55775800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55056560;

   return block;
};

Block __77889420;

void code__77889420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_54334160_channel__inputs_58100_54204100_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,_58116_48292520_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__77889420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77889420 = block;
   block->owner = (Object)__77889220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77889420;

   return block;
};

Block __77889180;

void code__77889180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58116_48292520_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,trig__w_54334160_channel__inputs_58100_54204100_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__77889180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77889180 = block;
   block->owner = (Object)__77888960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77889180;

   return block;
};

Block __77888660;

void code__77888660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_54672460_channel__inputs_58100_54204100_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,_58117_48292440_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__77888660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77888660 = block;
   block->owner = (Object)__77888500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77888660;

   return block;
};

Block __77888460;

void code__77888460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58117_48292440_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,abus__w_54672460_channel__inputs_58100_54204100_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__77888460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77888460 = block;
   block->owner = (Object)__77888300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77888460;

   return block;
};

Block __77887980;

void code__77887980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_54672620_channel__inputs_58100_54204100_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,_58118_49576080_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__77887980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77887980 = block;
   block->owner = (Object)__77887820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77887980;

   return block;
};

Block __77887780;

void code__77887780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58118_49576080_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,dbus__w_54672620_channel__inputs_58100_54204100_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__77887780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77887780 = block;
   block->owner = (Object)__77887620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77887780;

   return block;
};

Block __77886880;

void code__77886880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_54380540_channel__inputs_58100_54204100_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,_58114_54521560_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__77886880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77886880 = block;
   block->owner = (Object)__77978660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77886880;

   return block;
};

Block __77886820;

void code__77886820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58112_54521460_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,trig__r_54334180_channel__inputs_58100_54204100_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58113_54521280_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,abus__r_54672540_channel__inputs_58100_54204100_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__77886820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77886820 = block;
   block->owner = (Object)__77978500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77886820;

   return block;
};

Block __77977460;

void code__77977460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_56090980_channel__outputs_58129_55775680_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,_58139_50157660_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__77977460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77977460 = block;
   block->owner = (Object)__77977300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77977460;

   return block;
};

Block __77977260;

void code__77977260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58139_50157660_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,reg__0_56090980_channel__outputs_58129_55775680_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__77977260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77977260 = block;
   block->owner = (Object)__77977060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77977260;

   return block;
};

Block __77975180;

void code__77975180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_56090980_channel__outputs_58129_55775680_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,_58131_56595020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__77975180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77975180 = block;
   block->owner = (Object)__77974960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77975180;

   return block;
};

Block __77974920;

void code__77974920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58131_56595020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,reg__0_56090980_channel__outputs_58129_55775680_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__77974920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77974920 = block;
   block->owner = (Object)__77974460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77974920;

   return block;
};

Block __77973060;

void code__77973060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_56046500_rinc_58138_56046880_channel__outputs_58129_55775680_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,_58140_50157560_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__77973060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77973060 = block;
   block->owner = (Object)__77972900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77973060;

   return block;
};

Block __77972860;

void code__77972860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58140_50157560_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,abus__r_56046500_rinc_58138_56046880_channel__outputs_58129_55775680_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__77972860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77972860 = block;
   block->owner = (Object)__77972660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77972860;

   return block;
};

Block __77994820;

void code__77994820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_47776600_channel__a0_58152_56257160_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,_58154_55105860_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__77994820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77994820 = block;
   block->owner = (Object)__77994640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77994820;

   return block;
};

Block __77994600;

void code__77994600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58154_55105860_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,reg__0_47776600_channel__a0_58152_56257160_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__77994600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77994600 = block;
   block->owner = (Object)__77994420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77994600;

   return block;
};

Block __77993220;

void code__77993220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_48114340_channel__a0_58152_56257160_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,_58155_55663180_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__77993220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77993220 = block;
   block->owner = (Object)__77993000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77993220;

   return block;
};

Block __77992960;

void code__77992960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58155_55663180_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,reg__1_48114340_channel__a0_58152_56257160_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__77992960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77992960 = block;
   block->owner = (Object)__77992720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77992960;

   return block;
};

Block __78003340;

void code__78003340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_56939960_rinc_58164_56940340_channel__a0_58152_56257160_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,_58167_56258780_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__78003340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78003340 = block;
   block->owner = (Object)__78003120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78003340;

   return block;
};

Block __78003080;

void code__78003080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58167_56258780_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,abus__r_56939960_rinc_58164_56940340_channel__a0_58152_56257160_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__78003080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __78003080 = block;
   block->owner = (Object)__78002840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__78003080;

   return block;
};

Block __77992080;

void code__77992080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_47776600_channel__a0_58152_56257160_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,_58165_56059740_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_48114340_channel__a0_58152_56257160_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->c_value,_58166_56259220_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
      set_value_pos(pool_state);
   }
}

Block make__77992080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __77992080 = block;
   block->owner = (Object)__78002680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__77992080;

   return block;
};

Value make__78091080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78091020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78090940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78090860() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78090800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78090720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78090640() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78090580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78090460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__78090380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78090320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78090100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78090000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78089840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78089740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78089700() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78089460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78089400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78089280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78089060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78088960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78088880() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78088800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78088720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78088600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78088560() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78088280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78088220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78088040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78087860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78087780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78087700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78087620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78087540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78087440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78087380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78087320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78087160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78087020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78086880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78086780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78086740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78086500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78086440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78143440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78143280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78143200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78143120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__78143040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78142920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78142740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78142700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78142460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__78142400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__78142220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope sigmoid__neural__network_58_84_54204400;

SignalI ack__0_48114080_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makeack__0_48114080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__0_48114080_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_84_54204400;
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

SignalI ack__1_48114060_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makeack__1_48114060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__1_48114060_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_84_54204400;
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

SignalI fill__inputs_48114040_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makefill__inputs_48114040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill__inputs_48114040_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_84_54204400;
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

SignalI value__inputs_48292680_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makevalue__inputs_48292680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__inputs_48292680_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_84_54204400;
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

SignalI address__inputs_48292580_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makeaddress__inputs_48292580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address__inputs_48292580_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_84_54204400;
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

SignalI flag__inputs_48292560_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makeflag__inputs_48292560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__inputs_48292560_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_84_54204400;
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

SignalI ack__inputs_48292540_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makeack__inputs_48292540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__inputs_48292540_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_84_54204400;
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

SignalI _58116_48292520_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI make_58116_48292520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58116_48292520_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_84_54204400;
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

SignalI _58117_48292440_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI make_58117_48292440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58117_48292440_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_84_54204400;
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

SignalI _58118_49576080_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI make_58118_49576080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58118_49576080_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_84_54204400;
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

SignalI fill__outputs_49576020_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makefill__outputs_49576020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill__outputs_49576020_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_84_54204400;
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

SignalI value__outputs_49988220_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makevalue__outputs_49988220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__outputs_49988220_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_84_54204400;
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

SignalI address__outputs_49988140_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makeaddress__outputs_49988140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address__outputs_49988140_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_84_54204400;
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

SignalI flag__outputs_49988120_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makeflag__outputs_49988120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__outputs_49988120_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_84_54204400;
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

SignalI _58139_50157660_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI make_58139_50157660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58139_50157660_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_84_54204400;
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

SignalI _58140_50157560_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI make_58140_50157560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _58140_50157560_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)sigmoid__neural__network_58_84_54204400;
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

SystemI layer0_55662980;

SystemI makelayer0_55662980() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer0_55662980 = systemI;
   systemI->owner = (Object)sigmoid__neural__network_58_84_54204400;
   systemI->name = "layer0";
   systemI->system = layer0_58_841_54054360;

   return systemI;
};

SystemI layer1_56594880;

SystemI makelayer1_56594880() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer1_56594880 = systemI;
   systemI->owner = (Object)sigmoid__neural__network_58_84_54204400;
   systemI->name = "layer1";
   systemI->system = layer1_58_841_55740300;

   return systemI;
};

Scope channel__inputs_58100_54204100;

SignalI trig__r_54334180_channel__inputs_58100_54204100_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI maketrig__r_54334180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_54334180_channel__inputs_58100_54204100_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)channel__inputs_58100_54204100;
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

SignalI trig__w_54334160_channel__inputs_58100_54204100_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI maketrig__w_54334160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_54334160_channel__inputs_58100_54204100_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)channel__inputs_58100_54204100;
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

SignalI dbus__r_54380540_channel__inputs_58100_54204100_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makedbus__r_54380540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_54380540_channel__inputs_58100_54204100_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)channel__inputs_58100_54204100;
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

SignalI dbus__w_54672620_channel__inputs_58100_54204100_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makedbus__w_54672620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_54672620_channel__inputs_58100_54204100_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)channel__inputs_58100_54204100;
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

SignalI abus__r_54672540_channel__inputs_58100_54204100_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makeabus__r_54672540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_54672540_channel__inputs_58100_54204100_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)channel__inputs_58100_54204100;
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

SignalI abus__w_54672460_channel__inputs_58100_54204100_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makeabus__w_54672460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_54672460_channel__inputs_58100_54204100_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)channel__inputs_58100_54204100;
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

SignalI mem_54808900_channel__inputs_58100_54204100_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makemem_54808900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_54808900_channel__inputs_58100_54204100_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)channel__inputs_58100_54204100;
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

Scope raddr_58101_54203800;

Scope makeraddr_58101_54203800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58101_54203800 = scope;
   scope->owner = (Object)channel__inputs_58100_54204100;
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

Scope waddr_58106_54203380;

Scope makewaddr_58106_54203380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58106_54203380 = scope;
   scope->owner = (Object)channel__inputs_58100_54204100;
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

Scope rinc_58111_54202960;

Behavior __77978660;

Behavior make__77978660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77978660 = behavior;
   behavior->owner = (Object)rinc_58111_54202960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_54380540_channel__inputs_58100_54204100_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   dbus__r_54380540_channel__inputs_58100_54204100_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   dbus__r_54380540_channel__inputs_58100_54204100_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(dbus__r_54380540_channel__inputs_58100_54204100_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,dbus__r_54380540_channel__inputs_58100_54204100_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
dbus__r_54380540_channel__inputs_58100_54204100_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[dbus__r_54380540_channel__inputs_58100_54204100_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__77886880();

   return behavior;
}

Behavior __77978500;

Behavior make__77978500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77978500 = behavior;
   behavior->owner = (Object)rinc_58111_54202960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58112_54521460_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   _58112_54521460_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   _58112_54521460_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(_58112_54521460_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,_58112_54521460_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
_58112_54521460_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[_58112_54521460_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,_58113_54521280_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   _58113_54521280_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   _58113_54521280_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(_58113_54521280_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,_58113_54521280_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
_58113_54521280_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[_58113_54521280_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__77886820();

   return behavior;
}

Scope makerinc_58111_54202960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58111_54202960 = scope;
   scope->owner = (Object)channel__inputs_58100_54204100;
   scope->name = "rinc:111";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__77978660();
   scope->behaviors[1] = make__77978500();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58115_54335460;

Scope makewinc_58115_54335460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58115_54335460 = scope;
   scope->owner = (Object)channel__inputs_58100_54204100;
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

Scope rdec_58119_54335040;

Scope makerdec_58119_54335040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58119_54335040 = scope;
   scope->owner = (Object)channel__inputs_58100_54204100;
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

Scope wdec_58124_54334620;

Scope makewdec_58124_54334620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58124_54334620 = scope;
   scope->owner = (Object)channel__inputs_58100_54204100;
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

Behavior __55775800;

Behavior make__55775800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55775800 = behavior;
   behavior->owner = (Object)channel__inputs_58100_54204100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_62661200_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   clk_62661200_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_neg += 1;
   clk_62661200_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->neg = realloc(clk_62661200_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->neg,clk_62661200_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_neg*sizeof(Object));
clk_62661200_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->neg[clk_62661200_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_neg-1] = (Object)behavior;
   behavior->block = make__55056560();

   return behavior;
}

Behavior __77889220;

Behavior make__77889220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77889220 = behavior;
   behavior->owner = (Object)channel__inputs_58100_54204100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_54334160_channel__inputs_58100_54204100_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   trig__w_54334160_channel__inputs_58100_54204100_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   trig__w_54334160_channel__inputs_58100_54204100_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(trig__w_54334160_channel__inputs_58100_54204100_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,trig__w_54334160_channel__inputs_58100_54204100_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
trig__w_54334160_channel__inputs_58100_54204100_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[trig__w_54334160_channel__inputs_58100_54204100_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__77889420();

   return behavior;
}

Behavior __77888960;

Behavior make__77888960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77888960 = behavior;
   behavior->owner = (Object)channel__inputs_58100_54204100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58116_48292520_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   _58116_48292520_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   _58116_48292520_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(_58116_48292520_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,_58116_48292520_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
_58116_48292520_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[_58116_48292520_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__77889180();

   return behavior;
}

Behavior __77888500;

Behavior make__77888500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77888500 = behavior;
   behavior->owner = (Object)channel__inputs_58100_54204100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_54672460_channel__inputs_58100_54204100_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   abus__w_54672460_channel__inputs_58100_54204100_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   abus__w_54672460_channel__inputs_58100_54204100_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(abus__w_54672460_channel__inputs_58100_54204100_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,abus__w_54672460_channel__inputs_58100_54204100_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
abus__w_54672460_channel__inputs_58100_54204100_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[abus__w_54672460_channel__inputs_58100_54204100_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__77888660();

   return behavior;
}

Behavior __77888300;

Behavior make__77888300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77888300 = behavior;
   behavior->owner = (Object)channel__inputs_58100_54204100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58117_48292440_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   _58117_48292440_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   _58117_48292440_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(_58117_48292440_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,_58117_48292440_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
_58117_48292440_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[_58117_48292440_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__77888460();

   return behavior;
}

Behavior __77887820;

Behavior make__77887820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77887820 = behavior;
   behavior->owner = (Object)channel__inputs_58100_54204100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_54672620_channel__inputs_58100_54204100_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   dbus__w_54672620_channel__inputs_58100_54204100_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   dbus__w_54672620_channel__inputs_58100_54204100_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(dbus__w_54672620_channel__inputs_58100_54204100_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,dbus__w_54672620_channel__inputs_58100_54204100_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
dbus__w_54672620_channel__inputs_58100_54204100_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[dbus__w_54672620_channel__inputs_58100_54204100_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__77887980();

   return behavior;
}

Behavior __77887620;

Behavior make__77887620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77887620 = behavior;
   behavior->owner = (Object)channel__inputs_58100_54204100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58118_49576080_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   _58118_49576080_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   _58118_49576080_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(_58118_49576080_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,_58118_49576080_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
_58118_49576080_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[_58118_49576080_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__77887780();

   return behavior;
}

Scope makechannel__inputs_58100_54204100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__inputs_58100_54204100 = scope;
   scope->owner = (Object)sigmoid__neural__network_58_84_54204400;
   scope->name = "channel_inputs:100";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_54334180();
   scope->inners[1] = maketrig__w_54334160();
   scope->inners[2] = makedbus__r_54380540();
   scope->inners[3] = makedbus__w_54672620();
   scope->inners[4] = makeabus__r_54672540();
   scope->inners[5] = makeabus__w_54672460();
   scope->inners[6] = makemem_54808900();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_58101_54203800();
   scope->scopes[1] = makewaddr_58106_54203380();
   scope->scopes[2] = makerinc_58111_54202960();
   scope->scopes[3] = makewinc_58115_54335460();
   scope->scopes[4] = makerdec_58119_54335040();
   scope->scopes[5] = makewdec_58124_54334620();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__55775800();
   scope->behaviors[1] = make__77889220();
   scope->behaviors[2] = make__77888960();
   scope->behaviors[3] = make__77888500();
   scope->behaviors[4] = make__77888300();
   scope->behaviors[5] = make__77887820();
   scope->behaviors[6] = make__77887620();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__outputs_58129_55775680;

SignalI reg__0_56090980_channel__outputs_58129_55775680_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makereg__0_56090980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_56090980_channel__outputs_58129_55775680_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)channel__outputs_58129_55775680;
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

Scope anum_58130_55775380;

Behavior __77974960;

Behavior make__77974960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77974960 = behavior;
   behavior->owner = (Object)anum_58130_55775380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_56090980_channel__outputs_58129_55775680_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   reg__0_56090980_channel__outputs_58129_55775680_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   reg__0_56090980_channel__outputs_58129_55775680_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(reg__0_56090980_channel__outputs_58129_55775680_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,reg__0_56090980_channel__outputs_58129_55775680_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
reg__0_56090980_channel__outputs_58129_55775680_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[reg__0_56090980_channel__outputs_58129_55775680_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__77975180();

   return behavior;
}

Behavior __77974460;

Behavior make__77974460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77974460 = behavior;
   behavior->owner = (Object)anum_58130_55775380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58131_56595020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   _58131_56595020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   _58131_56595020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(_58131_56595020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,_58131_56595020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
_58131_56595020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[_58131_56595020_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__77974920();

   return behavior;
}

Scope makeanum_58130_55775380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58130_55775380 = scope;
   scope->owner = (Object)channel__outputs_58129_55775680;
   scope->name = "anum:130";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__77974960();
   scope->behaviors[1] = make__77974460();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope raddr_58132_56047720;

Scope makeraddr_58132_56047720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58132_56047720 = scope;
   scope->owner = (Object)channel__outputs_58129_55775680;
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

Scope waddr_58135_56047300;

Scope makewaddr_58135_56047300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58135_56047300 = scope;
   scope->owner = (Object)channel__outputs_58129_55775680;
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

Scope rinc_58138_56046880;

SignalI abus__r_56046500_rinc_58138_56046880_channel__outputs_58129_55775680_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makeabus__r_56046500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_56046500_rinc_58138_56046880_channel__outputs_58129_55775680_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)rinc_58138_56046880;
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

Behavior __77972900;

Behavior make__77972900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77972900 = behavior;
   behavior->owner = (Object)rinc_58138_56046880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_56046500_rinc_58138_56046880_channel__outputs_58129_55775680_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   abus__r_56046500_rinc_58138_56046880_channel__outputs_58129_55775680_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   abus__r_56046500_rinc_58138_56046880_channel__outputs_58129_55775680_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(abus__r_56046500_rinc_58138_56046880_channel__outputs_58129_55775680_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,abus__r_56046500_rinc_58138_56046880_channel__outputs_58129_55775680_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
abus__r_56046500_rinc_58138_56046880_channel__outputs_58129_55775680_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[abus__r_56046500_rinc_58138_56046880_channel__outputs_58129_55775680_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__77973060();

   return behavior;
}

Behavior __77972660;

Behavior make__77972660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77972660 = behavior;
   behavior->owner = (Object)rinc_58138_56046880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58140_50157560_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   _58140_50157560_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   _58140_50157560_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(_58140_50157560_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,_58140_50157560_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
_58140_50157560_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[_58140_50157560_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__77972860();

   return behavior;
}

Scope makerinc_58138_56046880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58138_56046880 = scope;
   scope->owner = (Object)channel__outputs_58129_55775680;
   scope->name = "rinc:138";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_56046500();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__77972900();
   scope->behaviors[1] = make__77972660();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58141_56046120;

SignalI abus__w_56045740_winc_58141_56046120_channel__outputs_58129_55775680_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makeabus__w_56045740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_56045740_winc_58141_56046120_channel__outputs_58129_55775680_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)winc_58141_56046120;
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

Scope makewinc_58141_56046120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58141_56046120 = scope;
   scope->owner = (Object)channel__outputs_58129_55775680;
   scope->name = "winc:141";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_56045740();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58144_56045620;

SignalI abus__r_56045240_rdec_58144_56045620_channel__outputs_58129_55775680_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makeabus__r_56045240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_56045240_rdec_58144_56045620_channel__outputs_58129_55775680_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)rdec_58144_56045620;
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

Scope makerdec_58144_56045620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58144_56045620 = scope;
   scope->owner = (Object)channel__outputs_58129_55775680;
   scope->name = "rdec:144";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_56045240();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58148_56045120;

SignalI abus__w_56044740_wdec_58148_56045120_channel__outputs_58129_55775680_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makeabus__w_56044740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_56044740_wdec_58148_56045120_channel__outputs_58129_55775680_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)wdec_58148_56045120;
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

Scope makewdec_58148_56045120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58148_56045120 = scope;
   scope->owner = (Object)channel__outputs_58129_55775680;
   scope->name = "wdec:148";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_56044740();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __77977300;

Behavior make__77977300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77977300 = behavior;
   behavior->owner = (Object)channel__outputs_58129_55775680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_56090980_channel__outputs_58129_55775680_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   reg__0_56090980_channel__outputs_58129_55775680_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   reg__0_56090980_channel__outputs_58129_55775680_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(reg__0_56090980_channel__outputs_58129_55775680_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,reg__0_56090980_channel__outputs_58129_55775680_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
reg__0_56090980_channel__outputs_58129_55775680_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[reg__0_56090980_channel__outputs_58129_55775680_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__77977460();

   return behavior;
}

Behavior __77977060;

Behavior make__77977060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77977060 = behavior;
   behavior->owner = (Object)channel__outputs_58129_55775680;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58139_50157660_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   _58139_50157660_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   _58139_50157660_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(_58139_50157660_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,_58139_50157660_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
_58139_50157660_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[_58139_50157660_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__77977260();

   return behavior;
}

Scope makechannel__outputs_58129_55775680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__outputs_58129_55775680 = scope;
   scope->owner = (Object)sigmoid__neural__network_58_84_54204400;
   scope->name = "channel_outputs:129";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_56090980();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58130_55775380();
   scope->scopes[1] = makeraddr_58132_56047720();
   scope->scopes[2] = makewaddr_58135_56047300();
   scope->scopes[3] = makerinc_58138_56046880();
   scope->scopes[4] = makewinc_58141_56046120();
   scope->scopes[5] = makerdec_58144_56045620();
   scope->scopes[6] = makewdec_58148_56045120();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__77977300();
   scope->behaviors[1] = make__77977060();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__a0_58152_56257160;

SignalI reg__0_47776600_channel__a0_58152_56257160_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makereg__0_47776600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_47776600_channel__a0_58152_56257160_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)channel__a0_58152_56257160;
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

SignalI reg__1_48114340_channel__a0_58152_56257160_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makereg__1_48114340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_48114340_channel__a0_58152_56257160_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)channel__a0_58152_56257160;
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

Scope anum_58153_56256860;

Behavior __77994640;

Behavior make__77994640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77994640 = behavior;
   behavior->owner = (Object)anum_58153_56256860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_47776600_channel__a0_58152_56257160_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   reg__0_47776600_channel__a0_58152_56257160_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   reg__0_47776600_channel__a0_58152_56257160_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(reg__0_47776600_channel__a0_58152_56257160_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,reg__0_47776600_channel__a0_58152_56257160_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
reg__0_47776600_channel__a0_58152_56257160_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[reg__0_47776600_channel__a0_58152_56257160_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__77994820();

   return behavior;
}

Behavior __77994420;

Behavior make__77994420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77994420 = behavior;
   behavior->owner = (Object)anum_58153_56256860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58154_55105860_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   _58154_55105860_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   _58154_55105860_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(_58154_55105860_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,_58154_55105860_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
_58154_55105860_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[_58154_55105860_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__77994600();

   return behavior;
}

Behavior __77993000;

Behavior make__77993000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77993000 = behavior;
   behavior->owner = (Object)anum_58153_56256860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_48114340_channel__a0_58152_56257160_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   reg__1_48114340_channel__a0_58152_56257160_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   reg__1_48114340_channel__a0_58152_56257160_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(reg__1_48114340_channel__a0_58152_56257160_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,reg__1_48114340_channel__a0_58152_56257160_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
reg__1_48114340_channel__a0_58152_56257160_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[reg__1_48114340_channel__a0_58152_56257160_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__77993220();

   return behavior;
}

Behavior __77992720;

Behavior make__77992720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77992720 = behavior;
   behavior->owner = (Object)anum_58153_56256860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58155_55663180_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   _58155_55663180_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   _58155_55663180_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(_58155_55663180_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,_58155_55663180_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
_58155_55663180_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[_58155_55663180_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__77992960();

   return behavior;
}

Scope makeanum_58153_56256860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58153_56256860 = scope;
   scope->owner = (Object)channel__a0_58152_56257160;
   scope->name = "anum:153";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__77994640();
   scope->behaviors[1] = make__77994420();
   scope->behaviors[2] = make__77993000();
   scope->behaviors[3] = make__77992720();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope raddr_58156_56941180;

Scope makeraddr_58156_56941180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58156_56941180 = scope;
   scope->owner = (Object)channel__a0_58152_56257160;
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

Scope waddr_58160_56940760;

Scope makewaddr_58160_56940760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58160_56940760 = scope;
   scope->owner = (Object)channel__a0_58152_56257160;
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

Scope rinc_58164_56940340;

SignalI abus__r_56939960_rinc_58164_56940340_channel__a0_58152_56257160_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makeabus__r_56939960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_56939960_rinc_58164_56940340_channel__a0_58152_56257160_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)rinc_58164_56940340;
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

Behavior __78003120;

Behavior make__78003120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78003120 = behavior;
   behavior->owner = (Object)rinc_58164_56940340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_56939960_rinc_58164_56940340_channel__a0_58152_56257160_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   abus__r_56939960_rinc_58164_56940340_channel__a0_58152_56257160_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   abus__r_56939960_rinc_58164_56940340_channel__a0_58152_56257160_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(abus__r_56939960_rinc_58164_56940340_channel__a0_58152_56257160_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,abus__r_56939960_rinc_58164_56940340_channel__a0_58152_56257160_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
abus__r_56939960_rinc_58164_56940340_channel__a0_58152_56257160_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[abus__r_56939960_rinc_58164_56940340_channel__a0_58152_56257160_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__78003340();

   return behavior;
}

Behavior __78002840;

Behavior make__78002840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78002840 = behavior;
   behavior->owner = (Object)rinc_58164_56940340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58167_56258780_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   _58167_56258780_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   _58167_56258780_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(_58167_56258780_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,_58167_56258780_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
_58167_56258780_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[_58167_56258780_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__78003080();

   return behavior;
}

Behavior __78002680;

Behavior make__78002680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __78002680 = behavior;
   behavior->owner = (Object)rinc_58164_56940340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_47776600_channel__a0_58152_56257160_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   reg__0_47776600_channel__a0_58152_56257160_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   reg__0_47776600_channel__a0_58152_56257160_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(reg__0_47776600_channel__a0_58152_56257160_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,reg__0_47776600_channel__a0_58152_56257160_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
reg__0_47776600_channel__a0_58152_56257160_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[reg__0_47776600_channel__a0_58152_56257160_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,reg__1_48114340_channel__a0_58152_56257160_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   reg__1_48114340_channel__a0_58152_56257160_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   reg__1_48114340_channel__a0_58152_56257160_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(reg__1_48114340_channel__a0_58152_56257160_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,reg__1_48114340_channel__a0_58152_56257160_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
reg__1_48114340_channel__a0_58152_56257160_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[reg__1_48114340_channel__a0_58152_56257160_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__77992080();

   return behavior;
}

Scope makerinc_58164_56940340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58164_56940340 = scope;
   scope->owner = (Object)channel__a0_58152_56257160;
   scope->name = "rinc:164";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_56939960();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__78003120();
   scope->behaviors[1] = make__78002840();
   scope->behaviors[2] = make__78002680();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58168_45770820;

SignalI abus__w_45769460_winc_58168_45770820_channel__a0_58152_56257160_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makeabus__w_45769460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_45769460_winc_58168_45770820_channel__a0_58152_56257160_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)winc_58168_45770820;
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

Scope makewinc_58168_45770820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58168_45770820 = scope;
   scope->owner = (Object)channel__a0_58152_56257160;
   scope->name = "winc:168";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_45769460();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58172_45793100;

SignalI abus__r_45791780_rdec_58172_45793100_channel__a0_58152_56257160_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makeabus__r_45791780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_45791780_rdec_58172_45793100_channel__a0_58152_56257160_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)rdec_58172_45793100;
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

Scope makerdec_58172_45793100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58172_45793100 = scope;
   scope->owner = (Object)channel__a0_58152_56257160;
   scope->name = "rdec:172";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_45791780();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58177_45791220;

SignalI abus__w_45790100_wdec_58177_45791220_channel__a0_58152_56257160_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040;

SignalI makeabus__w_45790100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_45790100_wdec_58177_45791220_channel__a0_58152_56257160_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040 = signalI;
   signalI->owner = (Object)wdec_58177_45791220;
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

Scope makewdec_58177_45791220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58177_45791220 = scope;
   scope->owner = (Object)channel__a0_58152_56257160;
   scope->name = "wdec:177";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_45790100();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope makechannel__a0_58152_56257160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__a0_58152_56257160 = scope;
   scope->owner = (Object)sigmoid__neural__network_58_84_54204400;
   scope->name = "channel_a0:152";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_47776600();
   scope->inners[1] = makereg__1_48114340();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58153_56256860();
   scope->scopes[1] = makeraddr_58156_56941180();
   scope->scopes[2] = makewaddr_58160_56940760();
   scope->scopes[3] = makerinc_58164_56940340();
   scope->scopes[4] = makewinc_58168_45770820();
   scope->scopes[5] = makerdec_58172_45793100();
   scope->scopes[6] = makewdec_58177_45791220();
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __56607160;

Behavior make__56607160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56607160 = behavior;
   behavior->owner = (Object)sigmoid__neural__network_58_84_54204400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_62661200_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   clk_62661200_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_pos += 1;
   clk_62661200_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->pos = realloc(clk_62661200_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->pos,clk_62661200_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_pos*sizeof(Object));
clk_62661200_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->pos[clk_62661200_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_pos-1] = (Object)behavior;
   behavior->block = make__56614280();

   return behavior;
}

Behavior __62188960;

Behavior make__62188960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62188960 = behavior;
   behavior->owner = (Object)sigmoid__neural__network_58_84_54204400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_62661200_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   clk_62661200_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_pos += 1;
   clk_62661200_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->pos = realloc(clk_62661200_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->pos,clk_62661200_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_pos*sizeof(Object));
clk_62661200_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->pos[clk_62661200_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_pos-1] = (Object)behavior;
   behavior->block = make__56639000();

   return behavior;
}

Behavior __62663600;

Behavior make__62663600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62663600 = behavior;
   behavior->owner = (Object)sigmoid__neural__network_58_84_54204400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_62661200_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   clk_62661200_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_pos += 1;
   clk_62661200_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->pos = realloc(clk_62661200_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->pos,clk_62661200_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_pos*sizeof(Object));
clk_62661200_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->pos[clk_62661200_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_pos-1] = (Object)behavior;
   behavior->block = make__62188820();

   return behavior;
}

Behavior __77866320;

Behavior make__77866320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77866320 = behavior;
   behavior->owner = (Object)sigmoid__neural__network_58_84_54204400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,fill_62661120_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   fill_62661120_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   fill_62661120_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(fill_62661120_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,fill_62661120_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
fill_62661120_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[fill_62661120_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__inputs_48292540_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   ack__inputs_48292540_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   ack__inputs_48292540_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(ack__inputs_48292540_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,ack__inputs_48292540_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
ack__inputs_48292540_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[ack__inputs_48292540_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,flag__inputs_48292560_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   flag__inputs_48292560_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   flag__inputs_48292560_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(flag__inputs_48292560_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,flag__inputs_48292560_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
flag__inputs_48292560_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[flag__inputs_48292560_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__77866700();

   return behavior;
}

Behavior __77865960;

Behavior make__77865960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77865960 = behavior;
   behavior->owner = (Object)sigmoid__neural__network_58_84_54204400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__1_48114060_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   ack__1_48114060_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   ack__1_48114060_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(ack__1_48114060_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,ack__1_48114060_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
ack__1_48114060_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[ack__1_48114060_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__network_62760940_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   ack__network_62760940_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   ack__network_62760940_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(ack__network_62760940_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,ack__network_62760940_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
ack__network_62760940_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[ack__network_62760940_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,flag__outputs_49988120_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   flag__outputs_49988120_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   flag__outputs_49988120_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(flag__outputs_49988120_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,flag__outputs_49988120_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
flag__outputs_49988120_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[flag__outputs_49988120_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__77866280();

   return behavior;
}

Behavior __77865800;

Behavior make__77865800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77865800 = behavior;
   behavior->owner = (Object)sigmoid__neural__network_58_84_54204400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_62661200_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   clk_62661200_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   clk_62661200_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(clk_62661200_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,clk_62661200_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
clk_62661200_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[clk_62661200_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_62661160_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   rst_62661160_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   rst_62661160_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(rst_62661160_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,rst_62661160_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
rst_62661160_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[rst_62661160_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,req_62661140_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   req_62661140_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   req_62661140_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(req_62661140_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,req_62661140_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
req_62661140_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[req_62661140_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,ack__0_48114080_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   ack__0_48114080_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   ack__0_48114080_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(ack__0_48114080_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,ack__0_48114080_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
ack__0_48114080_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[ack__0_48114080_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__inputs_48292540_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   ack__inputs_48292540_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   ack__inputs_48292540_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(ack__inputs_48292540_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,ack__inputs_48292540_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
ack__inputs_48292540_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[ack__inputs_48292540_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__77800820();

   return behavior;
}

Behavior __77865640;

Behavior make__77865640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __77865640 = behavior;
   behavior->owner = (Object)sigmoid__neural__network_58_84_54204400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__layer_54521500_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   ack__layer_54521500_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   ack__layer_54521500_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(ack__layer_54521500_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,ack__layer_54521500_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
ack__layer_54521500_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[ack__layer_54521500_layer0_58_841_54054360_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__layer_56259160_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040);
   ack__layer_56259160_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any += 1;
   ack__layer_56259160_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any = realloc(ack__layer_56259160_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any,ack__layer_56259160_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any*sizeof(Object));
ack__layer_56259160_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->any[ack__layer_56259160_layer1_58_841_55740300_sigmoid__neural__network_58_84_54204400_sigmoid__neural__network_58_840_62663260______58_84_50200880______58_840_77325040->num_any-1] = (Object)behavior;
   behavior->block = make__77800760();

   return behavior;
}

Scope makesigmoid__neural__network_58_84_54204400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   sigmoid__neural__network_58_84_54204400 = scope;
   scope->owner = (Object)sigmoid__neural__network_58_840_62663260;
   scope->name = "sigmoid_neural_network:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makelayer0_55662980();
   scope->systemIs[1] = makelayer1_56594880();
   scope->num_inners = 16;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeack__0_48114080();
   scope->inners[1] = makeack__1_48114060();
   scope->inners[2] = makefill__inputs_48114040();
   scope->inners[3] = makevalue__inputs_48292680();
   scope->inners[4] = makeaddress__inputs_48292580();
   scope->inners[5] = makeflag__inputs_48292560();
   scope->inners[6] = makeack__inputs_48292540();
   scope->inners[7] = make_58116_48292520();
   scope->inners[8] = make_58117_48292440();
   scope->inners[9] = make_58118_49576080();
   scope->inners[10] = makefill__outputs_49576020();
   scope->inners[11] = makevalue__outputs_49988220();
   scope->inners[12] = makeaddress__outputs_49988140();
   scope->inners[13] = makeflag__outputs_49988120();
   scope->inners[14] = make_58139_50157660();
   scope->inners[15] = make_58140_50157560();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__inputs_58100_54204100();
   scope->scopes[1] = makechannel__outputs_58129_55775680();
   scope->scopes[2] = makechannel__a0_58152_56257160();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__56607160();
   scope->behaviors[1] = make__62188960();
   scope->behaviors[2] = make__62663600();
   scope->behaviors[3] = make__77866320();
   scope->behaviors[4] = make__77865960();
   scope->behaviors[5] = make__77865800();
   scope->behaviors[6] = make__77865640();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makesigmoid__neural__network_58_840_62663260() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   sigmoid__neural__network_58_840_62663260 = systemT;
systemT->owner = NULL;
   systemT->name = "sigmoid_neural_network:T0";
   systemT->num_inputs = 5;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_62661200();
   systemT->inputs[1] = makerst_62661160();
   systemT->inputs[2] = makereq_62661140();
   systemT->inputs[3] = makefill_62661120();
   systemT->inputs[4] = make_5810_62761000();
   systemT->num_outputs = 5;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__fill_62760960();
   systemT->outputs[1] = makeack__network_62760940();
   systemT->outputs[2] = make_588_62760920();
   systemT->outputs[3] = make_589_62760840();
   systemT->outputs[4] = make_5829_62916920();
   systemT->num_inouts = 1;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);
   systemT->inouts[0] = make_5830_62916820();

   systemT->scope = makesigmoid__neural__network_58_84_54204400();

   return systemT;
}