#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT _____58_840_59916700;

Block __59635600;

Block __59635440;

Block __59635120;

void code__59635120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60080940(),_5818_49163640______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__59635120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59635120 = block;
   block->owner = (Object)__59635440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59635120;

   return block;
};

void code__59635440() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_48108460______58_84_49481440______58_840_59916700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60081020();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59635120();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60080880(),_5817_49163760______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__59635440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59635440 = block;
   block->owner = (Object)__59635600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59635440;

   return block;
};

Block __59634440;

Block __59634280;

Block __59633820;

void code__59633820() {
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
                  src0 = _5818_49163640______58_84_49481440______58_840_59916700->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60080620();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5818_49163640______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60080520(),_5817_49163760______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60080460(),_5819_48980720______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__59633820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59633820 = block;
   block->owner = (Object)__59634280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59633820;

   return block;
};

void code__59634280() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_48108460______58_84_49481440______58_840_59916700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60080760();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59633820();
   }
      }
   }
}

Block make__59634280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59634280 = block;
   block->owner = (Object)__59634440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59634280;

   return block;
};

void code__59634440() {
 code__59634280();
}

Block make__59634440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59634440 = block;
   block->owner = (Object)__59635600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59634440;

   return block;
};

void code__59635600() {
 code__59635440();
   {
      Value cond = fill_48108160______58_84_49481440______58_840_59916700->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59634440();
   }
      }
   }
}

Block make__59635600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59635600 = block;
   block->owner = (Object)__59773920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59635600;

   return block;
};

Block __59773800;

void code__59773800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60080400(),clk_48108580______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60080340(),rst_48108460______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60080280(),req_48108440______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60080220(),fill_48108160______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59916820);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60080160(),rst_48108460______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59916820);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60153780(),clk_48108580______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59916820);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60153720(),clk_48108580______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60153660(),rst_48108460______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60153580(),fill_48108160______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59916820);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60153520(),clk_48108580______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59916820);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60153440(),clk_48108580______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59916820);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60153380(),clk_48108580______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59916820);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60153300(),clk_48108580______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59916820);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60153060(),clk_48108580______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59916820);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60152980(),clk_48108580______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59916820);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60152920(),clk_48108580______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59916820);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60152840(),clk_48108580______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59916820);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60152780(),clk_48108580______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59916820);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60152700(),clk_48108580______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59916820);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60152600(),clk_48108580______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59916820);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60152540(),clk_48108580______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59916820);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60152480(),clk_48108580______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59916820);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60152420(),clk_48108580______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59916820);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60152360(),clk_48108580______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59916820);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60152300(),clk_48108580______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59916820);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60152240(),clk_48108580______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59916820);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60152180(),clk_48108580______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59916820);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60152120(),clk_48108580______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59916820);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60152060(),clk_48108580______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59916820);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60152000(),fill_48108160______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60151940(),clk_48108580______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60151880(),clk_48108580______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60151820(),req_48108440______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59916820);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60151760(),clk_48108580______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59916820);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60151700(),clk_48108580______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60151640(),clk_48108580______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59916820);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60151580(),clk_48108580______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59916820);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60151520(),clk_48108580______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59916820);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60151460(),clk_48108580______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59916820);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60151400(),clk_48108580______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59916820);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60151320(),clk_48108580______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59916820);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60151260(),clk_48108580______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59916820);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60151180(),clk_48108580______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59916820);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60151120(),clk_48108580______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59916820);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60151040(),clk_48108580______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59916820);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60150940(),clk_48108580______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59916820);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60150880(),clk_48108580______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59916820);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60150800(),clk_48108580______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59916820);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60150740(),clk_48108580______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59916820);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60150660(),clk_48108580______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59916820);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60150600(),clk_48108580______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59916820);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60150520(),clk_48108580______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59916820);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60150420(),clk_48108580______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59916820);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60150360(),clk_48108580______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59916820);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60150300(),clk_48108580______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59916820);
}

Block make__59773800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59773800 = block;
   block->owner = (Object)__59916820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59773800;

   return block;
};

Block __59984140;

void code__59984140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_48108580______58_84_49481440______58_840_59916700->c_value,clk_52988380_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_48108460______58_84_49481440______58_840_59916700->c_value,rst_52988360_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(fill_48108160______58_84_49481440______58_840_59916700->c_value,fill_52988340_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(req_48108440______58_84_49481440______58_840_59916700->c_value,req_52988320_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_48108580______58_84_49481440______58_840_59916700->c_value,clk_59548000_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_48108460______58_84_49481440______58_840_59916700->c_value,rst_59547980_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(fill_48108160______58_84_49481440______58_840_59916700->c_value,fill_59547940_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__0_48108200______58_84_49481440______58_840_59916700->c_value,req_59547920_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__59984140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59984140 = block;
   block->owner = (Object)__60018080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59984140;

   return block;
};

Block __59984080;

void code__59984080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__0_52988280_layer0_58_840_52991540______58_84_49481440______58_840_59916700->c_value,ack__0_48108200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__1_59547880_layer1_58_840_59550200______58_84_49481440______58_840_59916700->c_value,ack__1_48108180______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__59984080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59984080 = block;
   block->owner = (Object)__60017920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59984080;

   return block;
};

Block __40311140;

Block __47824140;

void code__47824140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_49663740_channel__x_581_49481140______58_84_49481440______58_840_59916700->c_value,make_ref_rangeS(mem_49778380_channel__x_581_49481140______58_84_49481440______58_840_59916700,value2integer(abus__w_49663580_channel__x_581_49481140______58_84_49481440______58_840_59916700->c_value),value2integer(abus__w_49663580_channel__x_581_49481140______58_84_49481440______58_840_59916700->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__47824140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47824140 = block;
   block->owner = (Object)__40311140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47824140;

   return block;
};

void code__40311140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_49778380_channel__x_581_49481140______58_84_49481440______58_840_59916700->c_value;
            idx = value2integer(abus__r_49663660_channel__x_581_49481140______58_84_49481440______58_840_59916700->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_49599360_channel__x_581_49481140______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_49498900_channel__x_581_49481140______58_84_49481440______58_840_59916700->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47824140();
   }
      }
   }
}

Block make__40311140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __40311140 = block;
   block->owner = (Object)__49337340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__40311140;

   return block;
};

Block __60017160;

void code__60017160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_49599360_channel__x_581_49481140______58_84_49481440______58_840_59916700->c_value,_5815_49164000______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60017160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60017160 = block;
   block->owner = (Object)__60016940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60017160;

   return block;
};

