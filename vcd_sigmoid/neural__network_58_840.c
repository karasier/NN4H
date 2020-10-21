#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT neural__network_58_840_62407860;

SignalI clk_62429800_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makeclk_62429800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_62429800_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)neural__network_58_840_62407860;
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

SignalI rst_62429780_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makerst_62429780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_62429780_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)neural__network_58_840_62407860;
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

SignalI req_62429760_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makereq_62429760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_62429760_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)neural__network_58_840_62407860;
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

SignalI fill_62429720_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makefill_62429720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_62429720_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)neural__network_58_840_62407860;
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

SignalI _5810_62733420_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI make_5810_62733420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5810_62733420_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)neural__network_58_840_62407860;
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

SignalI ack__fill_62733280_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makeack__fill_62733280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__fill_62733280_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)neural__network_58_840_62407860;
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

SignalI ack__network_62733260_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makeack__network_62733260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__network_62733260_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)neural__network_58_840_62407860;
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

SignalI _588_62733240_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI make_588_62733240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _588_62733240_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)neural__network_58_840_62407860;
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

SignalI _589_62733120_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI make_589_62733120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _589_62733120_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)neural__network_58_840_62407860;
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

SignalI _5832_62733020_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI make_5832_62733020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5832_62733020_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)neural__network_58_840_62407860;
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

SignalI _5833_62732940_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI make_5833_62732940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5833_62732940_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)neural__network_58_840_62407860;
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

SignalI _5834_62827400_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI make_5834_62827400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5834_62827400_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)neural__network_58_840_62407860;
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

Block __55392940;

Block __55392480;

void code__55392480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__63723720(),ack__0_48320840_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__63723640(),ack__1_48320820_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__55392480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55392480 = block;
   block->owner = (Object)__55392940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55392480;

   return block;
};

void code__55392940() {
   {
      Value cond = rst_62429780_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55392480();
   }
      }
   }
}

Block make__55392940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55392940 = block;
   block->owner = (Object)__55391060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55392940;

   return block;
};

Block __55390660;

Block __55389980;

Block __55388580;

void code__55388580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__63723420(),_5862_48538880_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__55388580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55388580 = block;
   block->owner = (Object)__55389980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55388580;

   return block;
};

void code__55389980() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_62429780_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__63723540();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55388580();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__63723300(),_5861_48538960_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__55389980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55389980 = block;
   block->owner = (Object)__55390660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55389980;

   return block;
};

Block __55386440;

Block __55410280;

void code__55410280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__63723080(),_589_62733120_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__55410280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55410280 = block;
   block->owner = (Object)__55386440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55410280;

   return block;
};

void code__55386440() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_62429780_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__63723220();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55410280();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__63723020(),_588_62733240_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__55386440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55386440 = block;
   block->owner = (Object)__55390660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55386440;

   return block;
};

Block __55405620;

void code__55405620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__63722920(),address__inputs_48539020_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__63722860(),flag__inputs_48539000_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__63722780(),ack__inputs_48538980_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__55405620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55405620 = block;
   block->owner = (Object)__55390660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55405620;

   return block;
};

Block __55425480;

Block __55425000;

Block __55424560;

Block __55419440;

Block __55418920;

void code__55418920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_5810_62733420_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,value__inputs_48539100_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__63722280(),flag__inputs_48539000_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__55418920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55418920 = block;
   block->owner = (Object)__55419440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55418920;

   return block;
};

void code__55419440() {
 code__55418920();
}

Block make__55419440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55419440 = block;
   block->owner = (Object)__55424560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55419440;

   return block;
};

Block __55424340;

void code__55424340() {
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
                  src0 = _589_62733120_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
                  src1 = make__63722080();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__63722020();
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
                        src0 = _589_62733120_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__63721400();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__63721320();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_589_62733120_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__63720840(),_588_62733240_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__55424340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55424340 = block;
   block->owner = (Object)__55424560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55424340;

   return block;
};

void code__55424560() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _588_62733240_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__63722440();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55419440();
   }
   else {
  code__55424340();
   }
      }
   }
}

Block make__55424560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55424560 = block;
   block->owner = (Object)__55425000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55424560;

   return block;
};

void code__55425000() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_62429780_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__63722600();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55424560();
   }
      }
   }
}

Block make__55425000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55425000 = block;
   block->owner = (Object)__55425480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55425000;

   return block;
};

void code__55425480() {
 code__55425000();
}

Block make__55425480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55425480 = block;
   block->owner = (Object)__55390660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55425480;

   return block;
};

Block __51728420;

Block __51728220;

Block __51727000;

void code__51727000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__63719280(),ack__inputs_48538980_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__51727000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51727000 = block;
   block->owner = (Object)__51728220;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51727000;

   return block;
};

void code__51728220() {
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
                  src0 = address__inputs_48539020_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__63720280();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),address__inputs_48539020_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__63719980(),flag__inputs_48539000_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address__inputs_48539020_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__63719360();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51727000();
   }
      }
   }
}

Block make__51728220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51728220 = block;
   block->owner = (Object)__51728420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51728220;

   return block;
};

Block __51726060;

Block __51725360;

void code__51725360() {
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
                  src0 = _5862_48538880_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
                  src1 = make__63718820();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__63718780();
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
                        src0 = _5862_48538880_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__63717940();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__63717600();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_5862_48538880_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__63741560(),_5861_48538960_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__inputs_48539100_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,_5863_48140600_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__51725360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51725360 = block;
   block->owner = (Object)__51726060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51725360;

   return block;
};

void code__51726060() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_62429780_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__63719180();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51725360();
   }
      }
   }
}

Block make__51726060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51726060 = block;
   block->owner = (Object)__51728420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51726060;

   return block;
};

void code__51728420() {
 code__51728220();
 code__51726060();
}

Block make__51728420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51728420 = block;
   block->owner = (Object)__55390660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51728420;

   return block;
};

Block __55408900;

void code__55408900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__63741160(),flag__inputs_48539000_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__55408900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55408900 = block;
   block->owner = (Object)__55390660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55408900;

   return block;
};

void code__55390660() {
 code__55389980();
 code__55386440();
   {
      Value cond = rst_62429780_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__55405620();
   }
   else if (value2integer(fill__inputs_48320780_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value)) {
  code__55425480();
   }
   else if (value2integer(flag__inputs_48539000_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value)) {
  code__51728420();
   }
   else {
  code__55408900();
   }
      }
   }
}

Block make__55390660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55390660 = block;
   block->owner = (Object)__60779580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55390660;

   return block;
};

Block __60779380;

Block __60779120;

Block __60778600;

void code__60778600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__63740960(),_5833_62732940_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__60778600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60778600 = block;
   block->owner = (Object)__60779120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60778600;

   return block;
};

void code__60779120() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_62429780_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__63741060();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60778600();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__63740860(),_5832_62733020_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__60779120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60779120 = block;
   block->owner = (Object)__60779380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60779120;

   return block;
};

