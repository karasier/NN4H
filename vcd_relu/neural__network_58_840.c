#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT neural__network_58_840_57472480;

SignalI clk_57491060_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makeclk_57491060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_57491060_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)neural__network_58_840_57472480;
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

SignalI rst_57491040_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makerst_57491040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_57491040_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)neural__network_58_840_57472480;
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

SignalI req_57491020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makereq_57491020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_57491020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)neural__network_58_840_57472480;
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

SignalI fill_57490960_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makefill_57490960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_57490960_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)neural__network_58_840_57472480;
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

SignalI _5810_57742260_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI make_5810_57742260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5810_57742260_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)neural__network_58_840_57472480;
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

SignalI ack__fill_57742220_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makeack__fill_57742220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__fill_57742220_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)neural__network_58_840_57472480;
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

SignalI ack__network_57742160_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makeack__network_57742160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__network_57742160_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)neural__network_58_840_57472480;
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

SignalI _588_57742080_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI make_588_57742080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _588_57742080_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)neural__network_58_840_57472480;
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

SignalI _589_57741940_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI make_589_57741940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _589_57741940_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)neural__network_58_840_57472480;
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

SignalI _5832_57741880_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI make_5832_57741880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5832_57741880_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)neural__network_58_840_57472480;
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

SignalI _5833_57741780_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI make_5833_57741780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5833_57741780_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)neural__network_58_840_57472480;
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

SignalI _5834_57974560_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI make_5834_57974560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5834_57974560_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)neural__network_58_840_57472480;
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

Block __51335880;

Block __51335300;

void code__51335300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50263480(),ack__0_51396980_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50263120(),ack__1_51396960_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__51335300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51335300 = block;
   block->owner = (Object)__51335880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51335300;

   return block;
};

void code__51335880() {
   {
      Value cond = rst_57491040_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51335300();
   }
      }
   }
}

Block make__51335880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51335880 = block;
   block->owner = (Object)__51331520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51335880;

   return block;
};

Block __51331380;

Block __51355460;

Block __51354180;

void code__51354180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50260300(),_5862_43726840_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__51354180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51354180 = block;
   block->owner = (Object)__51355460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51354180;

   return block;
};

void code__51355460() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57491040_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50262600();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51354180();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50259580(),_5861_43728480_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__51355460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51355460 = block;
   block->owner = (Object)__51331380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51355460;

   return block;
};

Block __51351140;

Block __51350420;

void code__51350420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50258880(),_589_57741940_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50258620(),_588_57742080_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__51350420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51350420 = block;
   block->owner = (Object)__51351140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51350420;

   return block;
};

void code__51351140() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57491040_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50259300();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51350420();
   }
      }
   }
}

Block make__51351140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51351140 = block;
   block->owner = (Object)__51331380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51351140;

   return block;
};

Block __51347780;

void code__51347780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50258240(),address__inputs_43698220_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50258020(),flag__inputs_43697460_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50675660(),ack__inputs_43696140_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__51347780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51347780 = block;
   block->owner = (Object)__51331380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51347780;

   return block;
};

Block __51369320;

Block __51369000;

Block __51368080;

Block __51386460;

Block __51385840;

void code__51385840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50674780(),_588_57742080_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_5810_57742260_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,value__inputs_43702100_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50672860(),flag__inputs_43697460_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__51385840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51385840 = block;
   block->owner = (Object)__51386460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51385840;

   return block;
};

void code__51386460() {
 code__51385840();
}

Block make__51386460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51386460 = block;
   block->owner = (Object)__51368080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51386460;

   return block;
};

Block __51367860;

void code__51367860() {
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
                  src0 = _589_57741940_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
                  src1 = make__50672640();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__50672540();
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
                        src0 = _589_57741940_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__50671820();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__50671580();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_589_57741940_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50670620(),_588_57742080_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__51367860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51367860 = block;
   block->owner = (Object)__51368080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51367860;

   return block;
};

void code__51368080() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _588_57742080_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50675000();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51386460();
   }
   else {
  code__51367860();
   }
      }
   }
}

Block make__51368080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51368080 = block;
   block->owner = (Object)__51369000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51368080;

   return block;
};

void code__51369000() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57491040_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50675280();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51368080();
   }
      }
   }
}

Block make__51369000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51369000 = block;
   block->owner = (Object)__51369320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51369000;

   return block;
};

void code__51369320() {
 code__51369000();
}

Block make__51369320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51369320 = block;
   block->owner = (Object)__51331380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51369320;

   return block;
};

Block __55894480;

Block __55894140;

Block __55917460;

void code__55917460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__49995560(),ack__inputs_43696140_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__55917460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55917460 = block;
   block->owner = (Object)__55894140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55917460;

   return block;
};

void code__55894140() {
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
                  src0 = address__inputs_43698220_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__50668760();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),address__inputs_43698220_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50668460(),flag__inputs_43697460_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address__inputs_43698220_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50668120();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55917460();
   }
      }
   }
}

Block make__55894140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55894140 = block;
   block->owner = (Object)__55894480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55894140;

   return block;
};

Block __55916520;

Block __55915900;

void code__55915900() {
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
                  src0 = _5862_43726840_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
                  src1 = make__49994960();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__49994560();
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
                        src0 = _5862_43726840_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__49994080();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__49993900();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_5862_43726840_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49993460(),_5861_43728480_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__inputs_43702100_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,_5863_47609020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__55915900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55915900 = block;
   block->owner = (Object)__55916520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55915900;

   return block;
};

void code__55916520() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57491040_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49995260();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55915900();
   }
      }
   }
}

Block make__55916520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55916520 = block;
   block->owner = (Object)__55894480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55916520;

   return block;
};

void code__55894480() {
 code__55894140();
 code__55916520();
}

Block make__55894480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55894480 = block;
   block->owner = (Object)__51331380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55894480;

   return block;
};

Block __51348700;

void code__51348700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49993020(),flag__inputs_43697460_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__51348700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51348700 = block;
   block->owner = (Object)__51331380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51348700;

   return block;
};

void code__51331380() {
 code__51355460();
 code__51351140();
   {
      Value cond = rst_57491040_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51347780();
   }
   else if (value2integer(fill__inputs_51396940_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value)) {
  code__51369320();
   }
   else if (value2integer(flag__inputs_43697460_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value)) {
  code__55894480();
   }
   else {
  code__51348700();
   }
      }
   }
}

