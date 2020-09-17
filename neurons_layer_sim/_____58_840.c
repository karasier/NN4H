#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT _____58_840_60584080;

Block __60364300;

Block __60364140;

Block __60363820;

void code__60363820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60975240(),_5818_49813200______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__60363820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60363820 = block;
   block->owner = (Object)__60364140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60363820;

   return block;
};

void code__60364140() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49813380______58_84_46847180______58_840_60584080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60975320();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60363820();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60975180(),_5817_49813280______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__60364140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60364140 = block;
   block->owner = (Object)__60364300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60364140;

   return block;
};

Block __60363040;

Block __60362880;

Block __60362460;

void code__60362460() {
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
                  src0 = _5818_49813200______58_84_46847180______58_840_60584080->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60974880();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5818_49813200______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60974720(),_5817_49813280______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60974660(),_5819_44700080______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__60362460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60362460 = block;
   block->owner = (Object)__60362880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60362460;

   return block;
};

void code__60362880() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49813380______58_84_46847180______58_840_60584080->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60975040();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60362460();
   }
      }
   }
}

Block make__60362880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60362880 = block;
   block->owner = (Object)__60363040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60362880;

   return block;
};

void code__60363040() {
 code__60362880();
}

Block make__60363040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60363040 = block;
   block->owner = (Object)__60364300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60363040;

   return block;
};

void code__60364300() {
 code__60364140();
   {
      Value cond = fill_49813340______58_84_46847180______58_840_60584080->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60363040();
   }
      }
   }
}

Block make__60364300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60364300 = block;
   block->owner = (Object)__60461640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60364300;

   return block;
};

Block __60461500;