Block __60777180;

Block __60841700;

void code__60841700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__63740660(),_5893_49376560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__60841700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60841700 = block;
   block->owner = (Object)__60777180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60841700;

   return block;
};

void code__60777180() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_62429780_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__63740760();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60841700();
   }
      }
   }
}

Block make__60777180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60777180 = block;
   block->owner = (Object)__60779380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60777180;

   return block;
};

Block __60839660;

void code__60839660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__63740560(),address__outputs_48911940_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__63740440(),flag__outputs_48911920_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__63740380(),ack__network_62733260_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__60839660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60839660 = block;
   block->owner = (Object)__60779380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60839660;

   return block;
};

Block __60838760;

Block __60838420;

Block __60837840;

Block __60837240;

void code__60837240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5890_49228700_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,value__outputs_48912020_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__60837240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60837240 = block;
   block->owner = (Object)__60837840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60837240;

   return block;
};

Block __61197060;

void code__61197060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5891_49312980_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,value__outputs_48912020_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__61197060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61197060 = block;
   block->owner = (Object)__60837840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61197060;

   return block;
};

Block __61766500;

void code__61766500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5892_49376640_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,value__outputs_48912020_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__61766500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61766500 = block;
   block->owner = (Object)__60837840;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61766500;

   return block;
};

void code__60837840() {
{
      Value value = _5893_49376560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__63740060())) {
    code__60837240();
         }
         else if (value2integer(value) == value2integer(make__63739900())) {
    code__61197060();
         }
         else if (value2integer(value) == value2integer(make__63739800())) {
    code__61766500();
         }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__63739620(),flag__outputs_48911920_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
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
                  src0 = _5893_49376560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
                  src1 = make__63739460();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__63739380();
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
                        src0 = _5893_49376560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__63739040();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__63738960();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_5893_49376560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__60837840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60837840 = block;
   block->owner = (Object)__60838420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60837840;

   return block;
};

void code__60838420() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_62429780_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__63740200();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60837840();
   }
      }
   }
}

Block make__60838420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60838420 = block;
   block->owner = (Object)__60838760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60838420;

   return block;
};

void code__60838760() {
 code__60838420();
}

Block make__60838760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60838760 = block;
   block->owner = (Object)__60779380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60838760;

   return block;
};

Block __62031060;

Block __62030860;

Block __62086360;

void code__62086360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__63738060(),ack__network_62733260_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__62086360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62086360 = block;
   block->owner = (Object)__62030860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62086360;

   return block;
};

void code__62030860() {
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
                  src0 = address__outputs_48911940_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__63738440();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),address__outputs_48911940_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__63738320(),flag__outputs_48911920_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address__outputs_48911940_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__63738220();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__62086360();
   }
      }
   }
}

Block make__62030860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62030860 = block;
   block->owner = (Object)__62031060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62030860;

   return block;
};

Block __62085380;

Block __62084820;

void code__62084820() {
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
                  src0 = _5833_62732940_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
                  src1 = make__63737800();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__63737760();
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
                        src0 = _5833_62732940_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__63737500();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__63737420();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_5833_62732940_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__63737280(),_5832_62733020_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__outputs_48912020_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,_5834_62827400_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__62084820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62084820 = block;
   block->owner = (Object)__62085380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62084820;

   return block;
};

void code__62085380() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_62429780_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__63737980();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__62084820();
   }
      }
   }
}

Block make__62085380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62085380 = block;
   block->owner = (Object)__62031060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62085380;

   return block;
};

void code__62031060() {
 code__62030860();
 code__62085380();
}

Block make__62031060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62031060 = block;
   block->owner = (Object)__60779380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62031060;

   return block;
};

Block __60840280;

void code__60840280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__63737060(),flag__outputs_48911920_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__60840280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60840280 = block;
   block->owner = (Object)__60779380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60840280;

   return block;
};

void code__60779380() {
 code__60779120();
 code__60777180();
   {
      Value cond = rst_62429780_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60839660();
   }
   else if (value2integer(fill__outputs_48140580_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value)) {
  code__60838760();
   }
   else if (value2integer(flag__outputs_48911920_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value)) {
  code__62031060();
   }
   else {
  code__60840280();
   }
      }
   }
}

Block make__60779380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60779380 = block;
   block->owner = (Object)__62408440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60779380;

   return block;
};

Block __63286600;

void code__63286600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = fill_62429720_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
            src1 = ({
                  Value src0, dst;
                  dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ack__inputs_48538980_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
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
            src0 = flag__inputs_48539000_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),fill__inputs_48320780_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63286600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63286600 = block;
   block->owner = (Object)__63286080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63286600;

   return block;
};

Block __63286020;

void code__63286020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__1_48320820_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
            src1 = ({
                  Value src0, dst;
                  dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ack__network_62733260_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
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
            src0 = flag__outputs_48911920_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),fill__outputs_48140580_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63286020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63286020 = block;
   block->owner = (Object)__63285660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63286020;

   return block;
};

Block __63273140;

void code__63273140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_62429800_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,clk_53424040_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_62429780_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,rst_53424020_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(req_62429760_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,req_53424000_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_62429800_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,clk_53267860_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_62429780_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,rst_53267800_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__0_48320840_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,req_53267740_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__inputs_48538980_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,ack__fill_62733280_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63273140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63273140 = block;
   block->owner = (Object)__63285480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63273140;

   return block;
};

Block __63273060;

void code__63273060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__layer_53717340_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,ack__0_48320840_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__layer_54111760_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,ack__1_48320820_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63273060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63273060 = block;
   block->owner = (Object)__63285260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63273060;

   return block;
};

Block __49298080;

Block __49508780;

void code__49508780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_48140120_channel__inputs_5845_47959240_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,make_ref_rangeS(mem_48854720_channel__inputs_5845_47959240_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920,value2integer(abus__w_48139960_channel__inputs_5845_47959240_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value),value2integer(abus__w_48139960_channel__inputs_5845_47959240_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__49508780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49508780 = block;
   block->owner = (Object)__49298080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49508780;

   return block;
};

void code__49298080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_48854720_channel__inputs_5845_47959240_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
            idx = value2integer(abus__r_48140040_channel__inputs_5845_47959240_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_48591080_channel__inputs_5845_47959240_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_48403940_channel__inputs_5845_47959240_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49508780();
   }
      }
   }
}

Block make__49298080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49298080 = block;
   block->owner = (Object)__49909540;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49298080;

   return block;
};

Block __63284220;

void code__63284220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_48403940_channel__inputs_5845_47959240_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,_5861_48538960_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63284220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63284220 = block;
   block->owner = (Object)__63284060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63284220;

   return block;
};

Block __63284000;

void code__63284000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5861_48538960_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,trig__w_48403940_channel__inputs_5845_47959240_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63284000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63284000 = block;
   block->owner = (Object)__63283760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63284000;

   return block;
};