Block make__51331380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51331380 = block;
   block->owner = (Object)__56392800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51331380;

   return block;
};

Block __56392560;

Block __56392400;

Block __56392000;

void code__56392000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49992680(),_5833_57741780_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__56392000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56392000 = block;
   block->owner = (Object)__56392400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56392000;

   return block;
};

void code__56392400() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57491040_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49992760();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56392000();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49992500(),_5832_57741880_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__56392400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56392400 = block;
   block->owner = (Object)__56392560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56392400;

   return block;
};

Block __56390500;

Block __56389980;

void code__56389980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49991840(),_5885_49059920_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__56389980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56389980 = block;
   block->owner = (Object)__56390500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56389980;

   return block;
};

void code__56390500() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57491040_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49992280();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56389980();
   }
      }
   }
}

Block make__56390500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56390500 = block;
   block->owner = (Object)__56392560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56390500;

   return block;
};

Block __56388040;

void code__56388040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49991480(),address__outputs_48940120_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49990820(),flag__outputs_48940100_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49990540(),ack__network_57742160_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__56388040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56388040 = block;
   block->owner = (Object)__56392560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56388040;

   return block;
};

Block __56386740;

Block __56386420;

Block __56385800;

Block __56442300;

void code__56442300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5884_49060020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,value__outputs_48940260_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__56442300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56442300 = block;
   block->owner = (Object)__56385800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56442300;

   return block;
};

void code__56385800() {
{
      Value value = _5885_49059920_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__49989740())) {
    code__56442300();
         }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__49989320(),flag__outputs_48940100_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
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
                  src0 = _5885_49059920_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
                  src1 = make__49988920();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__49988760();
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
                        src0 = _5885_49059920_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__49987800();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__49987720();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_5885_49059920_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__56385800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56385800 = block;
   block->owner = (Object)__56386420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56385800;

   return block;
};

void code__56386420() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57491040_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__49990060();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56385800();
   }
      }
   }
}

Block make__56386420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56386420 = block;
   block->owner = (Object)__56386740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56386420;

   return block;
};

void code__56386740() {
 code__56386420();
}

Block make__56386740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56386740 = block;
   block->owner = (Object)__56392560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56386740;

   return block;
};

Block __56778800;

Block __56803080;

Block __56800720;

void code__56800720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50018720(),ack__network_57742160_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__56800720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56800720 = block;
   block->owner = (Object)__56803080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56800720;

   return block;
};

void code__56803080() {
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
                  src0 = address__outputs_48940120_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__50019600();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),address__outputs_48940120_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50019300(),flag__outputs_48940100_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address__outputs_48940120_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50018900();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56800720();
   }
      }
   }
}

Block make__56803080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56803080 = block;
   block->owner = (Object)__56778800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56803080;

   return block;
};

Block __56800000;

Block __56799400;

void code__56799400() {
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
                  src0 = _5833_57741780_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
                  src1 = make__50017280();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__50017180();
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
                        src0 = _5833_57741780_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__50015780();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__50015660();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_5833_57741780_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50015480(),_5832_57741880_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__outputs_48940260_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,_5834_57974560_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__56799400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56799400 = block;
   block->owner = (Object)__56800000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56799400;

   return block;
};

void code__56800000() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_57491040_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50017640();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56799400();
   }
      }
   }
}

Block make__56800000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56800000 = block;
   block->owner = (Object)__56778800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56800000;

   return block;
};

void code__56778800() {
 code__56803080();
 code__56800000();
}

Block make__56778800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56778800 = block;
   block->owner = (Object)__56392560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56778800;

   return block;
};

Block __56388820;

void code__56388820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50014680(),flag__outputs_48940100_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__56388820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56388820 = block;
   block->owner = (Object)__56392560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56388820;

   return block;
};

void code__56392560() {
 code__56392400();
 code__56390500();
   {
      Value cond = rst_57491040_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__56388040();
   }
   else if (value2integer(fill__outputs_47608920_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value)) {
  code__56386740();
   }
   else if (value2integer(flag__outputs_48940100_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value)) {
  code__56778800();
   }
   else {
  code__56388820();
   }
      }
   }
}

Block make__56392560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56392560 = block;
   block->owner = (Object)__57472800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56392560;

   return block;
};

Block __58685520;

void code__58685520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = fill_57490960_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
            src1 = ({
                  Value src0, dst;
                  dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ack__inputs_43696140_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
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
            src0 = flag__inputs_43697460_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),fill__inputs_51396940_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__58685520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58685520 = block;
   block->owner = (Object)__58685200;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58685520;

   return block;
};

Block __58685160;

void code__58685160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__1_51396960_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
            src1 = ({
                  Value src0, dst;
                  dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ack__network_57742160_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
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
            src0 = flag__outputs_48940100_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),fill__outputs_47608920_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__58685160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58685160 = block;
   block->owner = (Object)__58684800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58685160;

   return block;
};

Block __58593560;

void code__58593560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_57491060_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,clk_58714740_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_57491040_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,rst_58714720_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(req_57491020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,req_58714700_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_57491060_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,clk_50600820_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_57491040_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,rst_50600800_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__0_51396980_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,req_50600780_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__inputs_43696140_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,ack__fill_57742220_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__58593560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58593560 = block;
   block->owner = (Object)__58684500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58593560;

   return block;
};

Block __58593500;

void code__58593500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__layer_48924860_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,ack__0_51396980_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__layer_50980780_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,ack__1_51396960_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__58593500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58593500 = block;
   block->owner = (Object)__58684020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58593500;

   return block;
};

Block __51434880;

Block __48957280;

void code__48957280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_51205800_channel__inputs_5845_50800720_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,make_ref_rangeS(mem_51289000_channel__inputs_5845_50800720_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680,value2integer(abus__w_51205640_channel__inputs_5845_50800720_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value),value2integer(abus__w_51205640_channel__inputs_5845_50800720_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__48957280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48957280 = block;
   block->owner = (Object)__51434880;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48957280;

   return block;
};

void code__51434880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_51289000_channel__inputs_5845_50800720_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
            idx = value2integer(abus__r_51205720_channel__inputs_5845_50800720_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_51116600_channel__inputs_5845_50800720_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_51034280_channel__inputs_5845_50800720_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48957280();
   }
      }
   }
}

