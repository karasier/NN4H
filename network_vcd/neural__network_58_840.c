#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT neural__network_58_840_56110080;

SignalI clk_56129560_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makeclk_56129560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_56129560_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)neural__network_58_840_56110080;
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

SignalI rst_56129540_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makerst_56129540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_56129540_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)neural__network_58_840_56110080;
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

SignalI req_56129480_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makereq_56129480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_56129480_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)neural__network_58_840_56110080;
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

SignalI fill_56129420_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makefill_56129420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_56129420_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)neural__network_58_840_56110080;
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

SignalI _5810_56517020_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI make_5810_56517020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5810_56517020_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)neural__network_58_840_56110080;
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

SignalI ack__fill_56516880_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makeack__fill_56516880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__fill_56516880_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)neural__network_58_840_56110080;
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

SignalI ack__network_56516860_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makeack__network_56516860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__network_56516860_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)neural__network_58_840_56110080;
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

SignalI _588_56516820_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI make_588_56516820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _588_56516820_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)neural__network_58_840_56110080;
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

SignalI _589_56516720_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI make_589_56516720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _589_56516720_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)neural__network_58_840_56110080;
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

SignalI _5832_56516700_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI make_5832_56516700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5832_56516700_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)neural__network_58_840_56110080;
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

SignalI _5833_56541040_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI make_5833_56541040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5833_56541040_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)neural__network_58_840_56110080;
   signalI->name = ":33";
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

SignalI _5834_56835040_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI make_5834_56835040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5834_56835040_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)neural__network_58_840_56110080;
   signalI->name = ":34";
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

Block __65097280;

Block __65096900;

void code__65096900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62226980(),ack__0_49435300_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62226920(),ack__1_49435280_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__65096900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65096900 = block;
   block->owner = (Object)__65097280;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65096900;

   return block;
};

void code__65097280() {
   {
      Value cond = rst_56129540_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65096900();
   }
      }
   }
}

Block make__65097280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65097280 = block;
   block->owner = (Object)__65095820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65097280;

   return block;
};

Block __65095660;

Block __65095020;

Block __65094500;

void code__65094500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62226680(),_5862_49762000_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__65094500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65094500 = block;
   block->owner = (Object)__65095020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65094500;

   return block;
};

void code__65095020() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_56129540_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__62226820();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65094500();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62226620(),_5861_49762080_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__65095020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65095020 = block;
   block->owner = (Object)__65095660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65095020;

   return block;
};

Block __65093760;

Block __65117900;

void code__65117900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62242760(),_589_56516720_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__65117900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65117900 = block;
   block->owner = (Object)__65093760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65117900;

   return block;
};

void code__65093760() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_56129540_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__62226520();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65117900();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62242560(),_588_56516820_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__65093760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65093760 = block;
   block->owner = (Object)__65095660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65093760;

   return block;
};

Block __65116400;

void code__65116400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62242200(),address__inputs_49762160_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62242140(),flag__inputs_49762120_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62242040(),ack__inputs_49762100_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__65116400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65116400 = block;
   block->owner = (Object)__65095660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65116400;

   return block;
};

Block __65115300;

Block __65114800;

Block __65114000;

Block __65111460;

Block __65111280;

void code__65111280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_5810_56517020_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,value__inputs_49762260_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62241400(),flag__inputs_49762120_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__65111280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65111280 = block;
   block->owner = (Object)__65111460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65111280;

   return block;
};

void code__65111460() {
 code__65111280();
}

Block make__65111460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65111460 = block;
   block->owner = (Object)__65114000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65111460;

   return block;
};

Block __65113720;

void code__65113720() {
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
                  src0 = _589_56516720_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
                  src1 = make__62241240();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__62241200();
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
                        src0 = _589_56516720_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__62240880();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__62240820();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_589_56516720_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62240700(),_588_56516820_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__65113720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65113720 = block;
   block->owner = (Object)__65114000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65113720;

   return block;
};

void code__65114000() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _588_56516820_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__62241600();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65111460();
   }
   else {
  code__65113720();
   }
      }
   }
}

Block make__65114000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65114000 = block;
   block->owner = (Object)__65114800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65114000;

   return block;
};

void code__65114800() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_56129540_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__62241840();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65114000();
   }
      }
   }
}

Block make__65114800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65114800 = block;
   block->owner = (Object)__65115300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65114800;

   return block;
};

void code__65115300() {
 code__65114800();
}

Block make__65115300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65115300 = block;
   block->owner = (Object)__65095660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65115300;

   return block;
};

Block __65395380;

Block __65395220;

Block __65394040;

void code__65394040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62239940(),ack__inputs_49762100_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__65394040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65394040 = block;
   block->owner = (Object)__65395220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65394040;

   return block;
};

void code__65395220() {
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
                  src0 = address__inputs_49762160_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__62240440();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),address__inputs_49762160_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62240320(),flag__inputs_49762120_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address__inputs_49762160_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__62240040();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65394040();
   }
      }
   }
}

Block make__65395220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65395220 = block;
   block->owner = (Object)__65395380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65395220;

   return block;
};

Block __65392800;

Block __65391760;

void code__65391760() {
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
                  src0 = _5862_49762000_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
                  src1 = make__62239560();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__62239460();
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
                        src0 = _5862_49762000_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__62239160();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__62239080();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_5862_49762000_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62238940(),_5861_49762080_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__inputs_49762260_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,_5863_50297960_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__65391760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65391760 = block;
   block->owner = (Object)__65392800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65391760;

   return block;
};

void code__65392800() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_56129540_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__62239720();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65391760();
   }
      }
   }
}

Block make__65392800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65392800 = block;
   block->owner = (Object)__65395380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65392800;

   return block;
};

void code__65395380() {
 code__65395220();
 code__65392800();
}

Block make__65395380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65395380 = block;
   block->owner = (Object)__65095660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65395380;

   return block;
};

Block __65116880;

void code__65116880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62238700(),flag__inputs_49762120_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__65116880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65116880 = block;
   block->owner = (Object)__65095660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65116880;

   return block;
};

void code__65095660() {
 code__65095020();
 code__65093760();
   {
      Value cond = rst_56129540_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__65116400();
   }
   else if (value2integer(fill__inputs_49435260_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value)) {
  code__65115300();
   }
   else if (value2integer(flag__inputs_49762120_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value)) {
  code__65395380();
   }
   else {
  code__65116880();
   }
      }
   }
}

Block make__65095660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __65095660 = block;
   block->owner = (Object)__47908100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__65095660;

   return block;
};

Block __47928680;

Block __47927400;

Block __47924680;

void code__47924680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62238500(),_5833_56541040_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__47924680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47924680 = block;
   block->owner = (Object)__47927400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47924680;

   return block;
};

void code__47927400() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_56129540_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__62238600();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47924680();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62238440(),_5832_56516700_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__47927400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47927400 = block;
   block->owner = (Object)__47928680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47927400;

   return block;
};

