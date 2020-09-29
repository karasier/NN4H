#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT neural__network_58_840_82500440;

SignalI clk_82497360_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makeclk_82497360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_82497360_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)neural__network_58_840_82500440;
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

SignalI rst_82497340_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makerst_82497340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_82497340_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)neural__network_58_840_82500440;
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

SignalI req_82497300_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makereq_82497300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_82497300_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)neural__network_58_840_82500440;
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

SignalI fill_82497280_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makefill_82497280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_82497280_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)neural__network_58_840_82500440;
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

SignalI ack__network_82497200_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makeack__network_82497200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__network_82497200_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)neural__network_58_840_82500440;
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

Block __81642860;

Block __81642360;

void code__81642360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__83088340(),ack__0_48817060_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__83088240(),ack__1_48817040_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__81642360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __81642360 = block;
   block->owner = (Object)__81642860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__81642360;

   return block;
};

void code__81642860() {
   {
      Value cond = rst_82497340_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__81642360();
   }
      }
   }
}

Block make__81642860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __81642860 = block;
   block->owner = (Object)__81665000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__81642860;

   return block;
};

Block __81664820;

Block __81664660;

Block __81664100;

void code__81664100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__83087940(),_5818_50619800_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__81664100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __81664100 = block;
   block->owner = (Object)__81664660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__81664100;

   return block;
};

void code__81664660() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_82497340_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__83088140();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__81664100();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__83087880(),_5817_50619880_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__81664660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __81664660 = block;
   block->owner = (Object)__81664820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__81664660;

   return block;
};

Block __81662860;

void code__81662860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__83087780(),address__inputs_48816940_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__83087720(),ack__inputs_48816920_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__81662860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __81662860 = block;
   block->owner = (Object)__81664820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__81662860;

   return block;
};

Block __81661300;

Block __81661080;

Block __81660560;

void code__81660560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0, dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = _5818_50619800_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__83087300();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5818_50619800_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__83087020(),_5817_50619880_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = rom__inputs_50619900_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
            idx = value2integer(address__inputs_48816940_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),16),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),16),dst);
      set_value_pos(pool_state);
   dst; }),_5819_50688300_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__81660560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __81660560 = block;
   block->owner = (Object)__81661080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__81660560;

   return block;
};

void code__81661080() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_82497340_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__83087520();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__81660560();
   }
      }
   }
}

Block make__81661080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __81661080 = block;
   block->owner = (Object)__81661300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__81661080;

   return block;
};

void code__81661300() {
 code__81661080();
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0, dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = address__inputs_48816940_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__83086580();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),2),dst);
      set_value_pos(pool_state);
   dst; }),address__inputs_48816940_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__81661300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __81661300 = block;
   block->owner = (Object)__81664820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__81661300;

   return block;
};

Block __82477780;

void code__82477780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__83085940(),ack__inputs_48816920_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__82477780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __82477780 = block;
   block->owner = (Object)__81664820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__82477780;

   return block;
};

void code__81664820() {
 code__81664660();
   {
      Value cond = rst_82497340_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__81662860();
   }
      }
   }
   {
      Value cond = fill__inputs_48817020_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__81661300();
   }
      }
   }
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = address__inputs_48816940_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__83086120();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__82477780();
   }
      }
   }
}

Block make__81664820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __81664820 = block;
   block->owner = (Object)__82501060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__81664820;

   return block;
};

Block __82905740;

void code__82905740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = fill_82497280_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
      src1 = ({
            Value src0, dst;
            dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ack__inputs_48816920_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
            dst = not_value(src0,dst);
            set_value_pos(pool_state);
         dst; });
      dst = and_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),fill__inputs_48817020_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__82905740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __82905740 = block;
   block->owner = (Object)__82905400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__82905740;

   return block;
};

Block __82839420;

void code__82839420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__1_48817040_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,ack__network_82497200_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_82497360_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,clk_69375880_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_82497340_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,rst_69375860_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(fill_82497280_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,fill_69375820_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(req_82497300_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,req_69375800_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_82497360_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,clk_81070480_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_82497340_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,rst_81070440_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(fill_82497280_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,fill_81070420_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__0_48817060_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,req_81070400_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__82839420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __82839420 = block;
   block->owner = (Object)__82905100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__82839420;

   return block;
};

Block __82839320;

void code__82839320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__layer_69552840_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,ack__0_48817060_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__layer_81465800_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,ack__1_48817040_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__82839320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __82839320 = block;
   block->owner = (Object)__82904660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__82839320;

   return block;
};

Block __51061980;

Block __51280840;

void code__51280840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_50782220_channel__input_581_50543280_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,make_ref_rangeS(mem_50867100_channel__input_581_50543280_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760,value2integer(abus__w_50806600_channel__input_581_50543280_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value),value2integer(abus__w_50806600_channel__input_581_50543280_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__51280840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51280840 = block;
   block->owner = (Object)__51061980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51280840;

   return block;
};

void code__51061980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_50867100_channel__input_581_50543280_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
            idx = value2integer(abus__r_50806680_channel__input_581_50543280_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),16),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),16),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_50703000_channel__input_581_50543280_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_50656640_channel__input_581_50543280_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51280840();
   }
      }
   }
}

