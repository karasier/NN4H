#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT neural__network_58_840_54314100;

SignalI clk_54334680_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeclk_54334680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_54334680_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)neural__network_58_840_54314100;
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

SignalI rst_54334660_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makerst_54334660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_54334660_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)neural__network_58_840_54314100;
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

SignalI req_54334640_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makereq_54334640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_54334640_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)neural__network_58_840_54314100;
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

SignalI fill_54334600_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makefill_54334600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_54334600_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)neural__network_58_840_54314100;
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

SignalI _5810_54538720_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI make_5810_54538720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5810_54538720_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)neural__network_58_840_54314100;
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

SignalI ack__fill_54538660_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeack__fill_54538660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__fill_54538660_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)neural__network_58_840_54314100;
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

SignalI ack__network_54538620_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeack__network_54538620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__network_54538620_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)neural__network_58_840_54314100;
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

SignalI _588_54538600_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI make_588_54538600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _588_54538600_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)neural__network_58_840_54314100;
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

SignalI _589_54538500_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI make_589_54538500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _589_54538500_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)neural__network_58_840_54314100;
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

SignalI _5832_54538480_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI make_5832_54538480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5832_54538480_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)neural__network_58_840_54314100;
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

SignalI _5833_54538260_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI make_5833_54538260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5833_54538260_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)neural__network_58_840_54314100;
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

SignalI _5834_54828540_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI make_5834_54828540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5834_54828540_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)neural__network_58_840_54314100;
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

Block __48705180;

Block __48704200;

void code__48704200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56549700(),ack__0_48756140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56549640(),ack__1_48756120_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__48704200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48704200 = block;
   block->owner = (Object)__48705180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48704200;

   return block;
};

void code__48705180() {
   {
      Value cond = rst_54334660_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48704200();
   }
      }
   }
}

Block make__48705180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48705180 = block;
   block->owner = (Object)__48724080;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48705180;

   return block;
};

Block __48723560;

Block __48723180;

Block __48722260;

void code__48722260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56549480(),_5862_49100440_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__48722260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48722260 = block;
   block->owner = (Object)__48723180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48722260;

   return block;
};

void code__48723180() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_54334660_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56549560();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48722260();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56549420(),_5861_49100520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__48723180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48723180 = block;
   block->owner = (Object)__48723560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48723180;

   return block;
};

Block __48720180;

Block __48741900;

void code__48741900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56008560(),_589_54538500_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__48741900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48741900 = block;
   block->owner = (Object)__48720180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48741900;

   return block;
};

void code__48720180() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_54334660_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56008640();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48741900();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56008500(),_588_54538600_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__48720180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48720180 = block;
   block->owner = (Object)__48723560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48720180;

   return block;
};

Block __48736340;

void code__48736340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56008400(),address__inputs_49100580_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56008340(),flag__inputs_49100560_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56008280(),ack__inputs_49100540_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__48736340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48736340 = block;
   block->owner = (Object)__48723560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48736340;

   return block;
};

Block __48758000;

Block __48756680;

Block __48754460;

Block __48791180;

Block __48790840;

void code__48790840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(_5810_54538720_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,value__inputs_49100660_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__56007860(),flag__inputs_49100560_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__48790840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48790840 = block;
   block->owner = (Object)__48791180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48790840;

   return block;
};

void code__48791180() {
 code__48790840();
}

Block make__48791180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48791180 = block;
   block->owner = (Object)__48754460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48791180;

   return block;
};

Block __48752940;

void code__48752940() {
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
                  src0 = _589_54538500_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
                  src1 = make__56007760();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__56007720();
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
                        src0 = _589_54538500_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__56007480();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__56007420();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_589_54538500_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56007300(),_588_54538600_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__48752940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48752940 = block;
   block->owner = (Object)__48754460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48752940;

   return block;
};

void code__48754460() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = _588_54538600_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56008020();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48791180();
   }
   else {
  code__48752940();
   }
      }
   }
}

Block make__48754460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48754460 = block;
   block->owner = (Object)__48756680;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48754460;

   return block;
};

void code__48756680() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_54334660_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56008120();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48754460();
   }
      }
   }
}

Block make__48756680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48756680 = block;
   block->owner = (Object)__48758000;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48756680;

   return block;
};

void code__48758000() {
 code__48756680();
}

Block make__48758000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48758000 = block;
   block->owner = (Object)__48723560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48758000;

   return block;
};

Block __49624420;

Block __49623860;

Block __49642580;

void code__49642580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__56006840(),ack__inputs_49100540_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__49642580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49642580 = block;
   block->owner = (Object)__49623860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49642580;

   return block;
};

void code__49623860() {
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
                  src0 = address__inputs_49100580_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__56007100();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),address__inputs_49100580_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__56007000(),flag__inputs_49100560_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address__inputs_49100580_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56006920();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49642580();
   }
      }
   }
}

Block make__49623860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49623860 = block;
   block->owner = (Object)__49624420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49623860;

   return block;
};

Block __49638740;

Block __49637060;

void code__49637060() {
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
                  src0 = _5862_49100440_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
                  src1 = make__56006640();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__56006600();
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
                        src0 = _5862_49100440_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__56006360();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__56006300();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_5862_49100440_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56006180(),_5861_49100520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__inputs_49100660_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,_5863_49200600_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__49637060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49637060 = block;
   block->owner = (Object)__49638740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49637060;

   return block;
};

void code__49638740() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_54334660_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56006760();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49637060();
   }
      }
   }
}

Block make__49638740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49638740 = block;
   block->owner = (Object)__49624420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49638740;

   return block;
};

void code__49624420() {
 code__49623860();
 code__49638740();
}

Block make__49624420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49624420 = block;
   block->owner = (Object)__48723560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49624420;

   return block;
};

Block __48739900;

void code__48739900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56006000(),flag__inputs_49100560_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__48739900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48739900 = block;
   block->owner = (Object)__48723560;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48739900;

   return block;
};

void code__48723560() {
 code__48723180();
 code__48720180();
   {
      Value cond = rst_54334660_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48736340();
   }
   else if (value2integer(fill__inputs_48756100_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value)) {
  code__48758000();
   }
   else if (value2integer(flag__inputs_49100560_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value)) {
  code__49624420();
   }
   else {
  code__48739900();
   }
      }
   }
}