Block __47946320;

Block __47963320;

void code__47963320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62238160(),_5893_50878060_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__47963320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47963320 = block;
   block->owner = (Object)__47946320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47963320;

   return block;
};

void code__47946320() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_56129540_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__62238260();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47963320();
   }
      }
   }
}

Block make__47946320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47946320 = block;
   block->owner = (Object)__47928680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47946320;

   return block;
};

Block __47991340;

void code__47991340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62237820(),address__outputs_50361060_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62237740(),flag__outputs_50361040_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62237640(),ack__network_56516860_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__47991340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47991340 = block;
   block->owner = (Object)__47928680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47991340;

   return block;
};

Block __48027760;

Block __48025400;

Block __48022500;

Block __48039140;

void code__48039140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5890_50543700_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,value__outputs_50361220_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__48039140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48039140 = block;
   block->owner = (Object)__48022500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48039140;

   return block;
};

Block __50570840;

void code__50570840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5891_50668060_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,value__outputs_50361220_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__50570840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50570840 = block;
   block->owner = (Object)__48022500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50570840;

   return block;
};

Block __54242200;

void code__54242200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5892_50878140_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,value__outputs_50361220_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__54242200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54242200 = block;
   block->owner = (Object)__48022500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54242200;

   return block;
};

void code__48022500() {
{
      Value value = _5893_50878060_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__62237000())) {
    code__48039140();
         }
         else if (value2integer(value) == value2integer(make__62236840())) {
    code__50570840();
         }
         else if (value2integer(value) == value2integer(make__62236740())) {
    code__54242200();
         }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62236600(),flag__outputs_50361040_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
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
                  src0 = _5893_50878060_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
                  src1 = make__62236500();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__62236460();
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
                        src0 = _5893_50878060_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__62236220();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__62236160();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_5893_50878060_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__48022500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48022500 = block;
   block->owner = (Object)__48025400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48022500;

   return block;
};

void code__48025400() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_56129540_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__62237160();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48022500();
   }
      }
   }
}

Block make__48025400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48025400 = block;
   block->owner = (Object)__48027760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48025400;

   return block;
};

void code__48027760() {
 code__48025400();
}

Block make__48027760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48027760 = block;
   block->owner = (Object)__47928680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48027760;

   return block;
};

Block __55029840;

Block __55028780;

Block __55026160;

void code__55026160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62235280(),ack__network_56516860_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__55026160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55026160 = block;
   block->owner = (Object)__55028780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55026160;

   return block;
};

void code__55028780() {
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
                  src0 = address__outputs_50361060_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__62235820();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),address__outputs_50361060_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62235620(),flag__outputs_50361040_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address__outputs_50361060_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__62235420();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55026160();
   }
      }
   }
}

Block make__55028780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55028780 = block;
   block->owner = (Object)__55029840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55028780;

   return block;
};

Block __55048960;

Block __55046420;

void code__55046420() {
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
                  src0 = _5833_56541040_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
                  src1 = make__62234800();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__62234760();
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
                        src0 = _5833_56541040_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__62258960();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__62258900();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_5833_56541040_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62258720(),_5832_56516700_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__outputs_50361220_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,_5834_56835040_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__55046420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55046420 = block;
   block->owner = (Object)__55048960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55046420;

   return block;
};

void code__55048960() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_56129540_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__62234980();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55046420();
   }
      }
   }
}

Block make__55048960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55048960 = block;
   block->owner = (Object)__55029840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55048960;

   return block;
};

void code__55029840() {
 code__55028780();
 code__55048960();
}

Block make__55029840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55029840 = block;
   block->owner = (Object)__47928680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55029840;

   return block;
};

Block __47980380;

void code__47980380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62258540(),flag__outputs_50361040_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__47980380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47980380 = block;
   block->owner = (Object)__47928680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47980380;

   return block;
};

void code__47928680() {
 code__47927400();
 code__47946320();
   {
      Value cond = rst_56129540_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47991340();
   }
   else if (value2integer(fill__outputs_50297940_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value)) {
  code__48027760();
   }
   else if (value2integer(flag__outputs_50361040_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value)) {
  code__55029840();
   }
   else {
  code__47980380();
   }
      }
   }
}

Block make__47928680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47928680 = block;
   block->owner = (Object)__56110680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47928680;

   return block;
};

Block __61860040;

void code__61860040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = fill_56129420_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
            src1 = ({
                  Value src0, dst;
                  dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ack__inputs_49762100_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
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
            src0 = flag__inputs_49762120_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),fill__inputs_49435260_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__61860040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61860040 = block;
   block->owner = (Object)__61859600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61860040;

   return block;
};

Block __61859560;

void code__61859560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__1_49435280_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
            src1 = ({
                  Value src0, dst;
                  dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ack__network_56516860_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
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
            src0 = flag__outputs_50361040_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),fill__outputs_50297940_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__61859560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61859560 = block;
   block->owner = (Object)__61858780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61859560;

   return block;
};

Block __61814180;

void code__61814180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_56129560_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,clk_56670600_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_56129540_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,rst_56670580_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(req_56129480_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,req_56670560_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_56129560_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,clk_63931820_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_56129540_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,rst_63931800_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__0_49435300_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,req_63931780_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__inputs_49762100_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,ack__fill_56516880_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__61814180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61814180 = block;
   block->owner = (Object)__61858580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61814180;

   return block;
};

Block __61814120;

void code__61814120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__layer_56799700_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,ack__0_49435300_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__layer_64463200_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,ack__1_49435280_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__61814120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61814120 = block;
   block->owner = (Object)__61858380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61814120;

   return block;
};

Block __50392940;

Block __50876400;

void code__50876400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_50139140_channel__inputs_5845_49156600_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,make_ref_rangeS(mem_50263920_channel__inputs_5845_49156600_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300,value2integer(abus__w_50138840_channel__inputs_5845_49156600_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value),value2integer(abus__w_50138840_channel__inputs_5845_49156600_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__50876400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50876400 = block;
   block->owner = (Object)__50392940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50876400;

   return block;
};

void code__50392940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_50263920_channel__inputs_5845_49156600_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
            idx = value2integer(abus__r_50139020_channel__inputs_5845_49156600_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_48835420_channel__inputs_5845_49156600_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_49641180_channel__inputs_5845_49156600_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50876400();
   }
      }
   }
}

Block make__50392940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50392940 = block;
   block->owner = (Object)__51184060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50392940;

   return block;
};

Block __61898320;

void code__61898320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_49641180_channel__inputs_5845_49156600_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,_5861_49762080_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__61898320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61898320 = block;
   block->owner = (Object)__61898040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61898320;

   return block;
};

Block __61897980;

void code__61897980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5861_49762080_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,trig__w_49641180_channel__inputs_5845_49156600_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__61897980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61897980 = block;
   block->owner = (Object)__61897540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61897980;

   return block;
};