Block make__51061980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51061980 = block;
   block->owner = (Object)__42081380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51061980;

   return block;
};

Block __82903340;

void code__82903340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_50656640_channel__input_581_50543280_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,_5817_50619880_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__82903340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __82903340 = block;
   block->owner = (Object)__82903140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__82903340;

   return block;
};

Block __82903060;

void code__82903060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5817_50619880_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,trig__w_50656640_channel__input_581_50543280_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__82903060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __82903060 = block;
   block->owner = (Object)__82926460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__82903060;

   return block;
};

Block __82926020;

void code__82926020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_50806600_channel__input_581_50543280_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,_5818_50619800_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__82926020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __82926020 = block;
   block->owner = (Object)__82925760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__82926020;

   return block;
};

Block __82925720;

void code__82925720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5818_50619800_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,abus__w_50806600_channel__input_581_50543280_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__82925720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __82925720 = block;
   block->owner = (Object)__82925500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__82925720;

   return block;
};

Block __82925080;

void code__82925080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_50782220_channel__input_581_50543280_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,_5819_50688300_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__82925080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __82925080 = block;
   block->owner = (Object)__82924860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__82925080;

   return block;
};

Block __82924800;

void code__82924800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5819_50688300_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,dbus__w_50782220_channel__input_581_50543280_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__82924800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __82924800 = block;
   block->owner = (Object)__82924520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__82924800;

   return block;
};

Block __82923040;

void code__82923040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_50703000_channel__input_581_50543280_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,_5815_69552880_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__82923040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __82923040 = block;
   block->owner = (Object)__82936900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__82923040;

   return block;
};

Block __82922980;

void code__82922980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5813_69552820_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,trig__r_50656660_channel__input_581_50543280_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5814_69552740_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,abus__r_50806680_channel__input_581_50543280_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__82922980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __82922980 = block;
   block->owner = (Object)__82936720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__82922980;

   return block;
};

Block __82958080;

void code__82958080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_47647200_channel__output_5830_42080980_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,_5832_81647000_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__82958080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __82958080 = block;
   block->owner = (Object)__82957880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__82958080;

   return block;
};

Block __82957840;

void code__82957840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5832_81647000_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,reg__0_47647200_channel__output_5830_42080980_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__82957840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __82957840 = block;
   block->owner = (Object)__82957560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__82957840;

   return block;
};

Block __82953020;

void code__82953020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_50016020_channel__a0_5853_47666860_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,_5855_69753540_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__82953020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __82953020 = block;
   block->owner = (Object)__82952720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__82953020;

   return block;
};

Block __82952640;

void code__82952640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5855_69753540_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,reg__0_50016020_channel__a0_5853_47666860_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__82952640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __82952640 = block;
   block->owner = (Object)__82952440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__82952640;

   return block;
};

Block __82975140;

void code__82975140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_48817200_channel__a0_5853_47666860_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,_5856_69930700_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__82975140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __82975140 = block;
   block->owner = (Object)__82974700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__82975140;

   return block;
};

Block __82974660;

void code__82974660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5856_69930700_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,reg__1_48817200_channel__a0_5853_47666860_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__82974660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __82974660 = block;
   block->owner = (Object)__82974420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__82974660;

   return block;
};

Block __83021320;

void code__83021320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_49071140_rinc_5865_49071520_channel__a0_5853_47666860_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,_5868_81465640_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__83021320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __83021320 = block;
   block->owner = (Object)__83021040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__83021320;

   return block;
};

Block __83020980;

void code__83020980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5868_81465640_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,abus__r_49071140_rinc_5865_49071520_channel__a0_5853_47666860_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__83020980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __83020980 = block;
   block->owner = (Object)__83020600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__83020980;

   return block;
};

Block __82973440;

void code__82973440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_50016020_channel__a0_5853_47666860_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,_5866_81317360_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_48817200_channel__a0_5853_47666860_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->c_value,_5867_81465860_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
      set_value_pos(pool_state);
   }
}

Block make__82973440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __82973440 = block;
   block->owner = (Object)__83020320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__82973440;

   return block;
};