Block make__48723560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48723560 = block;
   block->owner = (Object)__53072580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48723560;

   return block;
};

Block __53071900;

Block __53071620;

Block __53071080;

void code__53071080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56005840(),_5833_54538260_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__53071080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53071080 = block;
   block->owner = (Object)__53071620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53071080;

   return block;
};

void code__53071620() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_54334660_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56005920();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53071080();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56005780(),_5832_54538480_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__53071620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53071620 = block;
   block->owner = (Object)__53071900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53071620;

   return block;
};

Block __53069960;

Block __53069100;

void code__53069100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56005620(),_5885_49495600_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__53069100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53069100 = block;
   block->owner = (Object)__53069960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53069100;

   return block;
};

void code__53069960() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_54334660_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56005700();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53069100();
   }
      }
   }
}

Block make__53069960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53069960 = block;
   block->owner = (Object)__53071900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53069960;

   return block;
};

Block __53092020;

void code__53092020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56005520(),address__outputs_49328700_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56005460(),flag__outputs_49328680_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56005400(),ack__network_54538620_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__53092020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53092020 = block;
   block->owner = (Object)__53071900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53092020;

   return block;
};

Block __53088800;

Block __53088240;

Block __53087660;

Block __53087000;

void code__53087000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5884_49495680_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,value__outputs_49328840_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__53087000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53087000 = block;
   block->owner = (Object)__53087660;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53087000;

   return block;
};

void code__53087660() {
{
      Value value = _5885_49495600_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
      if (is_defined_value(value)) {
         if (value2integer(value) == value2integer(make__56005120())) {
    code__53087000();
         }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56004980(),flag__outputs_49328680_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
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
                  src0 = _5885_49495600_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
                  src1 = make__56004880();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__56004840();
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
                        src0 = _5885_49495600_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__56004600();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__56004540();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_5885_49495600_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__53087660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53087660 = block;
   block->owner = (Object)__53088240;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53087660;

   return block;
};

void code__53088240() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_54334660_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56005240();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53087660();
   }
      }
   }
}

Block make__53088240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53088240 = block;
   block->owner = (Object)__53088800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53088240;

   return block;
};

void code__53088800() {
 code__53088240();
}

Block make__53088800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53088800 = block;
   block->owner = (Object)__53071900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53088800;

   return block;
};

Block __53810060;

Block __53809860;

Block __53807680;

void code__53807680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__56004020(),ack__network_54538620_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__53807680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53807680 = block;
   block->owner = (Object)__53809860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53807680;

   return block;
};

void code__53809860() {
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
                  src0 = address__outputs_49328700_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__56004280();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),address__outputs_49328700_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__56004180(),flag__outputs_49328680_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address__outputs_49328700_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56004100();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53807680();
   }
      }
   }
}

Block make__53809860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53809860 = block;
   block->owner = (Object)__53810060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53809860;

   return block;
};

Block __53806940;

Block __53806320;

void code__53806320() {
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
                  src0 = _5833_54538260_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
                  src1 = make__56003820();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__56003780();
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
                        src0 = _5833_54538260_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__56003540();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; });
            dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
            set_value_pos(pool_state);
         dst; });
      src1 = make__56003480();
      select_value(sel,dst,2,src0,src1);
      set_value_pos(pool_state);
   dst; }),_5833_54538260_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56003360(),_5832_54538480_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(value__outputs_49328840_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,_5834_54828540_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__53806320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53806320 = block;
   block->owner = (Object)__53806940;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53806320;

   return block;
};

void code__53806940() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_54334660_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__56003940();
         dst = equal_value(src0,src1,dst);
dst = reduce_or_value(dst,dst);         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53806320();
   }
      }
   }
}

Block make__53806940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53806940 = block;
   block->owner = (Object)__53810060;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53806940;

   return block;
};

void code__53810060() {
 code__53809860();
 code__53806940();
}

Block make__53810060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53810060 = block;
   block->owner = (Object)__53071900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53810060;

   return block;
};

Block __53067900;

void code__53067900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__56003180(),flag__outputs_49328680_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__53067900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53067900 = block;
   block->owner = (Object)__53071900;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53067900;

   return block;
};

void code__53071900() {
 code__53071620();
 code__53069960();
   {
      Value cond = rst_54334660_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53092020();
   }
   else if (value2integer(fill__outputs_49200580_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value)) {
  code__53088800();
   }
   else if (value2integer(flag__outputs_49328680_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value)) {
  code__53810060();
   }
   else {
  code__53067900();
   }
      }
   }
}

Block make__53071900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53071900 = block;
   block->owner = (Object)__54314600;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53071900;

   return block;
};

Block __55695540;

void code__55695540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = fill_54334600_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
            src1 = ({
                  Value src0, dst;
                  dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ack__inputs_49100540_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
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
            src0 = flag__inputs_49100560_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),fill__inputs_48756100_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__55695540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55695540 = block;
   block->owner = (Object)__55695100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55695540;

   return block;
};

Block __55695040;

void code__55695040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__1_48756120_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
            src1 = ({
                  Value src0, dst;
                  dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ack__network_54538620_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
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
            src0 = flag__outputs_49328680_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),fill__outputs_49200580_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__55695040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55695040 = block;
   block->owner = (Object)__55694400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55695040;

   return block;
};

Block __55605100;

void code__55605100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_54334680_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,clk_54205040_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_54334660_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,rst_54205020_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(req_54334640_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,req_54205000_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_54334680_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,clk_44329880_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_54334660_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,rst_44329780_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__0_48756140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,req_44329640_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__inputs_49100540_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,ack__fill_54538660_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__55605100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55605100 = block;
   block->owner = (Object)__55694100;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55605100;

   return block;
};

Block __55605040;

void code__55605040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__layer_54336320_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,ack__0_48756140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__layer_47468120_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,ack__1_48756120_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__55605040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55605040 = block;
   block->owner = (Object)__55693740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55605040;

   return block;
};

Block __47809480;

Block __49117160;

void code__49117160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_47259200_channel__inputs_5845_46152520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,make_ref_rangeS(mem_47369100_channel__inputs_5845_46152520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860,value2integer(abus__w_47258780_channel__inputs_5845_46152520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value),value2integer(abus__w_47258780_channel__inputs_5845_46152520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__49117160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49117160 = block;
   block->owner = (Object)__47809480;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49117160;

   return block;
};

void code__47809480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_47369100_channel__inputs_5845_46152520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
            idx = value2integer(abus__r_47258960_channel__inputs_5845_46152520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_47156500_channel__inputs_5845_46152520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_46663040_channel__inputs_5845_46152520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49117160();
   }
      }
   }
}