Block __61896600;

void code__61896600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_50138840_channel__inputs_5845_49156600_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,_5862_49762000_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__61896600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61896600 = block;
   block->owner = (Object)__61895680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61896600;

   return block;
};

Block __61895440;

void code__61895440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5862_49762000_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,abus__w_50138840_channel__inputs_5845_49156600_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__61895440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61895440 = block;
   block->owner = (Object)__61894920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61895440;

   return block;
};

Block __61893540;

void code__61893540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_50139140_channel__inputs_5845_49156600_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,_5863_50297960_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__61893540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61893540 = block;
   block->owner = (Object)__61891660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61893540;

   return block;
};

Block __61891540;

void code__61891540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5863_50297960_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,dbus__w_50139140_channel__inputs_5845_49156600_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__61891540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61891540 = block;
   block->owner = (Object)__61930260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61891540;

   return block;
};

Block __61926960;

void code__61926960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_48835420_channel__inputs_5845_49156600_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,_5859_56799780_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__61926960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61926960 = block;
   block->owner = (Object)__61942140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61926960;

   return block;
};

Block __61926900;

void code__61926900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5857_56799680_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,trig__r_49641200_channel__inputs_5845_49156600_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5858_56799540_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,abus__r_50139020_channel__inputs_5845_49156600_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__61926900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61926900 = block;
   block->owner = (Object)__61941980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61926900;

   return block;
};

Block __61940560;

void code__61940560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_49637900_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,_5890_50543700_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__61940560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61940560 = block;
   block->owner = (Object)__61940300;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61940560;

   return block;
};

Block __61940180;

void code__61940180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5890_50543700_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,reg__0_49637900_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__61940180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61940180 = block;
   block->owner = (Object)__61939860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61940180;

   return block;
};

Block __61980420;

void code__61980420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_50227300_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,_5891_50668060_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__61980420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61980420 = block;
   block->owner = (Object)__61980260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61980420;

   return block;
};

Block __61980220;

void code__61980220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5891_50668060_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,reg__1_50227300_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__61980220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61980220 = block;
   block->owner = (Object)__61980060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61980220;

   return block;
};

Block __61979720;

void code__61979720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__2_49746320_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,_5892_50878140_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__61979720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61979720 = block;
   block->owner = (Object)__61979400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61979720;

   return block;
};

Block __61979280;

void code__61979280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5892_50878140_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,reg__2_49746320_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__61979280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61979280 = block;
   block->owner = (Object)__61978860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61979280;

   return block;
};

Block __61975720;

void code__61975720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_49637900_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,_5876_64618060_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__61975720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61975720 = block;
   block->owner = (Object)__61975500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61975720;

   return block;
};

Block __61975460;

void code__61975460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5876_64618060_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,reg__0_49637900_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__61975460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61975460 = block;
   block->owner = (Object)__61974660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61975460;

   return block;
};

Block __61972940;

void code__61972940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_50227300_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,_5877_64887400_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__61972940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61972940 = block;
   block->owner = (Object)__61972620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61972940;

   return block;
};

Block __61972540;

void code__61972540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5877_64887400_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,reg__1_50227300_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__61972540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61972540 = block;
   block->owner = (Object)__62029600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61972540;

   return block;
};

Block __62027720;

void code__62027720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__2_49746320_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,_5878_65100860_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__62027720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62027720 = block;
   block->owner = (Object)__62027480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62027720;

   return block;
};

Block __62027440;

void code__62027440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5878_65100860_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,reg__2_49746320_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__62027440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62027440 = block;
   block->owner = (Object)__62027220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62027440;

   return block;
};

Block __62025080;

void code__62025080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_49366160_rinc_5889_49368620_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,_5893_50878060_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__62025080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62025080 = block;
   block->owner = (Object)__62024920;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62025080;

   return block;
};

Block __62024860;

void code__62024860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5893_50878060_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,abus__r_49366160_rinc_5889_49368620_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__62024860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62024860 = block;
   block->owner = (Object)__62024680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62024860;

   return block;
};

Block __62045820;

void code__62045820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_49658260_channel__a0_58111_50923620_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,_58113_57072580_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__62045820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62045820 = block;
   block->owner = (Object)__62045500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62045820;

   return block;
};

Block __62045460;

void code__62045460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58113_57072580_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,reg__0_49658260_channel__a0_58111_50923620_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__62045460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62045460 = block;
   block->owner = (Object)__62045180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62045460;

   return block;
};

Block __62043380;

void code__62043380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_49435720_channel__a0_58111_50923620_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,_58114_47004260_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__62043380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62043380 = block;
   block->owner = (Object)__62043140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62043380;

   return block;
};

Block __62043080;

void code__62043080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58114_47004260_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,reg__1_49435720_channel__a0_58111_50923620_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__62043080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62043080 = block;
   block->owner = (Object)__62042860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62043080;

   return block;
};

Block __62058680;

void code__62058680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_47445300_rinc_58123_47446300_channel__a0_58111_50923620_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,_58126_64463040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__62058680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62058680 = block;
   block->owner = (Object)__62058240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62058680;

   return block;
};

Block __62058140;

void code__62058140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58126_64463040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,abus__r_47445300_rinc_58123_47446300_channel__a0_58111_50923620_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__62058140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62058140 = block;
   block->owner = (Object)__62057740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62058140;

   return block;
};

Block __62041860;

void code__62041860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_49658260_channel__a0_58111_50923620_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,_58124_64208520_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_49435720_channel__a0_58111_50923620_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value,_58125_64463240_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__62041860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62041860 = block;
   block->owner = (Object)__62057460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62041860;

   return block;
};

Value make__62226980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62226920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62226820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62226680() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__62226620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62226520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62242760() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__62242560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62242200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__62242140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62242040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62241840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62241600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62241400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62241240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62241200() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62240880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62240820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__62240700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62240440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62240320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62240040() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62239940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62239720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62239560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62239460() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62239160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62239080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__62238940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62238700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62238600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62238500() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__62238440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62238260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62238160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__62237820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__62237740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62237640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62237160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62237000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__62236840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__62236740() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__62236600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62236500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62236460() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62236220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62236160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__62235820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62235620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62235420() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62235280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62234980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62234800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62234760() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62258960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62258900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__62258720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62258540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope neural__network_58_84_49158220;

SignalI ack__0_49435300_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makeack__0_49435300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__0_49435300_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)neural__network_58_84_49158220;
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

SignalI ack__1_49435280_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makeack__1_49435280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__1_49435280_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)neural__network_58_84_49158220;
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

SignalI fill__inputs_49435260_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makefill__inputs_49435260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill__inputs_49435260_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)neural__network_58_84_49158220;
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

SignalI value__inputs_49762260_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makevalue__inputs_49762260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__inputs_49762260_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)neural__network_58_84_49158220;
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