Value make__83090740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),16),1,data);
}

Value make__83090680() {
   static unsigned long long data[] = { 256ULL };
   return make_set_value(get_type_vector(get_type_signed(),16),1,data);
}

Value make__83088340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__83088240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__83088140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__83087940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__83087880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__83087780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),2),1,data);
}

Value make__83087720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__83087520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__83087300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__83087020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__83086580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__83086120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__83085940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope neural__network_58_84_50543580;

SignalI ack__0_48817060_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makeack__0_48817060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__0_48817060_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)neural__network_58_84_50543580;
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

SignalI ack__1_48817040_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makeack__1_48817040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__1_48817040_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)neural__network_58_84_50543580;
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

SignalI fill__inputs_48817020_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makefill__inputs_48817020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill__inputs_48817020_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)neural__network_58_84_50543580;
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

SignalI address__inputs_48816940_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makeaddress__inputs_48816940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   address__inputs_48816940_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)neural__network_58_84_50543580;
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

SignalI ack__inputs_48816920_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makeack__inputs_48816920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__inputs_48816920_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)neural__network_58_84_50543580;
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

SignalI rom__inputs_50619900_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makerom__inputs_50619900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rom__inputs_50619900_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)neural__network_58_84_50543580;
   signalI->name = "rom_inputs";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),16),2);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(({
         Value src0,src1;
         Value dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = make__83090740();
         src1 = make__83090680();
         concat_value(2,0,dst,src0,src1);
         set_value_pos(pool_state);
      dst; }),signalI->c_value);
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _5817_50619880_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI make_5817_50619880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5817_50619880_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)neural__network_58_84_50543580;
   signalI->name = ":17";
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

SignalI _5818_50619800_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI make_5818_50619800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5818_50619800_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)neural__network_58_84_50543580;
   signalI->name = ":18";
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

SignalI _5819_50688300_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI make_5819_50688300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5819_50688300_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)neural__network_58_84_50543580;
   signalI->name = ":19";
   signalI->type = get_type_vector(get_type_signed(),16);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SystemI layer0_69930580;

SystemI makelayer0_69930580() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer0_69930580 = systemI;
   systemI->owner = (Object)neural__network_58_84_50543580;
   systemI->name = "layer0";
   systemI->system = layer0_58_840_69355540;

   return systemI;
};

SystemI layer1_81646860;

SystemI makelayer1_81646860() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer1_81646860 = systemI;
   systemI->owner = (Object)neural__network_58_84_50543580;
   systemI->name = "layer1";
   systemI->system = layer1_58_840_81073620;

   return systemI;
};

Scope channel__input_581_50543280;

SignalI trig__r_50656660_channel__input_581_50543280_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI maketrig__r_50656660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_50656660_channel__input_581_50543280_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)channel__input_581_50543280;
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

SignalI trig__w_50656640_channel__input_581_50543280_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI maketrig__w_50656640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_50656640_channel__input_581_50543280_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)channel__input_581_50543280;
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

SignalI dbus__r_50703000_channel__input_581_50543280_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makedbus__r_50703000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_50703000_channel__input_581_50543280_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)channel__input_581_50543280;
   signalI->name = "dbus_r";
   signalI->type = get_type_vector(get_type_signed(),16);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI dbus__w_50782220_channel__input_581_50543280_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makedbus__w_50782220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_50782220_channel__input_581_50543280_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)channel__input_581_50543280;
   signalI->name = "dbus_w";
   signalI->type = get_type_vector(get_type_signed(),16);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI abus__r_50806680_channel__input_581_50543280_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makeabus__r_50806680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50806680_channel__input_581_50543280_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)channel__input_581_50543280;
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

SignalI abus__w_50806600_channel__input_581_50543280_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makeabus__w_50806600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50806600_channel__input_581_50543280_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)channel__input_581_50543280;
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

SignalI mem_50867100_channel__input_581_50543280_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makemem_50867100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_50867100_channel__input_581_50543280_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)channel__input_581_50543280;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),16),2);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope raddr_582_50542980;

Scope makeraddr_582_50542980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_582_50542980 = scope;
   scope->owner = (Object)channel__input_581_50543280;
   scope->name = "raddr:2";
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

Scope waddr_587_50542560;

Scope makewaddr_587_50542560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_587_50542560 = scope;
   scope->owner = (Object)channel__input_581_50543280;
   scope->name = "waddr:7";
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

Scope rinc_5812_50542140;

Behavior __82936900;