Block __60016900;

void code__60016900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5815_49164000______58_84_49481440______58_840_59916700->c_value,dbus__r_49599360_channel__x_581_49481140______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60016900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60016900 = block;
   block->owner = (Object)__60016740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60016900;

   return block;
};

Block __60016400;

void code__60016400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_49498920_channel__x_581_49481140______58_84_49481440______58_840_59916700->c_value,_5813_49163900______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60016400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60016400 = block;
   block->owner = (Object)__60016180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60016400;

   return block;
};

Block __60016140;

void code__60016140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5813_49163900______58_84_49481440______58_840_59916700->c_value,trig__r_49498920_channel__x_581_49481140______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60016140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60016140 = block;
   block->owner = (Object)__60015980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60016140;

   return block;
};

Block __60015680;

void code__60015680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_49663660_channel__x_581_49481140______58_84_49481440______58_840_59916700->c_value,_5814_49163800______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60015680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60015680 = block;
   block->owner = (Object)__60015520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60015680;

   return block;
};

Block __60015480;

void code__60015480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5814_49163800______58_84_49481440______58_840_59916700->c_value,abus__r_49663660_channel__x_581_49481140______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60015480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60015480 = block;
   block->owner = (Object)__60015320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60015480;

   return block;
};

Block __60014960;

void code__60014960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_49498900_channel__x_581_49481140______58_84_49481440______58_840_59916700->c_value,_5817_49163760______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60014960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60014960 = block;
   block->owner = (Object)__60014760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60014960;

   return block;
};

Block __60014720;

void code__60014720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5817_49163760______58_84_49481440______58_840_59916700->c_value,trig__w_49498900_channel__x_581_49481140______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60014720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60014720 = block;
   block->owner = (Object)__60039100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60014720;

   return block;
};

Block __60038760;

void code__60038760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_49663580_channel__x_581_49481140______58_84_49481440______58_840_59916700->c_value,_5818_49163640______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60038760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60038760 = block;
   block->owner = (Object)__60038540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60038760;

   return block;
};

Block __60038500;

void code__60038500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5818_49163640______58_84_49481440______58_840_59916700->c_value,abus__w_49663580_channel__x_581_49481140______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60038500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60038500 = block;
   block->owner = (Object)__60038340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60038500;

   return block;
};

Block __60038040;

void code__60038040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_49663740_channel__x_581_49481140______58_84_49481440______58_840_59916700->c_value,_5819_48980720______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60038040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60038040 = block;
   block->owner = (Object)__60037880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60038040;

   return block;
};

Block __60037840;

void code__60037840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5819_48980720______58_84_49481440______58_840_59916700->c_value,dbus__w_49663740_channel__x_581_49481140______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60037840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60037840 = block;
   block->owner = (Object)__60037660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60037840;

   return block;
};

Block __60035960;

void code__60035960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_48996840_channel__a0_5830_49334960______58_84_49481440______58_840_59916700->c_value,_5832_49479720______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60035960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60035960 = block;
   block->owner = (Object)__60035800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60035960;

   return block;
};

Block __60035760;

void code__60035760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5832_49479720______58_84_49481440______58_840_59916700->c_value,reg__0_48996840_channel__a0_5830_49334960______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60035760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60035760 = block;
   block->owner = (Object)__60035580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60035760;

   return block;
};

Block __60035200;

void code__60035200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_49520220_channel__a0_5830_49334960______58_84_49481440______58_840_59916700->c_value,_5833_49595200______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60035200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60035200 = block;
   block->owner = (Object)__60035040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60035200;

   return block;
};

Block __60035000;

void code__60035000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5833_49595200______58_84_49481440______58_840_59916700->c_value,reg__1_49520220_channel__a0_5830_49334960______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60035000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60035000 = block;
   block->owner = (Object)__60034840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60035000;

   return block;
};

Block __60034500;

void code__60034500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_48996840_channel__a0_5830_49334960______58_84_49481440______58_840_59916700->c_value,_5843_49678880______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60034500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60034500 = block;
   block->owner = (Object)__60034320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60034500;

   return block;
};

Block __60034240;

void code__60034240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5843_49678880______58_84_49481440______58_840_59916700->c_value,reg__0_48996840_channel__a0_5830_49334960______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60034240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60034240 = block;
   block->owner = (Object)__60034080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60034240;

   return block;
};

Block __60033780;

void code__60033780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_49520220_channel__a0_5830_49334960______58_84_49481440______58_840_59916700->c_value,_5844_49794400______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60033780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60033780 = block;
   block->owner = (Object)__60033620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60033780;

   return block;
};

Block __60033580;

void code__60033580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5844_49794400______58_84_49481440______58_840_59916700->c_value,reg__1_49520220_channel__a0_5830_49334960______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60033580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60033580 = block;
   block->owner = (Object)__60033380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60033580;

   return block;
};

Block __60031600;

void code__60031600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_49353580_rinc_5842_49354320_channel__a0_5830_49334960______58_84_49481440______58_840_59916700->c_value,_5845_49794220______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60031600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60031600 = block;
   block->owner = (Object)__60031440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60031600;

   return block;
};

Block __60031400;

void code__60031400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5845_49794220______58_84_49481440______58_840_59916700->c_value,abus__r_49353580_rinc_5842_49354320_channel__a0_5830_49334960______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60031400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60031400 = block;
   block->owner = (Object)__60031220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60031400;

   return block;
};

Block __60054420;

void code__60054420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_47754740_channel__a1_5860_47608980______58_84_49481440______58_840_59916700->c_value,_5862_49878920______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60054420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60054420 = block;
   block->owner = (Object)__60054200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60054420;

   return block;
};

Block __60054160;

void code__60054160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5862_49878920______58_84_49481440______58_840_59916700->c_value,reg__0_47754740_channel__a1_5860_47608980______58_84_49481440______58_840_59916700);
      set_value_pos(pool_state);
   }
}

Block make__60054160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60054160 = block;
   block->owner = (Object)__60054000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60054160;

   return block;
};

Value make__60081020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60080940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60080880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60080760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60080620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60080520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60080460() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60080400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60080340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60080280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60080220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60080160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60153780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60153720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60153660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60153580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60153520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60153440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60153380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60153300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60153060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60152980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60152920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60152840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60152780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60152700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60152600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60152540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60152480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60152420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60152360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60152300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60152240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60152180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60152120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60152060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60152000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60151940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60151880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60151820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60151760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60151700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60151640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60151580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60151520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60151460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60151400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60151320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60151260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60151180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60151120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60151040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60150940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60150880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60150800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60150740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60150660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60150600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60150520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60150420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60150360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60150300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope _____58_84_49481440;