SignalI address__inputs_49762160_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makeaddress__inputs_49762160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address__inputs_49762160_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)neural__network_58_84_49158220;
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

SignalI flag__inputs_49762120_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makeflag__inputs_49762120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__inputs_49762120_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)neural__network_58_84_49158220;
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

SignalI ack__inputs_49762100_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makeack__inputs_49762100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__inputs_49762100_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)neural__network_58_84_49158220;
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

SignalI _5861_49762080_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI make_5861_49762080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5861_49762080_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)neural__network_58_84_49158220;
   signalI->name = ":61";
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

SignalI _5862_49762000_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI make_5862_49762000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5862_49762000_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)neural__network_58_84_49158220;
   signalI->name = ":62";
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

SignalI _5863_50297960_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI make_5863_50297960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5863_50297960_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)neural__network_58_84_49158220;
   signalI->name = ":63";
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

SignalI fill__outputs_50297940_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makefill__outputs_50297940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill__outputs_50297940_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)neural__network_58_84_49158220;
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

SignalI value__outputs_50361220_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makevalue__outputs_50361220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__outputs_50361220_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)neural__network_58_84_49158220;
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

SignalI address__outputs_50361060_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makeaddress__outputs_50361060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address__outputs_50361060_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)neural__network_58_84_49158220;
   signalI->name = "address_outputs";
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

SignalI flag__outputs_50361040_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makeflag__outputs_50361040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__outputs_50361040_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)neural__network_58_84_49158220;
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

SignalI _5890_50543700_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI make_5890_50543700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5890_50543700_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)neural__network_58_84_49158220;
   signalI->name = ":90";
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

SignalI _5891_50668060_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI make_5891_50668060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5891_50668060_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)neural__network_58_84_49158220;
   signalI->name = ":91";
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

SignalI _5892_50878140_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI make_5892_50878140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5892_50878140_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)neural__network_58_84_49158220;
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

SignalI _5893_50878060_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI make_5893_50878060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5893_50878060_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)neural__network_58_84_49158220;
   signalI->name = ":93";
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

SystemI layer0_47004040;

SystemI makelayer0_47004040() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer0_47004040 = systemI;
   systemI->owner = (Object)neural__network_58_84_49158220;
   systemI->name = "layer0";
   systemI->system = layer0_58_840_56648760;

   return systemI;
};

SystemI layer1_65100680;

SystemI makelayer1_65100680() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer1_65100680 = systemI;
   systemI->owner = (Object)neural__network_58_84_49158220;
   systemI->name = "layer1";
   systemI->system = layer1_58_840_63934400;

   return systemI;
};

Scope channel__inputs_5845_49156600;

SignalI trig__r_49641200_channel__inputs_5845_49156600_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI maketrig__r_49641200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_49641200_channel__inputs_5845_49156600_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)channel__inputs_5845_49156600;
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

SignalI trig__w_49641180_channel__inputs_5845_49156600_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI maketrig__w_49641180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_49641180_channel__inputs_5845_49156600_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)channel__inputs_5845_49156600;
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

SignalI dbus__r_48835420_channel__inputs_5845_49156600_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makedbus__r_48835420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_48835420_channel__inputs_5845_49156600_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)channel__inputs_5845_49156600;
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

SignalI dbus__w_50139140_channel__inputs_5845_49156600_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makedbus__w_50139140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_50139140_channel__inputs_5845_49156600_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)channel__inputs_5845_49156600;
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

SignalI abus__r_50139020_channel__inputs_5845_49156600_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makeabus__r_50139020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50139020_channel__inputs_5845_49156600_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)channel__inputs_5845_49156600;
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

SignalI abus__w_50138840_channel__inputs_5845_49156600_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makeabus__w_50138840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50138840_channel__inputs_5845_49156600_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)channel__inputs_5845_49156600;
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

SignalI mem_50263920_channel__inputs_5845_49156600_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makemem_50263920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_50263920_channel__inputs_5845_49156600_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)channel__inputs_5845_49156600;
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

Scope raddr_5846_49155980;

Scope makeraddr_5846_49155980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5846_49155980 = scope;
   scope->owner = (Object)channel__inputs_5845_49156600;
   scope->name = "raddr:46";
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

Scope waddr_5851_49155240;

Scope makewaddr_5851_49155240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5851_49155240 = scope;
   scope->owner = (Object)channel__inputs_5845_49156600;
   scope->name = "waddr:51";
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

Scope rinc_5856_49154780;

Behavior __61942140;