Block make__47809480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47809480 = block;
   block->owner = (Object)__49494460;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47809480;

   return block;
};

Block __55691280;

void code__55691280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_46663040_channel__inputs_5845_46152520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,_5861_49100520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__55691280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55691280 = block;
   block->owner = (Object)__55690860;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55691280;

   return block;
};

Block __55690800;

void code__55690800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5861_49100520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,trig__w_46663040_channel__inputs_5845_46152520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__55690800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55690800 = block;
   block->owner = (Object)__55690580;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55690800;

   return block;
};

Block __55690040;

void code__55690040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_47258780_channel__inputs_5845_46152520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,_5862_49100440_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__55690040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55690040 = block;
   block->owner = (Object)__55689780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55690040;

   return block;
};

Block __55689740;

void code__55689740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5862_49100440_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,abus__w_47258780_channel__inputs_5845_46152520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__55689740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55689740 = block;
   block->owner = (Object)__55689440;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55689740;

   return block;
};

Block __55844000;

void code__55844000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_47259200_channel__inputs_5845_46152520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,_5863_49200600_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__55844000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55844000 = block;
   block->owner = (Object)__55843780;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55844000;

   return block;
};

Block __55843720;

void code__55843720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5863_49200600_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,dbus__w_47259200_channel__inputs_5845_46152520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__55843720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55843720 = block;
   block->owner = (Object)__55843400;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55843720;

   return block;
};

Block __55842320;

void code__55842320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_47156500_channel__inputs_5845_46152520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,_5859_54336360_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__55842320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55842320 = block;
   block->owner = (Object)__55870720;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55842320;

   return block;
};

Block __55842220;

void code__55842220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5857_54336300_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,trig__r_46663060_channel__inputs_5845_46152520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5858_54336220_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,abus__r_47258960_channel__inputs_5845_46152520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__55842220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55842220 = block;
   block->owner = (Object)__55870360;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55842220;

   return block;
};

Block __55925360;

void code__55925360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_49747280_channel__outputs_5874_49494340_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,_5884_49495680_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__55925360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55925360 = block;
   block->owner = (Object)__55925160;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55925360;

   return block;
};

Block __55925040;

void code__55925040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5884_49495680_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,reg__0_49747280_channel__outputs_5874_49494340_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__55925040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55925040 = block;
   block->owner = (Object)__55924800;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55925040;

   return block;
};

Block __55921080;

void code__55921080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_49747280_channel__outputs_5874_49494340_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,_5876_48691480_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__55921080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55921080 = block;
   block->owner = (Object)__55920760;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55921080;

   return block;
};

Block __55920660;

void code__55920660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5876_48691480_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,reg__0_49747280_channel__outputs_5874_49494340_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__55920660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55920660 = block;
   block->owner = (Object)__55920320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55920660;

   return block;
};

Block __55958400;

void code__55958400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_49639020_rinc_5883_49639460_channel__outputs_5874_49494340_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,_5885_49495600_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__55958400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55958400 = block;
   block->owner = (Object)__55958180;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55958400;

   return block;
};

Block __55958120;

void code__55958120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5885_49495600_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,abus__r_49639020_rinc_5883_49639460_channel__outputs_5874_49494340_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__55958120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55958120 = block;
   block->owner = (Object)__55957740;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55958120;

   return block;
};

Block __55952820;

void code__55952820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_48636200_channel__a0_5897_49894140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,_5899_54437440_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__55952820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55952820 = block;
   block->owner = (Object)__55952320;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55952820;

   return block;
};

Block __55952260;

void code__55952260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5899_54437440_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,reg__0_48636200_channel__a0_5897_49894140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__55952260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55952260 = block;
   block->owner = (Object)__55951960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55952260;

   return block;
};

Block __55973880;

void code__55973880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_48756280_channel__a0_5897_49894140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,_58100_54603180_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__55973880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55973880 = block;
   block->owner = (Object)__55973620;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55973880;

   return block;
};

Block __55973560;

void code__55973560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58100_54603180_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,reg__1_48756280_channel__a0_5897_49894140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__55973560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55973560 = block;
   block->owner = (Object)__55972960;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55973560;

   return block;
};

Block __56022000;

void code__56022000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_46972040_rinc_58109_46950980_channel__a0_5897_49894140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,_58112_47467940_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__56022000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56022000 = block;
   block->owner = (Object)__56021420;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56022000;

   return block;
};

Block __56021300;

void code__56021300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_58112_47467940_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,abus__r_46972040_rinc_58109_46950980_channel__a0_5897_49894140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__56021300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56021300 = block;
   block->owner = (Object)__56020980;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56021300;

   return block;
};

Block __55969600;

void code__55969600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_48636200_channel__a0_5897_49894140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,_58110_46967800_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_48756280_channel__a0_5897_49894140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->c_value,_58111_47468720_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
      set_value_pos(pool_state);
   }
}

Block make__55969600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __55969600 = block;
   block->owner = (Object)__56020820;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__55969600;

   return block;
};

Value make__56549700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56549640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56549560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56549480() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56549420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56008640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56008560() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56008500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56008400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__56008340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56008280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56008120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56008020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56007860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56007760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56007720() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56007480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56007420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56007300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56007100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56007000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56006920() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56006840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56006760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56006640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56006600() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56006360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56006300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56006180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56006000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56005920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56005840() {
   static unsigned long long data[] = { 4294967295ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56005780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56005700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56005620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56005520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56005460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56005400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56005240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56005120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56004980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56004880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56004840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56004600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56004540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56004280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56004180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56004100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56004020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56003940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56003820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56003780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56003540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__56003480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__56003360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__56003180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope neural__network_58_84_45555900;

SignalI ack__0_48756140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeack__0_48756140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__0_48756140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)neural__network_58_84_45555900;
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

SignalI ack__1_48756120_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeack__1_48756120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__1_48756120_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)neural__network_58_84_45555900;
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

SignalI fill__inputs_48756100_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makefill__inputs_48756100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill__inputs_48756100_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)neural__network_58_84_45555900;
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