SignalI clk_48108580______58_84_49481440______58_840_59916700;

SignalI makeclk_48108580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_48108580______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)_____58_84_49481440;
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

SignalI rst_48108460______58_84_49481440______58_840_59916700;

SignalI makerst_48108460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_48108460______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)_____58_84_49481440;
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

SignalI req_48108440______58_84_49481440______58_840_59916700;

SignalI makereq_48108440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_48108440______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)_____58_84_49481440;
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

SignalI ack__0_48108200______58_84_49481440______58_840_59916700;

SignalI makeack__0_48108200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__0_48108200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)_____58_84_49481440;
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

SignalI ack__1_48108180______58_84_49481440______58_840_59916700;

SignalI makeack__1_48108180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__1_48108180______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)_____58_84_49481440;
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

SignalI fill_48108160______58_84_49481440______58_840_59916700;

SignalI makefill_48108160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_48108160______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)_____58_84_49481440;
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

SignalI _5815_49164000______58_84_49481440______58_840_59916700;

SignalI make_5815_49164000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5815_49164000______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)_____58_84_49481440;
   signalI->name = ":15";
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

SignalI _5813_49163900______58_84_49481440______58_840_59916700;

SignalI make_5813_49163900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5813_49163900______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)_____58_84_49481440;
   signalI->name = ":13";
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

SignalI _5814_49163800______58_84_49481440______58_840_59916700;

SignalI make_5814_49163800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5814_49163800______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)_____58_84_49481440;
   signalI->name = ":14";
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

SignalI _5817_49163760______58_84_49481440______58_840_59916700;

SignalI make_5817_49163760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5817_49163760______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)_____58_84_49481440;
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

SignalI _5818_49163640______58_84_49481440______58_840_59916700;

SignalI make_5818_49163640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5818_49163640______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)_____58_84_49481440;
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

SignalI _5819_48980720______58_84_49481440______58_840_59916700;

SignalI make_5819_48980720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5819_48980720______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)_____58_84_49481440;
   signalI->name = ":19";
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

SignalI _5832_49479720______58_84_49481440______58_840_59916700;

SignalI make_5832_49479720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5832_49479720______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)_____58_84_49481440;
   signalI->name = ":32";
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

SignalI _5833_49595200______58_84_49481440______58_840_59916700;

SignalI make_5833_49595200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5833_49595200______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)_____58_84_49481440;
   signalI->name = ":33";
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

SignalI _5843_49678880______58_84_49481440______58_840_59916700;

SignalI make_5843_49678880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5843_49678880______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)_____58_84_49481440;
   signalI->name = ":43";
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

SignalI _5844_49794400______58_84_49481440______58_840_59916700;

SignalI make_5844_49794400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5844_49794400______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)_____58_84_49481440;
   signalI->name = ":44";
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

SignalI _5845_49794220______58_84_49481440______58_840_59916700;

SignalI make_5845_49794220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5845_49794220______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)_____58_84_49481440;
   signalI->name = ":45";
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

SignalI _5862_49878920______58_84_49481440______58_840_59916700;

SignalI make_5862_49878920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5862_49878920______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)_____58_84_49481440;
   signalI->name = ":62";
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

SystemI layer0_52988140;

SystemI makelayer0_52988140() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer0_52988140 = systemI;
   systemI->owner = (Object)_____58_84_49481440;
   systemI->name = "layer0";
   systemI->system = layer0_58_840_52991540;

   return systemI;
};

SystemI layer1_59547680;

SystemI makelayer1_59547680() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer1_59547680 = systemI;
   systemI->owner = (Object)_____58_84_49481440;
   systemI->name = "layer1";
   systemI->system = layer1_58_840_59550200;

   return systemI;
};

Scope channel__x_581_49481140;

SignalI trig__r_49498920_channel__x_581_49481140______58_84_49481440______58_840_59916700;

SignalI maketrig__r_49498920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_49498920_channel__x_581_49481140______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)channel__x_581_49481140;
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

SignalI trig__w_49498900_channel__x_581_49481140______58_84_49481440______58_840_59916700;

SignalI maketrig__w_49498900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_49498900_channel__x_581_49481140______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)channel__x_581_49481140;
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

SignalI dbus__r_49599360_channel__x_581_49481140______58_84_49481440______58_840_59916700;

SignalI makedbus__r_49599360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_49599360_channel__x_581_49481140______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)channel__x_581_49481140;
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

SignalI dbus__w_49663740_channel__x_581_49481140______58_84_49481440______58_840_59916700;

SignalI makedbus__w_49663740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_49663740_channel__x_581_49481140______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)channel__x_581_49481140;
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

SignalI abus__r_49663660_channel__x_581_49481140______58_84_49481440______58_840_59916700;

SignalI makeabus__r_49663660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49663660_channel__x_581_49481140______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)channel__x_581_49481140;
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

SignalI abus__w_49663580_channel__x_581_49481140______58_84_49481440______58_840_59916700;

SignalI makeabus__w_49663580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49663580_channel__x_581_49481140______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)channel__x_581_49481140;
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

SignalI mem_49778380_channel__x_581_49481140______58_84_49481440______58_840_59916700;

SignalI makemem_49778380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_49778380_channel__x_581_49481140______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)channel__x_581_49481140;
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

Scope raddr_582_49480840;

Scope makeraddr_582_49480840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_582_49480840 = scope;
   scope->owner = (Object)channel__x_581_49481140;
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

Scope waddr_587_49480420;

Scope makewaddr_587_49480420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_587_49480420 = scope;
   scope->owner = (Object)channel__x_581_49481140;
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

Scope rinc_5812_49480000;

Scope makerinc_5812_49480000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5812_49480000 = scope;
   scope->owner = (Object)channel__x_581_49481140;
   scope->name = "rinc:12";
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

Scope winc_5816_49504100;

Scope makewinc_5816_49504100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5816_49504100 = scope;
   scope->owner = (Object)channel__x_581_49481140;
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

Scope rdec_5820_49503680;

Scope makerdec_5820_49503680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5820_49503680 = scope;
   scope->owner = (Object)channel__x_581_49481140;
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

Scope wdec_5825_49501400;