Behavior make__61942140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61942140 = behavior;
   behavior->owner = (Object)rinc_5856_49154780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_48835420_channel__inputs_5845_49156600_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   dbus__r_48835420_channel__inputs_5845_49156600_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   dbus__r_48835420_channel__inputs_5845_49156600_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(dbus__r_48835420_channel__inputs_5845_49156600_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,dbus__r_48835420_channel__inputs_5845_49156600_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
dbus__r_48835420_channel__inputs_5845_49156600_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[dbus__r_48835420_channel__inputs_5845_49156600_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__61926960();

   return behavior;
}

Behavior __61941980;

Behavior make__61941980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61941980 = behavior;
   behavior->owner = (Object)rinc_5856_49154780;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5857_56799680_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   _5857_56799680_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   _5857_56799680_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(_5857_56799680_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,_5857_56799680_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
_5857_56799680_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[_5857_56799680_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,_5858_56799540_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   _5858_56799540_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   _5858_56799540_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(_5858_56799540_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,_5858_56799540_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
_5858_56799540_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[_5858_56799540_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__61926900();

   return behavior;
}

Scope makerinc_5856_49154780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5856_49154780 = scope;
   scope->owner = (Object)channel__inputs_5845_49156600;
   scope->name = "rinc:56";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__61942140();
   scope->behaviors[1] = make__61941980();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5860_49619400;

Scope makewinc_5860_49619400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5860_49619400 = scope;
   scope->owner = (Object)channel__inputs_5845_49156600;
   scope->name = "winc:60";
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

Scope rdec_5864_49643040;

Scope makerdec_5864_49643040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5864_49643040 = scope;
   scope->owner = (Object)channel__inputs_5845_49156600;
   scope->name = "rdec:64";
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

Scope wdec_5869_49642440;

Scope makewdec_5869_49642440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5869_49642440 = scope;
   scope->owner = (Object)channel__inputs_5845_49156600;
   scope->name = "wdec:69";
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

Behavior __51184060;

Behavior make__51184060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51184060 = behavior;
   behavior->owner = (Object)channel__inputs_5845_49156600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_56129560_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   clk_56129560_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_neg += 1;
   clk_56129560_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->neg = realloc(clk_56129560_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->neg,clk_56129560_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_neg*sizeof(Object));
clk_56129560_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->neg[clk_56129560_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_neg-1] = (Object)behavior;
   behavior->block = make__50392940();

   return behavior;
}

Behavior __61898040;

Behavior make__61898040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61898040 = behavior;
   behavior->owner = (Object)channel__inputs_5845_49156600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_49641180_channel__inputs_5845_49156600_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   trig__w_49641180_channel__inputs_5845_49156600_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   trig__w_49641180_channel__inputs_5845_49156600_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(trig__w_49641180_channel__inputs_5845_49156600_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,trig__w_49641180_channel__inputs_5845_49156600_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
trig__w_49641180_channel__inputs_5845_49156600_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[trig__w_49641180_channel__inputs_5845_49156600_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__61898320();

   return behavior;
}

Behavior __61897540;

Behavior make__61897540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61897540 = behavior;
   behavior->owner = (Object)channel__inputs_5845_49156600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5861_49762080_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   _5861_49762080_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   _5861_49762080_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(_5861_49762080_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,_5861_49762080_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
_5861_49762080_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[_5861_49762080_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__61897980();

   return behavior;
}

Behavior __61895680;

Behavior make__61895680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61895680 = behavior;
   behavior->owner = (Object)channel__inputs_5845_49156600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_50138840_channel__inputs_5845_49156600_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   abus__w_50138840_channel__inputs_5845_49156600_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   abus__w_50138840_channel__inputs_5845_49156600_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(abus__w_50138840_channel__inputs_5845_49156600_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,abus__w_50138840_channel__inputs_5845_49156600_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
abus__w_50138840_channel__inputs_5845_49156600_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[abus__w_50138840_channel__inputs_5845_49156600_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__61896600();

   return behavior;
}

Behavior __61894920;

Behavior make__61894920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61894920 = behavior;
   behavior->owner = (Object)channel__inputs_5845_49156600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5862_49762000_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   _5862_49762000_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   _5862_49762000_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(_5862_49762000_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,_5862_49762000_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
_5862_49762000_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[_5862_49762000_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__61895440();

   return behavior;
}

Behavior __61891660;

Behavior make__61891660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61891660 = behavior;
   behavior->owner = (Object)channel__inputs_5845_49156600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_50139140_channel__inputs_5845_49156600_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   dbus__w_50139140_channel__inputs_5845_49156600_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   dbus__w_50139140_channel__inputs_5845_49156600_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(dbus__w_50139140_channel__inputs_5845_49156600_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,dbus__w_50139140_channel__inputs_5845_49156600_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
dbus__w_50139140_channel__inputs_5845_49156600_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[dbus__w_50139140_channel__inputs_5845_49156600_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__61893540();

   return behavior;
}

Behavior __61930260;

Behavior make__61930260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61930260 = behavior;
   behavior->owner = (Object)channel__inputs_5845_49156600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5863_50297960_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   _5863_50297960_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   _5863_50297960_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(_5863_50297960_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,_5863_50297960_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
_5863_50297960_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[_5863_50297960_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__61891540();

   return behavior;
}

Scope makechannel__inputs_5845_49156600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__inputs_5845_49156600 = scope;
   scope->owner = (Object)neural__network_58_84_49158220;
   scope->name = "channel_inputs:45";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_49641200();
   scope->inners[1] = maketrig__w_49641180();
   scope->inners[2] = makedbus__r_48835420();
   scope->inners[3] = makedbus__w_50139140();
   scope->inners[4] = makeabus__r_50139020();
   scope->inners[5] = makeabus__w_50138840();
   scope->inners[6] = makemem_50263920();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_5846_49155980();
   scope->scopes[1] = makewaddr_5851_49155240();
   scope->scopes[2] = makerinc_5856_49154780();
   scope->scopes[3] = makewinc_5860_49619400();
   scope->scopes[4] = makerdec_5864_49643040();
   scope->scopes[5] = makewdec_5869_49642440();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51184060();
   scope->behaviors[1] = make__61898040();
   scope->behaviors[2] = make__61897540();
   scope->behaviors[3] = make__61895680();
   scope->behaviors[4] = make__61894920();
   scope->behaviors[5] = make__61891660();
   scope->behaviors[6] = make__61930260();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__outputs_5874_51183880;

SignalI reg__0_49637900_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makereg__0_49637900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_49637900_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)channel__outputs_5874_51183880;
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

SignalI reg__1_50227300_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makereg__1_50227300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_50227300_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)channel__outputs_5874_51183880;
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

SignalI reg__2_49746320_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makereg__2_49746320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__2_49746320_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)channel__outputs_5874_51183880;
   signalI->name = "reg_2";
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

Scope anum_5875_51207480;

Behavior __61975500;

Behavior make__61975500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61975500 = behavior;
   behavior->owner = (Object)anum_5875_51207480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_49637900_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   reg__0_49637900_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   reg__0_49637900_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(reg__0_49637900_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,reg__0_49637900_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
reg__0_49637900_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[reg__0_49637900_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__61975720();

   return behavior;
}

Behavior __61974660;

Behavior make__61974660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61974660 = behavior;
   behavior->owner = (Object)anum_5875_51207480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5876_64618060_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   _5876_64618060_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   _5876_64618060_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(_5876_64618060_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,_5876_64618060_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
_5876_64618060_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[_5876_64618060_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__61975460();

   return behavior;
}

Behavior __61972620;

Behavior make__61972620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61972620 = behavior;
   behavior->owner = (Object)anum_5875_51207480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_50227300_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   reg__1_50227300_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   reg__1_50227300_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(reg__1_50227300_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,reg__1_50227300_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
reg__1_50227300_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[reg__1_50227300_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__61972940();

   return behavior;
}

Behavior __62029600;

Behavior make__62029600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62029600 = behavior;
   behavior->owner = (Object)anum_5875_51207480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5877_64887400_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   _5877_64887400_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   _5877_64887400_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(_5877_64887400_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,_5877_64887400_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
_5877_64887400_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[_5877_64887400_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__61972540();

   return behavior;
}

Behavior __62027480;

Behavior make__62027480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62027480 = behavior;
   behavior->owner = (Object)anum_5875_51207480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__2_49746320_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   reg__2_49746320_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   reg__2_49746320_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(reg__2_49746320_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,reg__2_49746320_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
reg__2_49746320_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[reg__2_49746320_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__62027720();

   return behavior;
}

Behavior __62027220;

Behavior make__62027220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62027220 = behavior;
   behavior->owner = (Object)anum_5875_51207480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5878_65100860_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   _5878_65100860_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   _5878_65100860_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(_5878_65100860_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,_5878_65100860_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
_5878_65100860_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[_5878_65100860_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__62027440();

   return behavior;
}

Scope makeanum_5875_51207480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_5875_51207480 = scope;
   scope->owner = (Object)channel__outputs_5874_51183880;
   scope->name = "anum:75";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__61975500();
   scope->behaviors[1] = make__61974660();
   scope->behaviors[2] = make__61972620();
   scope->behaviors[3] = make__62029600();
   scope->behaviors[4] = make__62027480();
   scope->behaviors[5] = make__62027220();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope raddr_5879_49369620;

Scope makeraddr_5879_49369620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5879_49369620 = scope;
   scope->owner = (Object)channel__outputs_5874_51183880;
   scope->name = "raddr:79";
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

Scope waddr_5884_49369200;

Scope makewaddr_5884_49369200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5884_49369200 = scope;
   scope->owner = (Object)channel__outputs_5874_51183880;
   scope->name = "waddr:84";
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

Scope rinc_5889_49368620;

SignalI abus__r_49366160_rinc_5889_49368620_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makeabus__r_49366160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49366160_rinc_5889_49368620_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)rinc_5889_49368620;
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

Behavior __62024920;

Behavior make__62024920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62024920 = behavior;
   behavior->owner = (Object)rinc_5889_49368620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_49366160_rinc_5889_49368620_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   abus__r_49366160_rinc_5889_49368620_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   abus__r_49366160_rinc_5889_49368620_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(abus__r_49366160_rinc_5889_49368620_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,abus__r_49366160_rinc_5889_49368620_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
abus__r_49366160_rinc_5889_49368620_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[abus__r_49366160_rinc_5889_49368620_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__62025080();

   return behavior;
}

Behavior __62024680;

Behavior make__62024680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62024680 = behavior;
   behavior->owner = (Object)rinc_5889_49368620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5893_50878060_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   _5893_50878060_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   _5893_50878060_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(_5893_50878060_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,_5893_50878060_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
_5893_50878060_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[_5893_50878060_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__62024860();

   return behavior;
}

Scope makerinc_5889_49368620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5889_49368620 = scope;
   scope->owner = (Object)channel__outputs_5874_51183880;
   scope->name = "rinc:89";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49366160();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__62024920();
   scope->behaviors[1] = make__62024680();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5894_49389240;

SignalI abus__w_49388600_winc_5894_49389240_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makeabus__w_49388600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49388600_winc_5894_49389240_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)winc_5894_49389240;
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

Scope makewinc_5894_49389240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5894_49389240 = scope;
   scope->owner = (Object)channel__outputs_5874_51183880;
   scope->name = "winc:94";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49388600();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5899_49388280;

SignalI abus__r_49387820_rdec_5899_49388280_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makeabus__r_49387820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49387820_rdec_5899_49388280_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)rdec_5899_49388280;
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

Scope makerdec_5899_49388280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5899_49388280 = scope;
   scope->owner = (Object)channel__outputs_5874_51183880;
   scope->name = "rdec:99";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49387820();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58105_49387680;

SignalI abus__w_49386040_wdec_58105_49387680_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makeabus__w_49386040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49386040_wdec_58105_49387680_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)wdec_58105_49387680;
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

Scope makewdec_58105_49387680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58105_49387680 = scope;
   scope->owner = (Object)channel__outputs_5874_51183880;
   scope->name = "wdec:105";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49386040();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __61940300;

Behavior make__61940300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61940300 = behavior;
   behavior->owner = (Object)channel__outputs_5874_51183880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_49637900_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   reg__0_49637900_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   reg__0_49637900_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(reg__0_49637900_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,reg__0_49637900_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
reg__0_49637900_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[reg__0_49637900_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__61940560();

   return behavior;
}

Behavior __61939860;

Behavior make__61939860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61939860 = behavior;
   behavior->owner = (Object)channel__outputs_5874_51183880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5890_50543700_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   _5890_50543700_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   _5890_50543700_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(_5890_50543700_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,_5890_50543700_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
_5890_50543700_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[_5890_50543700_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__61940180();

   return behavior;
}

Behavior __61980260;

Behavior make__61980260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61980260 = behavior;
   behavior->owner = (Object)channel__outputs_5874_51183880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_50227300_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   reg__1_50227300_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   reg__1_50227300_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(reg__1_50227300_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,reg__1_50227300_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
reg__1_50227300_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[reg__1_50227300_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__61980420();

   return behavior;
}

Behavior __61980060;

Behavior make__61980060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61980060 = behavior;
   behavior->owner = (Object)channel__outputs_5874_51183880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5891_50668060_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   _5891_50668060_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   _5891_50668060_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(_5891_50668060_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,_5891_50668060_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
_5891_50668060_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[_5891_50668060_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__61980220();

   return behavior;
}

Behavior __61979400;

Behavior make__61979400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61979400 = behavior;
   behavior->owner = (Object)channel__outputs_5874_51183880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__2_49746320_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   reg__2_49746320_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   reg__2_49746320_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(reg__2_49746320_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,reg__2_49746320_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
reg__2_49746320_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[reg__2_49746320_channel__outputs_5874_51183880_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__61979720();

   return behavior;
}

Behavior __61978860;

Behavior make__61978860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61978860 = behavior;
   behavior->owner = (Object)channel__outputs_5874_51183880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5892_50878140_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   _5892_50878140_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   _5892_50878140_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(_5892_50878140_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,_5892_50878140_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
_5892_50878140_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[_5892_50878140_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__61979280();

   return behavior;
}

Scope makechannel__outputs_5874_51183880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__outputs_5874_51183880 = scope;
   scope->owner = (Object)neural__network_58_84_49158220;
   scope->name = "channel_outputs:74";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 3;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_49637900();
   scope->inners[1] = makereg__1_50227300();
   scope->inners[2] = makereg__2_49746320();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_5875_51207480();
   scope->scopes[1] = makeraddr_5879_49369620();
   scope->scopes[2] = makewaddr_5884_49369200();
   scope->scopes[3] = makerinc_5889_49368620();
   scope->scopes[4] = makewinc_5894_49389240();
   scope->scopes[5] = makerdec_5899_49388280();
   scope->scopes[6] = makewdec_58105_49387680();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__61940300();
   scope->behaviors[1] = make__61939860();
   scope->behaviors[2] = make__61980260();
   scope->behaviors[3] = make__61980060();
   scope->behaviors[4] = make__61979400();
   scope->behaviors[5] = make__61978860();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__a0_58111_50923620;

SignalI reg__0_49658260_channel__a0_58111_50923620_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makereg__0_49658260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_49658260_channel__a0_58111_50923620_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)channel__a0_58111_50923620;
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

SignalI reg__1_49435720_channel__a0_58111_50923620_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makereg__1_49435720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_49435720_channel__a0_58111_50923620_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)channel__a0_58111_50923620;
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

Scope anum_58112_50923200;

Behavior __62045500;

Behavior make__62045500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62045500 = behavior;
   behavior->owner = (Object)anum_58112_50923200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_49658260_channel__a0_58111_50923620_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   reg__0_49658260_channel__a0_58111_50923620_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   reg__0_49658260_channel__a0_58111_50923620_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(reg__0_49658260_channel__a0_58111_50923620_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,reg__0_49658260_channel__a0_58111_50923620_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
reg__0_49658260_channel__a0_58111_50923620_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[reg__0_49658260_channel__a0_58111_50923620_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__62045820();

   return behavior;
}

Behavior __62045180;

Behavior make__62045180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62045180 = behavior;
   behavior->owner = (Object)anum_58112_50923200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58113_57072580_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   _58113_57072580_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   _58113_57072580_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(_58113_57072580_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,_58113_57072580_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
_58113_57072580_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[_58113_57072580_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__62045460();

   return behavior;
}

Behavior __62043140;

Behavior make__62043140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62043140 = behavior;
   behavior->owner = (Object)anum_58112_50923200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_49435720_channel__a0_58111_50923620_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   reg__1_49435720_channel__a0_58111_50923620_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   reg__1_49435720_channel__a0_58111_50923620_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(reg__1_49435720_channel__a0_58111_50923620_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,reg__1_49435720_channel__a0_58111_50923620_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
reg__1_49435720_channel__a0_58111_50923620_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[reg__1_49435720_channel__a0_58111_50923620_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__62043380();

   return behavior;
}

Behavior __62042860;

Behavior make__62042860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62042860 = behavior;
   behavior->owner = (Object)anum_58112_50923200;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58114_47004260_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   _58114_47004260_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   _58114_47004260_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(_58114_47004260_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,_58114_47004260_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
_58114_47004260_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[_58114_47004260_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__62043080();

   return behavior;
}

Scope makeanum_58112_50923200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58112_50923200 = scope;
   scope->owner = (Object)channel__a0_58111_50923620;
   scope->name = "anum:112";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__62045500();
   scope->behaviors[1] = make__62045180();
   scope->behaviors[2] = make__62043140();
   scope->behaviors[3] = make__62042860();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope raddr_58115_47178140;

Scope makeraddr_58115_47178140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58115_47178140 = scope;
   scope->owner = (Object)channel__a0_58111_50923620;
   scope->name = "raddr:115";
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

Scope waddr_58119_47447000;

Scope makewaddr_58119_47447000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58119_47447000 = scope;
   scope->owner = (Object)channel__a0_58111_50923620;
   scope->name = "waddr:119";
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

Scope rinc_58123_47446300;

SignalI abus__r_47445300_rinc_58123_47446300_channel__a0_58111_50923620_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makeabus__r_47445300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47445300_rinc_58123_47446300_channel__a0_58111_50923620_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)rinc_58123_47446300;
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

Behavior __62058240;

Behavior make__62058240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62058240 = behavior;
   behavior->owner = (Object)rinc_58123_47446300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_47445300_rinc_58123_47446300_channel__a0_58111_50923620_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   abus__r_47445300_rinc_58123_47446300_channel__a0_58111_50923620_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   abus__r_47445300_rinc_58123_47446300_channel__a0_58111_50923620_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(abus__r_47445300_rinc_58123_47446300_channel__a0_58111_50923620_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,abus__r_47445300_rinc_58123_47446300_channel__a0_58111_50923620_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
abus__r_47445300_rinc_58123_47446300_channel__a0_58111_50923620_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[abus__r_47445300_rinc_58123_47446300_channel__a0_58111_50923620_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__62058680();

   return behavior;
}

Behavior __62057740;

Behavior make__62057740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62057740 = behavior;
   behavior->owner = (Object)rinc_58123_47446300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58126_64463040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   _58126_64463040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   _58126_64463040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(_58126_64463040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,_58126_64463040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
_58126_64463040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[_58126_64463040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__62058140();

   return behavior;
}

Behavior __62057460;

Behavior make__62057460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62057460 = behavior;
   behavior->owner = (Object)rinc_58123_47446300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_49658260_channel__a0_58111_50923620_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   reg__0_49658260_channel__a0_58111_50923620_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   reg__0_49658260_channel__a0_58111_50923620_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(reg__0_49658260_channel__a0_58111_50923620_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,reg__0_49658260_channel__a0_58111_50923620_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
reg__0_49658260_channel__a0_58111_50923620_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[reg__0_49658260_channel__a0_58111_50923620_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,reg__1_49435720_channel__a0_58111_50923620_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   reg__1_49435720_channel__a0_58111_50923620_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   reg__1_49435720_channel__a0_58111_50923620_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(reg__1_49435720_channel__a0_58111_50923620_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,reg__1_49435720_channel__a0_58111_50923620_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
reg__1_49435720_channel__a0_58111_50923620_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[reg__1_49435720_channel__a0_58111_50923620_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__62041860();

   return behavior;
}

Scope makerinc_58123_47446300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58123_47446300 = scope;
   scope->owner = (Object)channel__a0_58111_50923620;
   scope->name = "rinc:123";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47445300();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__62058240();
   scope->behaviors[1] = make__62057740();
   scope->behaviors[2] = make__62057460();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58127_49368700;

SignalI abus__w_49388940_winc_58127_49368700_channel__a0_58111_50923620_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makeabus__w_49388940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49388940_winc_58127_49368700_channel__a0_58111_50923620_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)winc_58127_49368700;
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

Scope makewinc_58127_49368700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58127_49368700 = scope;
   scope->owner = (Object)channel__a0_58111_50923620;
   scope->name = "winc:127";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49388940();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58131_49388800;

SignalI abus__r_49387720_rdec_58131_49388800_channel__a0_58111_50923620_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makeabus__r_49387720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49387720_rdec_58131_49388800_channel__a0_58111_50923620_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)rdec_58131_49388800;
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

Scope makerdec_58131_49388800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58131_49388800 = scope;
   scope->owner = (Object)channel__a0_58111_50923620;
   scope->name = "rdec:131";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49387720();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58136_49387140;

SignalI abus__w_49383540_wdec_58136_49387140_channel__a0_58111_50923620_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makeabus__w_49383540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49383540_wdec_58136_49387140_channel__a0_58111_50923620_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)wdec_58136_49387140;
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

Scope makewdec_58136_49387140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58136_49387140 = scope;
   scope->owner = (Object)channel__a0_58111_50923620;
   scope->name = "wdec:136";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49383540();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope makechannel__a0_58111_50923620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__a0_58111_50923620 = scope;
   scope->owner = (Object)neural__network_58_84_49158220;
   scope->name = "channel_a0:111";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_49658260();
   scope->inners[1] = makereg__1_49435720();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58112_50923200();
   scope->scopes[1] = makeraddr_58115_47178140();
   scope->scopes[2] = makewaddr_58119_47447000();
   scope->scopes[3] = makerinc_58123_47446300();
   scope->scopes[4] = makewinc_58127_49368700();
   scope->scopes[5] = makerdec_58131_49388800();
   scope->scopes[6] = makewdec_58136_49387140();
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __65095820;

Behavior make__65095820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __65095820 = behavior;
   behavior->owner = (Object)neural__network_58_84_49158220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_56129560_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   clk_56129560_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_pos += 1;
   clk_56129560_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->pos = realloc(clk_56129560_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->pos,clk_56129560_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_pos*sizeof(Object));
clk_56129560_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->pos[clk_56129560_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_pos-1] = (Object)behavior;
   behavior->block = make__65097280();

   return behavior;
}

Behavior __47908100;

Behavior make__47908100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47908100 = behavior;
   behavior->owner = (Object)neural__network_58_84_49158220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_56129560_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   clk_56129560_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_pos += 1;
   clk_56129560_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->pos = realloc(clk_56129560_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->pos,clk_56129560_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_pos*sizeof(Object));
clk_56129560_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->pos[clk_56129560_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_pos-1] = (Object)behavior;
   behavior->block = make__65095660();

   return behavior;
}

Behavior __56110680;

Behavior make__56110680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56110680 = behavior;
   behavior->owner = (Object)neural__network_58_84_49158220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_56129560_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   clk_56129560_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_pos += 1;
   clk_56129560_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->pos = realloc(clk_56129560_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->pos,clk_56129560_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_pos*sizeof(Object));
clk_56129560_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->pos[clk_56129560_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_pos-1] = (Object)behavior;
   behavior->block = make__47928680();

   return behavior;
}

Behavior __61859600;

Behavior make__61859600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61859600 = behavior;
   behavior->owner = (Object)neural__network_58_84_49158220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,fill_56129420_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   fill_56129420_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   fill_56129420_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(fill_56129420_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,fill_56129420_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
fill_56129420_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[fill_56129420_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__inputs_49762100_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   ack__inputs_49762100_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   ack__inputs_49762100_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(ack__inputs_49762100_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,ack__inputs_49762100_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
ack__inputs_49762100_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[ack__inputs_49762100_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,flag__inputs_49762120_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   flag__inputs_49762120_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   flag__inputs_49762120_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(flag__inputs_49762120_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,flag__inputs_49762120_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
flag__inputs_49762120_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[flag__inputs_49762120_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__61860040();

   return behavior;
}

Behavior __61858780;

Behavior make__61858780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61858780 = behavior;
   behavior->owner = (Object)neural__network_58_84_49158220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__1_49435280_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   ack__1_49435280_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   ack__1_49435280_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(ack__1_49435280_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,ack__1_49435280_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
ack__1_49435280_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[ack__1_49435280_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__network_56516860_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   ack__network_56516860_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   ack__network_56516860_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(ack__network_56516860_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,ack__network_56516860_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
ack__network_56516860_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[ack__network_56516860_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,flag__outputs_50361040_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   flag__outputs_50361040_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   flag__outputs_50361040_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(flag__outputs_50361040_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,flag__outputs_50361040_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
flag__outputs_50361040_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[flag__outputs_50361040_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__61859560();

   return behavior;
}

Behavior __61858580;

Behavior make__61858580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61858580 = behavior;
   behavior->owner = (Object)neural__network_58_84_49158220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_56129560_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   clk_56129560_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   clk_56129560_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(clk_56129560_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,clk_56129560_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
clk_56129560_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[clk_56129560_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_56129540_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   rst_56129540_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   rst_56129540_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(rst_56129540_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,rst_56129540_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
rst_56129540_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[rst_56129540_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,req_56129480_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   req_56129480_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   req_56129480_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(req_56129480_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,req_56129480_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
req_56129480_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[req_56129480_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,ack__0_49435300_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   ack__0_49435300_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   ack__0_49435300_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(ack__0_49435300_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,ack__0_49435300_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
ack__0_49435300_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[ack__0_49435300_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__inputs_49762100_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   ack__inputs_49762100_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   ack__inputs_49762100_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(ack__inputs_49762100_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,ack__inputs_49762100_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
ack__inputs_49762100_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[ack__inputs_49762100_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__61814180();

   return behavior;
}

Behavior __61858380;

Behavior make__61858380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61858380 = behavior;
   behavior->owner = (Object)neural__network_58_84_49158220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__layer_56799700_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   ack__layer_56799700_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   ack__layer_56799700_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(ack__layer_56799700_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,ack__layer_56799700_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
ack__layer_56799700_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[ack__layer_56799700_layer0_58_840_56648760_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__layer_64463200_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   ack__layer_64463200_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   ack__layer_64463200_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(ack__layer_64463200_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,ack__layer_64463200_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
ack__layer_64463200_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[ack__layer_64463200_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__61814120();

   return behavior;
}

Scope makeneural__network_58_84_49158220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   neural__network_58_84_49158220 = scope;
   scope->owner = (Object)neural__network_58_840_56110080;
   scope->name = "neural_network:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makelayer0_47004040();
   scope->systemIs[1] = makelayer1_65100680();
   scope->num_inners = 18;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeack__0_49435300();
   scope->inners[1] = makeack__1_49435280();
   scope->inners[2] = makefill__inputs_49435260();
   scope->inners[3] = makevalue__inputs_49762260();
   scope->inners[4] = makeaddress__inputs_49762160();
   scope->inners[5] = makeflag__inputs_49762120();
   scope->inners[6] = makeack__inputs_49762100();
   scope->inners[7] = make_5861_49762080();
   scope->inners[8] = make_5862_49762000();
   scope->inners[9] = make_5863_50297960();
   scope->inners[10] = makefill__outputs_50297940();
   scope->inners[11] = makevalue__outputs_50361220();
   scope->inners[12] = makeaddress__outputs_50361060();
   scope->inners[13] = makeflag__outputs_50361040();
   scope->inners[14] = make_5890_50543700();
   scope->inners[15] = make_5891_50668060();
   scope->inners[16] = make_5892_50878140();
   scope->inners[17] = make_5893_50878060();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__inputs_5845_49156600();
   scope->scopes[1] = makechannel__outputs_5874_51183880();
   scope->scopes[2] = makechannel__a0_58111_50923620();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__65095820();
   scope->behaviors[1] = make__47908100();
   scope->behaviors[2] = make__56110680();
   scope->behaviors[3] = make__61859600();
   scope->behaviors[4] = make__61858780();
   scope->behaviors[5] = make__61858580();
   scope->behaviors[6] = make__61858380();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makeneural__network_58_840_56110080() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   neural__network_58_840_56110080 = systemT;
systemT->owner = NULL;
   systemT->name = "neural_network:T0";
   systemT->num_inputs = 5;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_56129560();
   systemT->inputs[1] = makerst_56129540();
   systemT->inputs[2] = makereq_56129480();
   systemT->inputs[3] = makefill_56129420();
   systemT->inputs[4] = make_5810_56517020();
   systemT->num_outputs = 7;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__fill_56516880();
   systemT->outputs[1] = makeack__network_56516860();
   systemT->outputs[2] = make_588_56516820();
   systemT->outputs[3] = make_589_56516720();
   systemT->outputs[4] = make_5832_56516700();
   systemT->outputs[5] = make_5833_56541040();
   systemT->outputs[6] = make_5834_56835040();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makeneural__network_58_84_49158220();

   return systemT;
}