Block make__51434880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51434880 = block;
   block->owner = (Object)__49361960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51434880;

   return block;
};

Block __58682560;

void code__58682560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_51034280_channel__inputs_5845_50800720_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,_5861_43728480_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__58682560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58682560 = block;
   block->owner = (Object)__58682340;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58682560;

   return block;
};

Block __58682300;

void code__58682300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5861_43728480_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,trig__w_51034280_channel__inputs_5845_50800720_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__58682300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58682300 = block;
   block->owner = (Object)__58681960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58682300;

   return block;
};

Block __58681240;

void code__58681240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_51205640_channel__inputs_5845_50800720_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,_5862_43726840_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__58681240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58681240 = block;
   block->owner = (Object)__58680720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58681240;

   return block;
};

Block __58680680;

void code__58680680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5862_43726840_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,abus__w_51205640_channel__inputs_5845_50800720_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__58680680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58680680 = block;
   block->owner = (Object)__58680360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58680680;

   return block;
};

Block __58679800;

void code__58679800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_51205800_channel__inputs_5845_50800720_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,_5863_47609020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__58679800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58679800 = block;
   block->owner = (Object)__58679560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58679800;

   return block;
};

Block __58679520;

void code__58679520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5863_47609020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,dbus__w_51205800_channel__inputs_5845_50800720_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__58679520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58679520 = block;
   block->owner = (Object)__58687400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58679520;

   return block;
};

Block __58684560;

void code__58684560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_51116600_channel__inputs_5845_50800720_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,_5859_48925540_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__58684560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58684560 = block;
   block->owner = (Object)__47686220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58684560;

   return block;
};

Block __58684360;

void code__58684360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5857_48924720_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,trig__r_51034300_channel__inputs_5845_50800720_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5858_48923520_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,abus__r_51205720_channel__inputs_5845_50800720_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__58684360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58684360 = block;
   block->owner = (Object)__47756040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58684360;

   return block;
};

Block __47456400;

void code__47456400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_49445500_channel__outputs_5874_49361840_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,_5884_49060020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__47456400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47456400 = block;
   block->owner = (Object)__48196120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47456400;

   return block;
};

Block __48195520;

void code__48195520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5884_49060020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,reg__0_49445500_channel__outputs_5874_49361840_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__48195520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48195520 = block;
   block->owner = (Object)__47534680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48195520;

   return block;
};

Block __48083880;

void code__48083880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_49445500_channel__outputs_5874_49361840_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,_5876_51305180_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__48083880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48083880 = block;
   block->owner = (Object)__48083320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48083880;

   return block;
};

Block __48083240;

void code__48083240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5876_51305180_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,reg__0_49445500_channel__outputs_5874_49361840_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__48083240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48083240 = block;
   block->owner = (Object)__48082260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48083240;

   return block;
};

Block __48910540;

void code__48910540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_49782320_rinc_5883_49759600_channel__outputs_5874_49361840_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,_5885_49059920_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__48910540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48910540 = block;
   block->owner = (Object)__48910000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48910540;

   return block;
};

Block __48909700;

void code__48909700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5885_49059920_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,abus__r_49782320_rinc_5883_49759600_channel__outputs_5874_49361840_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__48909700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48909700 = block;
   block->owner = (Object)__48907640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48909700;

   return block;
};

Block __49008540;

void code__49008540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_51338160_channel__a0_5897_50691220_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,_5899_49165580_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__49008540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49008540 = block;
   block->owner = (Object)__49008260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49008540;

   return block;
};

Block __49008200;

void code__49008200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5899_49165580_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,reg__0_51338160_channel__a0_5897_50691220_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__49008200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49008200 = block;
   block->owner = (Object)__49007140;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49008200;

   return block;
};

Block __49043900;

void code__49043900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_51397120_channel__a0_5897_50691220_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,_58100_49491340_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__49043900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49043900 = block;
   block->owner = (Object)__49042820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49043900;

   return block;
};

Block __49042760;

void code__49042760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58100_49491340_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,reg__1_51397120_channel__a0_5897_50691220_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__49042760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49042760 = block;
   block->owner = (Object)__49040160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49042760;

   return block;
};

Block __49162320;

void code__49162320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_50832220_rinc_58109_50832860_channel__a0_5897_50691220_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,_58112_50980460_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__49162320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49162320 = block;
   block->owner = (Object)__49161980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49162320;

   return block;
};

Block __49161920;

void code__49161920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58112_50980460_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,abus__r_50832220_rinc_58109_50832860_channel__a0_5897_50691220_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__49161920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49161920 = block;
   block->owner = (Object)__49161440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49161920;

   return block;
};

Block __49077400;

void code__49077400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_51338160_channel__a0_5897_50691220_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,_58110_50398160_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_51397120_channel__a0_5897_50691220_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->c_value,_58111_50980900_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
      set_value_pos(pool_state);
   }
}

Block make__49077400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49077400 = block;
   block->owner = (Object)__49199460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49077400;

   return block;
};

Value make__50263480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50263120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50262600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50260300() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50259580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50259300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50258880() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50258620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50258240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__50258020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50675660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50675280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50675000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50674780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50672860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50672640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50672540() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50671820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50671580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50670620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50668760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50668460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50668120() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49995560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49995260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49994960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49994560() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49994080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49993900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49993460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49993020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49992760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49992680() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49992500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49992280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49991840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49991480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49990820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49990540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49990060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49989740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49989320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__49988920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49988760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49987800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49987720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50019600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50019300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50018900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50018720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50017640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50017280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50017180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50015780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50015660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50015480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50014680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope neural__network_58_84_50801020;

SignalI ack__0_51396980_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makeack__0_51396980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__0_51396980_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)neural__network_58_84_50801020;
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

SignalI ack__1_51396960_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makeack__1_51396960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__1_51396960_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)neural__network_58_84_50801020;
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

SignalI fill__inputs_51396940_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makefill__inputs_51396940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill__inputs_51396940_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)neural__network_58_84_50801020;
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

SignalI value__inputs_43702100_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makevalue__inputs_43702100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__inputs_43702100_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)neural__network_58_84_50801020;
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

SignalI address__inputs_43698220_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makeaddress__inputs_43698220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address__inputs_43698220_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)neural__network_58_84_50801020;
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