Scope makewdec_5825_49501400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5825_49501400 = scope;
   scope->owner = (Object)channel__x_581_49481140;
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

Behavior __49337340;

Behavior make__49337340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49337340 = behavior;
   behavior->owner = (Object)channel__x_581_49481140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_48108580______58_84_49481440______58_840_59916700);
   clk_48108580______58_84_49481440______58_840_59916700->num_neg += 1;
   clk_48108580______58_84_49481440______58_840_59916700->neg = realloc(clk_48108580______58_84_49481440______58_840_59916700->neg,clk_48108580______58_84_49481440______58_840_59916700->num_neg*sizeof(Object));
clk_48108580______58_84_49481440______58_840_59916700->neg[clk_48108580______58_84_49481440______58_840_59916700->num_neg-1] = (Object)behavior;
   behavior->block = make__40311140();

   return behavior;
}

Behavior __60016940;

Behavior make__60016940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60016940 = behavior;
   behavior->owner = (Object)channel__x_581_49481140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_49599360_channel__x_581_49481140______58_84_49481440______58_840_59916700);
   dbus__r_49599360_channel__x_581_49481140______58_84_49481440______58_840_59916700->num_any += 1;
   dbus__r_49599360_channel__x_581_49481140______58_84_49481440______58_840_59916700->any = realloc(dbus__r_49599360_channel__x_581_49481140______58_84_49481440______58_840_59916700->any,dbus__r_49599360_channel__x_581_49481140______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
dbus__r_49599360_channel__x_581_49481140______58_84_49481440______58_840_59916700->any[dbus__r_49599360_channel__x_581_49481140______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60017160();

   return behavior;
}

Behavior __60016740;

Behavior make__60016740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60016740 = behavior;
   behavior->owner = (Object)channel__x_581_49481140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5815_49164000______58_84_49481440______58_840_59916700);
   _5815_49164000______58_84_49481440______58_840_59916700->num_any += 1;
   _5815_49164000______58_84_49481440______58_840_59916700->any = realloc(_5815_49164000______58_84_49481440______58_840_59916700->any,_5815_49164000______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
_5815_49164000______58_84_49481440______58_840_59916700->any[_5815_49164000______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60016900();

   return behavior;
}

Behavior __60016180;

Behavior make__60016180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60016180 = behavior;
   behavior->owner = (Object)channel__x_581_49481140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_49498920_channel__x_581_49481140______58_84_49481440______58_840_59916700);
   trig__r_49498920_channel__x_581_49481140______58_84_49481440______58_840_59916700->num_any += 1;
   trig__r_49498920_channel__x_581_49481140______58_84_49481440______58_840_59916700->any = realloc(trig__r_49498920_channel__x_581_49481140______58_84_49481440______58_840_59916700->any,trig__r_49498920_channel__x_581_49481140______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
trig__r_49498920_channel__x_581_49481140______58_84_49481440______58_840_59916700->any[trig__r_49498920_channel__x_581_49481140______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60016400();

   return behavior;
}

Behavior __60015980;

Behavior make__60015980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60015980 = behavior;
   behavior->owner = (Object)channel__x_581_49481140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5813_49163900______58_84_49481440______58_840_59916700);
   _5813_49163900______58_84_49481440______58_840_59916700->num_any += 1;
   _5813_49163900______58_84_49481440______58_840_59916700->any = realloc(_5813_49163900______58_84_49481440______58_840_59916700->any,_5813_49163900______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
_5813_49163900______58_84_49481440______58_840_59916700->any[_5813_49163900______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60016140();

   return behavior;
}

Behavior __60015520;

Behavior make__60015520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60015520 = behavior;
   behavior->owner = (Object)channel__x_581_49481140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_49663660_channel__x_581_49481140______58_84_49481440______58_840_59916700);
   abus__r_49663660_channel__x_581_49481140______58_84_49481440______58_840_59916700->num_any += 1;
   abus__r_49663660_channel__x_581_49481140______58_84_49481440______58_840_59916700->any = realloc(abus__r_49663660_channel__x_581_49481140______58_84_49481440______58_840_59916700->any,abus__r_49663660_channel__x_581_49481140______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
abus__r_49663660_channel__x_581_49481140______58_84_49481440______58_840_59916700->any[abus__r_49663660_channel__x_581_49481140______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60015680();

   return behavior;
}

Behavior __60015320;

Behavior make__60015320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60015320 = behavior;
   behavior->owner = (Object)channel__x_581_49481140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5814_49163800______58_84_49481440______58_840_59916700);
   _5814_49163800______58_84_49481440______58_840_59916700->num_any += 1;
   _5814_49163800______58_84_49481440______58_840_59916700->any = realloc(_5814_49163800______58_84_49481440______58_840_59916700->any,_5814_49163800______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
_5814_49163800______58_84_49481440______58_840_59916700->any[_5814_49163800______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60015480();

   return behavior;
}

Behavior __60014760;

Behavior make__60014760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60014760 = behavior;
   behavior->owner = (Object)channel__x_581_49481140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_49498900_channel__x_581_49481140______58_84_49481440______58_840_59916700);
   trig__w_49498900_channel__x_581_49481140______58_84_49481440______58_840_59916700->num_any += 1;
   trig__w_49498900_channel__x_581_49481140______58_84_49481440______58_840_59916700->any = realloc(trig__w_49498900_channel__x_581_49481140______58_84_49481440______58_840_59916700->any,trig__w_49498900_channel__x_581_49481140______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
trig__w_49498900_channel__x_581_49481140______58_84_49481440______58_840_59916700->any[trig__w_49498900_channel__x_581_49481140______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60014960();

   return behavior;
}

Behavior __60039100;

Behavior make__60039100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60039100 = behavior;
   behavior->owner = (Object)channel__x_581_49481140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5817_49163760______58_84_49481440______58_840_59916700);
   _5817_49163760______58_84_49481440______58_840_59916700->num_any += 1;
   _5817_49163760______58_84_49481440______58_840_59916700->any = realloc(_5817_49163760______58_84_49481440______58_840_59916700->any,_5817_49163760______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
_5817_49163760______58_84_49481440______58_840_59916700->any[_5817_49163760______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60014720();

   return behavior;
}

Behavior __60038540;

Behavior make__60038540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60038540 = behavior;
   behavior->owner = (Object)channel__x_581_49481140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_49663580_channel__x_581_49481140______58_84_49481440______58_840_59916700);
   abus__w_49663580_channel__x_581_49481140______58_84_49481440______58_840_59916700->num_any += 1;
   abus__w_49663580_channel__x_581_49481140______58_84_49481440______58_840_59916700->any = realloc(abus__w_49663580_channel__x_581_49481140______58_84_49481440______58_840_59916700->any,abus__w_49663580_channel__x_581_49481140______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
abus__w_49663580_channel__x_581_49481140______58_84_49481440______58_840_59916700->any[abus__w_49663580_channel__x_581_49481140______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60038760();

   return behavior;
}

Behavior __60038340;

Behavior make__60038340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60038340 = behavior;
   behavior->owner = (Object)channel__x_581_49481140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5818_49163640______58_84_49481440______58_840_59916700);
   _5818_49163640______58_84_49481440______58_840_59916700->num_any += 1;
   _5818_49163640______58_84_49481440______58_840_59916700->any = realloc(_5818_49163640______58_84_49481440______58_840_59916700->any,_5818_49163640______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
_5818_49163640______58_84_49481440______58_840_59916700->any[_5818_49163640______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60038500();

   return behavior;
}

Behavior __60037880;

Behavior make__60037880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60037880 = behavior;
   behavior->owner = (Object)channel__x_581_49481140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_49663740_channel__x_581_49481140______58_84_49481440______58_840_59916700);
   dbus__w_49663740_channel__x_581_49481140______58_84_49481440______58_840_59916700->num_any += 1;
   dbus__w_49663740_channel__x_581_49481140______58_84_49481440______58_840_59916700->any = realloc(dbus__w_49663740_channel__x_581_49481140______58_84_49481440______58_840_59916700->any,dbus__w_49663740_channel__x_581_49481140______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
dbus__w_49663740_channel__x_581_49481140______58_84_49481440______58_840_59916700->any[dbus__w_49663740_channel__x_581_49481140______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60038040();

   return behavior;
}

Behavior __60037660;

Behavior make__60037660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60037660 = behavior;
   behavior->owner = (Object)channel__x_581_49481140;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5819_48980720______58_84_49481440______58_840_59916700);
   _5819_48980720______58_84_49481440______58_840_59916700->num_any += 1;
   _5819_48980720______58_84_49481440______58_840_59916700->any = realloc(_5819_48980720______58_84_49481440______58_840_59916700->any,_5819_48980720______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
_5819_48980720______58_84_49481440______58_840_59916700->any[_5819_48980720______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60037840();

   return behavior;
}

Scope makechannel__x_581_49481140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__x_581_49481140 = scope;
   scope->owner = (Object)_____58_84_49481440;
   scope->name = "channel_x:1";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_49498920();
   scope->inners[1] = maketrig__w_49498900();
   scope->inners[2] = makedbus__r_49599360();
   scope->inners[3] = makedbus__w_49663740();
   scope->inners[4] = makeabus__r_49663660();
   scope->inners[5] = makeabus__w_49663580();
   scope->inners[6] = makemem_49778380();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_582_49480840();
   scope->scopes[1] = makewaddr_587_49480420();
   scope->scopes[2] = makerinc_5812_49480000();
   scope->scopes[3] = makewinc_5816_49504100();
   scope->scopes[4] = makerdec_5820_49503680();
   scope->scopes[5] = makewdec_5825_49501400();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49337340();
   scope->behaviors[1] = make__60016940();
   scope->behaviors[2] = make__60016740();
   scope->behaviors[3] = make__60016180();
   scope->behaviors[4] = make__60015980();
   scope->behaviors[5] = make__60015520();
   scope->behaviors[6] = make__60015320();
   scope->behaviors[7] = make__60014760();
   scope->behaviors[8] = make__60039100();
   scope->behaviors[9] = make__60038540();
   scope->behaviors[10] = make__60038340();
   scope->behaviors[11] = make__60037880();
   scope->behaviors[12] = make__60037660();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__a0_5830_49334960;

SignalI reg__0_48996840_channel__a0_5830_49334960______58_84_49481440______58_840_59916700;

SignalI makereg__0_48996840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_48996840_channel__a0_5830_49334960______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)channel__a0_5830_49334960;
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