SignalI value__inputs_49100660_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makevalue__inputs_49100660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__inputs_49100660_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)neural__network_58_84_45555900;
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

SignalI address__inputs_49100580_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeaddress__inputs_49100580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address__inputs_49100580_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)neural__network_58_84_45555900;
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

SignalI flag__inputs_49100560_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeflag__inputs_49100560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__inputs_49100560_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)neural__network_58_84_45555900;
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

SignalI ack__inputs_49100540_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeack__inputs_49100540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__inputs_49100540_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)neural__network_58_84_45555900;
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

SignalI _5861_49100520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI make_5861_49100520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5861_49100520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)neural__network_58_84_45555900;
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

SignalI _5862_49100440_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI make_5862_49100440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5862_49100440_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)neural__network_58_84_45555900;
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

SignalI _5863_49200600_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI make_5863_49200600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5863_49200600_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)neural__network_58_84_45555900;
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

SignalI fill__outputs_49200580_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makefill__outputs_49200580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill__outputs_49200580_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)neural__network_58_84_45555900;
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

SignalI value__outputs_49328840_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makevalue__outputs_49328840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   value__outputs_49328840_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)neural__network_58_84_45555900;
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

SignalI address__outputs_49328700_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeaddress__outputs_49328700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address__outputs_49328700_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)neural__network_58_84_45555900;
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

SignalI flag__outputs_49328680_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeflag__outputs_49328680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   flag__outputs_49328680_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)neural__network_58_84_45555900;
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

SignalI _5884_49495680_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI make_5884_49495680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5884_49495680_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)neural__network_58_84_45555900;
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

SignalI _5885_49495600_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI make_5885_49495600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5885_49495600_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)neural__network_58_84_45555900;
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

SystemI layer0_54603060;

SystemI makelayer0_54603060() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer0_54603060 = systemI;
   systemI->owner = (Object)neural__network_58_84_45555900;
   systemI->name = "layer0";
   systemI->system = layer0_58_840_54182940;

   return systemI;
};

SystemI layer1_48690560;

SystemI makelayer1_48690560() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer1_48690560 = systemI;
   systemI->owner = (Object)neural__network_58_84_45555900;
   systemI->name = "layer1";
   systemI->system = layer1_58_840_43483460;

   return systemI;
};

Scope channel__inputs_5845_46152520;

SignalI trig__r_46663060_channel__inputs_5845_46152520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI maketrig__r_46663060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_46663060_channel__inputs_5845_46152520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)channel__inputs_5845_46152520;
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

SignalI trig__w_46663040_channel__inputs_5845_46152520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI maketrig__w_46663040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_46663040_channel__inputs_5845_46152520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)channel__inputs_5845_46152520;
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

SignalI dbus__r_47156500_channel__inputs_5845_46152520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makedbus__r_47156500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_47156500_channel__inputs_5845_46152520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)channel__inputs_5845_46152520;
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

SignalI dbus__w_47259200_channel__inputs_5845_46152520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makedbus__w_47259200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_47259200_channel__inputs_5845_46152520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)channel__inputs_5845_46152520;
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

SignalI abus__r_47258960_channel__inputs_5845_46152520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeabus__r_47258960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47258960_channel__inputs_5845_46152520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)channel__inputs_5845_46152520;
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

SignalI abus__w_47258780_channel__inputs_5845_46152520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeabus__w_47258780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47258780_channel__inputs_5845_46152520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)channel__inputs_5845_46152520;
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

SignalI mem_47369100_channel__inputs_5845_46152520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makemem_47369100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_47369100_channel__inputs_5845_46152520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)channel__inputs_5845_46152520;
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

Scope raddr_5846_46151300;

Scope makeraddr_5846_46151300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5846_46151300 = scope;
   scope->owner = (Object)channel__inputs_5845_46152520;
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

Scope waddr_5851_46149560;

Scope makewaddr_5851_46149560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5851_46149560 = scope;
   scope->owner = (Object)channel__inputs_5845_46152520;
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

Scope rinc_5856_46148540;

Behavior __55870720;