SignalI flag__inputs_43697460_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makeflag__inputs_43697460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__inputs_43697460_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)neural__network_58_84_50801020;
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

SignalI ack__inputs_43696140_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makeack__inputs_43696140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__inputs_43696140_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)neural__network_58_84_50801020;
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

SignalI _5861_43728480_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI make_5861_43728480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5861_43728480_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)neural__network_58_84_50801020;
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

SignalI _5862_43726840_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI make_5862_43726840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5862_43726840_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)neural__network_58_84_50801020;
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

SignalI _5863_47609020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI make_5863_47609020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5863_47609020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)neural__network_58_84_50801020;
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

SignalI fill__outputs_47608920_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makefill__outputs_47608920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill__outputs_47608920_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)neural__network_58_84_50801020;
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

SignalI value__outputs_48940260_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makevalue__outputs_48940260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__outputs_48940260_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)neural__network_58_84_50801020;
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

SignalI address__outputs_48940120_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makeaddress__outputs_48940120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address__outputs_48940120_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)neural__network_58_84_50801020;
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

SignalI flag__outputs_48940100_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makeflag__outputs_48940100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__outputs_48940100_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)neural__network_58_84_50801020;
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

SignalI _5884_49060020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI make_5884_49060020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5884_49060020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)neural__network_58_84_50801020;
   signalI->name = ":84";
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

SignalI _5885_49059920_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI make_5885_49059920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5885_49059920_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)neural__network_58_84_50801020;
   signalI->name = ":85";
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

SystemI layer0_49490120;

SystemI makelayer0_49490120() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer0_49490120 = systemI;
   systemI->owner = (Object)neural__network_58_84_50801020;
   systemI->name = "layer0";
   systemI->system = layer0_58_840_58717020;

   return systemI;
};

SystemI layer1_51304960;

SystemI makelayer1_51304960() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer1_51304960 = systemI;
   systemI->owner = (Object)neural__network_58_84_50801020;
   systemI->name = "layer1";
   systemI->system = layer1_58_840_49886080;

   return systemI;
};

Scope channel__inputs_5845_50800720;

SignalI trig__r_51034300_channel__inputs_5845_50800720_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI maketrig__r_51034300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_51034300_channel__inputs_5845_50800720_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)channel__inputs_5845_50800720;
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

SignalI trig__w_51034280_channel__inputs_5845_50800720_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI maketrig__w_51034280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_51034280_channel__inputs_5845_50800720_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)channel__inputs_5845_50800720;
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

SignalI dbus__r_51116600_channel__inputs_5845_50800720_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makedbus__r_51116600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_51116600_channel__inputs_5845_50800720_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)channel__inputs_5845_50800720;
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

SignalI dbus__w_51205800_channel__inputs_5845_50800720_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makedbus__w_51205800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_51205800_channel__inputs_5845_50800720_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)channel__inputs_5845_50800720;
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

SignalI abus__r_51205720_channel__inputs_5845_50800720_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makeabus__r_51205720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_51205720_channel__inputs_5845_50800720_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)channel__inputs_5845_50800720;
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

SignalI abus__w_51205640_channel__inputs_5845_50800720_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makeabus__w_51205640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_51205640_channel__inputs_5845_50800720_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)channel__inputs_5845_50800720;
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

SignalI mem_51289000_channel__inputs_5845_50800720_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makemem_51289000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_51289000_channel__inputs_5845_50800720_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)channel__inputs_5845_50800720;
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

Scope raddr_5846_50800140;

Scope makeraddr_5846_50800140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5846_50800140 = scope;
   scope->owner = (Object)channel__inputs_5845_50800720;
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

Scope waddr_5851_50799560;

Scope makewaddr_5851_50799560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5851_50799560 = scope;
   scope->owner = (Object)channel__inputs_5845_50800720;
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

Scope rinc_5856_50798920;

Behavior __47686220;