Block __63283220;

void code__63283220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_48139960_channel__inputs_5845_47959240_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,_5862_48538880_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63283220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63283220 = block;
   block->owner = (Object)__63348460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63283220;

   return block;
};

Block __63348400;

void code__63348400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5862_48538880_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,abus__w_48139960_channel__inputs_5845_47959240_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63348400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63348400 = block;
   block->owner = (Object)__63348180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63348400;

   return block;
};

Block __63347680;

void code__63347680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_48140120_channel__inputs_5845_47959240_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,_5863_48140600_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63347680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63347680 = block;
   block->owner = (Object)__63347520;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63347680;

   return block;
};

Block __63347480;

void code__63347480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5863_48140600_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,dbus__w_48140120_channel__inputs_5845_47959240_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63347480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63347480 = block;
   block->owner = (Object)__63347320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63347480;

   return block;
};

Block __63346440;

void code__63346440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_48591080_channel__inputs_5845_47959240_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,_5859_53717420_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63346440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63346440 = block;
   block->owner = (Object)__63377720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63346440;

   return block;
};

Block __63345800;

void code__63345800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5857_53717240_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,trig__r_48403960_channel__inputs_5845_47959240_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5858_53717140_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,abus__r_48140040_channel__inputs_5845_47959240_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63345800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63345800 = block;
   block->owner = (Object)__63377560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63345800;

   return block;
};

Block __63376160;

void code__63376160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_48224420_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,_5890_49228700_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63376160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63376160 = block;
   block->owner = (Object)__63375780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63376160;

   return block;
};

Block __63375740;

void code__63375740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5890_49228700_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,reg__0_48224420_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63375740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63375740 = block;
   block->owner = (Object)__63375580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63375740;

   return block;
};

Block __63375220;

void code__63375220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_48475020_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,_5891_49312980_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63375220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63375220 = block;
   block->owner = (Object)__63374960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63375220;

   return block;
};

Block __63374880;

void code__63374880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5891_49312980_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,reg__1_48475020_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63374880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63374880 = block;
   block->owner = (Object)__63374720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63374880;

   return block;
};

Block __63374340;

void code__63374340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__2_47632660_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,_5892_49376640_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63374340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63374340 = block;
   block->owner = (Object)__63374100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63374340;

   return block;
};

Block __63374020;

void code__63374020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5892_49376640_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,reg__2_47632660_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63374020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63374020 = block;
   block->owner = (Object)__63373780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63374020;

   return block;
};

Block __63395700;

void code__63395700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_48224420_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,_5876_54566640_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63395700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63395700 = block;
   block->owner = (Object)__63395500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63395700;

   return block;
};

Block __63395440;

void code__63395440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5876_54566640_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,reg__0_48224420_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63395440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63395440 = block;
   block->owner = (Object)__63395180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63395440;

   return block;
};

Block __63393480;

void code__63393480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_48475020_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,_5877_54800940_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63393480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63393480 = block;
   block->owner = (Object)__63393240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63393480;

   return block;
};

Block __63393200;

void code__63393200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5877_54800940_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,reg__1_48475020_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63393200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63393200 = block;
   block->owner = (Object)__63393020;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63393200;

   return block;
};

Block __63391380;

void code__63391380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__2_47632660_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,_5878_55336160_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63391380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63391380 = block;
   block->owner = (Object)__63391060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63391380;

   return block;
};

Block __63390920;

void code__63390920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5878_55336160_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,reg__2_47632660_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63390920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63390920 = block;
   block->owner = (Object)__63390720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63390920;

   return block;
};

Block __63404760;

void code__63404760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_47993480_rinc_5889_47993940_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,_5893_49376560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63404760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63404760 = block;
   block->owner = (Object)__63404260;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63404760;

   return block;
};

Block __63404080;

void code__63404080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5893_49376560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,abus__r_47993480_rinc_5889_47993940_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63404080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63404080 = block;
   block->owner = (Object)__63403820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63404080;

   return block;
};

Block __63400840;

void code__63400840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_48023440_channel__a0_58111_49491400_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,_58113_53979580_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63400840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63400840 = block;
   block->owner = (Object)__63400640;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63400840;

   return block;
};

Block __63400580;

void code__63400580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58113_53979580_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,reg__0_48023440_channel__a0_58111_49491400_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63400580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63400580 = block;
   block->owner = (Object)__63400160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63400580;

   return block;
};

Block __63397900;

void code__63397900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_48324040_channel__a0_58111_49491400_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,_58114_54062020_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63397900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63397900 = block;
   block->owner = (Object)__63561420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63397900;

   return block;
};

Block __63561340;

void code__63561340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58114_54062020_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,reg__1_48324040_channel__a0_58111_49491400_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63561340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63561340 = block;
   block->owner = (Object)__63561160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63561340;

   return block;
};

Block __63594380;

void code__63594380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_50138400_rinc_58123_50138880_channel__a0_58111_49491400_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,_58126_54111420_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63594380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63594380 = block;
   block->owner = (Object)__63593940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63594380;

   return block;
};

Block __63593900;

void code__63593900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58126_54111420_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,abus__r_50138400_rinc_58123_50138880_channel__a0_58111_49491400_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63593900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63593900 = block;
   block->owner = (Object)__63593700;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63593900;

   return block;
};

Block __63560160;

void code__63560160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_48023440_channel__a0_58111_49491400_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,_58124_53717880_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_48324040_channel__a0_58111_49491400_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->c_value,_58125_54112020_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
      set_value_pos(pool_state);
   }
}

Block make__63560160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __63560160 = block;
   block->owner = (Object)__63593480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__63560160;

   return block;
};

Value make__63723720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__63723640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__63723540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__63723420() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__63723300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__63723220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__63723080() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__63723020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__63722920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__63722860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__63722780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__63722600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__63722440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__63722280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__63722080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__63722020() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__63721400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__63721320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__63720840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__63720280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__63719980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__63719360() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__63719280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__63719180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__63718820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__63718780() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__63717940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__63717600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__63741560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__63741160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__63741060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__63740960() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__63740860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__63740760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__63740660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__63740560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__63740440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__63740380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__63740200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__63740060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__63739900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__63739800() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__63739620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__63739460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__63739380() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__63739040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__63738960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__63738440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__63738320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__63738220() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__63738060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__63737980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__63737800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__63737760() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__63737500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__63737420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__63737280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__63737060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope neural__network_58_84_47959920;

SignalI ack__0_48320840_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makeack__0_48320840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__0_48320840_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)neural__network_58_84_47959920;
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

SignalI ack__1_48320820_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makeack__1_48320820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__1_48320820_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)neural__network_58_84_47959920;
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

SignalI fill__inputs_48320780_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makefill__inputs_48320780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill__inputs_48320780_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)neural__network_58_84_47959920;
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