Behavior make__55870720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55870720 = behavior;
   behavior->owner = (Object)rinc_5856_46148540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_47156500_channel__inputs_5845_46152520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   dbus__r_47156500_channel__inputs_5845_46152520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   dbus__r_47156500_channel__inputs_5845_46152520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(dbus__r_47156500_channel__inputs_5845_46152520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,dbus__r_47156500_channel__inputs_5845_46152520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
dbus__r_47156500_channel__inputs_5845_46152520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[dbus__r_47156500_channel__inputs_5845_46152520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__55842320();

   return behavior;
}

Behavior __55870360;

Behavior make__55870360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55870360 = behavior;
   behavior->owner = (Object)rinc_5856_46148540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5857_54336300_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   _5857_54336300_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   _5857_54336300_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(_5857_54336300_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,_5857_54336300_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
_5857_54336300_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[_5857_54336300_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,_5858_54336220_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   _5858_54336220_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   _5858_54336220_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(_5858_54336220_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,_5858_54336220_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
_5858_54336220_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[_5858_54336220_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__55842220();

   return behavior;
}

Scope makerinc_5856_46148540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5856_46148540 = scope;
   scope->owner = (Object)channel__inputs_5845_46152520;
   scope->name = "rinc:56";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__55870720();
   scope->behaviors[1] = make__55870360();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5860_46633940;

Scope makewinc_5860_46633940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5860_46633940 = scope;
   scope->owner = (Object)channel__inputs_5845_46152520;
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

Scope rdec_5864_46647240;

Scope makerdec_5864_46647240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5864_46647240 = scope;
   scope->owner = (Object)channel__inputs_5845_46152520;
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

Scope wdec_5869_46665620;

Scope makewdec_5869_46665620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5869_46665620 = scope;
   scope->owner = (Object)channel__inputs_5845_46152520;
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

Behavior __49494460;

Behavior make__49494460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49494460 = behavior;
   behavior->owner = (Object)channel__inputs_5845_46152520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_54334680_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   clk_54334680_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_neg += 1;
   clk_54334680_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->neg = realloc(clk_54334680_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->neg,clk_54334680_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_neg*sizeof(Object));
clk_54334680_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->neg[clk_54334680_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_neg-1] = (Object)behavior;
   behavior->block = make__47809480();

   return behavior;
}

Behavior __55690860;

Behavior make__55690860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55690860 = behavior;
   behavior->owner = (Object)channel__inputs_5845_46152520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_46663040_channel__inputs_5845_46152520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   trig__w_46663040_channel__inputs_5845_46152520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   trig__w_46663040_channel__inputs_5845_46152520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(trig__w_46663040_channel__inputs_5845_46152520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,trig__w_46663040_channel__inputs_5845_46152520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
trig__w_46663040_channel__inputs_5845_46152520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[trig__w_46663040_channel__inputs_5845_46152520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__55691280();

   return behavior;
}

Behavior __55690580;

Behavior make__55690580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55690580 = behavior;
   behavior->owner = (Object)channel__inputs_5845_46152520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5861_49100520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   _5861_49100520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   _5861_49100520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(_5861_49100520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,_5861_49100520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
_5861_49100520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[_5861_49100520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__55690800();

   return behavior;
}

Behavior __55689780;

Behavior make__55689780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55689780 = behavior;
   behavior->owner = (Object)channel__inputs_5845_46152520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_47258780_channel__inputs_5845_46152520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   abus__w_47258780_channel__inputs_5845_46152520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   abus__w_47258780_channel__inputs_5845_46152520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(abus__w_47258780_channel__inputs_5845_46152520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,abus__w_47258780_channel__inputs_5845_46152520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
abus__w_47258780_channel__inputs_5845_46152520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[abus__w_47258780_channel__inputs_5845_46152520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__55690040();

   return behavior;
}

Behavior __55689440;

Behavior make__55689440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55689440 = behavior;
   behavior->owner = (Object)channel__inputs_5845_46152520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5862_49100440_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   _5862_49100440_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   _5862_49100440_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(_5862_49100440_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,_5862_49100440_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
_5862_49100440_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[_5862_49100440_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__55689740();

   return behavior;
}

Behavior __55843780;

Behavior make__55843780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55843780 = behavior;
   behavior->owner = (Object)channel__inputs_5845_46152520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_47259200_channel__inputs_5845_46152520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   dbus__w_47259200_channel__inputs_5845_46152520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   dbus__w_47259200_channel__inputs_5845_46152520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(dbus__w_47259200_channel__inputs_5845_46152520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,dbus__w_47259200_channel__inputs_5845_46152520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
dbus__w_47259200_channel__inputs_5845_46152520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[dbus__w_47259200_channel__inputs_5845_46152520_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__55844000();

   return behavior;
}

Behavior __55843400;

Behavior make__55843400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55843400 = behavior;
   behavior->owner = (Object)channel__inputs_5845_46152520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5863_49200600_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   _5863_49200600_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   _5863_49200600_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(_5863_49200600_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,_5863_49200600_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
_5863_49200600_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[_5863_49200600_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__55843720();

   return behavior;
}

Scope makechannel__inputs_5845_46152520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__inputs_5845_46152520 = scope;
   scope->owner = (Object)neural__network_58_84_45555900;
   scope->name = "channel_inputs:45";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_46663060();
   scope->inners[1] = maketrig__w_46663040();
   scope->inners[2] = makedbus__r_47156500();
   scope->inners[3] = makedbus__w_47259200();
   scope->inners[4] = makeabus__r_47258960();
   scope->inners[5] = makeabus__w_47258780();
   scope->inners[6] = makemem_47369100();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_5846_46151300();
   scope->scopes[1] = makewaddr_5851_46149560();
   scope->scopes[2] = makerinc_5856_46148540();
   scope->scopes[3] = makewinc_5860_46633940();
   scope->scopes[4] = makerdec_5864_46647240();
   scope->scopes[5] = makewdec_5869_46665620();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49494460();
   scope->behaviors[1] = make__55690860();
   scope->behaviors[2] = make__55690580();
   scope->behaviors[3] = make__55689780();
   scope->behaviors[4] = make__55689440();
   scope->behaviors[5] = make__55843780();
   scope->behaviors[6] = make__55843400();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__outputs_5874_49494340;

SignalI reg__0_49747280_channel__outputs_5874_49494340_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makereg__0_49747280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_49747280_channel__outputs_5874_49494340_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)channel__outputs_5874_49494340;
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

Scope anum_5875_49494040;

Behavior __55920760;

Behavior make__55920760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55920760 = behavior;
   behavior->owner = (Object)anum_5875_49494040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_49747280_channel__outputs_5874_49494340_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   reg__0_49747280_channel__outputs_5874_49494340_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   reg__0_49747280_channel__outputs_5874_49494340_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(reg__0_49747280_channel__outputs_5874_49494340_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,reg__0_49747280_channel__outputs_5874_49494340_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
reg__0_49747280_channel__outputs_5874_49494340_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[reg__0_49747280_channel__outputs_5874_49494340_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__55921080();

   return behavior;
}

Behavior __55920320;

Behavior make__55920320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55920320 = behavior;
   behavior->owner = (Object)anum_5875_49494040;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5876_48691480_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   _5876_48691480_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   _5876_48691480_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(_5876_48691480_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,_5876_48691480_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
_5876_48691480_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[_5876_48691480_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__55920660();

   return behavior;
}

Scope makeanum_5875_49494040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_5875_49494040 = scope;
   scope->owner = (Object)channel__outputs_5874_49494340;
   scope->name = "anum:75";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__55920760();
   scope->behaviors[1] = make__55920320();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope raddr_5877_49642420;

Scope makeraddr_5877_49642420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5877_49642420 = scope;
   scope->owner = (Object)channel__outputs_5874_49494340;
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

Scope waddr_5880_49641240;

Scope makewaddr_5880_49641240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5880_49641240 = scope;
   scope->owner = (Object)channel__outputs_5874_49494340;
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

Scope rinc_5883_49639460;

SignalI abus__r_49639020_rinc_5883_49639460_channel__outputs_5874_49494340_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeabus__r_49639020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49639020_rinc_5883_49639460_channel__outputs_5874_49494340_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)rinc_5883_49639460;
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

Behavior __55958180;

Behavior make__55958180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55958180 = behavior;
   behavior->owner = (Object)rinc_5883_49639460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_49639020_rinc_5883_49639460_channel__outputs_5874_49494340_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   abus__r_49639020_rinc_5883_49639460_channel__outputs_5874_49494340_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   abus__r_49639020_rinc_5883_49639460_channel__outputs_5874_49494340_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(abus__r_49639020_rinc_5883_49639460_channel__outputs_5874_49494340_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,abus__r_49639020_rinc_5883_49639460_channel__outputs_5874_49494340_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
abus__r_49639020_rinc_5883_49639460_channel__outputs_5874_49494340_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[abus__r_49639020_rinc_5883_49639460_channel__outputs_5874_49494340_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__55958400();

   return behavior;
}

Behavior __55957740;

Behavior make__55957740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55957740 = behavior;
   behavior->owner = (Object)rinc_5883_49639460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5885_49495600_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   _5885_49495600_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   _5885_49495600_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(_5885_49495600_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,_5885_49495600_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
_5885_49495600_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[_5885_49495600_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__55958120();

   return behavior;
}

Scope makerinc_5883_49639460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5883_49639460 = scope;
   scope->owner = (Object)channel__outputs_5874_49494340;
   scope->name = "rinc:83";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49639020();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__55958180();
   scope->behaviors[1] = make__55957740();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5886_49638640;

SignalI abus__w_49638260_winc_5886_49638640_channel__outputs_5874_49494340_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeabus__w_49638260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49638260_winc_5886_49638640_channel__outputs_5874_49494340_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)winc_5886_49638640;
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

Scope makewinc_5886_49638640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5886_49638640 = scope;
   scope->owner = (Object)channel__outputs_5874_49494340;
   scope->name = "winc:86";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49638260();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5889_49638140;

SignalI abus__r_49637760_rdec_5889_49638140_channel__outputs_5874_49494340_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeabus__r_49637760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49637760_rdec_5889_49638140_channel__outputs_5874_49494340_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)rdec_5889_49638140;
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

Scope makerdec_5889_49638140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5889_49638140 = scope;
   scope->owner = (Object)channel__outputs_5874_49494340;
   scope->name = "rdec:89";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49637760();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_5893_49637640;

SignalI abus__w_49637200_wdec_5893_49637640_channel__outputs_5874_49494340_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeabus__w_49637200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49637200_wdec_5893_49637640_channel__outputs_5874_49494340_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)wdec_5893_49637640;
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

Scope makewdec_5893_49637640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5893_49637640 = scope;
   scope->owner = (Object)channel__outputs_5874_49494340;
   scope->name = "wdec:93";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49637200();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __55925160;

Behavior make__55925160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55925160 = behavior;
   behavior->owner = (Object)channel__outputs_5874_49494340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_49747280_channel__outputs_5874_49494340_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   reg__0_49747280_channel__outputs_5874_49494340_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   reg__0_49747280_channel__outputs_5874_49494340_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(reg__0_49747280_channel__outputs_5874_49494340_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,reg__0_49747280_channel__outputs_5874_49494340_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
reg__0_49747280_channel__outputs_5874_49494340_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[reg__0_49747280_channel__outputs_5874_49494340_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__55925360();

   return behavior;
}

Behavior __55924800;

Behavior make__55924800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55924800 = behavior;
   behavior->owner = (Object)channel__outputs_5874_49494340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5884_49495680_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   _5884_49495680_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   _5884_49495680_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(_5884_49495680_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,_5884_49495680_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
_5884_49495680_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[_5884_49495680_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__55925040();

   return behavior;
}

Scope makechannel__outputs_5874_49494340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__outputs_5874_49494340 = scope;
   scope->owner = (Object)neural__network_58_84_45555900;
   scope->name = "channel_outputs:74";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_49747280();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_5875_49494040();
   scope->scopes[1] = makeraddr_5877_49642420();
   scope->scopes[2] = makewaddr_5880_49641240();
   scope->scopes[3] = makerinc_5883_49639460();
   scope->scopes[4] = makewinc_5886_49638640();
   scope->scopes[5] = makerdec_5889_49638140();
   scope->scopes[6] = makewdec_5893_49637640();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__55925160();
   scope->behaviors[1] = make__55924800();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__a0_5897_49894140;

SignalI reg__0_48636200_channel__a0_5897_49894140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makereg__0_48636200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_48636200_channel__a0_5897_49894140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)channel__a0_5897_49894140;
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

SignalI reg__1_48756280_channel__a0_5897_49894140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makereg__1_48756280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_48756280_channel__a0_5897_49894140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)channel__a0_5897_49894140;
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

Scope anum_5898_49893740;

Behavior __55952320;

Behavior make__55952320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55952320 = behavior;
   behavior->owner = (Object)anum_5898_49893740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_48636200_channel__a0_5897_49894140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   reg__0_48636200_channel__a0_5897_49894140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   reg__0_48636200_channel__a0_5897_49894140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(reg__0_48636200_channel__a0_5897_49894140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,reg__0_48636200_channel__a0_5897_49894140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
reg__0_48636200_channel__a0_5897_49894140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[reg__0_48636200_channel__a0_5897_49894140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__55952820();

   return behavior;
}

Behavior __55951960;

Behavior make__55951960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55951960 = behavior;
   behavior->owner = (Object)anum_5898_49893740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5899_54437440_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   _5899_54437440_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   _5899_54437440_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(_5899_54437440_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,_5899_54437440_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
_5899_54437440_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[_5899_54437440_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__55952260();

   return behavior;
}

Behavior __55973620;

Behavior make__55973620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55973620 = behavior;
   behavior->owner = (Object)anum_5898_49893740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_48756280_channel__a0_5897_49894140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   reg__1_48756280_channel__a0_5897_49894140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   reg__1_48756280_channel__a0_5897_49894140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(reg__1_48756280_channel__a0_5897_49894140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,reg__1_48756280_channel__a0_5897_49894140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
reg__1_48756280_channel__a0_5897_49894140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[reg__1_48756280_channel__a0_5897_49894140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__55973880();

   return behavior;
}

Behavior __55972960;

Behavior make__55972960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55972960 = behavior;
   behavior->owner = (Object)anum_5898_49893740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58100_54603180_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   _58100_54603180_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   _58100_54603180_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(_58100_54603180_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,_58100_54603180_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
_58100_54603180_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[_58100_54603180_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__55973560();

   return behavior;
}

Scope makeanum_5898_49893740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_5898_49893740 = scope;
   scope->owner = (Object)channel__a0_5897_49894140;
   scope->name = "anum:98";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__55952320();
   scope->behaviors[1] = make__55951960();
   scope->behaviors[2] = make__55973620();
   scope->behaviors[3] = make__55972960();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope raddr_58101_46934700;

Scope makeraddr_58101_46934700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_58101_46934700 = scope;
   scope->owner = (Object)channel__a0_5897_49894140;
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

Scope waddr_58105_46955740;

Scope makewaddr_58105_46955740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_58105_46955740 = scope;
   scope->owner = (Object)channel__a0_5897_49894140;
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

Scope rinc_58109_46950980;

SignalI abus__r_46972040_rinc_58109_46950980_channel__a0_5897_49894140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeabus__r_46972040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_46972040_rinc_58109_46950980_channel__a0_5897_49894140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)rinc_58109_46950980;
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

Behavior __56021420;

Behavior make__56021420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56021420 = behavior;
   behavior->owner = (Object)rinc_58109_46950980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_46972040_rinc_58109_46950980_channel__a0_5897_49894140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   abus__r_46972040_rinc_58109_46950980_channel__a0_5897_49894140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   abus__r_46972040_rinc_58109_46950980_channel__a0_5897_49894140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(abus__r_46972040_rinc_58109_46950980_channel__a0_5897_49894140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,abus__r_46972040_rinc_58109_46950980_channel__a0_5897_49894140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
abus__r_46972040_rinc_58109_46950980_channel__a0_5897_49894140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[abus__r_46972040_rinc_58109_46950980_channel__a0_5897_49894140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__56022000();

   return behavior;
}

Behavior __56020980;

Behavior make__56020980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56020980 = behavior;
   behavior->owner = (Object)rinc_58109_46950980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_58112_47467940_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   _58112_47467940_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   _58112_47467940_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(_58112_47467940_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,_58112_47467940_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
_58112_47467940_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[_58112_47467940_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__56021300();

   return behavior;
}

Behavior __56020820;

Behavior make__56020820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56020820 = behavior;
   behavior->owner = (Object)rinc_58109_46950980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_48636200_channel__a0_5897_49894140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   reg__0_48636200_channel__a0_5897_49894140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   reg__0_48636200_channel__a0_5897_49894140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(reg__0_48636200_channel__a0_5897_49894140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,reg__0_48636200_channel__a0_5897_49894140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
reg__0_48636200_channel__a0_5897_49894140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[reg__0_48636200_channel__a0_5897_49894140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,reg__1_48756280_channel__a0_5897_49894140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   reg__1_48756280_channel__a0_5897_49894140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   reg__1_48756280_channel__a0_5897_49894140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(reg__1_48756280_channel__a0_5897_49894140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,reg__1_48756280_channel__a0_5897_49894140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
reg__1_48756280_channel__a0_5897_49894140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[reg__1_48756280_channel__a0_5897_49894140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__55969600();

   return behavior;
}

Scope makerinc_58109_46950980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_58109_46950980 = scope;
   scope->owner = (Object)channel__a0_5897_49894140;
   scope->name = "rinc:109";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_46972040();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__56021420();
   scope->behaviors[1] = make__56020980();
   scope->behaviors[2] = make__56020820();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_58113_47728400;

SignalI abus__w_47727720_winc_58113_47728400_channel__a0_5897_49894140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeabus__w_47727720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47727720_winc_58113_47728400_channel__a0_5897_49894140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)winc_58113_47728400;
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

Scope makewinc_58113_47728400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_58113_47728400 = scope;
   scope->owner = (Object)channel__a0_5897_49894140;
   scope->name = "winc:113";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47727720();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_58117_47727600;

SignalI abus__r_47727180_rdec_58117_47727600_channel__a0_5897_49894140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeabus__r_47727180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47727180_rdec_58117_47727600_channel__a0_5897_49894140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)rdec_58117_47727600;
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

Scope makerdec_58117_47727600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_58117_47727600 = scope;
   scope->owner = (Object)channel__a0_5897_49894140;
   scope->name = "rdec:117";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47727180();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_58122_47727040;

SignalI abus__w_47726620_wdec_58122_47727040_channel__a0_5897_49894140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860;

SignalI makeabus__w_47726620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47726620_wdec_58122_47727040_channel__a0_5897_49894140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860 = signalI;
   signalI->owner = (Object)wdec_58122_47727040;
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

Scope makewdec_58122_47727040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_58122_47727040 = scope;
   scope->owner = (Object)channel__a0_5897_49894140;
   scope->name = "wdec:122";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47726620();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope makechannel__a0_5897_49894140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__a0_5897_49894140 = scope;
   scope->owner = (Object)neural__network_58_84_45555900;
   scope->name = "channel_a0:97";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_48636200();
   scope->inners[1] = makereg__1_48756280();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_5898_49893740();
   scope->scopes[1] = makeraddr_58101_46934700();
   scope->scopes[2] = makewaddr_58105_46955740();
   scope->scopes[3] = makerinc_58109_46950980();
   scope->scopes[4] = makewinc_58113_47728400();
   scope->scopes[5] = makerdec_58117_47727600();
   scope->scopes[6] = makewdec_58122_47727040();
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __48724080;

Behavior make__48724080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48724080 = behavior;
   behavior->owner = (Object)neural__network_58_84_45555900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_54334680_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   clk_54334680_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_pos += 1;
   clk_54334680_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->pos = realloc(clk_54334680_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->pos,clk_54334680_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_pos*sizeof(Object));
clk_54334680_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->pos[clk_54334680_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_pos-1] = (Object)behavior;
   behavior->block = make__48705180();

   return behavior;
}

Behavior __53072580;

Behavior make__53072580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53072580 = behavior;
   behavior->owner = (Object)neural__network_58_84_45555900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_54334680_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   clk_54334680_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_pos += 1;
   clk_54334680_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->pos = realloc(clk_54334680_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->pos,clk_54334680_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_pos*sizeof(Object));
clk_54334680_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->pos[clk_54334680_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_pos-1] = (Object)behavior;
   behavior->block = make__48723560();

   return behavior;
}

Behavior __54314600;

Behavior make__54314600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54314600 = behavior;
   behavior->owner = (Object)neural__network_58_84_45555900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_54334680_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   clk_54334680_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_pos += 1;
   clk_54334680_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->pos = realloc(clk_54334680_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->pos,clk_54334680_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_pos*sizeof(Object));
clk_54334680_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->pos[clk_54334680_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_pos-1] = (Object)behavior;
   behavior->block = make__53071900();

   return behavior;
}

Behavior __55695100;

Behavior make__55695100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55695100 = behavior;
   behavior->owner = (Object)neural__network_58_84_45555900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,fill_54334600_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   fill_54334600_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   fill_54334600_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(fill_54334600_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,fill_54334600_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
fill_54334600_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[fill_54334600_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__inputs_49100540_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   ack__inputs_49100540_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   ack__inputs_49100540_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(ack__inputs_49100540_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,ack__inputs_49100540_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
ack__inputs_49100540_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[ack__inputs_49100540_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,flag__inputs_49100560_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   flag__inputs_49100560_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   flag__inputs_49100560_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(flag__inputs_49100560_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,flag__inputs_49100560_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
flag__inputs_49100560_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[flag__inputs_49100560_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__55695540();

   return behavior;
}

Behavior __55694400;

Behavior make__55694400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55694400 = behavior;
   behavior->owner = (Object)neural__network_58_84_45555900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__1_48756120_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   ack__1_48756120_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   ack__1_48756120_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(ack__1_48756120_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,ack__1_48756120_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
ack__1_48756120_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[ack__1_48756120_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__network_54538620_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   ack__network_54538620_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   ack__network_54538620_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(ack__network_54538620_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,ack__network_54538620_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
ack__network_54538620_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[ack__network_54538620_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,flag__outputs_49328680_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   flag__outputs_49328680_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   flag__outputs_49328680_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(flag__outputs_49328680_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,flag__outputs_49328680_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
flag__outputs_49328680_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[flag__outputs_49328680_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__55695040();

   return behavior;
}

Behavior __55694100;

Behavior make__55694100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55694100 = behavior;
   behavior->owner = (Object)neural__network_58_84_45555900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_54334680_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   clk_54334680_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   clk_54334680_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(clk_54334680_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,clk_54334680_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
clk_54334680_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[clk_54334680_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_54334660_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   rst_54334660_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   rst_54334660_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(rst_54334660_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,rst_54334660_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
rst_54334660_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[rst_54334660_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,req_54334640_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   req_54334640_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   req_54334640_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(req_54334640_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,req_54334640_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
req_54334640_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[req_54334640_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,ack__0_48756140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   ack__0_48756140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   ack__0_48756140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(ack__0_48756140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,ack__0_48756140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
ack__0_48756140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[ack__0_48756140_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__inputs_49100540_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   ack__inputs_49100540_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   ack__inputs_49100540_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(ack__inputs_49100540_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,ack__inputs_49100540_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
ack__inputs_49100540_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[ack__inputs_49100540_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__55605100();

   return behavior;
}

Behavior __55693740;

Behavior make__55693740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __55693740 = behavior;
   behavior->owner = (Object)neural__network_58_84_45555900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__layer_54336320_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   ack__layer_54336320_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   ack__layer_54336320_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(ack__layer_54336320_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,ack__layer_54336320_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
ack__layer_54336320_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[ack__layer_54336320_layer0_58_840_54182940_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__layer_47468120_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860);
   ack__layer_47468120_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any += 1;
   ack__layer_47468120_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any = realloc(ack__layer_47468120_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any,ack__layer_47468120_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any*sizeof(Object));
ack__layer_47468120_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->any[ack__layer_47468120_layer1_58_840_43483460_neural__network_58_84_45555900_neural__network_58_840_54314100_nn__simulator_58_84_44079220_nn__simulator_58_840_54825200______58_84_44007740______58_840_55135860->num_any-1] = (Object)behavior;
   behavior->block = make__55605040();

   return behavior;
}

Scope makeneural__network_58_84_45555900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   neural__network_58_84_45555900 = scope;
   scope->owner = (Object)neural__network_58_840_54314100;
   scope->name = "neural_network:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makelayer0_54603060();
   scope->systemIs[1] = makelayer1_48690560();
   scope->num_inners = 16;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeack__0_48756140();
   scope->inners[1] = makeack__1_48756120();
   scope->inners[2] = makefill__inputs_48756100();
   scope->inners[3] = makevalue__inputs_49100660();
   scope->inners[4] = makeaddress__inputs_49100580();
   scope->inners[5] = makeflag__inputs_49100560();
   scope->inners[6] = makeack__inputs_49100540();
   scope->inners[7] = make_5861_49100520();
   scope->inners[8] = make_5862_49100440();
   scope->inners[9] = make_5863_49200600();
   scope->inners[10] = makefill__outputs_49200580();
   scope->inners[11] = makevalue__outputs_49328840();
   scope->inners[12] = makeaddress__outputs_49328700();
   scope->inners[13] = makeflag__outputs_49328680();
   scope->inners[14] = make_5884_49495680();
   scope->inners[15] = make_5885_49495600();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__inputs_5845_46152520();
   scope->scopes[1] = makechannel__outputs_5874_49494340();
   scope->scopes[2] = makechannel__a0_5897_49894140();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48724080();
   scope->behaviors[1] = make__53072580();
   scope->behaviors[2] = make__54314600();
   scope->behaviors[3] = make__55695100();
   scope->behaviors[4] = make__55694400();
   scope->behaviors[5] = make__55694100();
   scope->behaviors[6] = make__55693740();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makeneural__network_58_840_54314100() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   neural__network_58_840_54314100 = systemT;
systemT->owner = NULL;
   systemT->name = "neural_network:T0";
   systemT->num_inputs = 5;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_54334680();
   systemT->inputs[1] = makerst_54334660();
   systemT->inputs[2] = makereq_54334640();
   systemT->inputs[3] = makefill_54334600();
   systemT->inputs[4] = make_5810_54538720();
   systemT->num_outputs = 7;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__fill_54538660();
   systemT->outputs[1] = makeack__network_54538620();
   systemT->outputs[2] = make_588_54538600();
   systemT->outputs[3] = make_589_54538500();
   systemT->outputs[4] = make_5832_54538480();
   systemT->outputs[5] = make_5833_54538260();
   systemT->outputs[6] = make_5834_54828540();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makeneural__network_58_84_45555900();

   return systemT;
}