Behavior make__47686220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47686220 = behavior;
   behavior->owner = (Object)rinc_5856_50798920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_51116600_channel__inputs_5845_50800720_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   dbus__r_51116600_channel__inputs_5845_50800720_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   dbus__r_51116600_channel__inputs_5845_50800720_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(dbus__r_51116600_channel__inputs_5845_50800720_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,dbus__r_51116600_channel__inputs_5845_50800720_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
dbus__r_51116600_channel__inputs_5845_50800720_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[dbus__r_51116600_channel__inputs_5845_50800720_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__58684560();

   return behavior;
}

Behavior __47756040;

Behavior make__47756040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47756040 = behavior;
   behavior->owner = (Object)rinc_5856_50798920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5857_48924720_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   _5857_48924720_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   _5857_48924720_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(_5857_48924720_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,_5857_48924720_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
_5857_48924720_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[_5857_48924720_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,_5858_48923520_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   _5858_48923520_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   _5858_48923520_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(_5858_48923520_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,_5858_48923520_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
_5858_48923520_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[_5858_48923520_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__58684360();

   return behavior;
}

Scope makerinc_5856_50798920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5856_50798920 = scope;
   scope->owner = (Object)channel__inputs_5845_50800720;
   scope->name = "rinc:56";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47686220();
   scope->behaviors[1] = make__47756040();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5860_51035900;

Scope makewinc_5860_51035900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5860_51035900 = scope;
   scope->owner = (Object)channel__inputs_5845_50800720;
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

Scope rdec_5864_51035160;

Scope makerdec_5864_51035160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5864_51035160 = scope;
   scope->owner = (Object)channel__inputs_5845_50800720;
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

Scope wdec_5869_51034740;

Scope makewdec_5869_51034740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5869_51034740 = scope;
   scope->owner = (Object)channel__inputs_5845_50800720;
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

Behavior __49361960;

Behavior make__49361960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49361960 = behavior;
   behavior->owner = (Object)channel__inputs_5845_50800720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_57491060_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   clk_57491060_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_neg += 1;
   clk_57491060_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->neg = realloc(clk_57491060_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->neg,clk_57491060_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_neg*sizeof(Object));
clk_57491060_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->neg[clk_57491060_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_neg-1] = (Object)behavior;
   behavior->block = make__51434880();

   return behavior;
}

Behavior __58682340;

Behavior make__58682340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58682340 = behavior;
   behavior->owner = (Object)channel__inputs_5845_50800720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_51034280_channel__inputs_5845_50800720_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   trig__w_51034280_channel__inputs_5845_50800720_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   trig__w_51034280_channel__inputs_5845_50800720_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(trig__w_51034280_channel__inputs_5845_50800720_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,trig__w_51034280_channel__inputs_5845_50800720_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
trig__w_51034280_channel__inputs_5845_50800720_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[trig__w_51034280_channel__inputs_5845_50800720_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__58682560();

   return behavior;
}

Behavior __58681960;

Behavior make__58681960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58681960 = behavior;
   behavior->owner = (Object)channel__inputs_5845_50800720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5861_43728480_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   _5861_43728480_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   _5861_43728480_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(_5861_43728480_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,_5861_43728480_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
_5861_43728480_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[_5861_43728480_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__58682300();

   return behavior;
}

Behavior __58680720;

Behavior make__58680720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58680720 = behavior;
   behavior->owner = (Object)channel__inputs_5845_50800720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_51205640_channel__inputs_5845_50800720_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   abus__w_51205640_channel__inputs_5845_50800720_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   abus__w_51205640_channel__inputs_5845_50800720_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(abus__w_51205640_channel__inputs_5845_50800720_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,abus__w_51205640_channel__inputs_5845_50800720_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
abus__w_51205640_channel__inputs_5845_50800720_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[abus__w_51205640_channel__inputs_5845_50800720_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__58681240();

   return behavior;
}

Behavior __58680360;

Behavior make__58680360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58680360 = behavior;
   behavior->owner = (Object)channel__inputs_5845_50800720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5862_43726840_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   _5862_43726840_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   _5862_43726840_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(_5862_43726840_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,_5862_43726840_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
_5862_43726840_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[_5862_43726840_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__58680680();

   return behavior;
}

Behavior __58679560;

Behavior make__58679560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58679560 = behavior;
   behavior->owner = (Object)channel__inputs_5845_50800720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_51205800_channel__inputs_5845_50800720_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   dbus__w_51205800_channel__inputs_5845_50800720_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   dbus__w_51205800_channel__inputs_5845_50800720_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(dbus__w_51205800_channel__inputs_5845_50800720_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,dbus__w_51205800_channel__inputs_5845_50800720_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
dbus__w_51205800_channel__inputs_5845_50800720_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[dbus__w_51205800_channel__inputs_5845_50800720_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__58679800();

   return behavior;
}

Behavior __58687400;

Behavior make__58687400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58687400 = behavior;
   behavior->owner = (Object)channel__inputs_5845_50800720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5863_47609020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   _5863_47609020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   _5863_47609020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(_5863_47609020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,_5863_47609020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
_5863_47609020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[_5863_47609020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__58679520();

   return behavior;
}

Scope makechannel__inputs_5845_50800720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__inputs_5845_50800720 = scope;
   scope->owner = (Object)neural__network_58_84_50801020;
   scope->name = "channel_inputs:45";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_51034300();
   scope->inners[1] = maketrig__w_51034280();
   scope->inners[2] = makedbus__r_51116600();
   scope->inners[3] = makedbus__w_51205800();
   scope->inners[4] = makeabus__r_51205720();
   scope->inners[5] = makeabus__w_51205640();
   scope->inners[6] = makemem_51289000();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_5846_50800140();
   scope->scopes[1] = makewaddr_5851_50799560();
   scope->scopes[2] = makerinc_5856_50798920();
   scope->scopes[3] = makewinc_5860_51035900();
   scope->scopes[4] = makerdec_5864_51035160();
   scope->scopes[5] = makewdec_5869_51034740();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49361960();
   scope->behaviors[1] = make__58682340();
   scope->behaviors[2] = make__58681960();
   scope->behaviors[3] = make__58680720();
   scope->behaviors[4] = make__58680360();
   scope->behaviors[5] = make__58679560();
   scope->behaviors[6] = make__58687400();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__outputs_5874_49361840;

SignalI reg__0_49445500_channel__outputs_5874_49361840_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makereg__0_49445500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_49445500_channel__outputs_5874_49361840_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)channel__outputs_5874_49361840;
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

Scope anum_5875_49361520;

Behavior __48083320;

Behavior make__48083320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48083320 = behavior;
   behavior->owner = (Object)anum_5875_49361520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_49445500_channel__outputs_5874_49361840_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   reg__0_49445500_channel__outputs_5874_49361840_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   reg__0_49445500_channel__outputs_5874_49361840_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(reg__0_49445500_channel__outputs_5874_49361840_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,reg__0_49445500_channel__outputs_5874_49361840_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
reg__0_49445500_channel__outputs_5874_49361840_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[reg__0_49445500_channel__outputs_5874_49361840_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__48083880();

   return behavior;
}

Behavior __48082260;

Behavior make__48082260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48082260 = behavior;
   behavior->owner = (Object)anum_5875_49361520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5876_51305180_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   _5876_51305180_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   _5876_51305180_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(_5876_51305180_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,_5876_51305180_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
_5876_51305180_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[_5876_51305180_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__48083240();

   return behavior;
}

Scope makeanum_5875_49361520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_5875_49361520 = scope;
   scope->owner = (Object)channel__outputs_5874_49361840;
   scope->name = "anum:75";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48083320();
   scope->behaviors[1] = make__48082260();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope raddr_5877_49760700;

Scope makeraddr_5877_49760700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5877_49760700 = scope;
   scope->owner = (Object)channel__outputs_5874_49361840;
   scope->name = "raddr:77";
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

Scope waddr_5880_49760180;

Scope makewaddr_5880_49760180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5880_49760180 = scope;
   scope->owner = (Object)channel__outputs_5874_49361840;
   scope->name = "waddr:80";
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

Scope rinc_5883_49759600;

SignalI abus__r_49782320_rinc_5883_49759600_channel__outputs_5874_49361840_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makeabus__r_49782320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49782320_rinc_5883_49759600_channel__outputs_5874_49361840_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)rinc_5883_49759600;
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

Behavior __48910000;

Behavior make__48910000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48910000 = behavior;
   behavior->owner = (Object)rinc_5883_49759600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_49782320_rinc_5883_49759600_channel__outputs_5874_49361840_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   abus__r_49782320_rinc_5883_49759600_channel__outputs_5874_49361840_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   abus__r_49782320_rinc_5883_49759600_channel__outputs_5874_49361840_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(abus__r_49782320_rinc_5883_49759600_channel__outputs_5874_49361840_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,abus__r_49782320_rinc_5883_49759600_channel__outputs_5874_49361840_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
abus__r_49782320_rinc_5883_49759600_channel__outputs_5874_49361840_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[abus__r_49782320_rinc_5883_49759600_channel__outputs_5874_49361840_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__48910540();

   return behavior;
}

Behavior __48907640;

Behavior make__48907640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48907640 = behavior;
   behavior->owner = (Object)rinc_5883_49759600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5885_49059920_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   _5885_49059920_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   _5885_49059920_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(_5885_49059920_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,_5885_49059920_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
_5885_49059920_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[_5885_49059920_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__48909700();

   return behavior;
}

Scope makerinc_5883_49759600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5883_49759600 = scope;
   scope->owner = (Object)channel__outputs_5874_49361840;
   scope->name = "rinc:83";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49782320();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48910000();
   scope->behaviors[1] = make__48907640();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5886_49781940;

SignalI abus__w_49781560_winc_5886_49781940_channel__outputs_5874_49361840_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makeabus__w_49781560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49781560_winc_5886_49781940_channel__outputs_5874_49361840_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)winc_5886_49781940;
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

Scope makewinc_5886_49781940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5886_49781940 = scope;
   scope->owner = (Object)channel__outputs_5874_49361840;
   scope->name = "winc:86";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49781560();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5889_49781440;

SignalI abus__r_49781020_rdec_5889_49781440_channel__outputs_5874_49361840_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makeabus__r_49781020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49781020_rdec_5889_49781440_channel__outputs_5874_49361840_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)rdec_5889_49781440;
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

Scope makerdec_5889_49781440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5889_49781440 = scope;
   scope->owner = (Object)channel__outputs_5874_49361840;
   scope->name = "rdec:89";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49781020();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_5893_49780900;

SignalI abus__w_49780420_wdec_5893_49780900_channel__outputs_5874_49361840_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makeabus__w_49780420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49780420_wdec_5893_49780900_channel__outputs_5874_49361840_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)wdec_5893_49780900;
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

Scope makewdec_5893_49780900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5893_49780900 = scope;
   scope->owner = (Object)channel__outputs_5874_49361840;
   scope->name = "wdec:93";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49780420();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __48196120;

Behavior make__48196120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48196120 = behavior;
   behavior->owner = (Object)channel__outputs_5874_49361840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_49445500_channel__outputs_5874_49361840_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   reg__0_49445500_channel__outputs_5874_49361840_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   reg__0_49445500_channel__outputs_5874_49361840_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(reg__0_49445500_channel__outputs_5874_49361840_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,reg__0_49445500_channel__outputs_5874_49361840_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
reg__0_49445500_channel__outputs_5874_49361840_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[reg__0_49445500_channel__outputs_5874_49361840_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__47456400();

   return behavior;
}

Behavior __47534680;

Behavior make__47534680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47534680 = behavior;
   behavior->owner = (Object)channel__outputs_5874_49361840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5884_49060020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   _5884_49060020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   _5884_49060020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(_5884_49060020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,_5884_49060020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
_5884_49060020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[_5884_49060020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__48195520();

   return behavior;
}

Scope makechannel__outputs_5874_49361840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__outputs_5874_49361840 = scope;
   scope->owner = (Object)neural__network_58_84_50801020;
   scope->name = "channel_outputs:74";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_49445500();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_5875_49361520();
   scope->scopes[1] = makeraddr_5877_49760700();
   scope->scopes[2] = makewaddr_5880_49760180();
   scope->scopes[3] = makerinc_5883_49759600();
   scope->scopes[4] = makewinc_5886_49781940();
   scope->scopes[5] = makerdec_5889_49781440();
   scope->scopes[6] = makewdec_5893_49780900();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48196120();
   scope->behaviors[1] = make__47534680();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__a0_5897_50691220;

SignalI reg__0_51338160_channel__a0_5897_50691220_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makereg__0_51338160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_51338160_channel__a0_5897_50691220_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)channel__a0_5897_50691220;
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

SignalI reg__1_51397120_channel__a0_5897_50691220_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makereg__1_51397120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_51397120_channel__a0_5897_50691220_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)channel__a0_5897_50691220;
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

Scope anum_5898_50690920;

Behavior __49008260;

Behavior make__49008260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49008260 = behavior;
   behavior->owner = (Object)anum_5898_50690920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_51338160_channel__a0_5897_50691220_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   reg__0_51338160_channel__a0_5897_50691220_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   reg__0_51338160_channel__a0_5897_50691220_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(reg__0_51338160_channel__a0_5897_50691220_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,reg__0_51338160_channel__a0_5897_50691220_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
reg__0_51338160_channel__a0_5897_50691220_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[reg__0_51338160_channel__a0_5897_50691220_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__49008540();

   return behavior;
}

Behavior __49007140;

Behavior make__49007140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49007140 = behavior;
   behavior->owner = (Object)anum_5898_50690920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5899_49165580_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   _5899_49165580_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   _5899_49165580_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(_5899_49165580_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,_5899_49165580_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
_5899_49165580_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[_5899_49165580_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__49008200();

   return behavior;
}

Behavior __49042820;

Behavior make__49042820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49042820 = behavior;
   behavior->owner = (Object)anum_5898_50690920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_51397120_channel__a0_5897_50691220_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   reg__1_51397120_channel__a0_5897_50691220_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   reg__1_51397120_channel__a0_5897_50691220_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(reg__1_51397120_channel__a0_5897_50691220_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,reg__1_51397120_channel__a0_5897_50691220_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
reg__1_51397120_channel__a0_5897_50691220_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[reg__1_51397120_channel__a0_5897_50691220_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__49043900();

   return behavior;
}

Behavior __49040160;

Behavior make__49040160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49040160 = behavior;
   behavior->owner = (Object)anum_5898_50690920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58100_49491340_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   _58100_49491340_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   _58100_49491340_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(_58100_49491340_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,_58100_49491340_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
_58100_49491340_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[_58100_49491340_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__49042760();

   return behavior;
}

Scope makeanum_5898_50690920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_5898_50690920 = scope;
   scope->owner = (Object)channel__a0_5897_50691220;
   scope->name = "anum:98";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49008260();
   scope->behaviors[1] = make__49007140();
   scope->behaviors[2] = make__49042820();
   scope->behaviors[3] = make__49040160();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope raddr_58101_50834340;

Scope makeraddr_58101_50834340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58101_50834340 = scope;
   scope->owner = (Object)channel__a0_5897_50691220;
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

Scope waddr_58105_50833500;

Scope makewaddr_58105_50833500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58105_50833500 = scope;
   scope->owner = (Object)channel__a0_5897_50691220;
   scope->name = "waddr:105";
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

Scope rinc_58109_50832860;

SignalI abus__r_50832220_rinc_58109_50832860_channel__a0_5897_50691220_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makeabus__r_50832220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50832220_rinc_58109_50832860_channel__a0_5897_50691220_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)rinc_58109_50832860;
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

Behavior __49161980;

Behavior make__49161980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49161980 = behavior;
   behavior->owner = (Object)rinc_58109_50832860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_50832220_rinc_58109_50832860_channel__a0_5897_50691220_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   abus__r_50832220_rinc_58109_50832860_channel__a0_5897_50691220_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   abus__r_50832220_rinc_58109_50832860_channel__a0_5897_50691220_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(abus__r_50832220_rinc_58109_50832860_channel__a0_5897_50691220_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,abus__r_50832220_rinc_58109_50832860_channel__a0_5897_50691220_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
abus__r_50832220_rinc_58109_50832860_channel__a0_5897_50691220_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[abus__r_50832220_rinc_58109_50832860_channel__a0_5897_50691220_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__49162320();

   return behavior;
}

Behavior __49161440;

Behavior make__49161440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49161440 = behavior;
   behavior->owner = (Object)rinc_58109_50832860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58112_50980460_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   _58112_50980460_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   _58112_50980460_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(_58112_50980460_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,_58112_50980460_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
_58112_50980460_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[_58112_50980460_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__49161920();

   return behavior;
}

Behavior __49199460;

Behavior make__49199460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49199460 = behavior;
   behavior->owner = (Object)rinc_58109_50832860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_51338160_channel__a0_5897_50691220_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   reg__0_51338160_channel__a0_5897_50691220_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   reg__0_51338160_channel__a0_5897_50691220_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(reg__0_51338160_channel__a0_5897_50691220_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,reg__0_51338160_channel__a0_5897_50691220_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
reg__0_51338160_channel__a0_5897_50691220_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[reg__0_51338160_channel__a0_5897_50691220_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,reg__1_51397120_channel__a0_5897_50691220_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   reg__1_51397120_channel__a0_5897_50691220_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   reg__1_51397120_channel__a0_5897_50691220_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(reg__1_51397120_channel__a0_5897_50691220_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,reg__1_51397120_channel__a0_5897_50691220_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
reg__1_51397120_channel__a0_5897_50691220_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[reg__1_51397120_channel__a0_5897_50691220_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__49077400();

   return behavior;
}

Scope makerinc_58109_50832860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58109_50832860 = scope;
   scope->owner = (Object)channel__a0_5897_50691220;
   scope->name = "rinc:109";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_50832220();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49161980();
   scope->behaviors[1] = make__49161440();
   scope->behaviors[2] = make__49199460();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58113_51239520;

SignalI abus__w_51238980_winc_58113_51239520_channel__a0_5897_50691220_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makeabus__w_51238980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_51238980_winc_58113_51239520_channel__a0_5897_50691220_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)winc_58113_51239520;
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

Scope makewinc_58113_51239520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58113_51239520 = scope;
   scope->owner = (Object)channel__a0_5897_50691220;
   scope->name = "winc:113";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_51238980();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58117_51238860;

SignalI abus__r_51238480_rdec_58117_51238860_channel__a0_5897_50691220_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makeabus__r_51238480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_51238480_rdec_58117_51238860_channel__a0_5897_50691220_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)rdec_58117_51238860;
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

Scope makerdec_58117_51238860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58117_51238860 = scope;
   scope->owner = (Object)channel__a0_5897_50691220;
   scope->name = "rdec:117";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_51238480();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58122_51238360;

SignalI abus__w_51237980_wdec_58122_51238360_channel__a0_5897_50691220_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680;

SignalI makeabus__w_51237980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_51237980_wdec_58122_51238360_channel__a0_5897_50691220_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680 = signalI;
   signalI->owner = (Object)wdec_58122_51238360;
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

Scope makewdec_58122_51238360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58122_51238360 = scope;
   scope->owner = (Object)channel__a0_5897_50691220;
   scope->name = "wdec:122";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_51237980();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope makechannel__a0_5897_50691220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__a0_5897_50691220 = scope;
   scope->owner = (Object)neural__network_58_84_50801020;
   scope->name = "channel_a0:97";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_51338160();
   scope->inners[1] = makereg__1_51397120();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_5898_50690920();
   scope->scopes[1] = makeraddr_58101_50834340();
   scope->scopes[2] = makewaddr_58105_50833500();
   scope->scopes[3] = makerinc_58109_50832860();
   scope->scopes[4] = makewinc_58113_51239520();
   scope->scopes[5] = makerdec_58117_51238860();
   scope->scopes[6] = makewdec_58122_51238360();
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __51331520;

Behavior make__51331520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51331520 = behavior;
   behavior->owner = (Object)neural__network_58_84_50801020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_57491060_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   clk_57491060_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_pos += 1;
   clk_57491060_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->pos = realloc(clk_57491060_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->pos,clk_57491060_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_pos*sizeof(Object));
clk_57491060_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->pos[clk_57491060_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_pos-1] = (Object)behavior;
   behavior->block = make__51335880();

   return behavior;
}

Behavior __56392800;

Behavior make__56392800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56392800 = behavior;
   behavior->owner = (Object)neural__network_58_84_50801020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_57491060_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   clk_57491060_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_pos += 1;
   clk_57491060_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->pos = realloc(clk_57491060_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->pos,clk_57491060_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_pos*sizeof(Object));
clk_57491060_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->pos[clk_57491060_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_pos-1] = (Object)behavior;
   behavior->block = make__51331380();

   return behavior;
}

Behavior __57472800;

Behavior make__57472800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __57472800 = behavior;
   behavior->owner = (Object)neural__network_58_84_50801020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_57491060_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   clk_57491060_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_pos += 1;
   clk_57491060_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->pos = realloc(clk_57491060_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->pos,clk_57491060_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_pos*sizeof(Object));
clk_57491060_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->pos[clk_57491060_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_pos-1] = (Object)behavior;
   behavior->block = make__56392560();

   return behavior;
}

Behavior __58685200;

Behavior make__58685200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58685200 = behavior;
   behavior->owner = (Object)neural__network_58_84_50801020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,fill_57490960_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   fill_57490960_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   fill_57490960_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(fill_57490960_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,fill_57490960_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
fill_57490960_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[fill_57490960_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__inputs_43696140_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   ack__inputs_43696140_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   ack__inputs_43696140_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(ack__inputs_43696140_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,ack__inputs_43696140_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
ack__inputs_43696140_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[ack__inputs_43696140_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,flag__inputs_43697460_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   flag__inputs_43697460_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   flag__inputs_43697460_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(flag__inputs_43697460_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,flag__inputs_43697460_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
flag__inputs_43697460_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[flag__inputs_43697460_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__58685520();

   return behavior;
}

Behavior __58684800;

Behavior make__58684800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58684800 = behavior;
   behavior->owner = (Object)neural__network_58_84_50801020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__1_51396960_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   ack__1_51396960_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   ack__1_51396960_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(ack__1_51396960_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,ack__1_51396960_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
ack__1_51396960_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[ack__1_51396960_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__network_57742160_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   ack__network_57742160_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   ack__network_57742160_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(ack__network_57742160_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,ack__network_57742160_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
ack__network_57742160_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[ack__network_57742160_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,flag__outputs_48940100_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   flag__outputs_48940100_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   flag__outputs_48940100_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(flag__outputs_48940100_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,flag__outputs_48940100_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
flag__outputs_48940100_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[flag__outputs_48940100_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__58685160();

   return behavior;
}

Behavior __58684500;

Behavior make__58684500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58684500 = behavior;
   behavior->owner = (Object)neural__network_58_84_50801020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_57491060_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   clk_57491060_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   clk_57491060_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(clk_57491060_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,clk_57491060_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
clk_57491060_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[clk_57491060_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_57491040_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   rst_57491040_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   rst_57491040_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(rst_57491040_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,rst_57491040_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
rst_57491040_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[rst_57491040_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,req_57491020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   req_57491020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   req_57491020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(req_57491020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,req_57491020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
req_57491020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[req_57491020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,ack__0_51396980_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   ack__0_51396980_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   ack__0_51396980_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(ack__0_51396980_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,ack__0_51396980_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
ack__0_51396980_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[ack__0_51396980_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__inputs_43696140_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   ack__inputs_43696140_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   ack__inputs_43696140_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(ack__inputs_43696140_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,ack__inputs_43696140_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
ack__inputs_43696140_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[ack__inputs_43696140_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__58593560();

   return behavior;
}

Behavior __58684020;

Behavior make__58684020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __58684020 = behavior;
   behavior->owner = (Object)neural__network_58_84_50801020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__layer_48924860_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   ack__layer_48924860_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   ack__layer_48924860_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(ack__layer_48924860_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,ack__layer_48924860_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
ack__layer_48924860_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[ack__layer_48924860_layer0_58_840_58717020_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__layer_50980780_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680);
   ack__layer_50980780_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any += 1;
   ack__layer_50980780_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any = realloc(ack__layer_50980780_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any,ack__layer_50980780_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any*sizeof(Object));
ack__layer_50980780_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->any[ack__layer_50980780_layer1_58_840_49886080_neural__network_58_84_50801020_neural__network_58_840_57472480______58_84_50948160______58_840_58110680->num_any-1] = (Object)behavior;
   behavior->block = make__58593500();

   return behavior;
}

Scope makeneural__network_58_84_50801020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   neural__network_58_84_50801020 = scope;
   scope->owner = (Object)neural__network_58_840_57472480;
   scope->name = "neural_network:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makelayer0_49490120();
   scope->systemIs[1] = makelayer1_51304960();
   scope->num_inners = 16;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeack__0_51396980();
   scope->inners[1] = makeack__1_51396960();
   scope->inners[2] = makefill__inputs_51396940();
   scope->inners[3] = makevalue__inputs_43702100();
   scope->inners[4] = makeaddress__inputs_43698220();
   scope->inners[5] = makeflag__inputs_43697460();
   scope->inners[6] = makeack__inputs_43696140();
   scope->inners[7] = make_5861_43728480();
   scope->inners[8] = make_5862_43726840();
   scope->inners[9] = make_5863_47609020();
   scope->inners[10] = makefill__outputs_47608920();
   scope->inners[11] = makevalue__outputs_48940260();
   scope->inners[12] = makeaddress__outputs_48940120();
   scope->inners[13] = makeflag__outputs_48940100();
   scope->inners[14] = make_5884_49060020();
   scope->inners[15] = make_5885_49059920();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__inputs_5845_50800720();
   scope->scopes[1] = makechannel__outputs_5874_49361840();
   scope->scopes[2] = makechannel__a0_5897_50691220();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51331520();
   scope->behaviors[1] = make__56392800();
   scope->behaviors[2] = make__57472800();
   scope->behaviors[3] = make__58685200();
   scope->behaviors[4] = make__58684800();
   scope->behaviors[5] = make__58684500();
   scope->behaviors[6] = make__58684020();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makeneural__network_58_840_57472480() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   neural__network_58_840_57472480 = systemT;
systemT->owner = NULL;
   systemT->name = "neural_network:T0";
   systemT->num_inputs = 5;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_57491060();
   systemT->inputs[1] = makerst_57491040();
   systemT->inputs[2] = makereq_57491020();
   systemT->inputs[3] = makefill_57490960();
   systemT->inputs[4] = make_5810_57742260();
   systemT->num_outputs = 7;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__fill_57742220();
   systemT->outputs[1] = makeack__network_57742160();
   systemT->outputs[2] = make_588_57742080();
   systemT->outputs[3] = make_589_57741940();
   systemT->outputs[4] = make_5832_57741880();
   systemT->outputs[5] = make_5833_57741780();
   systemT->outputs[6] = make_5834_57974560();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makeneural__network_58_84_50801020();

   return systemT;
}