SignalI reg__1_49520220_channel__a0_5830_49334960______58_84_49481440______58_840_59916700;

SignalI makereg__1_49520220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_49520220_channel__a0_5830_49334960______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)channel__a0_5830_49334960;
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

Scope anum_5831_49356560;

Scope makeanum_5831_49356560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_5831_49356560 = scope;
   scope->owner = (Object)channel__a0_5830_49334960;
   scope->name = "anum:31";
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

Scope raddr_5834_49355600;

Scope makeraddr_5834_49355600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5834_49355600 = scope;
   scope->owner = (Object)channel__a0_5830_49334960;
   scope->name = "raddr:34";
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

Scope waddr_5838_49354900;

Scope makewaddr_5838_49354900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5838_49354900 = scope;
   scope->owner = (Object)channel__a0_5830_49334960;
   scope->name = "waddr:38";
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

Scope rinc_5842_49354320;

SignalI abus__r_49353580_rinc_5842_49354320_channel__a0_5830_49334960______58_84_49481440______58_840_59916700;

SignalI makeabus__r_49353580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49353580_rinc_5842_49354320_channel__a0_5830_49334960______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)rinc_5842_49354320;
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

Behavior __60031440;

Behavior make__60031440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60031440 = behavior;
   behavior->owner = (Object)rinc_5842_49354320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_49353580_rinc_5842_49354320_channel__a0_5830_49334960______58_84_49481440______58_840_59916700);
   abus__r_49353580_rinc_5842_49354320_channel__a0_5830_49334960______58_84_49481440______58_840_59916700->num_any += 1;
   abus__r_49353580_rinc_5842_49354320_channel__a0_5830_49334960______58_84_49481440______58_840_59916700->any = realloc(abus__r_49353580_rinc_5842_49354320_channel__a0_5830_49334960______58_84_49481440______58_840_59916700->any,abus__r_49353580_rinc_5842_49354320_channel__a0_5830_49334960______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
abus__r_49353580_rinc_5842_49354320_channel__a0_5830_49334960______58_84_49481440______58_840_59916700->any[abus__r_49353580_rinc_5842_49354320_channel__a0_5830_49334960______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60031600();

   return behavior;
}

Behavior __60031220;

Behavior make__60031220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60031220 = behavior;
   behavior->owner = (Object)rinc_5842_49354320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5845_49794220______58_84_49481440______58_840_59916700);
   _5845_49794220______58_84_49481440______58_840_59916700->num_any += 1;
   _5845_49794220______58_84_49481440______58_840_59916700->any = realloc(_5845_49794220______58_84_49481440______58_840_59916700->any,_5845_49794220______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
_5845_49794220______58_84_49481440______58_840_59916700->any[_5845_49794220______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60031400();

   return behavior;
}

Scope makerinc_5842_49354320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5842_49354320 = scope;
   scope->owner = (Object)channel__a0_5830_49334960;
   scope->name = "rinc:42";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49353580();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60031440();
   scope->behaviors[1] = make__60031220();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5846_49353180;

SignalI abus__w_49352640_winc_5846_49353180_channel__a0_5830_49334960______58_84_49481440______58_840_59916700;

SignalI makeabus__w_49352640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49352640_winc_5846_49353180_channel__a0_5830_49334960______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)winc_5846_49353180;
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