SignalI value__inputs_48539100_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makevalue__inputs_48539100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__inputs_48539100_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)neural__network_58_84_47959920;
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

SignalI address__inputs_48539020_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makeaddress__inputs_48539020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address__inputs_48539020_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)neural__network_58_84_47959920;
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

SignalI flag__inputs_48539000_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makeflag__inputs_48539000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__inputs_48539000_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)neural__network_58_84_47959920;
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

SignalI ack__inputs_48538980_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makeack__inputs_48538980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__inputs_48538980_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)neural__network_58_84_47959920;
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

SignalI _5861_48538960_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI make_5861_48538960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5861_48538960_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)neural__network_58_84_47959920;
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

SignalI _5862_48538880_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI make_5862_48538880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5862_48538880_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)neural__network_58_84_47959920;
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

SignalI _5863_48140600_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI make_5863_48140600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5863_48140600_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)neural__network_58_84_47959920;
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

SignalI fill__outputs_48140580_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makefill__outputs_48140580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill__outputs_48140580_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)neural__network_58_84_47959920;
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

SignalI value__outputs_48912020_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makevalue__outputs_48912020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__outputs_48912020_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)neural__network_58_84_47959920;
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

SignalI address__outputs_48911940_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makeaddress__outputs_48911940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address__outputs_48911940_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)neural__network_58_84_47959920;
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

SignalI flag__outputs_48911920_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makeflag__outputs_48911920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__outputs_48911920_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)neural__network_58_84_47959920;
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

SignalI _5890_49228700_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI make_5890_49228700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5890_49228700_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)neural__network_58_84_47959920;
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

SignalI _5891_49312980_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI make_5891_49312980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5891_49312980_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)neural__network_58_84_47959920;
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

SignalI _5892_49376640_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI make_5892_49376640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5892_49376640_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)neural__network_58_84_47959920;
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

SignalI _5893_49376560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI make_5893_49376560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5893_49376560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)neural__network_58_84_47959920;
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

SystemI layer0_54061900;

SystemI makelayer0_54061900() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer0_54061900 = systemI;
   systemI->owner = (Object)neural__network_58_84_47959920;
   systemI->name = "layer0";
   systemI->system = layer0_58_840_53426560;

   return systemI;
};

SystemI layer1_55335560;

SystemI makelayer1_55335560() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer1_55335560 = systemI;
   systemI->owner = (Object)neural__network_58_84_47959920;
   systemI->name = "layer1";
   systemI->system = layer1_58_840_53249340;

   return systemI;
};

Scope channel__inputs_5845_47959240;

SignalI trig__r_48403960_channel__inputs_5845_47959240_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI maketrig__r_48403960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_48403960_channel__inputs_5845_47959240_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)channel__inputs_5845_47959240;
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

SignalI trig__w_48403940_channel__inputs_5845_47959240_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI maketrig__w_48403940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_48403940_channel__inputs_5845_47959240_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)channel__inputs_5845_47959240;
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

SignalI dbus__r_48591080_channel__inputs_5845_47959240_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makedbus__r_48591080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_48591080_channel__inputs_5845_47959240_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)channel__inputs_5845_47959240;
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

SignalI dbus__w_48140120_channel__inputs_5845_47959240_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makedbus__w_48140120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_48140120_channel__inputs_5845_47959240_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)channel__inputs_5845_47959240;
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

SignalI abus__r_48140040_channel__inputs_5845_47959240_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makeabus__r_48140040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48140040_channel__inputs_5845_47959240_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)channel__inputs_5845_47959240;
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

SignalI abus__w_48139960_channel__inputs_5845_47959240_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makeabus__w_48139960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48139960_channel__inputs_5845_47959240_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)channel__inputs_5845_47959240;
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

SignalI mem_48854720_channel__inputs_5845_47959240_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makemem_48854720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_48854720_channel__inputs_5845_47959240_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)channel__inputs_5845_47959240;
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

Scope raddr_5846_47958860;

Scope makeraddr_5846_47958860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5846_47958860 = scope;
   scope->owner = (Object)channel__inputs_5845_47959240;
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

Scope waddr_5851_47958040;

Scope makewaddr_5851_47958040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5851_47958040 = scope;
   scope->owner = (Object)channel__inputs_5845_47959240;
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

Scope rinc_5856_47957460;

Behavior __63377720;