Behavior make__82936900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __82936900 = behavior;
   behavior->owner = (Object)rinc_5812_50542140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_50703000_channel__input_581_50543280_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   dbus__r_50703000_channel__input_581_50543280_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   dbus__r_50703000_channel__input_581_50543280_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(dbus__r_50703000_channel__input_581_50543280_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,dbus__r_50703000_channel__input_581_50543280_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
dbus__r_50703000_channel__input_581_50543280_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[dbus__r_50703000_channel__input_581_50543280_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__82923040();

   return behavior;
}

Behavior __82936720;

Behavior make__82936720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __82936720 = behavior;
   behavior->owner = (Object)rinc_5812_50542140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5813_69552820_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   _5813_69552820_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   _5813_69552820_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(_5813_69552820_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,_5813_69552820_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
_5813_69552820_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[_5813_69552820_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,_5814_69552740_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   _5814_69552740_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   _5814_69552740_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(_5814_69552740_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,_5814_69552740_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
_5814_69552740_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[_5814_69552740_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__82922980();

   return behavior;
}

Scope makerinc_5812_50542140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5812_50542140 = scope;
   scope->owner = (Object)channel__input_581_50543280;
   scope->name = "rinc:12";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__82936900();
   scope->behaviors[1] = make__82936720();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5816_50657940;

Scope makewinc_5816_50657940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5816_50657940 = scope;
   scope->owner = (Object)channel__input_581_50543280;
   scope->name = "winc:16";
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

Scope rdec_5820_50657520;

Scope makerdec_5820_50657520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5820_50657520 = scope;
   scope->owner = (Object)channel__input_581_50543280;
   scope->name = "rdec:20";
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

Scope wdec_5825_50657100;

Scope makewdec_5825_50657100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5825_50657100 = scope;
   scope->owner = (Object)channel__input_581_50543280;
   scope->name = "wdec:25";
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

Behavior __42081380;

Behavior make__42081380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __42081380 = behavior;
   behavior->owner = (Object)channel__input_581_50543280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_82497360_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   clk_82497360_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_neg += 1;
   clk_82497360_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->neg = realloc(clk_82497360_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->neg,clk_82497360_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_neg*sizeof(Object));
clk_82497360_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->neg[clk_82497360_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_neg-1] = (Object)behavior;
   behavior->block = make__51061980();

   return behavior;
}

Behavior __82903140;

Behavior make__82903140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __82903140 = behavior;
   behavior->owner = (Object)channel__input_581_50543280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_50656640_channel__input_581_50543280_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   trig__w_50656640_channel__input_581_50543280_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   trig__w_50656640_channel__input_581_50543280_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(trig__w_50656640_channel__input_581_50543280_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,trig__w_50656640_channel__input_581_50543280_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
trig__w_50656640_channel__input_581_50543280_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[trig__w_50656640_channel__input_581_50543280_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__82903340();

   return behavior;
}

Behavior __82926460;

Behavior make__82926460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __82926460 = behavior;
   behavior->owner = (Object)channel__input_581_50543280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5817_50619880_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   _5817_50619880_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   _5817_50619880_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(_5817_50619880_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,_5817_50619880_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
_5817_50619880_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[_5817_50619880_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__82903060();

   return behavior;
}

Behavior __82925760;

Behavior make__82925760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __82925760 = behavior;
   behavior->owner = (Object)channel__input_581_50543280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_50806600_channel__input_581_50543280_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   abus__w_50806600_channel__input_581_50543280_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   abus__w_50806600_channel__input_581_50543280_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(abus__w_50806600_channel__input_581_50543280_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,abus__w_50806600_channel__input_581_50543280_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
abus__w_50806600_channel__input_581_50543280_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[abus__w_50806600_channel__input_581_50543280_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__82926020();

   return behavior;
}

Behavior __82925500;

Behavior make__82925500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __82925500 = behavior;
   behavior->owner = (Object)channel__input_581_50543280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5818_50619800_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   _5818_50619800_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   _5818_50619800_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(_5818_50619800_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,_5818_50619800_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
_5818_50619800_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[_5818_50619800_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__82925720();

   return behavior;
}

Behavior __82924860;

Behavior make__82924860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __82924860 = behavior;
   behavior->owner = (Object)channel__input_581_50543280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_50782220_channel__input_581_50543280_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   dbus__w_50782220_channel__input_581_50543280_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   dbus__w_50782220_channel__input_581_50543280_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(dbus__w_50782220_channel__input_581_50543280_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,dbus__w_50782220_channel__input_581_50543280_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
dbus__w_50782220_channel__input_581_50543280_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[dbus__w_50782220_channel__input_581_50543280_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__82925080();

   return behavior;
}

Behavior __82924520;

Behavior make__82924520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __82924520 = behavior;
   behavior->owner = (Object)channel__input_581_50543280;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5819_50688300_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   _5819_50688300_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   _5819_50688300_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(_5819_50688300_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,_5819_50688300_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
_5819_50688300_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[_5819_50688300_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__82924800();

   return behavior;
}

Scope makechannel__input_581_50543280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__input_581_50543280 = scope;
   scope->owner = (Object)neural__network_58_84_50543580;
   scope->name = "channel_input:1";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_50656660();
   scope->inners[1] = maketrig__w_50656640();
   scope->inners[2] = makedbus__r_50703000();
   scope->inners[3] = makedbus__w_50782220();
   scope->inners[4] = makeabus__r_50806680();
   scope->inners[5] = makeabus__w_50806600();
   scope->inners[6] = makemem_50867100();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_582_50542980();
   scope->scopes[1] = makewaddr_587_50542560();
   scope->scopes[2] = makerinc_5812_50542140();
   scope->scopes[3] = makewinc_5816_50657940();
   scope->scopes[4] = makerdec_5820_50657520();
   scope->scopes[5] = makewdec_5825_50657100();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__42081380();
   scope->behaviors[1] = make__82903140();
   scope->behaviors[2] = make__82926460();
   scope->behaviors[3] = make__82925760();
   scope->behaviors[4] = make__82925500();
   scope->behaviors[5] = make__82924860();
   scope->behaviors[6] = make__82924520();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__output_5830_42080980;

SignalI reg__0_47647200_channel__output_5830_42080980_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makereg__0_47647200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_47647200_channel__output_5830_42080980_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)channel__output_5830_42080980;
   signalI->name = "reg_0";
   signalI->type = get_type_vector(get_type_signed(),16);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope anum_5831_42078760;

Behavior __82957880;

Behavior make__82957880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __82957880 = behavior;
   behavior->owner = (Object)anum_5831_42078760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_47647200_channel__output_5830_42080980_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   reg__0_47647200_channel__output_5830_42080980_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   reg__0_47647200_channel__output_5830_42080980_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(reg__0_47647200_channel__output_5830_42080980_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,reg__0_47647200_channel__output_5830_42080980_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
reg__0_47647200_channel__output_5830_42080980_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[reg__0_47647200_channel__output_5830_42080980_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__82958080();

   return behavior;
}

Behavior __82957560;

Behavior make__82957560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __82957560 = behavior;
   behavior->owner = (Object)anum_5831_42078760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5832_81647000_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   _5832_81647000_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   _5832_81647000_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(_5832_81647000_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,_5832_81647000_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
_5832_81647000_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[_5832_81647000_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__82957840();

   return behavior;
}

Scope makeanum_5831_42078760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_5831_42078760 = scope;
   scope->owner = (Object)channel__output_5830_42080980;
   scope->name = "anum:31";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__82957880();
   scope->behaviors[1] = make__82957560();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope raddr_5833_47459580;

Scope makeraddr_5833_47459580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5833_47459580 = scope;
   scope->owner = (Object)channel__output_5830_42080980;
   scope->name = "raddr:33";
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

Scope waddr_5836_47458560;

Scope makewaddr_5836_47458560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5836_47458560 = scope;
   scope->owner = (Object)channel__output_5830_42080980;
   scope->name = "waddr:36";
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

Scope rinc_5839_47457900;

SignalI abus__r_47457340_rinc_5839_47457900_channel__output_5830_42080980_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makeabus__r_47457340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47457340_rinc_5839_47457900_channel__output_5830_42080980_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)rinc_5839_47457900;
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

Scope makerinc_5839_47457900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5839_47457900 = scope;
   scope->owner = (Object)channel__output_5830_42080980;
   scope->name = "rinc:39";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47457340();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5842_47456480;

SignalI abus__w_47491880_winc_5842_47456480_channel__output_5830_42080980_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makeabus__w_47491880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47491880_winc_5842_47456480_channel__output_5830_42080980_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)winc_5842_47456480;
   signalI->name = "abus_w";
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

Scope makewinc_5842_47456480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5842_47456480 = scope;
   scope->owner = (Object)channel__output_5830_42080980;
   scope->name = "winc:42";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47491880();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5845_47491380;

SignalI abus__r_47490340_rdec_5845_47491380_channel__output_5830_42080980_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makeabus__r_47490340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47490340_rdec_5845_47491380_channel__output_5830_42080980_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)rdec_5845_47491380;
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

Scope makerdec_5845_47491380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5845_47491380 = scope;
   scope->owner = (Object)channel__output_5830_42080980;
   scope->name = "rdec:45";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47490340();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_5849_47490160;

SignalI abus__w_47489460_wdec_5849_47490160_channel__output_5830_42080980_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makeabus__w_47489460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47489460_wdec_5849_47490160_channel__output_5830_42080980_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)wdec_5849_47490160;
   signalI->name = "abus_w";
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

Scope makewdec_5849_47490160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5849_47490160 = scope;
   scope->owner = (Object)channel__output_5830_42080980;
   scope->name = "wdec:49";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47489460();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope makechannel__output_5830_42080980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__output_5830_42080980 = scope;
   scope->owner = (Object)neural__network_58_84_50543580;
   scope->name = "channel_output:30";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_47647200();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_5831_42078760();
   scope->scopes[1] = makeraddr_5833_47459580();
   scope->scopes[2] = makewaddr_5836_47458560();
   scope->scopes[3] = makerinc_5839_47457900();
   scope->scopes[4] = makewinc_5842_47456480();
   scope->scopes[5] = makerdec_5845_47491380();
   scope->scopes[6] = makewdec_5849_47490160();
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__a0_5853_47666860;

SignalI reg__0_50016020_channel__a0_5853_47666860_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makereg__0_50016020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_50016020_channel__a0_5853_47666860_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)channel__a0_5853_47666860;
   signalI->name = "reg_0";
   signalI->type = get_type_vector(get_type_signed(),16);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI reg__1_48817200_channel__a0_5853_47666860_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makereg__1_48817200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_48817200_channel__a0_5853_47666860_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)channel__a0_5853_47666860;
   signalI->name = "reg_1";
   signalI->type = get_type_vector(get_type_signed(),16);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope anum_5854_47663940;

Behavior __82952720;

Behavior make__82952720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __82952720 = behavior;
   behavior->owner = (Object)anum_5854_47663940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_50016020_channel__a0_5853_47666860_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   reg__0_50016020_channel__a0_5853_47666860_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   reg__0_50016020_channel__a0_5853_47666860_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(reg__0_50016020_channel__a0_5853_47666860_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,reg__0_50016020_channel__a0_5853_47666860_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
reg__0_50016020_channel__a0_5853_47666860_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[reg__0_50016020_channel__a0_5853_47666860_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__82953020();

   return behavior;
}

Behavior __82952440;

Behavior make__82952440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __82952440 = behavior;
   behavior->owner = (Object)anum_5854_47663940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5855_69753540_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   _5855_69753540_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   _5855_69753540_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(_5855_69753540_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,_5855_69753540_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
_5855_69753540_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[_5855_69753540_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__82952640();

   return behavior;
}

Behavior __82974700;

Behavior make__82974700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __82974700 = behavior;
   behavior->owner = (Object)anum_5854_47663940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_48817200_channel__a0_5853_47666860_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   reg__1_48817200_channel__a0_5853_47666860_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   reg__1_48817200_channel__a0_5853_47666860_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(reg__1_48817200_channel__a0_5853_47666860_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,reg__1_48817200_channel__a0_5853_47666860_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
reg__1_48817200_channel__a0_5853_47666860_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[reg__1_48817200_channel__a0_5853_47666860_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__82975140();

   return behavior;
}

Behavior __82974420;

Behavior make__82974420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __82974420 = behavior;
   behavior->owner = (Object)anum_5854_47663940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5856_69930700_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   _5856_69930700_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   _5856_69930700_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(_5856_69930700_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,_5856_69930700_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
_5856_69930700_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[_5856_69930700_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__82974660();

   return behavior;
}

Scope makeanum_5854_47663940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_5854_47663940 = scope;
   scope->owner = (Object)channel__a0_5853_47666860;
   scope->name = "anum:54";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__82952720();
   scope->behaviors[1] = make__82952440();
   scope->behaviors[2] = make__82974700();
   scope->behaviors[3] = make__82974420();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope raddr_5857_49072360;

Scope makeraddr_5857_49072360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5857_49072360 = scope;
   scope->owner = (Object)channel__a0_5853_47666860;
   scope->name = "raddr:57";
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

Scope waddr_5861_49071940;

Scope makewaddr_5861_49071940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5861_49071940 = scope;
   scope->owner = (Object)channel__a0_5853_47666860;
   scope->name = "waddr:61";
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

Scope rinc_5865_49071520;

SignalI abus__r_49071140_rinc_5865_49071520_channel__a0_5853_47666860_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makeabus__r_49071140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49071140_rinc_5865_49071520_channel__a0_5853_47666860_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)rinc_5865_49071520;
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

Behavior __83021040;

Behavior make__83021040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __83021040 = behavior;
   behavior->owner = (Object)rinc_5865_49071520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_49071140_rinc_5865_49071520_channel__a0_5853_47666860_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   abus__r_49071140_rinc_5865_49071520_channel__a0_5853_47666860_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   abus__r_49071140_rinc_5865_49071520_channel__a0_5853_47666860_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(abus__r_49071140_rinc_5865_49071520_channel__a0_5853_47666860_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,abus__r_49071140_rinc_5865_49071520_channel__a0_5853_47666860_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
abus__r_49071140_rinc_5865_49071520_channel__a0_5853_47666860_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[abus__r_49071140_rinc_5865_49071520_channel__a0_5853_47666860_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__83021320();

   return behavior;
}

Behavior __83020600;

Behavior make__83020600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __83020600 = behavior;
   behavior->owner = (Object)rinc_5865_49071520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5868_81465640_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   _5868_81465640_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   _5868_81465640_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(_5868_81465640_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,_5868_81465640_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
_5868_81465640_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[_5868_81465640_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__83020980();

   return behavior;
}

Behavior __83020320;

Behavior make__83020320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __83020320 = behavior;
   behavior->owner = (Object)rinc_5865_49071520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_50016020_channel__a0_5853_47666860_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   reg__0_50016020_channel__a0_5853_47666860_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   reg__0_50016020_channel__a0_5853_47666860_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(reg__0_50016020_channel__a0_5853_47666860_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,reg__0_50016020_channel__a0_5853_47666860_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
reg__0_50016020_channel__a0_5853_47666860_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[reg__0_50016020_channel__a0_5853_47666860_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,reg__1_48817200_channel__a0_5853_47666860_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   reg__1_48817200_channel__a0_5853_47666860_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   reg__1_48817200_channel__a0_5853_47666860_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(reg__1_48817200_channel__a0_5853_47666860_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,reg__1_48817200_channel__a0_5853_47666860_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
reg__1_48817200_channel__a0_5853_47666860_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[reg__1_48817200_channel__a0_5853_47666860_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__82973440();

   return behavior;
}

Scope makerinc_5865_49071520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5865_49071520 = scope;
   scope->owner = (Object)channel__a0_5853_47666860;
   scope->name = "rinc:65";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49071140();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__83021040();
   scope->behaviors[1] = make__83020600();
   scope->behaviors[2] = make__83020320();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5869_49763400;

SignalI abus__w_49762940_winc_5869_49763400_channel__a0_5853_47666860_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makeabus__w_49762940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49762940_winc_5869_49763400_channel__a0_5853_47666860_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)winc_5869_49763400;
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

Scope makewinc_5869_49763400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5869_49763400 = scope;
   scope->owner = (Object)channel__a0_5853_47666860;
   scope->name = "winc:69";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49762940();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5873_49762780;

SignalI abus__r_49762360_rdec_5873_49762780_channel__a0_5853_47666860_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makeabus__r_49762360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49762360_rdec_5873_49762780_channel__a0_5853_47666860_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)rdec_5873_49762780;
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

Scope makerdec_5873_49762780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5873_49762780 = scope;
   scope->owner = (Object)channel__a0_5853_47666860;
   scope->name = "rdec:73";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49762360();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_5878_49762240;

SignalI abus__w_49761860_wdec_5878_49762240_channel__a0_5853_47666860_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760;

SignalI makeabus__w_49761860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49761860_wdec_5878_49762240_channel__a0_5853_47666860_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760 = signalI;
   signalI->owner = (Object)wdec_5878_49762240;
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

Scope makewdec_5878_49762240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5878_49762240 = scope;
   scope->owner = (Object)channel__a0_5853_47666860;
   scope->name = "wdec:78";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49761860();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope makechannel__a0_5853_47666860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__a0_5853_47666860 = scope;
   scope->owner = (Object)neural__network_58_84_50543580;
   scope->name = "channel_a0:53";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_50016020();
   scope->inners[1] = makereg__1_48817200();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_5854_47663940();
   scope->scopes[1] = makeraddr_5857_49072360();
   scope->scopes[2] = makewaddr_5861_49071940();
   scope->scopes[3] = makerinc_5865_49071520();
   scope->scopes[4] = makewinc_5869_49763400();
   scope->scopes[5] = makerdec_5873_49762780();
   scope->scopes[6] = makewdec_5878_49762240();
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __81665000;

Behavior make__81665000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __81665000 = behavior;
   behavior->owner = (Object)neural__network_58_84_50543580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_82497360_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   clk_82497360_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_pos += 1;
   clk_82497360_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->pos = realloc(clk_82497360_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->pos,clk_82497360_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_pos*sizeof(Object));
clk_82497360_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->pos[clk_82497360_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_pos-1] = (Object)behavior;
   behavior->block = make__81642860();

   return behavior;
}

Behavior __82501060;

Behavior make__82501060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __82501060 = behavior;
   behavior->owner = (Object)neural__network_58_84_50543580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_82497360_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   clk_82497360_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_pos += 1;
   clk_82497360_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->pos = realloc(clk_82497360_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->pos,clk_82497360_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_pos*sizeof(Object));
clk_82497360_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->pos[clk_82497360_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_pos-1] = (Object)behavior;
   behavior->block = make__81664820();

   return behavior;
}

Behavior __82905400;

Behavior make__82905400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __82905400 = behavior;
   behavior->owner = (Object)neural__network_58_84_50543580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,fill_82497280_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   fill_82497280_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   fill_82497280_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(fill_82497280_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,fill_82497280_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
fill_82497280_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[fill_82497280_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__inputs_48816920_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   ack__inputs_48816920_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   ack__inputs_48816920_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(ack__inputs_48816920_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,ack__inputs_48816920_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
ack__inputs_48816920_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[ack__inputs_48816920_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__82905740();

   return behavior;
}

Behavior __82905100;

Behavior make__82905100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __82905100 = behavior;
   behavior->owner = (Object)neural__network_58_84_50543580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__1_48817040_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   ack__1_48817040_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   ack__1_48817040_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(ack__1_48817040_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,ack__1_48817040_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
ack__1_48817040_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[ack__1_48817040_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,clk_82497360_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   clk_82497360_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   clk_82497360_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(clk_82497360_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,clk_82497360_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
clk_82497360_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[clk_82497360_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,rst_82497340_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   rst_82497340_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   rst_82497340_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(rst_82497340_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,rst_82497340_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
rst_82497340_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[rst_82497340_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,fill_82497280_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   fill_82497280_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   fill_82497280_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(fill_82497280_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,fill_82497280_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
fill_82497280_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[fill_82497280_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,req_82497300_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   req_82497300_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   req_82497300_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(req_82497300_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,req_82497300_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
req_82497300_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[req_82497300_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,ack__0_48817060_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   ack__0_48817060_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   ack__0_48817060_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(ack__0_48817060_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,ack__0_48817060_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
ack__0_48817060_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[ack__0_48817060_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__82839420();

   return behavior;
}

Behavior __82904660;

Behavior make__82904660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __82904660 = behavior;
   behavior->owner = (Object)neural__network_58_84_50543580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__layer_69552840_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   ack__layer_69552840_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   ack__layer_69552840_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(ack__layer_69552840_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,ack__layer_69552840_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
ack__layer_69552840_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[ack__layer_69552840_layer0_58_840_69355540_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__layer_81465800_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760);
   ack__layer_81465800_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any += 1;
   ack__layer_81465800_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any = realloc(ack__layer_81465800_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any,ack__layer_81465800_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any*sizeof(Object));
ack__layer_81465800_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->any[ack__layer_81465800_layer1_58_840_81073620_neural__network_58_84_50543580_neural__network_58_840_82500440______58_84_50544280______58_840_82640760->num_any-1] = (Object)behavior;
   behavior->block = make__82839320();

   return behavior;
}

Scope makeneural__network_58_84_50543580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   neural__network_58_84_50543580 = scope;
   scope->owner = (Object)neural__network_58_840_82500440;
   scope->name = "neural_network:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makelayer0_69930580();
   scope->systemIs[1] = makelayer1_81646860();
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeack__0_48817060();
   scope->inners[1] = makeack__1_48817040();
   scope->inners[2] = makefill__inputs_48817020();
   scope->inners[3] = makeaddress__inputs_48816940();
   scope->inners[4] = makeack__inputs_48816920();
   scope->inners[5] = makerom__inputs_50619900();
   scope->inners[6] = make_5817_50619880();
   scope->inners[7] = make_5818_50619800();
   scope->inners[8] = make_5819_50688300();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__input_581_50543280();
   scope->scopes[1] = makechannel__output_5830_42080980();
   scope->scopes[2] = makechannel__a0_5853_47666860();
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__81665000();
   scope->behaviors[1] = make__82501060();
   scope->behaviors[2] = make__82905400();
   scope->behaviors[3] = make__82905100();
   scope->behaviors[4] = make__82904660();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makeneural__network_58_840_82500440() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   neural__network_58_840_82500440 = systemT;
systemT->owner = NULL;
   systemT->name = "neural_network:T0";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeclk_82497360();
   systemT->inputs[1] = makerst_82497340();
   systemT->inputs[2] = makereq_82497300();
   systemT->inputs[3] = makefill_82497280();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeack__network_82497200();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makeneural__network_58_84_50543580();

   return systemT;
}