Scope makewinc_5846_49353180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5846_49353180 = scope;
   scope->owner = (Object)channel__a0_5830_49334960;
   scope->name = "winc:46";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49352640();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5850_49351580;

SignalI abus__r_49351200_rdec_5850_49351580_channel__a0_5830_49334960______58_84_49481440______58_840_59916700;

SignalI makeabus__r_49351200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49351200_rdec_5850_49351580_channel__a0_5830_49334960______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)rdec_5850_49351580;
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

Scope makerdec_5850_49351580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5850_49351580 = scope;
   scope->owner = (Object)channel__a0_5830_49334960;
   scope->name = "rdec:50";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49351200();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_5855_49351080;

SignalI abus__w_49350700_wdec_5855_49351080_channel__a0_5830_49334960______58_84_49481440______58_840_59916700;

SignalI makeabus__w_49350700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49350700_wdec_5855_49351080_channel__a0_5830_49334960______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)wdec_5855_49351080;
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

Scope makewdec_5855_49351080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5855_49351080 = scope;
   scope->owner = (Object)channel__a0_5830_49334960;
   scope->name = "wdec:55";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49350700();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __60035800;

Behavior make__60035800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60035800 = behavior;
   behavior->owner = (Object)channel__a0_5830_49334960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_48996840_channel__a0_5830_49334960______58_84_49481440______58_840_59916700);
   reg__0_48996840_channel__a0_5830_49334960______58_84_49481440______58_840_59916700->num_any += 1;
   reg__0_48996840_channel__a0_5830_49334960______58_84_49481440______58_840_59916700->any = realloc(reg__0_48996840_channel__a0_5830_49334960______58_84_49481440______58_840_59916700->any,reg__0_48996840_channel__a0_5830_49334960______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
reg__0_48996840_channel__a0_5830_49334960______58_84_49481440______58_840_59916700->any[reg__0_48996840_channel__a0_5830_49334960______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60035960();

   return behavior;
}

Behavior __60035580;

Behavior make__60035580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60035580 = behavior;
   behavior->owner = (Object)channel__a0_5830_49334960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5832_49479720______58_84_49481440______58_840_59916700);
   _5832_49479720______58_84_49481440______58_840_59916700->num_any += 1;
   _5832_49479720______58_84_49481440______58_840_59916700->any = realloc(_5832_49479720______58_84_49481440______58_840_59916700->any,_5832_49479720______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
_5832_49479720______58_84_49481440______58_840_59916700->any[_5832_49479720______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60035760();

   return behavior;
}

Behavior __60035040;

Behavior make__60035040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60035040 = behavior;
   behavior->owner = (Object)channel__a0_5830_49334960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_49520220_channel__a0_5830_49334960______58_84_49481440______58_840_59916700);
   reg__1_49520220_channel__a0_5830_49334960______58_84_49481440______58_840_59916700->num_any += 1;
   reg__1_49520220_channel__a0_5830_49334960______58_84_49481440______58_840_59916700->any = realloc(reg__1_49520220_channel__a0_5830_49334960______58_84_49481440______58_840_59916700->any,reg__1_49520220_channel__a0_5830_49334960______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
reg__1_49520220_channel__a0_5830_49334960______58_84_49481440______58_840_59916700->any[reg__1_49520220_channel__a0_5830_49334960______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60035200();

   return behavior;
}

Behavior __60034840;

Behavior make__60034840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60034840 = behavior;
   behavior->owner = (Object)channel__a0_5830_49334960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5833_49595200______58_84_49481440______58_840_59916700);
   _5833_49595200______58_84_49481440______58_840_59916700->num_any += 1;
   _5833_49595200______58_84_49481440______58_840_59916700->any = realloc(_5833_49595200______58_84_49481440______58_840_59916700->any,_5833_49595200______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
_5833_49595200______58_84_49481440______58_840_59916700->any[_5833_49595200______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60035000();

   return behavior;
}

Behavior __60034320;

Behavior make__60034320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60034320 = behavior;
   behavior->owner = (Object)channel__a0_5830_49334960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_48996840_channel__a0_5830_49334960______58_84_49481440______58_840_59916700);
   reg__0_48996840_channel__a0_5830_49334960______58_84_49481440______58_840_59916700->num_any += 1;
   reg__0_48996840_channel__a0_5830_49334960______58_84_49481440______58_840_59916700->any = realloc(reg__0_48996840_channel__a0_5830_49334960______58_84_49481440______58_840_59916700->any,reg__0_48996840_channel__a0_5830_49334960______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
reg__0_48996840_channel__a0_5830_49334960______58_84_49481440______58_840_59916700->any[reg__0_48996840_channel__a0_5830_49334960______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60034500();

   return behavior;
}

Behavior __60034080;

Behavior make__60034080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60034080 = behavior;
   behavior->owner = (Object)channel__a0_5830_49334960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5843_49678880______58_84_49481440______58_840_59916700);
   _5843_49678880______58_84_49481440______58_840_59916700->num_any += 1;
   _5843_49678880______58_84_49481440______58_840_59916700->any = realloc(_5843_49678880______58_84_49481440______58_840_59916700->any,_5843_49678880______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
_5843_49678880______58_84_49481440______58_840_59916700->any[_5843_49678880______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60034240();

   return behavior;
}

Behavior __60033620;

Behavior make__60033620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60033620 = behavior;
   behavior->owner = (Object)channel__a0_5830_49334960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_49520220_channel__a0_5830_49334960______58_84_49481440______58_840_59916700);
   reg__1_49520220_channel__a0_5830_49334960______58_84_49481440______58_840_59916700->num_any += 1;
   reg__1_49520220_channel__a0_5830_49334960______58_84_49481440______58_840_59916700->any = realloc(reg__1_49520220_channel__a0_5830_49334960______58_84_49481440______58_840_59916700->any,reg__1_49520220_channel__a0_5830_49334960______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
reg__1_49520220_channel__a0_5830_49334960______58_84_49481440______58_840_59916700->any[reg__1_49520220_channel__a0_5830_49334960______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60033780();

   return behavior;
}

Behavior __60033380;

Behavior make__60033380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60033380 = behavior;
   behavior->owner = (Object)channel__a0_5830_49334960;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5844_49794400______58_84_49481440______58_840_59916700);
   _5844_49794400______58_84_49481440______58_840_59916700->num_any += 1;
   _5844_49794400______58_84_49481440______58_840_59916700->any = realloc(_5844_49794400______58_84_49481440______58_840_59916700->any,_5844_49794400______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
_5844_49794400______58_84_49481440______58_840_59916700->any[_5844_49794400______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60033580();

   return behavior;
}

Scope makechannel__a0_5830_49334960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__a0_5830_49334960 = scope;
   scope->owner = (Object)_____58_84_49481440;
   scope->name = "channel_a0:30";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_48996840();
   scope->inners[1] = makereg__1_49520220();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_5831_49356560();
   scope->scopes[1] = makeraddr_5834_49355600();
   scope->scopes[2] = makewaddr_5838_49354900();
   scope->scopes[3] = makerinc_5842_49354320();
   scope->scopes[4] = makewinc_5846_49353180();
   scope->scopes[5] = makerdec_5850_49351580();
   scope->scopes[6] = makewdec_5855_49351080();
   scope->num_behaviors = 8;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60035800();
   scope->behaviors[1] = make__60035580();
   scope->behaviors[2] = make__60035040();
   scope->behaviors[3] = make__60034840();
   scope->behaviors[4] = make__60034320();
   scope->behaviors[5] = make__60034080();
   scope->behaviors[6] = make__60033620();
   scope->behaviors[7] = make__60033380();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__a1_5860_47608980;

SignalI reg__0_47754740_channel__a1_5860_47608980______58_84_49481440______58_840_59916700;

SignalI makereg__0_47754740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_47754740_channel__a1_5860_47608980______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)channel__a1_5860_47608980;
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