void code__60461500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60974600(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60974540(),rst_49813380______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60974480(),req_49813360______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60974420(),fill_49813340______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60974360(),rst_49813380______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60974300(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60974240(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60974180(),rst_49813380______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60974100(),fill_49813340______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60974020(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60973960(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60973880(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60973780(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60973720(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60973660(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60973600(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60973540(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60973480(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60973420(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60973360(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60973300(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60973240(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60973180(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60973120(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60973060(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60997540(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60997480(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60997400(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60997320(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60997260(),fill_49813340______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60997180(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60997080(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60997020(),req_49813360______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60996960(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60996900(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60996840(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60996780(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60996720(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60996660(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60996580(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60996500(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60996440(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60996380(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60996260(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60996200(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60996140(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60996080(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60996020(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60995960(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60995900(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60995840(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60995780(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60995720(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60995660(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60995600(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60995540(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60995480(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60995420(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60995360(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60995300(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60995220(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60995140(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60995080(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60995000(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60994900(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60994840(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60994780(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60994720(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60994660(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60994600(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60994520(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60994460(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60994380(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60994320(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60994240(),clk_49813400______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60584200);
}

Block make__60461500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60461500 = block;
   block->owner = (Object)__60584200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60461500;

   return block;
};

Block __60864420;

void code__60864420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_49813400______58_84_46847180______58_840_60584080->c_value,clk_52920540_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_49813380______58_84_46847180______58_840_60584080->c_value,rst_52920500_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(fill_49813340______58_84_46847180______58_840_60584080->c_value,fill_52920480_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(req_49813360______58_84_46847180______58_840_60584080->c_value,req_52920460_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_49813400______58_84_46847180______58_840_60584080->c_value,clk_60041420_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_49813380______58_84_46847180______58_840_60584080->c_value,rst_60041400_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(fill_49813340______58_84_46847180______58_840_60584080->c_value,fill_60041380_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__0_49813320______58_84_46847180______58_840_60584080->c_value,req_60041360_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__60864420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60864420 = block;
   block->owner = (Object)__60882100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60864420;

   return block;
};

Block __60864360;

void code__60864360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__layer_53312520_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,ack__0_49813320______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__layer_60282720_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value,ack__1_49813300______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__60864360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60864360 = block;
   block->owner = (Object)__60881940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60864360;

   return block;
};

Block __49269800;

Block __49577020;

void code__49577020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_48020540_channel__x_581_46846800______58_84_46847180______58_840_60584080->c_value,make_ref_rangeS(mem_48887600_channel__x_581_46846800______58_84_46847180______58_840_60584080,value2integer(abus__w_48020380_channel__x_581_46846800______58_84_46847180______58_840_60584080->c_value),value2integer(abus__w_48020380_channel__x_581_46846800______58_84_46847180______58_840_60584080->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__49577020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49577020 = block;
   block->owner = (Object)__49269800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49577020;

   return block;
};

void code__49269800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_48887600_channel__x_581_46846800______58_84_46847180______58_840_60584080->c_value;
            idx = value2integer(abus__r_48020460_channel__x_581_46846800______58_84_46847180______58_840_60584080->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_47898920_channel__x_581_46846800______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_47691560_channel__x_581_46846800______58_84_46847180______58_840_60584080->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49577020();
   }
      }
   }
}

Block make__49269800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49269800 = block;
   block->owner = (Object)__49840340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49269800;

   return block;
};

Block __60881220;

void code__60881220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_47691560_channel__x_581_46846800______58_84_46847180______58_840_60584080->c_value,_5817_49813280______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__60881220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60881220 = block;
   block->owner = (Object)__60881020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60881220;

   return block;
};

Block __60880980;

void code__60880980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5817_49813280______58_84_46847180______58_840_60584080->c_value,trig__w_47691560_channel__x_581_46846800______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__60880980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60880980 = block;
   block->owner = (Object)__60880760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60880980;

   return block;
};

Block __60880460;

void code__60880460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_48020380_channel__x_581_46846800______58_84_46847180______58_840_60584080->c_value,_5818_49813200______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__60880460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60880460 = block;
   block->owner = (Object)__60880260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60880460;

   return block;
};

Block __60880220;

void code__60880220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5818_49813200______58_84_46847180______58_840_60584080->c_value,abus__w_48020380_channel__x_581_46846800______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__60880220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60880220 = block;
   block->owner = (Object)__60880000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60880220;

   return block;
};

Block __60879700;

void code__60879700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_48020540_channel__x_581_46846800______58_84_46847180______58_840_60584080->c_value,_5819_44700080______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__60879700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60879700 = block;
   block->owner = (Object)__60879540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60879700;

   return block;
};

Block __60879500;

void code__60879500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5819_44700080______58_84_46847180______58_840_60584080->c_value,dbus__w_48020540_channel__x_581_46846800______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__60879500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60879500 = block;
   block->owner = (Object)__60879340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60879500;

   return block;
};

Block __60878600;

void code__60878600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_47898920_channel__x_581_46846800______58_84_46847180______58_840_60584080->c_value,_5815_53312580_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__60878600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60878600 = block;
   block->owner = (Object)__60896100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60878600;

   return block;
};

Block __60878540;

void code__60878540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5813_53312480_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,trig__r_47691580_channel__x_581_46846800______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5814_53312360_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,abus__r_48020460_channel__x_581_46846800______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__60878540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60878540 = block;
   block->owner = (Object)__60895940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60878540;

   return block;
};

Block __60893740;

void code__60893740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_49365440_channel__a0_5830_49840220______58_84_46847180______58_840_60584080->c_value,_5832_53465460_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__60893740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60893740 = block;
   block->owner = (Object)__60893520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60893740;

   return block;
};

Block __60893480;

void code__60893480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5832_53465460_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,reg__0_49365440_channel__a0_5830_49840220______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__60893480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60893480 = block;
   block->owner = (Object)__60893240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60893480;

   return block;
};

Block __60891960;

void code__60891960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_49475420_channel__a0_5830_49840220______58_84_46847180______58_840_60584080->c_value,_5833_53729160_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__60891960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60891960 = block;
   block->owner = (Object)__60891780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60891960;

   return block;
};

Block __60891740;

void code__60891740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5833_53729160_layer0_58_840_52923660______58_84_46847180______58_840_60584080->c_value,reg__1_49475420_channel__a0_5830_49840220______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__60891740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60891740 = block;
   block->owner = (Object)__60891560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60891740;

   return block;
};

Block __60910040;

void code__60910040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_47808900_rinc_5842_47809940_channel__a0_5830_49840220______58_84_46847180______58_840_60584080->c_value,_5845_60282620_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__60910040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60910040 = block;
   block->owner = (Object)__60909860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60910040;

   return block;
};

Block __60909820;

void code__60909820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5845_60282620_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value,abus__r_47808900_rinc_5842_47809940_channel__a0_5830_49840220______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__60909820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60909820 = block;
   block->owner = (Object)__60909640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60909820;

   return block;
};

Block __60915320;

void code__60915320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_49365440_channel__a0_5830_49840220______58_84_46847180______58_840_60584080->c_value,_5843_60157600_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_49475420_channel__a0_5830_49840220______58_84_46847180______58_840_60584080->c_value,_5844_60282760_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__60915320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60915320 = block;
   block->owner = (Object)__60909460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60915320;

   return block;
};

Block __60948020;

void code__60948020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_49813540_channel__a1_5860_49475300______58_84_46847180______58_840_60584080->c_value,_5862_60366580_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__60948020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60948020 = block;
   block->owner = (Object)__60947720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60948020;

   return block;
};

Block __60947680;

void code__60947680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5862_60366580_layer1_58_840_60043460______58_84_46847180______58_840_60584080->c_value,reg__0_49813540_channel__a1_5860_49475300______58_84_46847180______58_840_60584080);
      set_value_pos(pool_state);
   }
}

Block make__60947680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60947680 = block;
   block->owner = (Object)__60947500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60947680;

   return block;
};

Value make__60975320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60975240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60975180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60975040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60974880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60974720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60974660() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60974600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60974540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60974480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60974420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60974360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60974300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60974240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60974180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60974100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60974020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60973960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60973880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60973780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60973720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60973660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60973600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60973540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60973480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60973420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60973360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60973300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60973240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60973180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60973120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60973060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60997540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60997480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60997400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60997320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60997260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60997180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60997080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60997020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60996960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60996900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60996840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60996780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60996720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60996660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60996580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60996500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60996440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60996380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60996260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60996200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60996140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60996080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60996020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60995960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60995900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60995840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60995780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60995720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60995660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60995600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60995540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60995480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60995420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60995360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60995300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60995220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60995140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60995080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60995000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60994900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60994840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60994780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60994720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60994660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60994600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60994520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60994460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60994380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60994320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60994240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope _____58_84_46847180;

SignalI clk_49813400______58_84_46847180______58_840_60584080;

SignalI makeclk_49813400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_49813400______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)_____58_84_46847180;
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

SignalI rst_49813380______58_84_46847180______58_840_60584080;

SignalI makerst_49813380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_49813380______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)_____58_84_46847180;
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

SignalI req_49813360______58_84_46847180______58_840_60584080;

SignalI makereq_49813360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_49813360______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)_____58_84_46847180;
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

SignalI fill_49813340______58_84_46847180______58_840_60584080;

SignalI makefill_49813340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_49813340______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)_____58_84_46847180;
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

SignalI ack__0_49813320______58_84_46847180______58_840_60584080;

SignalI makeack__0_49813320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__0_49813320______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)_____58_84_46847180;
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

SignalI ack__1_49813300______58_84_46847180______58_840_60584080;

SignalI makeack__1_49813300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__1_49813300______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)_____58_84_46847180;
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

SignalI _5817_49813280______58_84_46847180______58_840_60584080;

SignalI make_5817_49813280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5817_49813280______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)_____58_84_46847180;
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

SignalI _5818_49813200______58_84_46847180______58_840_60584080;

SignalI make_5818_49813200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5818_49813200______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)_____58_84_46847180;
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

SignalI _5819_44700080______58_84_46847180______58_840_60584080;

SignalI make_5819_44700080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5819_44700080______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)_____58_84_46847180;
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

SystemI layer0_53728860;

SystemI makelayer0_53728860() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer0_53728860 = systemI;
   systemI->owner = (Object)_____58_84_46847180;
   systemI->name = "layer0";
   systemI->system = layer0_58_840_52923660;

   return systemI;
};

SystemI layer1_60366460;

SystemI makelayer1_60366460() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer1_60366460 = systemI;
   systemI->owner = (Object)_____58_84_46847180;
   systemI->name = "layer1";
   systemI->system = layer1_58_840_60043460;

   return systemI;
};

Scope channel__x_581_46846800;

SignalI trig__r_47691580_channel__x_581_46846800______58_84_46847180______58_840_60584080;

SignalI maketrig__r_47691580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_47691580_channel__x_581_46846800______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)channel__x_581_46846800;
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

SignalI trig__w_47691560_channel__x_581_46846800______58_84_46847180______58_840_60584080;

SignalI maketrig__w_47691560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_47691560_channel__x_581_46846800______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)channel__x_581_46846800;
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

SignalI dbus__r_47898920_channel__x_581_46846800______58_84_46847180______58_840_60584080;

SignalI makedbus__r_47898920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_47898920_channel__x_581_46846800______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)channel__x_581_46846800;
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

SignalI dbus__w_48020540_channel__x_581_46846800______58_84_46847180______58_840_60584080;

SignalI makedbus__w_48020540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_48020540_channel__x_581_46846800______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)channel__x_581_46846800;
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

SignalI abus__r_48020460_channel__x_581_46846800______58_84_46847180______58_840_60584080;

SignalI makeabus__r_48020460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48020460_channel__x_581_46846800______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)channel__x_581_46846800;
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

SignalI abus__w_48020380_channel__x_581_46846800______58_84_46847180______58_840_60584080;

SignalI makeabus__w_48020380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48020380_channel__x_581_46846800______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)channel__x_581_46846800;
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

SignalI mem_48887600_channel__x_581_46846800______58_84_46847180______58_840_60584080;

SignalI makemem_48887600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_48887600_channel__x_581_46846800______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)channel__x_581_46846800;
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

Scope raddr_582_46846240;

Scope makeraddr_582_46846240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_582_46846240 = scope;
   scope->owner = (Object)channel__x_581_46846800;
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

Scope waddr_587_46845460;

Scope makewaddr_587_46845460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_587_46845460 = scope;
   scope->owner = (Object)channel__x_581_46846800;
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

Scope rinc_5812_46842100;

Behavior __60896100;

Behavior make__60896100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60896100 = behavior;
   behavior->owner = (Object)rinc_5812_46842100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_47898920_channel__x_581_46846800______58_84_46847180______58_840_60584080);
   dbus__r_47898920_channel__x_581_46846800______58_84_46847180______58_840_60584080->num_any += 1;
   dbus__r_47898920_channel__x_581_46846800______58_84_46847180______58_840_60584080->any = realloc(dbus__r_47898920_channel__x_581_46846800______58_84_46847180______58_840_60584080->any,dbus__r_47898920_channel__x_581_46846800______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
dbus__r_47898920_channel__x_581_46846800______58_84_46847180______58_840_60584080->any[dbus__r_47898920_channel__x_581_46846800______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__60878600();

   return behavior;
}

Behavior __60895940;

Behavior make__60895940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60895940 = behavior;
   behavior->owner = (Object)rinc_5812_46842100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5813_53312480_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   _5813_53312480_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   _5813_53312480_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(_5813_53312480_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,_5813_53312480_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
_5813_53312480_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[_5813_53312480_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,_5814_53312360_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   _5814_53312360_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   _5814_53312360_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(_5814_53312360_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,_5814_53312360_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
_5814_53312360_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[_5814_53312360_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__60878540();

   return behavior;
}

Scope makerinc_5812_46842100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5812_46842100 = scope;
   scope->owner = (Object)channel__x_581_46846800;
   scope->name = "rinc:12";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60896100();
   scope->behaviors[1] = make__60895940();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5816_47670140;

Scope makewinc_5816_47670140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5816_47670140 = scope;
   scope->owner = (Object)channel__x_581_46846800;
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

Scope rdec_5820_47693460;

Scope makerdec_5820_47693460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5820_47693460 = scope;
   scope->owner = (Object)channel__x_581_46846800;
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

Scope wdec_5825_47692640;

Scope makewdec_5825_47692640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5825_47692640 = scope;
   scope->owner = (Object)channel__x_581_46846800;
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

Behavior __49840340;

Behavior make__49840340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49840340 = behavior;
   behavior->owner = (Object)channel__x_581_46846800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_49813400______58_84_46847180______58_840_60584080);
   clk_49813400______58_84_46847180______58_840_60584080->num_neg += 1;
   clk_49813400______58_84_46847180______58_840_60584080->neg = realloc(clk_49813400______58_84_46847180______58_840_60584080->neg,clk_49813400______58_84_46847180______58_840_60584080->num_neg*sizeof(Object));
clk_49813400______58_84_46847180______58_840_60584080->neg[clk_49813400______58_84_46847180______58_840_60584080->num_neg-1] = (Object)behavior;
   behavior->block = make__49269800();

   return behavior;
}

Behavior __60881020;

Behavior make__60881020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60881020 = behavior;
   behavior->owner = (Object)channel__x_581_46846800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_47691560_channel__x_581_46846800______58_84_46847180______58_840_60584080);
   trig__w_47691560_channel__x_581_46846800______58_84_46847180______58_840_60584080->num_any += 1;
   trig__w_47691560_channel__x_581_46846800______58_84_46847180______58_840_60584080->any = realloc(trig__w_47691560_channel__x_581_46846800______58_84_46847180______58_840_60584080->any,trig__w_47691560_channel__x_581_46846800______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
trig__w_47691560_channel__x_581_46846800______58_84_46847180______58_840_60584080->any[trig__w_47691560_channel__x_581_46846800______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__60881220();

   return behavior;
}

Behavior __60880760;

Behavior make__60880760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60880760 = behavior;
   behavior->owner = (Object)channel__x_581_46846800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5817_49813280______58_84_46847180______58_840_60584080);
   _5817_49813280______58_84_46847180______58_840_60584080->num_any += 1;
   _5817_49813280______58_84_46847180______58_840_60584080->any = realloc(_5817_49813280______58_84_46847180______58_840_60584080->any,_5817_49813280______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
_5817_49813280______58_84_46847180______58_840_60584080->any[_5817_49813280______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__60880980();

   return behavior;
}

Behavior __60880260;

Behavior make__60880260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60880260 = behavior;
   behavior->owner = (Object)channel__x_581_46846800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_48020380_channel__x_581_46846800______58_84_46847180______58_840_60584080);
   abus__w_48020380_channel__x_581_46846800______58_84_46847180______58_840_60584080->num_any += 1;
   abus__w_48020380_channel__x_581_46846800______58_84_46847180______58_840_60584080->any = realloc(abus__w_48020380_channel__x_581_46846800______58_84_46847180______58_840_60584080->any,abus__w_48020380_channel__x_581_46846800______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
abus__w_48020380_channel__x_581_46846800______58_84_46847180______58_840_60584080->any[abus__w_48020380_channel__x_581_46846800______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__60880460();

   return behavior;
}

Behavior __60880000;

Behavior make__60880000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60880000 = behavior;
   behavior->owner = (Object)channel__x_581_46846800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5818_49813200______58_84_46847180______58_840_60584080);
   _5818_49813200______58_84_46847180______58_840_60584080->num_any += 1;
   _5818_49813200______58_84_46847180______58_840_60584080->any = realloc(_5818_49813200______58_84_46847180______58_840_60584080->any,_5818_49813200______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
_5818_49813200______58_84_46847180______58_840_60584080->any[_5818_49813200______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__60880220();

   return behavior;
}

Behavior __60879540;

Behavior make__60879540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60879540 = behavior;
   behavior->owner = (Object)channel__x_581_46846800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_48020540_channel__x_581_46846800______58_84_46847180______58_840_60584080);
   dbus__w_48020540_channel__x_581_46846800______58_84_46847180______58_840_60584080->num_any += 1;
   dbus__w_48020540_channel__x_581_46846800______58_84_46847180______58_840_60584080->any = realloc(dbus__w_48020540_channel__x_581_46846800______58_84_46847180______58_840_60584080->any,dbus__w_48020540_channel__x_581_46846800______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
dbus__w_48020540_channel__x_581_46846800______58_84_46847180______58_840_60584080->any[dbus__w_48020540_channel__x_581_46846800______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__60879700();

   return behavior;
}

Behavior __60879340;

Behavior make__60879340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60879340 = behavior;
   behavior->owner = (Object)channel__x_581_46846800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5819_44700080______58_84_46847180______58_840_60584080);
   _5819_44700080______58_84_46847180______58_840_60584080->num_any += 1;
   _5819_44700080______58_84_46847180______58_840_60584080->any = realloc(_5819_44700080______58_84_46847180______58_840_60584080->any,_5819_44700080______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
_5819_44700080______58_84_46847180______58_840_60584080->any[_5819_44700080______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__60879500();

   return behavior;
}

Scope makechannel__x_581_46846800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__x_581_46846800 = scope;
   scope->owner = (Object)_____58_84_46847180;
   scope->name = "channel_x:1";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_47691580();
   scope->inners[1] = maketrig__w_47691560();
   scope->inners[2] = makedbus__r_47898920();
   scope->inners[3] = makedbus__w_48020540();
   scope->inners[4] = makeabus__r_48020460();
   scope->inners[5] = makeabus__w_48020380();
   scope->inners[6] = makemem_48887600();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_582_46846240();
   scope->scopes[1] = makewaddr_587_46845460();
   scope->scopes[2] = makerinc_5812_46842100();
   scope->scopes[3] = makewinc_5816_47670140();
   scope->scopes[4] = makerdec_5820_47693460();
   scope->scopes[5] = makewdec_5825_47692640();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49840340();
   scope->behaviors[1] = make__60881020();
   scope->behaviors[2] = make__60880760();
   scope->behaviors[3] = make__60880260();
   scope->behaviors[4] = make__60880000();
   scope->behaviors[5] = make__60879540();
   scope->behaviors[6] = make__60879340();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__a0_5830_49840220;

SignalI reg__0_49365440_channel__a0_5830_49840220______58_84_46847180______58_840_60584080;

SignalI makereg__0_49365440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_49365440_channel__a0_5830_49840220______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)channel__a0_5830_49840220;
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

SignalI reg__1_49475420_channel__a0_5830_49840220______58_84_46847180______58_840_60584080;

SignalI makereg__1_49475420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_49475420_channel__a0_5830_49840220______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)channel__a0_5830_49840220;
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

Scope anum_5831_49864440;

Behavior __60893520;

Behavior make__60893520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60893520 = behavior;
   behavior->owner = (Object)anum_5831_49864440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_49365440_channel__a0_5830_49840220______58_84_46847180______58_840_60584080);
   reg__0_49365440_channel__a0_5830_49840220______58_84_46847180______58_840_60584080->num_any += 1;
   reg__0_49365440_channel__a0_5830_49840220______58_84_46847180______58_840_60584080->any = realloc(reg__0_49365440_channel__a0_5830_49840220______58_84_46847180______58_840_60584080->any,reg__0_49365440_channel__a0_5830_49840220______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
reg__0_49365440_channel__a0_5830_49840220______58_84_46847180______58_840_60584080->any[reg__0_49365440_channel__a0_5830_49840220______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__60893740();

   return behavior;
}

Behavior __60893240;

Behavior make__60893240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60893240 = behavior;
   behavior->owner = (Object)anum_5831_49864440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5832_53465460_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   _5832_53465460_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   _5832_53465460_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(_5832_53465460_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,_5832_53465460_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
_5832_53465460_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[_5832_53465460_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__60893480();

   return behavior;
}

Behavior __60891780;

Behavior make__60891780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60891780 = behavior;
   behavior->owner = (Object)anum_5831_49864440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_49475420_channel__a0_5830_49840220______58_84_46847180______58_840_60584080);
   reg__1_49475420_channel__a0_5830_49840220______58_84_46847180______58_840_60584080->num_any += 1;
   reg__1_49475420_channel__a0_5830_49840220______58_84_46847180______58_840_60584080->any = realloc(reg__1_49475420_channel__a0_5830_49840220______58_84_46847180______58_840_60584080->any,reg__1_49475420_channel__a0_5830_49840220______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
reg__1_49475420_channel__a0_5830_49840220______58_84_46847180______58_840_60584080->any[reg__1_49475420_channel__a0_5830_49840220______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__60891960();

   return behavior;
}

Behavior __60891560;

Behavior make__60891560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60891560 = behavior;
   behavior->owner = (Object)anum_5831_49864440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5833_53729160_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   _5833_53729160_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   _5833_53729160_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(_5833_53729160_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,_5833_53729160_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
_5833_53729160_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[_5833_53729160_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__60891740();

   return behavior;
}

Scope makeanum_5831_49864440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_5831_49864440 = scope;
   scope->owner = (Object)channel__a0_5830_49840220;
   scope->name = "anum:31";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60893520();
   scope->behaviors[1] = make__60893240();
   scope->behaviors[2] = make__60891780();
   scope->behaviors[3] = make__60891560();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope raddr_5834_47811440;

Scope makeraddr_5834_47811440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5834_47811440 = scope;
   scope->owner = (Object)channel__a0_5830_49840220;
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

Scope waddr_5838_47810760;

Scope makewaddr_5838_47810760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5838_47810760 = scope;
   scope->owner = (Object)channel__a0_5830_49840220;
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

Scope rinc_5842_47809940;

SignalI abus__r_47808900_rinc_5842_47809940_channel__a0_5830_49840220______58_84_46847180______58_840_60584080;

SignalI makeabus__r_47808900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47808900_rinc_5842_47809940_channel__a0_5830_49840220______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)rinc_5842_47809940;
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

Behavior __60909860;

Behavior make__60909860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60909860 = behavior;
   behavior->owner = (Object)rinc_5842_47809940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_47808900_rinc_5842_47809940_channel__a0_5830_49840220______58_84_46847180______58_840_60584080);
   abus__r_47808900_rinc_5842_47809940_channel__a0_5830_49840220______58_84_46847180______58_840_60584080->num_any += 1;
   abus__r_47808900_rinc_5842_47809940_channel__a0_5830_49840220______58_84_46847180______58_840_60584080->any = realloc(abus__r_47808900_rinc_5842_47809940_channel__a0_5830_49840220______58_84_46847180______58_840_60584080->any,abus__r_47808900_rinc_5842_47809940_channel__a0_5830_49840220______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
abus__r_47808900_rinc_5842_47809940_channel__a0_5830_49840220______58_84_46847180______58_840_60584080->any[abus__r_47808900_rinc_5842_47809940_channel__a0_5830_49840220______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__60910040();

   return behavior;
}

Behavior __60909640;

Behavior make__60909640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60909640 = behavior;
   behavior->owner = (Object)rinc_5842_47809940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5845_60282620_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
   _5845_60282620_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any += 1;
   _5845_60282620_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any = realloc(_5845_60282620_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any,_5845_60282620_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
_5845_60282620_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any[_5845_60282620_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__60909820();

   return behavior;
}

Behavior __60909460;

Behavior make__60909460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60909460 = behavior;
   behavior->owner = (Object)rinc_5842_47809940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_49365440_channel__a0_5830_49840220______58_84_46847180______58_840_60584080);
   reg__0_49365440_channel__a0_5830_49840220______58_84_46847180______58_840_60584080->num_any += 1;
   reg__0_49365440_channel__a0_5830_49840220______58_84_46847180______58_840_60584080->any = realloc(reg__0_49365440_channel__a0_5830_49840220______58_84_46847180______58_840_60584080->any,reg__0_49365440_channel__a0_5830_49840220______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
reg__0_49365440_channel__a0_5830_49840220______58_84_46847180______58_840_60584080->any[reg__0_49365440_channel__a0_5830_49840220______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,reg__1_49475420_channel__a0_5830_49840220______58_84_46847180______58_840_60584080);
   reg__1_49475420_channel__a0_5830_49840220______58_84_46847180______58_840_60584080->num_any += 1;
   reg__1_49475420_channel__a0_5830_49840220______58_84_46847180______58_840_60584080->any = realloc(reg__1_49475420_channel__a0_5830_49840220______58_84_46847180______58_840_60584080->any,reg__1_49475420_channel__a0_5830_49840220______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
reg__1_49475420_channel__a0_5830_49840220______58_84_46847180______58_840_60584080->any[reg__1_49475420_channel__a0_5830_49840220______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__60915320();

   return behavior;
}

Scope makerinc_5842_47809940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5842_47809940 = scope;
   scope->owner = (Object)channel__a0_5830_49840220;
   scope->name = "rinc:42";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47808900();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60909860();
   scope->behaviors[1] = make__60909640();
   scope->behaviors[2] = make__60909460();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5846_49271600;

SignalI abus__w_49271220_winc_5846_49271600_channel__a0_5830_49840220______58_84_46847180______58_840_60584080;

SignalI makeabus__w_49271220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49271220_winc_5846_49271600_channel__a0_5830_49840220______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)winc_5846_49271600;
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

Scope makewinc_5846_49271600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5846_49271600 = scope;
   scope->owner = (Object)channel__a0_5830_49840220;
   scope->name = "winc:46";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49271220();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5850_49271100;

SignalI abus__r_49270640_rdec_5850_49271100_channel__a0_5830_49840220______58_84_46847180______58_840_60584080;

SignalI makeabus__r_49270640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49270640_rdec_5850_49271100_channel__a0_5830_49840220______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)rdec_5850_49271100;
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

Scope makerdec_5850_49271100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5850_49271100 = scope;
   scope->owner = (Object)channel__a0_5830_49840220;
   scope->name = "rdec:50";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49270640();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_5855_49270520;

SignalI abus__w_49270100_wdec_5855_49270520_channel__a0_5830_49840220______58_84_46847180______58_840_60584080;

SignalI makeabus__w_49270100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49270100_wdec_5855_49270520_channel__a0_5830_49840220______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)wdec_5855_49270520;
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

Scope makewdec_5855_49270520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5855_49270520 = scope;
   scope->owner = (Object)channel__a0_5830_49840220;
   scope->name = "wdec:55";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49270100();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope makechannel__a0_5830_49840220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__a0_5830_49840220 = scope;
   scope->owner = (Object)_____58_84_46847180;
   scope->name = "channel_a0:30";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_49365440();
   scope->inners[1] = makereg__1_49475420();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_5831_49864440();
   scope->scopes[1] = makeraddr_5834_47811440();
   scope->scopes[2] = makewaddr_5838_47810760();
   scope->scopes[3] = makerinc_5842_47809940();
   scope->scopes[4] = makewinc_5846_49271600();
   scope->scopes[5] = makerdec_5850_49271100();
   scope->scopes[6] = makewdec_5855_49270520();
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__a1_5860_49475300;

SignalI reg__0_49813540_channel__a1_5860_49475300______58_84_46847180______58_840_60584080;

SignalI makereg__0_49813540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_49813540_channel__a1_5860_49475300______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)channel__a1_5860_49475300;
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

Scope anum_5861_49474920;

Behavior __60947720;

Behavior make__60947720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60947720 = behavior;
   behavior->owner = (Object)anum_5861_49474920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_49813540_channel__a1_5860_49475300______58_84_46847180______58_840_60584080);
   reg__0_49813540_channel__a1_5860_49475300______58_84_46847180______58_840_60584080->num_any += 1;
   reg__0_49813540_channel__a1_5860_49475300______58_84_46847180______58_840_60584080->any = realloc(reg__0_49813540_channel__a1_5860_49475300______58_84_46847180______58_840_60584080->any,reg__0_49813540_channel__a1_5860_49475300______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
reg__0_49813540_channel__a1_5860_49475300______58_84_46847180______58_840_60584080->any[reg__0_49813540_channel__a1_5860_49475300______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__60948020();

   return behavior;
}

Behavior __60947500;

Behavior make__60947500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60947500 = behavior;
   behavior->owner = (Object)anum_5861_49474920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5862_60366580_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
   _5862_60366580_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any += 1;
   _5862_60366580_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any = realloc(_5862_60366580_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any,_5862_60366580_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
_5862_60366580_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any[_5862_60366580_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__60947680();

   return behavior;
}

Scope makeanum_5861_49474920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_5861_49474920 = scope;
   scope->owner = (Object)channel__a1_5860_49475300;
   scope->name = "anum:61";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60947720();
   scope->behaviors[1] = make__60947500();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope raddr_5863_49685660;

Scope makeraddr_5863_49685660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5863_49685660 = scope;
   scope->owner = (Object)channel__a1_5860_49475300;
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

Scope waddr_5866_49685240;

Scope makewaddr_5866_49685240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5866_49685240 = scope;
   scope->owner = (Object)channel__a1_5860_49475300;
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

Scope rinc_5869_49684820;

SignalI abus__r_49708700_rinc_5869_49684820_channel__a1_5860_49475300______58_84_46847180______58_840_60584080;

SignalI makeabus__r_49708700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49708700_rinc_5869_49684820_channel__a1_5860_49475300______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)rinc_5869_49684820;
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

Scope makerinc_5869_49684820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5869_49684820 = scope;
   scope->owner = (Object)channel__a1_5860_49475300;
   scope->name = "rinc:69";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49708700();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5872_49708500;

SignalI abus__w_49708100_winc_5872_49708500_channel__a1_5860_49475300______58_84_46847180______58_840_60584080;

SignalI makeabus__w_49708100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49708100_winc_5872_49708500_channel__a1_5860_49475300______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)winc_5872_49708500;
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

Scope makewinc_5872_49708500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5872_49708500 = scope;
   scope->owner = (Object)channel__a1_5860_49475300;
   scope->name = "winc:72";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49708100();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5875_49707960;

SignalI abus__r_49707520_rdec_5875_49707960_channel__a1_5860_49475300______58_84_46847180______58_840_60584080;

SignalI makeabus__r_49707520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49707520_rdec_5875_49707960_channel__a1_5860_49475300______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)rdec_5875_49707960;
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

Scope makerdec_5875_49707960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5875_49707960 = scope;
   scope->owner = (Object)channel__a1_5860_49475300;
   scope->name = "rdec:75";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49707520();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_5879_49707400;

SignalI abus__w_49707020_wdec_5879_49707400_channel__a1_5860_49475300______58_84_46847180______58_840_60584080;

SignalI makeabus__w_49707020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49707020_wdec_5879_49707400_channel__a1_5860_49475300______58_84_46847180______58_840_60584080 = signalI;
   signalI->owner = (Object)wdec_5879_49707400;
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

Scope makewdec_5879_49707400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5879_49707400 = scope;
   scope->owner = (Object)channel__a1_5860_49475300;
   scope->name = "wdec:79";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49707020();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope makechannel__a1_5860_49475300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__a1_5860_49475300 = scope;
   scope->owner = (Object)_____58_84_46847180;
   scope->name = "channel_a1:60";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_49813540();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_5861_49474920();
   scope->scopes[1] = makeraddr_5863_49685660();
   scope->scopes[2] = makewaddr_5866_49685240();
   scope->scopes[3] = makerinc_5869_49684820();
   scope->scopes[4] = makewinc_5872_49708500();
   scope->scopes[5] = makerdec_5875_49707960();
   scope->scopes[6] = makewdec_5879_49707400();
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __60461640;

Behavior make__60461640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60461640 = behavior;
   behavior->owner = (Object)_____58_84_46847180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_49813400______58_84_46847180______58_840_60584080);
   clk_49813400______58_84_46847180______58_840_60584080->num_pos += 1;
   clk_49813400______58_84_46847180______58_840_60584080->pos = realloc(clk_49813400______58_84_46847180______58_840_60584080->pos,clk_49813400______58_84_46847180______58_840_60584080->num_pos*sizeof(Object));
clk_49813400______58_84_46847180______58_840_60584080->pos[clk_49813400______58_84_46847180______58_840_60584080->num_pos-1] = (Object)behavior;
   behavior->block = make__60364300();

   return behavior;
}

Behavior __60584200;

Behavior make__60584200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60584200 = behavior;
   register_timed_behavior(behavior);
   behavior->owner = (Object)_____58_84_46847180;
   behavior->activated = 0;
   behavior->timed = 1;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__60461500();

   return behavior;
}

Behavior __60882100;

Behavior make__60882100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60882100 = behavior;
   behavior->owner = (Object)_____58_84_46847180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_49813400______58_84_46847180______58_840_60584080);
   clk_49813400______58_84_46847180______58_840_60584080->num_any += 1;
   clk_49813400______58_84_46847180______58_840_60584080->any = realloc(clk_49813400______58_84_46847180______58_840_60584080->any,clk_49813400______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
clk_49813400______58_84_46847180______58_840_60584080->any[clk_49813400______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_49813380______58_84_46847180______58_840_60584080);
   rst_49813380______58_84_46847180______58_840_60584080->num_any += 1;
   rst_49813380______58_84_46847180______58_840_60584080->any = realloc(rst_49813380______58_84_46847180______58_840_60584080->any,rst_49813380______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
rst_49813380______58_84_46847180______58_840_60584080->any[rst_49813380______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,fill_49813340______58_84_46847180______58_840_60584080);
   fill_49813340______58_84_46847180______58_840_60584080->num_any += 1;
   fill_49813340______58_84_46847180______58_840_60584080->any = realloc(fill_49813340______58_84_46847180______58_840_60584080->any,fill_49813340______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
fill_49813340______58_84_46847180______58_840_60584080->any[fill_49813340______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,req_49813360______58_84_46847180______58_840_60584080);
   req_49813360______58_84_46847180______58_840_60584080->num_any += 1;
   req_49813360______58_84_46847180______58_840_60584080->any = realloc(req_49813360______58_84_46847180______58_840_60584080->any,req_49813360______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
req_49813360______58_84_46847180______58_840_60584080->any[req_49813360______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__0_49813320______58_84_46847180______58_840_60584080);
   ack__0_49813320______58_84_46847180______58_840_60584080->num_any += 1;
   ack__0_49813320______58_84_46847180______58_840_60584080->any = realloc(ack__0_49813320______58_84_46847180______58_840_60584080->any,ack__0_49813320______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
ack__0_49813320______58_84_46847180______58_840_60584080->any[ack__0_49813320______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__60864420();

   return behavior;
}

Behavior __60881940;

Behavior make__60881940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60881940 = behavior;
   behavior->owner = (Object)_____58_84_46847180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__layer_53312520_layer0_58_840_52923660______58_84_46847180______58_840_60584080);
   ack__layer_53312520_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any += 1;
   ack__layer_53312520_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any = realloc(ack__layer_53312520_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any,ack__layer_53312520_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
ack__layer_53312520_layer0_58_840_52923660______58_84_46847180______58_840_60584080->any[ack__layer_53312520_layer0_58_840_52923660______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__layer_60282720_layer1_58_840_60043460______58_84_46847180______58_840_60584080);
   ack__layer_60282720_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any += 1;
   ack__layer_60282720_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any = realloc(ack__layer_60282720_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any,ack__layer_60282720_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any*sizeof(Object));
ack__layer_60282720_layer1_58_840_60043460______58_84_46847180______58_840_60584080->any[ack__layer_60282720_layer1_58_840_60043460______58_84_46847180______58_840_60584080->num_any-1] = (Object)behavior;
   behavior->block = make__60864360();

   return behavior;
}

Scope make_____58_84_46847180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   _____58_84_46847180 = scope;
   scope->owner = (Object)_____58_840_60584080;
   scope->name = "__:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makelayer0_53728860();
   scope->systemIs[1] = makelayer1_60366460();
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeclk_49813400();
   scope->inners[1] = makerst_49813380();
   scope->inners[2] = makereq_49813360();
   scope->inners[3] = makefill_49813340();
   scope->inners[4] = makeack__0_49813320();
   scope->inners[5] = makeack__1_49813300();
   scope->inners[6] = make_5817_49813280();
   scope->inners[7] = make_5818_49813200();
   scope->inners[8] = make_5819_44700080();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__x_581_46846800();
   scope->scopes[1] = makechannel__a0_5830_49840220();
   scope->scopes[2] = makechannel__a1_5860_49475300();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60461640();
   scope->behaviors[1] = make__60584200();
   scope->behaviors[2] = make__60882100();
   scope->behaviors[3] = make__60881940();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT make_____58_840_60584080() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   _____58_840_60584080 = systemT;
systemT->owner = NULL;
   systemT->name = "__:T0";
   systemT->num_inputs = 0;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->num_outputs = 0;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make_____58_84_46847180();

   return systemT;
}