Behavior make__63377720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63377720 = behavior;
   behavior->owner = (Object)rinc_5856_47957460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_48591080_channel__inputs_5845_47959240_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   dbus__r_48591080_channel__inputs_5845_47959240_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   dbus__r_48591080_channel__inputs_5845_47959240_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(dbus__r_48591080_channel__inputs_5845_47959240_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,dbus__r_48591080_channel__inputs_5845_47959240_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
dbus__r_48591080_channel__inputs_5845_47959240_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[dbus__r_48591080_channel__inputs_5845_47959240_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63346440();

   return behavior;
}

Behavior __63377560;

Behavior make__63377560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63377560 = behavior;
   behavior->owner = (Object)rinc_5856_47957460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5857_53717240_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   _5857_53717240_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   _5857_53717240_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(_5857_53717240_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,_5857_53717240_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
_5857_53717240_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[_5857_53717240_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,_5858_53717140_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   _5858_53717140_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   _5858_53717140_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(_5858_53717140_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,_5858_53717140_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
_5858_53717140_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[_5858_53717140_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63345800();

   return behavior;
}

Scope makerinc_5856_47957460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5856_47957460 = scope;
   scope->owner = (Object)channel__inputs_5845_47959240;
   scope->name = "rinc:56";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__63377720();
   scope->behaviors[1] = make__63377560();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5860_48406120;

Scope makewinc_5860_48406120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5860_48406120 = scope;
   scope->owner = (Object)channel__inputs_5845_47959240;
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

Scope rdec_5864_48405440;

Scope makerdec_5864_48405440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5864_48405440 = scope;
   scope->owner = (Object)channel__inputs_5845_47959240;
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

Scope wdec_5869_48404820;

Scope makewdec_5869_48404820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5869_48404820 = scope;
   scope->owner = (Object)channel__inputs_5845_47959240;
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

Behavior __49909540;

Behavior make__49909540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49909540 = behavior;
   behavior->owner = (Object)channel__inputs_5845_47959240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_62429800_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   clk_62429800_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_neg += 1;
   clk_62429800_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->neg = realloc(clk_62429800_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->neg,clk_62429800_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_neg*sizeof(Object));
clk_62429800_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->neg[clk_62429800_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_neg-1] = (Object)behavior;
   behavior->block = make__49298080();

   return behavior;
}

Behavior __63284060;

Behavior make__63284060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63284060 = behavior;
   behavior->owner = (Object)channel__inputs_5845_47959240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_48403940_channel__inputs_5845_47959240_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   trig__w_48403940_channel__inputs_5845_47959240_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   trig__w_48403940_channel__inputs_5845_47959240_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(trig__w_48403940_channel__inputs_5845_47959240_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,trig__w_48403940_channel__inputs_5845_47959240_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
trig__w_48403940_channel__inputs_5845_47959240_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[trig__w_48403940_channel__inputs_5845_47959240_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63284220();

   return behavior;
}

Behavior __63283760;

Behavior make__63283760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63283760 = behavior;
   behavior->owner = (Object)channel__inputs_5845_47959240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5861_48538960_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   _5861_48538960_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   _5861_48538960_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(_5861_48538960_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,_5861_48538960_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
_5861_48538960_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[_5861_48538960_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63284000();

   return behavior;
}

Behavior __63348460;

Behavior make__63348460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63348460 = behavior;
   behavior->owner = (Object)channel__inputs_5845_47959240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_48139960_channel__inputs_5845_47959240_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   abus__w_48139960_channel__inputs_5845_47959240_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   abus__w_48139960_channel__inputs_5845_47959240_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(abus__w_48139960_channel__inputs_5845_47959240_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,abus__w_48139960_channel__inputs_5845_47959240_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
abus__w_48139960_channel__inputs_5845_47959240_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[abus__w_48139960_channel__inputs_5845_47959240_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63283220();

   return behavior;
}

Behavior __63348180;

Behavior make__63348180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63348180 = behavior;
   behavior->owner = (Object)channel__inputs_5845_47959240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5862_48538880_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   _5862_48538880_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   _5862_48538880_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(_5862_48538880_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,_5862_48538880_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
_5862_48538880_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[_5862_48538880_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63348400();

   return behavior;
}

Behavior __63347520;

Behavior make__63347520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63347520 = behavior;
   behavior->owner = (Object)channel__inputs_5845_47959240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_48140120_channel__inputs_5845_47959240_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   dbus__w_48140120_channel__inputs_5845_47959240_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   dbus__w_48140120_channel__inputs_5845_47959240_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(dbus__w_48140120_channel__inputs_5845_47959240_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,dbus__w_48140120_channel__inputs_5845_47959240_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
dbus__w_48140120_channel__inputs_5845_47959240_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[dbus__w_48140120_channel__inputs_5845_47959240_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63347680();

   return behavior;
}

Behavior __63347320;

Behavior make__63347320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63347320 = behavior;
   behavior->owner = (Object)channel__inputs_5845_47959240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5863_48140600_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   _5863_48140600_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   _5863_48140600_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(_5863_48140600_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,_5863_48140600_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
_5863_48140600_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[_5863_48140600_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63347480();

   return behavior;
}

Scope makechannel__inputs_5845_47959240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__inputs_5845_47959240 = scope;
   scope->owner = (Object)neural__network_58_84_47959920;
   scope->name = "channel_inputs:45";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_48403960();
   scope->inners[1] = maketrig__w_48403940();
   scope->inners[2] = makedbus__r_48591080();
   scope->inners[3] = makedbus__w_48140120();
   scope->inners[4] = makeabus__r_48140040();
   scope->inners[5] = makeabus__w_48139960();
   scope->inners[6] = makemem_48854720();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_5846_47958860();
   scope->scopes[1] = makewaddr_5851_47958040();
   scope->scopes[2] = makerinc_5856_47957460();
   scope->scopes[3] = makewinc_5860_48406120();
   scope->scopes[4] = makerdec_5864_48405440();
   scope->scopes[5] = makewdec_5869_48404820();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49909540();
   scope->behaviors[1] = make__63284060();
   scope->behaviors[2] = make__63283760();
   scope->behaviors[3] = make__63348460();
   scope->behaviors[4] = make__63348180();
   scope->behaviors[5] = make__63347520();
   scope->behaviors[6] = make__63347320();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__outputs_5874_49909420;

SignalI reg__0_48224420_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makereg__0_48224420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_48224420_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)channel__outputs_5874_49909420;
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

SignalI reg__1_48475020_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makereg__1_48475020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_48475020_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)channel__outputs_5874_49909420;
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

SignalI reg__2_47632660_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makereg__2_47632660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__2_47632660_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)channel__outputs_5874_49909420;
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

Scope anum_5875_49907520;

Behavior __63395500;

Behavior make__63395500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63395500 = behavior;
   behavior->owner = (Object)anum_5875_49907520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_48224420_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   reg__0_48224420_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   reg__0_48224420_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(reg__0_48224420_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,reg__0_48224420_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
reg__0_48224420_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[reg__0_48224420_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63395700();

   return behavior;
}

Behavior __63395180;

Behavior make__63395180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63395180 = behavior;
   behavior->owner = (Object)anum_5875_49907520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5876_54566640_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   _5876_54566640_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   _5876_54566640_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(_5876_54566640_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,_5876_54566640_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
_5876_54566640_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[_5876_54566640_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63395440();

   return behavior;
}

Behavior __63393240;

Behavior make__63393240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63393240 = behavior;
   behavior->owner = (Object)anum_5875_49907520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_48475020_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   reg__1_48475020_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   reg__1_48475020_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(reg__1_48475020_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,reg__1_48475020_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
reg__1_48475020_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[reg__1_48475020_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63393480();

   return behavior;
}

Behavior __63393020;

Behavior make__63393020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63393020 = behavior;
   behavior->owner = (Object)anum_5875_49907520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5877_54800940_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   _5877_54800940_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   _5877_54800940_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(_5877_54800940_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,_5877_54800940_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
_5877_54800940_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[_5877_54800940_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63393200();

   return behavior;
}

Behavior __63391060;

Behavior make__63391060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63391060 = behavior;
   behavior->owner = (Object)anum_5875_49907520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__2_47632660_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   reg__2_47632660_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   reg__2_47632660_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(reg__2_47632660_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,reg__2_47632660_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
reg__2_47632660_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[reg__2_47632660_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63391380();

   return behavior;
}

Behavior __63390720;

Behavior make__63390720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63390720 = behavior;
   behavior->owner = (Object)anum_5875_49907520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5878_55336160_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   _5878_55336160_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   _5878_55336160_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(_5878_55336160_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,_5878_55336160_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
_5878_55336160_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[_5878_55336160_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63390920();

   return behavior;
}

Scope makeanum_5875_49907520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_5875_49907520 = scope;
   scope->owner = (Object)channel__outputs_5874_49909420;
   scope->name = "anum:75";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__63395500();
   scope->behaviors[1] = make__63395180();
   scope->behaviors[2] = make__63393240();
   scope->behaviors[3] = make__63393020();
   scope->behaviors[4] = make__63391060();
   scope->behaviors[5] = make__63390720();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope raddr_5879_47995040;

Scope makeraddr_5879_47995040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5879_47995040 = scope;
   scope->owner = (Object)channel__outputs_5874_49909420;
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

Scope waddr_5884_47994540;

Scope makewaddr_5884_47994540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5884_47994540 = scope;
   scope->owner = (Object)channel__outputs_5874_49909420;
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

Scope rinc_5889_47993940;

SignalI abus__r_47993480_rinc_5889_47993940_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makeabus__r_47993480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47993480_rinc_5889_47993940_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)rinc_5889_47993940;
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

Behavior __63404260;

Behavior make__63404260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63404260 = behavior;
   behavior->owner = (Object)rinc_5889_47993940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_47993480_rinc_5889_47993940_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   abus__r_47993480_rinc_5889_47993940_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   abus__r_47993480_rinc_5889_47993940_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(abus__r_47993480_rinc_5889_47993940_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,abus__r_47993480_rinc_5889_47993940_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
abus__r_47993480_rinc_5889_47993940_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[abus__r_47993480_rinc_5889_47993940_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63404760();

   return behavior;
}

Behavior __63403820;

Behavior make__63403820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63403820 = behavior;
   behavior->owner = (Object)rinc_5889_47993940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5893_49376560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   _5893_49376560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   _5893_49376560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(_5893_49376560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,_5893_49376560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
_5893_49376560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[_5893_49376560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63404080();

   return behavior;
}

Scope makerinc_5889_47993940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5889_47993940 = scope;
   scope->owner = (Object)channel__outputs_5874_49909420;
   scope->name = "rinc:89";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47993480();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__63404260();
   scope->behaviors[1] = make__63403820();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5894_47992940;

SignalI abus__w_47992560_winc_5894_47992940_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makeabus__w_47992560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47992560_winc_5894_47992940_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)winc_5894_47992940;
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

Scope makewinc_5894_47992940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5894_47992940 = scope;
   scope->owner = (Object)channel__outputs_5874_49909420;
   scope->name = "winc:94";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47992560();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5899_47992440;

SignalI abus__r_47991500_rdec_5899_47992440_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makeabus__r_47991500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47991500_rdec_5899_47992440_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)rdec_5899_47992440;
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

Scope makerdec_5899_47992440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5899_47992440 = scope;
   scope->owner = (Object)channel__outputs_5874_49909420;
   scope->name = "rdec:99";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47991500();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58105_48013260;

SignalI abus__w_48012860_wdec_58105_48013260_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makeabus__w_48012860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48012860_wdec_58105_48013260_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)wdec_58105_48013260;
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

Scope makewdec_58105_48013260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58105_48013260 = scope;
   scope->owner = (Object)channel__outputs_5874_49909420;
   scope->name = "wdec:105";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_48012860();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __63375780;

Behavior make__63375780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63375780 = behavior;
   behavior->owner = (Object)channel__outputs_5874_49909420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_48224420_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   reg__0_48224420_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   reg__0_48224420_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(reg__0_48224420_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,reg__0_48224420_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
reg__0_48224420_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[reg__0_48224420_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63376160();

   return behavior;
}

Behavior __63375580;

Behavior make__63375580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63375580 = behavior;
   behavior->owner = (Object)channel__outputs_5874_49909420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5890_49228700_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   _5890_49228700_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   _5890_49228700_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(_5890_49228700_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,_5890_49228700_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
_5890_49228700_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[_5890_49228700_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63375740();

   return behavior;
}

Behavior __63374960;

Behavior make__63374960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63374960 = behavior;
   behavior->owner = (Object)channel__outputs_5874_49909420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_48475020_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   reg__1_48475020_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   reg__1_48475020_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(reg__1_48475020_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,reg__1_48475020_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
reg__1_48475020_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[reg__1_48475020_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63375220();

   return behavior;
}

Behavior __63374720;

Behavior make__63374720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63374720 = behavior;
   behavior->owner = (Object)channel__outputs_5874_49909420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5891_49312980_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   _5891_49312980_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   _5891_49312980_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(_5891_49312980_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,_5891_49312980_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
_5891_49312980_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[_5891_49312980_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63374880();

   return behavior;
}

Behavior __63374100;

Behavior make__63374100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63374100 = behavior;
   behavior->owner = (Object)channel__outputs_5874_49909420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__2_47632660_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   reg__2_47632660_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   reg__2_47632660_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(reg__2_47632660_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,reg__2_47632660_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
reg__2_47632660_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[reg__2_47632660_channel__outputs_5874_49909420_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63374340();

   return behavior;
}

Behavior __63373780;

Behavior make__63373780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63373780 = behavior;
   behavior->owner = (Object)channel__outputs_5874_49909420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5892_49376640_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   _5892_49376640_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   _5892_49376640_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(_5892_49376640_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,_5892_49376640_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
_5892_49376640_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[_5892_49376640_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63374020();

   return behavior;
}

Scope makechannel__outputs_5874_49909420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__outputs_5874_49909420 = scope;
   scope->owner = (Object)neural__network_58_84_47959920;
   scope->name = "channel_outputs:74";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 3;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_48224420();
   scope->inners[1] = makereg__1_48475020();
   scope->inners[2] = makereg__2_47632660();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_5875_49907520();
   scope->scopes[1] = makeraddr_5879_47995040();
   scope->scopes[2] = makewaddr_5884_47994540();
   scope->scopes[3] = makerinc_5889_47993940();
   scope->scopes[4] = makewinc_5894_47992940();
   scope->scopes[5] = makerdec_5899_47992440();
   scope->scopes[6] = makewdec_58105_48013260();
   scope->num_behaviors = 6;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__63375780();
   scope->behaviors[1] = make__63375580();
   scope->behaviors[2] = make__63374960();
   scope->behaviors[3] = make__63374720();
   scope->behaviors[4] = make__63374100();
   scope->behaviors[5] = make__63373780();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__a0_58111_49491400;

SignalI reg__0_48023440_channel__a0_58111_49491400_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makereg__0_48023440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_48023440_channel__a0_58111_49491400_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)channel__a0_58111_49491400;
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

SignalI reg__1_48324040_channel__a0_58111_49491400_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makereg__1_48324040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_48324040_channel__a0_58111_49491400_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)channel__a0_58111_49491400;
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

Scope anum_58112_49491000;

Behavior __63400640;

Behavior make__63400640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63400640 = behavior;
   behavior->owner = (Object)anum_58112_49491000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_48023440_channel__a0_58111_49491400_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   reg__0_48023440_channel__a0_58111_49491400_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   reg__0_48023440_channel__a0_58111_49491400_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(reg__0_48023440_channel__a0_58111_49491400_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,reg__0_48023440_channel__a0_58111_49491400_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
reg__0_48023440_channel__a0_58111_49491400_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[reg__0_48023440_channel__a0_58111_49491400_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63400840();

   return behavior;
}

Behavior __63400160;

Behavior make__63400160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63400160 = behavior;
   behavior->owner = (Object)anum_58112_49491000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58113_53979580_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   _58113_53979580_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   _58113_53979580_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(_58113_53979580_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,_58113_53979580_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
_58113_53979580_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[_58113_53979580_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63400580();

   return behavior;
}

Behavior __63561420;

Behavior make__63561420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63561420 = behavior;
   behavior->owner = (Object)anum_58112_49491000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_48324040_channel__a0_58111_49491400_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   reg__1_48324040_channel__a0_58111_49491400_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   reg__1_48324040_channel__a0_58111_49491400_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(reg__1_48324040_channel__a0_58111_49491400_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,reg__1_48324040_channel__a0_58111_49491400_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
reg__1_48324040_channel__a0_58111_49491400_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[reg__1_48324040_channel__a0_58111_49491400_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63397900();

   return behavior;
}

Behavior __63561160;

Behavior make__63561160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63561160 = behavior;
   behavior->owner = (Object)anum_58112_49491000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58114_54062020_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   _58114_54062020_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   _58114_54062020_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(_58114_54062020_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,_58114_54062020_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
_58114_54062020_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[_58114_54062020_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63561340();

   return behavior;
}

Scope makeanum_58112_49491000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_58112_49491000 = scope;
   scope->owner = (Object)channel__a0_58111_49491400;
   scope->name = "anum:112";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__63400640();
   scope->behaviors[1] = make__63400160();
   scope->behaviors[2] = make__63561420();
   scope->behaviors[3] = make__63561160();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope raddr_58115_50141780;

Scope makeraddr_58115_50141780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58115_50141780 = scope;
   scope->owner = (Object)channel__a0_58111_49491400;
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

Scope waddr_58119_50139840;

Scope makewaddr_58119_50139840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58119_50139840 = scope;
   scope->owner = (Object)channel__a0_58111_49491400;
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

Scope rinc_58123_50138880;

SignalI abus__r_50138400_rinc_58123_50138880_channel__a0_58111_49491400_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makeabus__r_50138400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50138400_rinc_58123_50138880_channel__a0_58111_49491400_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)rinc_58123_50138880;
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

Behavior __63593940;

Behavior make__63593940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63593940 = behavior;
   behavior->owner = (Object)rinc_58123_50138880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_50138400_rinc_58123_50138880_channel__a0_58111_49491400_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   abus__r_50138400_rinc_58123_50138880_channel__a0_58111_49491400_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   abus__r_50138400_rinc_58123_50138880_channel__a0_58111_49491400_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(abus__r_50138400_rinc_58123_50138880_channel__a0_58111_49491400_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,abus__r_50138400_rinc_58123_50138880_channel__a0_58111_49491400_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
abus__r_50138400_rinc_58123_50138880_channel__a0_58111_49491400_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[abus__r_50138400_rinc_58123_50138880_channel__a0_58111_49491400_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63594380();

   return behavior;
}

Behavior __63593700;

Behavior make__63593700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63593700 = behavior;
   behavior->owner = (Object)rinc_58123_50138880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58126_54111420_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   _58126_54111420_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   _58126_54111420_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(_58126_54111420_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,_58126_54111420_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
_58126_54111420_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[_58126_54111420_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63593900();

   return behavior;
}

Behavior __63593480;

Behavior make__63593480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63593480 = behavior;
   behavior->owner = (Object)rinc_58123_50138880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_48023440_channel__a0_58111_49491400_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   reg__0_48023440_channel__a0_58111_49491400_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   reg__0_48023440_channel__a0_58111_49491400_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(reg__0_48023440_channel__a0_58111_49491400_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,reg__0_48023440_channel__a0_58111_49491400_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
reg__0_48023440_channel__a0_58111_49491400_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[reg__0_48023440_channel__a0_58111_49491400_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,reg__1_48324040_channel__a0_58111_49491400_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   reg__1_48324040_channel__a0_58111_49491400_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   reg__1_48324040_channel__a0_58111_49491400_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(reg__1_48324040_channel__a0_58111_49491400_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,reg__1_48324040_channel__a0_58111_49491400_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
reg__1_48324040_channel__a0_58111_49491400_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[reg__1_48324040_channel__a0_58111_49491400_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63560160();

   return behavior;
}

Scope makerinc_58123_50138880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58123_50138880 = scope;
   scope->owner = (Object)channel__a0_58111_49491400;
   scope->name = "rinc:123";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_50138400();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__63593940();
   scope->behaviors[1] = make__63593700();
   scope->behaviors[2] = make__63593480();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58127_47897600;

SignalI abus__w_47897120_winc_58127_47897600_channel__a0_58111_49491400_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makeabus__w_47897120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47897120_winc_58127_47897600_channel__a0_58111_49491400_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)winc_58127_47897600;
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

Scope makewinc_58127_47897600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58127_47897600 = scope;
   scope->owner = (Object)channel__a0_58111_49491400;
   scope->name = "winc:127";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47897120();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58131_47896980;

SignalI abus__r_47896520_rdec_58131_47896980_channel__a0_58111_49491400_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makeabus__r_47896520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47896520_rdec_58131_47896980_channel__a0_58111_49491400_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)rdec_58131_47896980;
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

Scope makerdec_58131_47896980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58131_47896980 = scope;
   scope->owner = (Object)channel__a0_58111_49491400;
   scope->name = "rdec:131";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47896520();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58136_47896400;

SignalI abus__w_47895980_wdec_58136_47896400_channel__a0_58111_49491400_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920;

SignalI makeabus__w_47895980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47895980_wdec_58136_47896400_channel__a0_58111_49491400_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920 = signalI;
   signalI->owner = (Object)wdec_58136_47896400;
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

Scope makewdec_58136_47896400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58136_47896400 = scope;
   scope->owner = (Object)channel__a0_58111_49491400;
   scope->name = "wdec:136";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47895980();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope makechannel__a0_58111_49491400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__a0_58111_49491400 = scope;
   scope->owner = (Object)neural__network_58_84_47959920;
   scope->name = "channel_a0:111";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_48023440();
   scope->inners[1] = makereg__1_48324040();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_58112_49491000();
   scope->scopes[1] = makeraddr_58115_50141780();
   scope->scopes[2] = makewaddr_58119_50139840();
   scope->scopes[3] = makerinc_58123_50138880();
   scope->scopes[4] = makewinc_58127_47897600();
   scope->scopes[5] = makerdec_58131_47896980();
   scope->scopes[6] = makewdec_58136_47896400();
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __55391060;

Behavior make__55391060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55391060 = behavior;
   behavior->owner = (Object)neural__network_58_84_47959920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_62429800_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   clk_62429800_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_pos += 1;
   clk_62429800_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->pos = realloc(clk_62429800_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->pos,clk_62429800_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_pos*sizeof(Object));
clk_62429800_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->pos[clk_62429800_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_pos-1] = (Object)behavior;
   behavior->block = make__55392940();

   return behavior;
}

Behavior __60779580;

Behavior make__60779580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60779580 = behavior;
   behavior->owner = (Object)neural__network_58_84_47959920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_62429800_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   clk_62429800_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_pos += 1;
   clk_62429800_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->pos = realloc(clk_62429800_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->pos,clk_62429800_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_pos*sizeof(Object));
clk_62429800_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->pos[clk_62429800_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_pos-1] = (Object)behavior;
   behavior->block = make__55390660();

   return behavior;
}

Behavior __62408440;

Behavior make__62408440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62408440 = behavior;
   behavior->owner = (Object)neural__network_58_84_47959920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_62429800_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   clk_62429800_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_pos += 1;
   clk_62429800_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->pos = realloc(clk_62429800_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->pos,clk_62429800_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_pos*sizeof(Object));
clk_62429800_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->pos[clk_62429800_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_pos-1] = (Object)behavior;
   behavior->block = make__60779380();

   return behavior;
}

Behavior __63286080;

Behavior make__63286080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63286080 = behavior;
   behavior->owner = (Object)neural__network_58_84_47959920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,fill_62429720_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   fill_62429720_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   fill_62429720_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(fill_62429720_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,fill_62429720_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
fill_62429720_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[fill_62429720_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__inputs_48538980_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   ack__inputs_48538980_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   ack__inputs_48538980_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(ack__inputs_48538980_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,ack__inputs_48538980_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
ack__inputs_48538980_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[ack__inputs_48538980_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,flag__inputs_48539000_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   flag__inputs_48539000_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   flag__inputs_48539000_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(flag__inputs_48539000_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,flag__inputs_48539000_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
flag__inputs_48539000_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[flag__inputs_48539000_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63286600();

   return behavior;
}

Behavior __63285660;

Behavior make__63285660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63285660 = behavior;
   behavior->owner = (Object)neural__network_58_84_47959920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__1_48320820_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   ack__1_48320820_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   ack__1_48320820_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(ack__1_48320820_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,ack__1_48320820_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
ack__1_48320820_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[ack__1_48320820_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__network_62733260_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   ack__network_62733260_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   ack__network_62733260_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(ack__network_62733260_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,ack__network_62733260_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
ack__network_62733260_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[ack__network_62733260_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,flag__outputs_48911920_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   flag__outputs_48911920_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   flag__outputs_48911920_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(flag__outputs_48911920_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,flag__outputs_48911920_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
flag__outputs_48911920_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[flag__outputs_48911920_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63286020();

   return behavior;
}

Behavior __63285480;

Behavior make__63285480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63285480 = behavior;
   behavior->owner = (Object)neural__network_58_84_47959920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_62429800_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   clk_62429800_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   clk_62429800_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(clk_62429800_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,clk_62429800_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
clk_62429800_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[clk_62429800_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_62429780_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   rst_62429780_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   rst_62429780_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(rst_62429780_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,rst_62429780_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
rst_62429780_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[rst_62429780_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,req_62429760_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   req_62429760_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   req_62429760_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(req_62429760_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,req_62429760_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
req_62429760_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[req_62429760_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,ack__0_48320840_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   ack__0_48320840_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   ack__0_48320840_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(ack__0_48320840_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,ack__0_48320840_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
ack__0_48320840_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[ack__0_48320840_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__inputs_48538980_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   ack__inputs_48538980_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   ack__inputs_48538980_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(ack__inputs_48538980_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,ack__inputs_48538980_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
ack__inputs_48538980_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[ack__inputs_48538980_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63273140();

   return behavior;
}

Behavior __63285260;

Behavior make__63285260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __63285260 = behavior;
   behavior->owner = (Object)neural__network_58_84_47959920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__layer_53717340_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   ack__layer_53717340_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   ack__layer_53717340_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(ack__layer_53717340_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,ack__layer_53717340_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
ack__layer_53717340_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[ack__layer_53717340_layer0_58_840_53426560_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__layer_54111760_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920);
   ack__layer_54111760_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any += 1;
   ack__layer_54111760_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any = realloc(ack__layer_54111760_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any,ack__layer_54111760_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any*sizeof(Object));
ack__layer_54111760_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->any[ack__layer_54111760_layer1_58_840_53249340_neural__network_58_84_47959920_neural__network_58_840_62407860______58_84_47669840______58_840_62926920->num_any-1] = (Object)behavior;
   behavior->block = make__63273060();

   return behavior;
}

Scope makeneural__network_58_84_47959920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   neural__network_58_84_47959920 = scope;
   scope->owner = (Object)neural__network_58_840_62407860;
   scope->name = "neural_network:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makelayer0_54061900();
   scope->systemIs[1] = makelayer1_55335560();
   scope->num_inners = 18;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeack__0_48320840();
   scope->inners[1] = makeack__1_48320820();
   scope->inners[2] = makefill__inputs_48320780();
   scope->inners[3] = makevalue__inputs_48539100();
   scope->inners[4] = makeaddress__inputs_48539020();
   scope->inners[5] = makeflag__inputs_48539000();
   scope->inners[6] = makeack__inputs_48538980();
   scope->inners[7] = make_5861_48538960();
   scope->inners[8] = make_5862_48538880();
   scope->inners[9] = make_5863_48140600();
   scope->inners[10] = makefill__outputs_48140580();
   scope->inners[11] = makevalue__outputs_48912020();
   scope->inners[12] = makeaddress__outputs_48911940();
   scope->inners[13] = makeflag__outputs_48911920();
   scope->inners[14] = make_5890_49228700();
   scope->inners[15] = make_5891_49312980();
   scope->inners[16] = make_5892_49376640();
   scope->inners[17] = make_5893_49376560();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__inputs_5845_47959240();
   scope->scopes[1] = makechannel__outputs_5874_49909420();
   scope->scopes[2] = makechannel__a0_58111_49491400();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__55391060();
   scope->behaviors[1] = make__60779580();
   scope->behaviors[2] = make__62408440();
   scope->behaviors[3] = make__63286080();
   scope->behaviors[4] = make__63285660();
   scope->behaviors[5] = make__63285480();
   scope->behaviors[6] = make__63285260();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makeneural__network_58_840_62407860() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   neural__network_58_840_62407860 = systemT;
systemT->owner = NULL;
   systemT->name = "neural_network:T0";
   systemT->num_inputs = 5;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_62429800();
   systemT->inputs[1] = makerst_62429780();
   systemT->inputs[2] = makereq_62429760();
   systemT->inputs[3] = makefill_62429720();
   systemT->inputs[4] = make_5810_62733420();
   systemT->num_outputs = 7;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__fill_62733280();
   systemT->outputs[1] = makeack__network_62733260();
   systemT->outputs[2] = make_588_62733240();
   systemT->outputs[3] = make_589_62733120();
   systemT->outputs[4] = make_5832_62733020();
   systemT->outputs[5] = make_5833_62732940();
   systemT->outputs[6] = make_5834_62827400();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makeneural__network_58_84_47959920();

   return systemT;
}