Scope anum_5861_47608440;

Scope makeanum_5861_47608440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_5861_47608440 = scope;
   scope->owner = (Object)channel__a1_5860_47608980;
   scope->name = "anum:61";
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

Scope raddr_5863_47607760;

Scope makeraddr_5863_47607760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5863_47607760 = scope;
   scope->owner = (Object)channel__a1_5860_47608980;
   scope->name = "raddr:63";
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

Scope waddr_5866_47607300;

Scope makewaddr_5866_47607300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5866_47607300 = scope;
   scope->owner = (Object)channel__a1_5860_47608980;
   scope->name = "waddr:66";
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

Scope rinc_5869_47604780;

SignalI abus__r_47603800_rinc_5869_47604780_channel__a1_5860_47608980______58_84_49481440______58_840_59916700;

SignalI makeabus__r_47603800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47603800_rinc_5869_47604780_channel__a1_5860_47608980______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)rinc_5869_47604780;
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

Scope makerinc_5869_47604780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5869_47604780 = scope;
   scope->owner = (Object)channel__a1_5860_47608980;
   scope->name = "rinc:69";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47603800();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5872_47627460;

SignalI abus__w_47623220_winc_5872_47627460_channel__a1_5860_47608980______58_84_49481440______58_840_59916700;

SignalI makeabus__w_47623220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47623220_winc_5872_47627460_channel__a1_5860_47608980______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)winc_5872_47627460;
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

Scope makewinc_5872_47627460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5872_47627460 = scope;
   scope->owner = (Object)channel__a1_5860_47608980;
   scope->name = "winc:72";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47623220();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5875_47622520;

SignalI abus__r_47621200_rdec_5875_47622520_channel__a1_5860_47608980______58_84_49481440______58_840_59916700;

SignalI makeabus__r_47621200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47621200_rdec_5875_47622520_channel__a1_5860_47608980______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)rdec_5875_47622520;
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

Scope makerdec_5875_47622520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5875_47622520 = scope;
   scope->owner = (Object)channel__a1_5860_47608980;
   scope->name = "rdec:75";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47621200();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_5879_47621060;

SignalI abus__w_47620360_wdec_5879_47621060_channel__a1_5860_47608980______58_84_49481440______58_840_59916700;

SignalI makeabus__w_47620360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47620360_wdec_5879_47621060_channel__a1_5860_47608980______58_84_49481440______58_840_59916700 = signalI;
   signalI->owner = (Object)wdec_5879_47621060;
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

Scope makewdec_5879_47621060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5879_47621060 = scope;
   scope->owner = (Object)channel__a1_5860_47608980;
   scope->name = "wdec:79";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47620360();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __60054200;

Behavior make__60054200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60054200 = behavior;
   behavior->owner = (Object)channel__a1_5860_47608980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_47754740_channel__a1_5860_47608980______58_84_49481440______58_840_59916700);
   reg__0_47754740_channel__a1_5860_47608980______58_84_49481440______58_840_59916700->num_any += 1;
   reg__0_47754740_channel__a1_5860_47608980______58_84_49481440______58_840_59916700->any = realloc(reg__0_47754740_channel__a1_5860_47608980______58_84_49481440______58_840_59916700->any,reg__0_47754740_channel__a1_5860_47608980______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
reg__0_47754740_channel__a1_5860_47608980______58_84_49481440______58_840_59916700->any[reg__0_47754740_channel__a1_5860_47608980______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60054420();

   return behavior;
}

Behavior __60054000;

Behavior make__60054000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60054000 = behavior;
   behavior->owner = (Object)channel__a1_5860_47608980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5862_49878920______58_84_49481440______58_840_59916700);
   _5862_49878920______58_84_49481440______58_840_59916700->num_any += 1;
   _5862_49878920______58_84_49481440______58_840_59916700->any = realloc(_5862_49878920______58_84_49481440______58_840_59916700->any,_5862_49878920______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
_5862_49878920______58_84_49481440______58_840_59916700->any[_5862_49878920______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__60054160();

   return behavior;
}

Scope makechannel__a1_5860_47608980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__a1_5860_47608980 = scope;
   scope->owner = (Object)_____58_84_49481440;
   scope->name = "channel_a1:60";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_47754740();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_5861_47608440();
   scope->scopes[1] = makeraddr_5863_47607760();
   scope->scopes[2] = makewaddr_5866_47607300();
   scope->scopes[3] = makerinc_5869_47604780();
   scope->scopes[4] = makewinc_5872_47627460();
   scope->scopes[5] = makerdec_5875_47622520();
   scope->scopes[6] = makewdec_5879_47621060();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60054200();
   scope->behaviors[1] = make__60054000();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __59773920;

Behavior make__59773920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59773920 = behavior;
   behavior->owner = (Object)_____58_84_49481440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_48108580______58_84_49481440______58_840_59916700);
   clk_48108580______58_84_49481440______58_840_59916700->num_pos += 1;
   clk_48108580______58_84_49481440______58_840_59916700->pos = realloc(clk_48108580______58_84_49481440______58_840_59916700->pos,clk_48108580______58_84_49481440______58_840_59916700->num_pos*sizeof(Object));
clk_48108580______58_84_49481440______58_840_59916700->pos[clk_48108580______58_84_49481440______58_840_59916700->num_pos-1] = (Object)behavior;
   behavior->block = make__59635600();

   return behavior;
}

Behavior __59916820;

Behavior make__59916820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59916820 = behavior;
   register_timed_behavior(behavior);
   behavior->owner = (Object)_____58_84_49481440;
   behavior->activated = 0;
   behavior->timed = 1;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__59773800();

   return behavior;
}

Behavior __60018080;

Behavior make__60018080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60018080 = behavior;
   behavior->owner = (Object)_____58_84_49481440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_48108580______58_84_49481440______58_840_59916700);
   clk_48108580______58_84_49481440______58_840_59916700->num_any += 1;
   clk_48108580______58_84_49481440______58_840_59916700->any = realloc(clk_48108580______58_84_49481440______58_840_59916700->any,clk_48108580______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
clk_48108580______58_84_49481440______58_840_59916700->any[clk_48108580______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_48108460______58_84_49481440______58_840_59916700);
   rst_48108460______58_84_49481440______58_840_59916700->num_any += 1;
   rst_48108460______58_84_49481440______58_840_59916700->any = realloc(rst_48108460______58_84_49481440______58_840_59916700->any,rst_48108460______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
rst_48108460______58_84_49481440______58_840_59916700->any[rst_48108460______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,fill_48108160______58_84_49481440______58_840_59916700);
   fill_48108160______58_84_49481440______58_840_59916700->num_any += 1;
   fill_48108160______58_84_49481440______58_840_59916700->any = realloc(fill_48108160______58_84_49481440______58_840_59916700->any,fill_48108160______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
fill_48108160______58_84_49481440______58_840_59916700->any[fill_48108160______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,req_48108440______58_84_49481440______58_840_59916700);
   req_48108440______58_84_49481440______58_840_59916700->num_any += 1;
   req_48108440______58_84_49481440______58_840_59916700->any = realloc(req_48108440______58_84_49481440______58_840_59916700->any,req_48108440______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
req_48108440______58_84_49481440______58_840_59916700->any[req_48108440______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__0_48108200______58_84_49481440______58_840_59916700);
   ack__0_48108200______58_84_49481440______58_840_59916700->num_any += 1;
   ack__0_48108200______58_84_49481440______58_840_59916700->any = realloc(ack__0_48108200______58_84_49481440______58_840_59916700->any,ack__0_48108200______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
ack__0_48108200______58_84_49481440______58_840_59916700->any[ack__0_48108200______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__59984140();

   return behavior;
}

Behavior __60017920;

Behavior make__60017920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60017920 = behavior;
   behavior->owner = (Object)_____58_84_49481440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__0_52988280_layer0_58_840_52991540______58_84_49481440______58_840_59916700);
   ack__0_52988280_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any += 1;
   ack__0_52988280_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any = realloc(ack__0_52988280_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any,ack__0_52988280_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
ack__0_52988280_layer0_58_840_52991540______58_84_49481440______58_840_59916700->any[ack__0_52988280_layer0_58_840_52991540______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__1_59547880_layer1_58_840_59550200______58_84_49481440______58_840_59916700);
   ack__1_59547880_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any += 1;
   ack__1_59547880_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any = realloc(ack__1_59547880_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any,ack__1_59547880_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any*sizeof(Object));
ack__1_59547880_layer1_58_840_59550200______58_84_49481440______58_840_59916700->any[ack__1_59547880_layer1_58_840_59550200______58_84_49481440______58_840_59916700->num_any-1] = (Object)behavior;
   behavior->block = make__59984080();

   return behavior;
}

Scope make_____58_84_49481440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   _____58_84_49481440 = scope;
   scope->owner = (Object)_____58_840_59916700;
   scope->name = "__:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makelayer0_52988140();
   scope->systemIs[1] = makelayer1_59547680();
   scope->num_inners = 18;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeclk_48108580();
   scope->inners[1] = makerst_48108460();
   scope->inners[2] = makereq_48108440();
   scope->inners[3] = makeack__0_48108200();
   scope->inners[4] = makeack__1_48108180();
   scope->inners[5] = makefill_48108160();
   scope->inners[6] = make_5815_49164000();
   scope->inners[7] = make_5813_49163900();
   scope->inners[8] = make_5814_49163800();
   scope->inners[9] = make_5817_49163760();
   scope->inners[10] = make_5818_49163640();
   scope->inners[11] = make_5819_48980720();
   scope->inners[12] = make_5832_49479720();
   scope->inners[13] = make_5833_49595200();
   scope->inners[14] = make_5843_49678880();
   scope->inners[15] = make_5844_49794400();
   scope->inners[16] = make_5845_49794220();
   scope->inners[17] = make_5862_49878920();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__x_581_49481140();
   scope->scopes[1] = makechannel__a0_5830_49334960();
   scope->scopes[2] = makechannel__a1_5860_47608980();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59773920();
   scope->behaviors[1] = make__59916820();
   scope->behaviors[2] = make__60018080();
   scope->behaviors[3] = make__60017920();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT make_____58_840_59916700() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   _____58_840_59916700 = systemT;
systemT->owner = NULL;
   systemT->name = "__:T0";
   systemT->num_inputs = 0;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->num_outputs = 0;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make_____58_84_49481440();

   return systemT;
}