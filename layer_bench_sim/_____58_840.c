#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT _____58_840_59875700;

Block __59574680;

Block __59574520;

Block __59574200;

void code__59574200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60260220(),_5818_49333580______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__59574200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59574200 = block;
   block->owner = (Object)__59574520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59574200;

   return block;
};

void code__59574520() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49047480______58_84_49385560______58_840_59875700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60219400();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59574200();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60260160(),_5817_49333720______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__59574520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59574520 = block;
   block->owner = (Object)__59574680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59574520;

   return block;
};

Block __59573160;

Block __59573000;

Block __59572680;

void code__59572680() {
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
                  src0 = _5818_49333580______58_84_49385560______58_840_59875700->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60259840();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5818_49333580______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60259740(),_5817_49333720______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60259680(),_5819_48809800______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__59572680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59572680 = block;
   block->owner = (Object)__59573000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59572680;

   return block;
};

void code__59573000() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49047480______58_84_49385560______58_840_59875700->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60259980();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59572680();
   }
      }
   }
}

Block make__59573000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59573000 = block;
   block->owner = (Object)__59573160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59573000;

   return block;
};

void code__59573160() {
 code__59573000();
}

Block make__59573160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59573160 = block;
   block->owner = (Object)__59574680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59573160;

   return block;
};

void code__59574680() {
 code__59574520();
   {
      Value cond = fill_49047400______58_84_49385560______58_840_59875700->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59573160();
   }
      }
   }
}

Block make__59574680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59574680 = block;
   block->owner = (Object)__59777920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59574680;

   return block;
};

Block __59777780;

void code__59777780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60259620(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60259560(),rst_49047480______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60259500(),req_49047460______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60259440(),fill_49047400______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60259380(),rst_49047480______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60259320(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60259260(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60259200(),rst_49047480______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60259140(),fill_49047400______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60259060(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60259000(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60258920(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60258860(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60258780(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60258680(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60258620(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60258560(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60258500(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60258440(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60258380(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60258320(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60258260(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60258200(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60258120(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60258040(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60257980(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60257920(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60257800(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60257740(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60257680(),fill_49047400______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60257620(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60257560(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60257500(),req_49047460______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60257440(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60257380(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60257320(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60257260(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60257200(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60257140(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60257080(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60257020(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60256940(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60256860(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60256800(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60256720(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60256620(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60256560(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60256500(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60256440(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60256380(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60256320(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60256260(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60256200(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60256140(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60256080(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60256020(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60255940(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60255860(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60255800(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60255740(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60255620(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60255560(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60255500(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60255440(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60255380(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60255320(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60255260(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60255200(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60255140(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60255080(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60255020(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60254960(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60254880(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60254800(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60254740(),clk_49047500______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59875860);
}

Block make__59777780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59777780 = block;
   block->owner = (Object)__59875860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59777780;

   return block;
};

Block __59959540;

void code__59959540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_49047500______58_84_49385560______58_840_59875700->c_value,clk_53023560_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_49047480______58_84_49385560______58_840_59875700->c_value,rst_53023500_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(fill_49047400______58_84_49385560______58_840_59875700->c_value,fill_53023480_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(req_49047460______58_84_49385560______58_840_59875700->c_value,req_53023460_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_49047500______58_84_49385560______58_840_59875700->c_value,clk_59577080_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_49047480______58_84_49385560______58_840_59875700->c_value,rst_59577060_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(fill_49047400______58_84_49385560______58_840_59875700->c_value,fill_59577040_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__0_49047440______58_84_49385560______58_840_59875700->c_value,req_59577020_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__59959540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59959540 = block;
   block->owner = (Object)__60091720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59959540;

   return block;
};

Block __59959480;

void code__59959480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__0_53023420_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->c_value,ack__0_49047440______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__1_59576980_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->c_value,ack__1_49047420______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__59959480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59959480 = block;
   block->owner = (Object)__60091560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59959480;

   return block;
};

Block __45581480;

Block __47848560;

void code__47848560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_49532480_channel__x_581_49385260______58_84_49385560______58_840_59875700->c_value,make_ref_rangeS(mem_49600560_channel__x_581_49385260______58_84_49385560______58_840_59875700,value2integer(abus__w_49532320_channel__x_581_49385260______58_84_49385560______58_840_59875700->c_value),value2integer(abus__w_49532320_channel__x_581_49385260______58_84_49385560______58_840_59875700->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__47848560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47848560 = block;
   block->owner = (Object)__45581480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47848560;

   return block;
};

void code__45581480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_49600560_channel__x_581_49385260______58_84_49385560______58_840_59875700->c_value;
            idx = value2integer(abus__r_49532400_channel__x_581_49385260______58_84_49385560______58_840_59875700->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_49467820_channel__x_581_49385260______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_49404640_channel__x_581_49385260______58_84_49385560______58_840_59875700->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47848560();
   }
      }
   }
}

Block make__45581480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45581480 = block;
   block->owner = (Object)__49338980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45581480;

   return block;
};

Block __60090800;

void code__60090800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_49467820_channel__x_581_49385260______58_84_49385560______58_840_59875700->c_value,_5815_49334140______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__60090800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60090800 = block;
   block->owner = (Object)__60090580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60090800;

   return block;
};

Block __60090540;

void code__60090540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5815_49334140______58_84_49385560______58_840_59875700->c_value,dbus__r_49467820_channel__x_581_49385260______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__60090540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60090540 = block;
   block->owner = (Object)__60090380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60090540;

   return block;
};

Block __60090080;

void code__60090080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_49404660_channel__x_581_49385260______58_84_49385560______58_840_59875700->c_value,_5813_49333820______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__60090080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60090080 = block;
   block->owner = (Object)__60089880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60090080;

   return block;
};

Block __60089840;

void code__60089840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5813_49333820______58_84_49385560______58_840_59875700->c_value,trig__r_49404660_channel__x_581_49385260______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__60089840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60089840 = block;
   block->owner = (Object)__60089620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60089840;

   return block;
};

Block __60089320;

void code__60089320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_49532400_channel__x_581_49385260______58_84_49385560______58_840_59875700->c_value,_5814_49333740______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__60089320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60089320 = block;
   block->owner = (Object)__60089160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60089320;

   return block;
};

Block __60089120;

void code__60089120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5814_49333740______58_84_49385560______58_840_59875700->c_value,abus__r_49532400_channel__x_581_49385260______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__60089120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60089120 = block;
   block->owner = (Object)__60088960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60089120;

   return block;
};

Block __60088620;

void code__60088620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_49404640_channel__x_581_49385260______58_84_49385560______58_840_59875700->c_value,_5817_49333720______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__60088620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60088620 = block;
   block->owner = (Object)__60088400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60088620;

   return block;
};

Block __60088360;

void code__60088360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5817_49333720______58_84_49385560______58_840_59875700->c_value,trig__w_49404640_channel__x_581_49385260______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__60088360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60088360 = block;
   block->owner = (Object)__60129120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60088360;

   return block;
};

Block __60128800;

void code__60128800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_49532320_channel__x_581_49385260______58_84_49385560______58_840_59875700->c_value,_5818_49333580______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__60128800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60128800 = block;
   block->owner = (Object)__60128620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60128800;

   return block;
};

Block __60128560;

void code__60128560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5818_49333580______58_84_49385560______58_840_59875700->c_value,abus__w_49532320_channel__x_581_49385260______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__60128560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60128560 = block;
   block->owner = (Object)__60128360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60128560;

   return block;
};

Block __60128060;

void code__60128060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_49532480_channel__x_581_49385260______58_84_49385560______58_840_59875700->c_value,_5819_48809800______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__60128060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60128060 = block;
   block->owner = (Object)__60127900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60128060;

   return block;
};

Block __60127860;

void code__60127860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5819_48809800______58_84_49385560______58_840_59875700->c_value,dbus__w_49532480_channel__x_581_49385260______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__60127860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60127860 = block;
   block->owner = (Object)__60127700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60127860;

   return block;
};

Block __60125980;

void code__60125980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_48811340_channel__a0_5830_49338820______58_84_49385560______58_840_59875700->c_value,_5832_49416940______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__60125980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60125980 = block;
   block->owner = (Object)__60125820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60125980;

   return block;
};

Block __60125780;

void code__60125780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5832_49416940______58_84_49385560______58_840_59875700->c_value,reg__0_48811340_channel__a0_5830_49338820______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__60125780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60125780 = block;
   block->owner = (Object)__60125620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60125780;

   return block;
};

Block __60125280;

void code__60125280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_49419280_channel__a0_5830_49338820______58_84_49385560______58_840_59875700->c_value,_5833_49499780______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__60125280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60125280 = block;
   block->owner = (Object)__60125100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60125280;

   return block;
};

Block __60125020;

void code__60125020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5833_49499780______58_84_49385560______58_840_59875700->c_value,reg__1_49419280_channel__a0_5830_49338820______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__60125020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60125020 = block;
   block->owner = (Object)__60124860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60125020;

   return block;
};

Block __60124520;

void code__60124520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_48811340_channel__a0_5830_49338820______58_84_49385560______58_840_59875700->c_value,_5843_49564460______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__60124520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60124520 = block;
   block->owner = (Object)__60124300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60124520;

   return block;
};

Block __60124260;

void code__60124260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5843_49564460______58_84_49385560______58_840_59875700->c_value,reg__0_48811340_channel__a0_5830_49338820______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__60124260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60124260 = block;
   block->owner = (Object)__60124100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60124260;

   return block;
};

Block __60123800;

void code__60123800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_49419280_channel__a0_5830_49338820______58_84_49385560______58_840_59875700->c_value,_5844_49675760______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__60123800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60123800 = block;
   block->owner = (Object)__60123640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60123800;

   return block;
};

Block __60123600;

void code__60123600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5844_49675760______58_84_49385560______58_840_59875700->c_value,reg__1_49419280_channel__a0_5830_49338820______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__60123600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60123600 = block;
   block->owner = (Object)__60123440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60123600;

   return block;
};

Block __60121760;

void code__60121760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_49333660_rinc_5842_49334360_channel__a0_5830_49338820______58_84_49385560______58_840_59875700->c_value,_5845_49675680______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__60121760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60121760 = block;
   block->owner = (Object)__60121600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60121760;

   return block;
};

Block __60121560;

void code__60121560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5845_49675680______58_84_49385560______58_840_59875700->c_value,abus__r_49333660_rinc_5842_49334360_channel__a0_5830_49338820______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__60121560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60121560 = block;
   block->owner = (Object)__60121400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60121560;

   return block;
};

Block __60144520;

void code__60144520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_47779980_channel__a1_5860_47525880______58_84_49385560______58_840_59875700->c_value,_5862_49756620______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__60144520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60144520 = block;
   block->owner = (Object)__60144360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60144520;

   return block;
};

Block __60144320;

void code__60144320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5862_49756620______58_84_49385560______58_840_59875700->c_value,reg__0_47779980_channel__a1_5860_47525880______58_84_49385560______58_840_59875700);
      set_value_pos(pool_state);
   }
}

Block make__60144320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60144320 = block;
   block->owner = (Object)__60144160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60144320;

   return block;
};

Value make__60219400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60260220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60260160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60259980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60259840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60259740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60259680() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60259620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60259560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60259500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60259440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60259380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60259320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60259260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60259200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60259140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60259060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60259000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60258920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60258860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60258780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60258680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60258620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60258560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60258500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60258440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60258380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60258320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60258260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60258200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60258120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60258040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60257980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60257920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60257800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60257740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60257680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60257620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60257560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60257500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60257440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60257380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60257320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60257260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60257200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60257140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60257080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60257020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60256940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60256860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60256800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60256720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60256620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60256560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60256500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60256440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60256380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60256320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60256260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60256200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60256140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60256080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60256020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60255940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60255860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60255800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60255740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60255620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60255560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60255500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60255440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60255380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60255320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60255260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60255200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60255140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60255080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60255020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60254960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60254880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60254800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60254740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope _____58_84_49385560;

SignalI clk_49047500______58_84_49385560______58_840_59875700;

SignalI makeclk_49047500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_49047500______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)_____58_84_49385560;
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

SignalI rst_49047480______58_84_49385560______58_840_59875700;

SignalI makerst_49047480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_49047480______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)_____58_84_49385560;
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

SignalI req_49047460______58_84_49385560______58_840_59875700;

SignalI makereq_49047460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_49047460______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)_____58_84_49385560;
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

SignalI ack__0_49047440______58_84_49385560______58_840_59875700;

SignalI makeack__0_49047440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__0_49047440______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)_____58_84_49385560;
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

SignalI ack__1_49047420______58_84_49385560______58_840_59875700;

SignalI makeack__1_49047420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__1_49047420______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)_____58_84_49385560;
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

SignalI fill_49047400______58_84_49385560______58_840_59875700;

SignalI makefill_49047400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_49047400______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)_____58_84_49385560;
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

SignalI _5815_49334140______58_84_49385560______58_840_59875700;

SignalI make_5815_49334140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5815_49334140______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)_____58_84_49385560;
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

SignalI _5813_49333820______58_84_49385560______58_840_59875700;

SignalI make_5813_49333820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5813_49333820______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)_____58_84_49385560;
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

SignalI _5814_49333740______58_84_49385560______58_840_59875700;

SignalI make_5814_49333740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5814_49333740______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)_____58_84_49385560;
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

SignalI _5817_49333720______58_84_49385560______58_840_59875700;

SignalI make_5817_49333720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5817_49333720______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)_____58_84_49385560;
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

SignalI _5818_49333580______58_84_49385560______58_840_59875700;

SignalI make_5818_49333580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5818_49333580______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)_____58_84_49385560;
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

SignalI _5819_48809800______58_84_49385560______58_840_59875700;

SignalI make_5819_48809800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5819_48809800______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)_____58_84_49385560;
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

SignalI _5832_49416940______58_84_49385560______58_840_59875700;

SignalI make_5832_49416940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5832_49416940______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)_____58_84_49385560;
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

SignalI _5833_49499780______58_84_49385560______58_840_59875700;

SignalI make_5833_49499780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5833_49499780______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)_____58_84_49385560;
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

SignalI _5843_49564460______58_84_49385560______58_840_59875700;

SignalI make_5843_49564460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5843_49564460______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)_____58_84_49385560;
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

SignalI _5844_49675760______58_84_49385560______58_840_59875700;

SignalI make_5844_49675760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5844_49675760______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)_____58_84_49385560;
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

SignalI _5845_49675680______58_84_49385560______58_840_59875700;

SignalI make_5845_49675680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5845_49675680______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)_____58_84_49385560;
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

SignalI _5862_49756620______58_84_49385560______58_840_59875700;

SignalI make_5862_49756620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5862_49756620______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)_____58_84_49385560;
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

SystemI layer__hidden_53023260;

SystemI makelayer__hidden_53023260() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer__hidden_53023260 = systemI;
   systemI->owner = (Object)_____58_84_49385560;
   systemI->name = "layer_hidden";
   systemI->system = layer__hidden_58_840_52985960;

   return systemI;
};

SystemI layer__output_59576840;

SystemI makelayer__output_59576840() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer__output_59576840 = systemI;
   systemI->owner = (Object)_____58_84_49385560;
   systemI->name = "layer_output";
   systemI->system = layer__output_58_840_59579120;

   return systemI;
};

Scope channel__x_581_49385260;

SignalI trig__r_49404660_channel__x_581_49385260______58_84_49385560______58_840_59875700;

SignalI maketrig__r_49404660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_49404660_channel__x_581_49385260______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)channel__x_581_49385260;
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

SignalI trig__w_49404640_channel__x_581_49385260______58_84_49385560______58_840_59875700;

SignalI maketrig__w_49404640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_49404640_channel__x_581_49385260______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)channel__x_581_49385260;
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

SignalI dbus__r_49467820_channel__x_581_49385260______58_84_49385560______58_840_59875700;

SignalI makedbus__r_49467820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_49467820_channel__x_581_49385260______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)channel__x_581_49385260;
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

SignalI dbus__w_49532480_channel__x_581_49385260______58_84_49385560______58_840_59875700;

SignalI makedbus__w_49532480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_49532480_channel__x_581_49385260______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)channel__x_581_49385260;
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

SignalI abus__r_49532400_channel__x_581_49385260______58_84_49385560______58_840_59875700;

SignalI makeabus__r_49532400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49532400_channel__x_581_49385260______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)channel__x_581_49385260;
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

SignalI abus__w_49532320_channel__x_581_49385260______58_84_49385560______58_840_59875700;

SignalI makeabus__w_49532320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49532320_channel__x_581_49385260______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)channel__x_581_49385260;
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

SignalI mem_49600560_channel__x_581_49385260______58_84_49385560______58_840_59875700;

SignalI makemem_49600560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_49600560_channel__x_581_49385260______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)channel__x_581_49385260;
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

Scope raddr_582_49384960;

Scope makeraddr_582_49384960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_582_49384960 = scope;
   scope->owner = (Object)channel__x_581_49385260;
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

Scope waddr_587_49384540;

Scope makewaddr_587_49384540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_587_49384540 = scope;
   scope->owner = (Object)channel__x_581_49385260;
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

Scope rinc_5812_49382600;

Scope makerinc_5812_49382600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5812_49382600 = scope;
   scope->owner = (Object)channel__x_581_49385260;
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

Scope winc_5816_49381400;

Scope makewinc_5816_49381400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5816_49381400 = scope;
   scope->owner = (Object)channel__x_581_49385260;
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

Scope rdec_5820_49405520;

Scope makerdec_5820_49405520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5820_49405520 = scope;
   scope->owner = (Object)channel__x_581_49385260;
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

Scope wdec_5825_49405100;

Scope makewdec_5825_49405100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5825_49405100 = scope;
   scope->owner = (Object)channel__x_581_49385260;
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

Behavior __49338980;

Behavior make__49338980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49338980 = behavior;
   behavior->owner = (Object)channel__x_581_49385260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_49047500______58_84_49385560______58_840_59875700);
   clk_49047500______58_84_49385560______58_840_59875700->num_neg += 1;
   clk_49047500______58_84_49385560______58_840_59875700->neg = realloc(clk_49047500______58_84_49385560______58_840_59875700->neg,clk_49047500______58_84_49385560______58_840_59875700->num_neg*sizeof(Object));
clk_49047500______58_84_49385560______58_840_59875700->neg[clk_49047500______58_84_49385560______58_840_59875700->num_neg-1] = (Object)behavior;
   behavior->block = make__45581480();

   return behavior;
}

Behavior __60090580;

Behavior make__60090580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60090580 = behavior;
   behavior->owner = (Object)channel__x_581_49385260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_49467820_channel__x_581_49385260______58_84_49385560______58_840_59875700);
   dbus__r_49467820_channel__x_581_49385260______58_84_49385560______58_840_59875700->num_any += 1;
   dbus__r_49467820_channel__x_581_49385260______58_84_49385560______58_840_59875700->any = realloc(dbus__r_49467820_channel__x_581_49385260______58_84_49385560______58_840_59875700->any,dbus__r_49467820_channel__x_581_49385260______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
dbus__r_49467820_channel__x_581_49385260______58_84_49385560______58_840_59875700->any[dbus__r_49467820_channel__x_581_49385260______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__60090800();

   return behavior;
}

Behavior __60090380;

Behavior make__60090380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60090380 = behavior;
   behavior->owner = (Object)channel__x_581_49385260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5815_49334140______58_84_49385560______58_840_59875700);
   _5815_49334140______58_84_49385560______58_840_59875700->num_any += 1;
   _5815_49334140______58_84_49385560______58_840_59875700->any = realloc(_5815_49334140______58_84_49385560______58_840_59875700->any,_5815_49334140______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
_5815_49334140______58_84_49385560______58_840_59875700->any[_5815_49334140______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__60090540();

   return behavior;
}

Behavior __60089880;

Behavior make__60089880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60089880 = behavior;
   behavior->owner = (Object)channel__x_581_49385260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_49404660_channel__x_581_49385260______58_84_49385560______58_840_59875700);
   trig__r_49404660_channel__x_581_49385260______58_84_49385560______58_840_59875700->num_any += 1;
   trig__r_49404660_channel__x_581_49385260______58_84_49385560______58_840_59875700->any = realloc(trig__r_49404660_channel__x_581_49385260______58_84_49385560______58_840_59875700->any,trig__r_49404660_channel__x_581_49385260______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
trig__r_49404660_channel__x_581_49385260______58_84_49385560______58_840_59875700->any[trig__r_49404660_channel__x_581_49385260______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__60090080();

   return behavior;
}

Behavior __60089620;

Behavior make__60089620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60089620 = behavior;
   behavior->owner = (Object)channel__x_581_49385260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5813_49333820______58_84_49385560______58_840_59875700);
   _5813_49333820______58_84_49385560______58_840_59875700->num_any += 1;
   _5813_49333820______58_84_49385560______58_840_59875700->any = realloc(_5813_49333820______58_84_49385560______58_840_59875700->any,_5813_49333820______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
_5813_49333820______58_84_49385560______58_840_59875700->any[_5813_49333820______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__60089840();

   return behavior;
}

Behavior __60089160;

Behavior make__60089160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60089160 = behavior;
   behavior->owner = (Object)channel__x_581_49385260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_49532400_channel__x_581_49385260______58_84_49385560______58_840_59875700);
   abus__r_49532400_channel__x_581_49385260______58_84_49385560______58_840_59875700->num_any += 1;
   abus__r_49532400_channel__x_581_49385260______58_84_49385560______58_840_59875700->any = realloc(abus__r_49532400_channel__x_581_49385260______58_84_49385560______58_840_59875700->any,abus__r_49532400_channel__x_581_49385260______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
abus__r_49532400_channel__x_581_49385260______58_84_49385560______58_840_59875700->any[abus__r_49532400_channel__x_581_49385260______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__60089320();

   return behavior;
}

Behavior __60088960;

Behavior make__60088960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60088960 = behavior;
   behavior->owner = (Object)channel__x_581_49385260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5814_49333740______58_84_49385560______58_840_59875700);
   _5814_49333740______58_84_49385560______58_840_59875700->num_any += 1;
   _5814_49333740______58_84_49385560______58_840_59875700->any = realloc(_5814_49333740______58_84_49385560______58_840_59875700->any,_5814_49333740______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
_5814_49333740______58_84_49385560______58_840_59875700->any[_5814_49333740______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__60089120();

   return behavior;
}

Behavior __60088400;

Behavior make__60088400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60088400 = behavior;
   behavior->owner = (Object)channel__x_581_49385260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_49404640_channel__x_581_49385260______58_84_49385560______58_840_59875700);
   trig__w_49404640_channel__x_581_49385260______58_84_49385560______58_840_59875700->num_any += 1;
   trig__w_49404640_channel__x_581_49385260______58_84_49385560______58_840_59875700->any = realloc(trig__w_49404640_channel__x_581_49385260______58_84_49385560______58_840_59875700->any,trig__w_49404640_channel__x_581_49385260______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
trig__w_49404640_channel__x_581_49385260______58_84_49385560______58_840_59875700->any[trig__w_49404640_channel__x_581_49385260______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__60088620();

   return behavior;
}

Behavior __60129120;

Behavior make__60129120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60129120 = behavior;
   behavior->owner = (Object)channel__x_581_49385260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5817_49333720______58_84_49385560______58_840_59875700);
   _5817_49333720______58_84_49385560______58_840_59875700->num_any += 1;
   _5817_49333720______58_84_49385560______58_840_59875700->any = realloc(_5817_49333720______58_84_49385560______58_840_59875700->any,_5817_49333720______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
_5817_49333720______58_84_49385560______58_840_59875700->any[_5817_49333720______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__60088360();

   return behavior;
}

Behavior __60128620;

Behavior make__60128620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60128620 = behavior;
   behavior->owner = (Object)channel__x_581_49385260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_49532320_channel__x_581_49385260______58_84_49385560______58_840_59875700);
   abus__w_49532320_channel__x_581_49385260______58_84_49385560______58_840_59875700->num_any += 1;
   abus__w_49532320_channel__x_581_49385260______58_84_49385560______58_840_59875700->any = realloc(abus__w_49532320_channel__x_581_49385260______58_84_49385560______58_840_59875700->any,abus__w_49532320_channel__x_581_49385260______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
abus__w_49532320_channel__x_581_49385260______58_84_49385560______58_840_59875700->any[abus__w_49532320_channel__x_581_49385260______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__60128800();

   return behavior;
}

Behavior __60128360;

Behavior make__60128360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60128360 = behavior;
   behavior->owner = (Object)channel__x_581_49385260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5818_49333580______58_84_49385560______58_840_59875700);
   _5818_49333580______58_84_49385560______58_840_59875700->num_any += 1;
   _5818_49333580______58_84_49385560______58_840_59875700->any = realloc(_5818_49333580______58_84_49385560______58_840_59875700->any,_5818_49333580______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
_5818_49333580______58_84_49385560______58_840_59875700->any[_5818_49333580______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__60128560();

   return behavior;
}

Behavior __60127900;

Behavior make__60127900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60127900 = behavior;
   behavior->owner = (Object)channel__x_581_49385260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_49532480_channel__x_581_49385260______58_84_49385560______58_840_59875700);
   dbus__w_49532480_channel__x_581_49385260______58_84_49385560______58_840_59875700->num_any += 1;
   dbus__w_49532480_channel__x_581_49385260______58_84_49385560______58_840_59875700->any = realloc(dbus__w_49532480_channel__x_581_49385260______58_84_49385560______58_840_59875700->any,dbus__w_49532480_channel__x_581_49385260______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
dbus__w_49532480_channel__x_581_49385260______58_84_49385560______58_840_59875700->any[dbus__w_49532480_channel__x_581_49385260______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__60128060();

   return behavior;
}

Behavior __60127700;

Behavior make__60127700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60127700 = behavior;
   behavior->owner = (Object)channel__x_581_49385260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5819_48809800______58_84_49385560______58_840_59875700);
   _5819_48809800______58_84_49385560______58_840_59875700->num_any += 1;
   _5819_48809800______58_84_49385560______58_840_59875700->any = realloc(_5819_48809800______58_84_49385560______58_840_59875700->any,_5819_48809800______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
_5819_48809800______58_84_49385560______58_840_59875700->any[_5819_48809800______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__60127860();

   return behavior;
}

Scope makechannel__x_581_49385260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__x_581_49385260 = scope;
   scope->owner = (Object)_____58_84_49385560;
   scope->name = "channel_x:1";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_49404660();
   scope->inners[1] = maketrig__w_49404640();
   scope->inners[2] = makedbus__r_49467820();
   scope->inners[3] = makedbus__w_49532480();
   scope->inners[4] = makeabus__r_49532400();
   scope->inners[5] = makeabus__w_49532320();
   scope->inners[6] = makemem_49600560();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_582_49384960();
   scope->scopes[1] = makewaddr_587_49384540();
   scope->scopes[2] = makerinc_5812_49382600();
   scope->scopes[3] = makewinc_5816_49381400();
   scope->scopes[4] = makerdec_5820_49405520();
   scope->scopes[5] = makewdec_5825_49405100();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49338980();
   scope->behaviors[1] = make__60090580();
   scope->behaviors[2] = make__60090380();
   scope->behaviors[3] = make__60089880();
   scope->behaviors[4] = make__60089620();
   scope->behaviors[5] = make__60089160();
   scope->behaviors[6] = make__60088960();
   scope->behaviors[7] = make__60088400();
   scope->behaviors[8] = make__60129120();
   scope->behaviors[9] = make__60128620();
   scope->behaviors[10] = make__60128360();
   scope->behaviors[11] = make__60127900();
   scope->behaviors[12] = make__60127700();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__a0_5830_49338820;

SignalI reg__0_48811340_channel__a0_5830_49338820______58_84_49385560______58_840_59875700;

SignalI makereg__0_48811340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_48811340_channel__a0_5830_49338820______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)channel__a0_5830_49338820;
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

SignalI reg__1_49419280_channel__a0_5830_49338820______58_84_49385560______58_840_59875700;

SignalI makereg__1_49419280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_49419280_channel__a0_5830_49338820______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)channel__a0_5830_49338820;
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

Scope anum_5831_49336760;

Scope makeanum_5831_49336760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_5831_49336760 = scope;
   scope->owner = (Object)channel__a0_5830_49338820;
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

Scope raddr_5834_49335520;

Scope makeraddr_5834_49335520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5834_49335520 = scope;
   scope->owner = (Object)channel__a0_5830_49338820;
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

Scope waddr_5838_49334960;

Scope makewaddr_5838_49334960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5838_49334960 = scope;
   scope->owner = (Object)channel__a0_5830_49338820;
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

Scope rinc_5842_49334360;

SignalI abus__r_49333660_rinc_5842_49334360_channel__a0_5830_49338820______58_84_49385560______58_840_59875700;

SignalI makeabus__r_49333660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49333660_rinc_5842_49334360_channel__a0_5830_49338820______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)rinc_5842_49334360;
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

Behavior __60121600;

Behavior make__60121600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60121600 = behavior;
   behavior->owner = (Object)rinc_5842_49334360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_49333660_rinc_5842_49334360_channel__a0_5830_49338820______58_84_49385560______58_840_59875700);
   abus__r_49333660_rinc_5842_49334360_channel__a0_5830_49338820______58_84_49385560______58_840_59875700->num_any += 1;
   abus__r_49333660_rinc_5842_49334360_channel__a0_5830_49338820______58_84_49385560______58_840_59875700->any = realloc(abus__r_49333660_rinc_5842_49334360_channel__a0_5830_49338820______58_84_49385560______58_840_59875700->any,abus__r_49333660_rinc_5842_49334360_channel__a0_5830_49338820______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
abus__r_49333660_rinc_5842_49334360_channel__a0_5830_49338820______58_84_49385560______58_840_59875700->any[abus__r_49333660_rinc_5842_49334360_channel__a0_5830_49338820______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__60121760();

   return behavior;
}

Behavior __60121400;

Behavior make__60121400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60121400 = behavior;
   behavior->owner = (Object)rinc_5842_49334360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5845_49675680______58_84_49385560______58_840_59875700);
   _5845_49675680______58_84_49385560______58_840_59875700->num_any += 1;
   _5845_49675680______58_84_49385560______58_840_59875700->any = realloc(_5845_49675680______58_84_49385560______58_840_59875700->any,_5845_49675680______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
_5845_49675680______58_84_49385560______58_840_59875700->any[_5845_49675680______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__60121560();

   return behavior;
}

Scope makerinc_5842_49334360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5842_49334360 = scope;
   scope->owner = (Object)channel__a0_5830_49338820;
   scope->name = "rinc:42";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49333660();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60121600();
   scope->behaviors[1] = make__60121400();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5846_49356540;

SignalI abus__w_49354980_winc_5846_49356540_channel__a0_5830_49338820______58_84_49385560______58_840_59875700;

SignalI makeabus__w_49354980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49354980_winc_5846_49356540_channel__a0_5830_49338820______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)winc_5846_49356540;
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

Scope makewinc_5846_49356540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5846_49356540 = scope;
   scope->owner = (Object)channel__a0_5830_49338820;
   scope->name = "winc:46";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49354980();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5850_49354760;

SignalI abus__r_49354340_rdec_5850_49354760_channel__a0_5830_49338820______58_84_49385560______58_840_59875700;

SignalI makeabus__r_49354340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49354340_rdec_5850_49354760_channel__a0_5830_49338820______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)rdec_5850_49354760;
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

Scope makerdec_5850_49354760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5850_49354760 = scope;
   scope->owner = (Object)channel__a0_5830_49338820;
   scope->name = "rdec:50";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49354340();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_5855_49354220;

SignalI abus__w_49353840_wdec_5855_49354220_channel__a0_5830_49338820______58_84_49385560______58_840_59875700;

SignalI makeabus__w_49353840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49353840_wdec_5855_49354220_channel__a0_5830_49338820______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)wdec_5855_49354220;
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

Scope makewdec_5855_49354220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5855_49354220 = scope;
   scope->owner = (Object)channel__a0_5830_49338820;
   scope->name = "wdec:55";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49353840();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __60125820;

Behavior make__60125820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60125820 = behavior;
   behavior->owner = (Object)channel__a0_5830_49338820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_48811340_channel__a0_5830_49338820______58_84_49385560______58_840_59875700);
   reg__0_48811340_channel__a0_5830_49338820______58_84_49385560______58_840_59875700->num_any += 1;
   reg__0_48811340_channel__a0_5830_49338820______58_84_49385560______58_840_59875700->any = realloc(reg__0_48811340_channel__a0_5830_49338820______58_84_49385560______58_840_59875700->any,reg__0_48811340_channel__a0_5830_49338820______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
reg__0_48811340_channel__a0_5830_49338820______58_84_49385560______58_840_59875700->any[reg__0_48811340_channel__a0_5830_49338820______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__60125980();

   return behavior;
}

Behavior __60125620;

Behavior make__60125620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60125620 = behavior;
   behavior->owner = (Object)channel__a0_5830_49338820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5832_49416940______58_84_49385560______58_840_59875700);
   _5832_49416940______58_84_49385560______58_840_59875700->num_any += 1;
   _5832_49416940______58_84_49385560______58_840_59875700->any = realloc(_5832_49416940______58_84_49385560______58_840_59875700->any,_5832_49416940______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
_5832_49416940______58_84_49385560______58_840_59875700->any[_5832_49416940______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__60125780();

   return behavior;
}

Behavior __60125100;

Behavior make__60125100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60125100 = behavior;
   behavior->owner = (Object)channel__a0_5830_49338820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_49419280_channel__a0_5830_49338820______58_84_49385560______58_840_59875700);
   reg__1_49419280_channel__a0_5830_49338820______58_84_49385560______58_840_59875700->num_any += 1;
   reg__1_49419280_channel__a0_5830_49338820______58_84_49385560______58_840_59875700->any = realloc(reg__1_49419280_channel__a0_5830_49338820______58_84_49385560______58_840_59875700->any,reg__1_49419280_channel__a0_5830_49338820______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
reg__1_49419280_channel__a0_5830_49338820______58_84_49385560______58_840_59875700->any[reg__1_49419280_channel__a0_5830_49338820______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__60125280();

   return behavior;
}

Behavior __60124860;

Behavior make__60124860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60124860 = behavior;
   behavior->owner = (Object)channel__a0_5830_49338820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5833_49499780______58_84_49385560______58_840_59875700);
   _5833_49499780______58_84_49385560______58_840_59875700->num_any += 1;
   _5833_49499780______58_84_49385560______58_840_59875700->any = realloc(_5833_49499780______58_84_49385560______58_840_59875700->any,_5833_49499780______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
_5833_49499780______58_84_49385560______58_840_59875700->any[_5833_49499780______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__60125020();

   return behavior;
}

Behavior __60124300;

Behavior make__60124300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60124300 = behavior;
   behavior->owner = (Object)channel__a0_5830_49338820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_48811340_channel__a0_5830_49338820______58_84_49385560______58_840_59875700);
   reg__0_48811340_channel__a0_5830_49338820______58_84_49385560______58_840_59875700->num_any += 1;
   reg__0_48811340_channel__a0_5830_49338820______58_84_49385560______58_840_59875700->any = realloc(reg__0_48811340_channel__a0_5830_49338820______58_84_49385560______58_840_59875700->any,reg__0_48811340_channel__a0_5830_49338820______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
reg__0_48811340_channel__a0_5830_49338820______58_84_49385560______58_840_59875700->any[reg__0_48811340_channel__a0_5830_49338820______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__60124520();

   return behavior;
}

Behavior __60124100;

Behavior make__60124100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60124100 = behavior;
   behavior->owner = (Object)channel__a0_5830_49338820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5843_49564460______58_84_49385560______58_840_59875700);
   _5843_49564460______58_84_49385560______58_840_59875700->num_any += 1;
   _5843_49564460______58_84_49385560______58_840_59875700->any = realloc(_5843_49564460______58_84_49385560______58_840_59875700->any,_5843_49564460______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
_5843_49564460______58_84_49385560______58_840_59875700->any[_5843_49564460______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__60124260();

   return behavior;
}

Behavior __60123640;

Behavior make__60123640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60123640 = behavior;
   behavior->owner = (Object)channel__a0_5830_49338820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_49419280_channel__a0_5830_49338820______58_84_49385560______58_840_59875700);
   reg__1_49419280_channel__a0_5830_49338820______58_84_49385560______58_840_59875700->num_any += 1;
   reg__1_49419280_channel__a0_5830_49338820______58_84_49385560______58_840_59875700->any = realloc(reg__1_49419280_channel__a0_5830_49338820______58_84_49385560______58_840_59875700->any,reg__1_49419280_channel__a0_5830_49338820______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
reg__1_49419280_channel__a0_5830_49338820______58_84_49385560______58_840_59875700->any[reg__1_49419280_channel__a0_5830_49338820______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__60123800();

   return behavior;
}

Behavior __60123440;

Behavior make__60123440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60123440 = behavior;
   behavior->owner = (Object)channel__a0_5830_49338820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5844_49675760______58_84_49385560______58_840_59875700);
   _5844_49675760______58_84_49385560______58_840_59875700->num_any += 1;
   _5844_49675760______58_84_49385560______58_840_59875700->any = realloc(_5844_49675760______58_84_49385560______58_840_59875700->any,_5844_49675760______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
_5844_49675760______58_84_49385560______58_840_59875700->any[_5844_49675760______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__60123600();

   return behavior;
}

Scope makechannel__a0_5830_49338820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__a0_5830_49338820 = scope;
   scope->owner = (Object)_____58_84_49385560;
   scope->name = "channel_a0:30";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_48811340();
   scope->inners[1] = makereg__1_49419280();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_5831_49336760();
   scope->scopes[1] = makeraddr_5834_49335520();
   scope->scopes[2] = makewaddr_5838_49334960();
   scope->scopes[3] = makerinc_5842_49334360();
   scope->scopes[4] = makewinc_5846_49356540();
   scope->scopes[5] = makerdec_5850_49354760();
   scope->scopes[6] = makewdec_5855_49354220();
   scope->num_behaviors = 8;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60125820();
   scope->behaviors[1] = make__60125620();
   scope->behaviors[2] = make__60125100();
   scope->behaviors[3] = make__60124860();
   scope->behaviors[4] = make__60124300();
   scope->behaviors[5] = make__60124100();
   scope->behaviors[6] = make__60123640();
   scope->behaviors[7] = make__60123440();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__a1_5860_47525880;

SignalI reg__0_47779980_channel__a1_5860_47525880______58_84_49385560______58_840_59875700;

SignalI makereg__0_47779980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_47779980_channel__a1_5860_47525880______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)channel__a1_5860_47525880;
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

Scope anum_5861_47524060;

Scope makeanum_5861_47524060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_5861_47524060 = scope;
   scope->owner = (Object)channel__a1_5860_47525880;
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

Scope raddr_5863_47539900;

Scope makeraddr_5863_47539900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5863_47539900 = scope;
   scope->owner = (Object)channel__a1_5860_47525880;
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

Scope waddr_5866_47559680;

Scope makewaddr_5866_47559680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5866_47559680 = scope;
   scope->owner = (Object)channel__a1_5860_47525880;
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

Scope rinc_5869_47558940;

SignalI abus__r_47557960_rinc_5869_47558940_channel__a1_5860_47525880______58_84_49385560______58_840_59875700;

SignalI makeabus__r_47557960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47557960_rinc_5869_47558940_channel__a1_5860_47525880______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)rinc_5869_47558940;
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

Scope makerinc_5869_47558940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5869_47558940 = scope;
   scope->owner = (Object)channel__a1_5860_47525880;
   scope->name = "rinc:69";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47557960();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5872_47557840;

SignalI abus__w_47556680_winc_5872_47557840_channel__a1_5860_47525880______58_84_49385560______58_840_59875700;

SignalI makeabus__w_47556680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47556680_winc_5872_47557840_channel__a1_5860_47525880______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)winc_5872_47557840;
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

Scope makewinc_5872_47557840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5872_47557840 = scope;
   scope->owner = (Object)channel__a1_5860_47525880;
   scope->name = "winc:72";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47556680();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5875_47556140;

SignalI abus__r_47555160_rdec_5875_47556140_channel__a1_5860_47525880______58_84_49385560______58_840_59875700;

SignalI makeabus__r_47555160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47555160_rdec_5875_47556140_channel__a1_5860_47525880______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)rdec_5875_47556140;
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

Scope makerdec_5875_47556140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5875_47556140 = scope;
   scope->owner = (Object)channel__a1_5860_47525880;
   scope->name = "rdec:75";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47555160();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_5879_47579080;

SignalI abus__w_47575580_wdec_5879_47579080_channel__a1_5860_47525880______58_84_49385560______58_840_59875700;

SignalI makeabus__w_47575580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47575580_wdec_5879_47579080_channel__a1_5860_47525880______58_84_49385560______58_840_59875700 = signalI;
   signalI->owner = (Object)wdec_5879_47579080;
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

Scope makewdec_5879_47579080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5879_47579080 = scope;
   scope->owner = (Object)channel__a1_5860_47525880;
   scope->name = "wdec:79";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47575580();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __60144360;

Behavior make__60144360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60144360 = behavior;
   behavior->owner = (Object)channel__a1_5860_47525880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_47779980_channel__a1_5860_47525880______58_84_49385560______58_840_59875700);
   reg__0_47779980_channel__a1_5860_47525880______58_84_49385560______58_840_59875700->num_any += 1;
   reg__0_47779980_channel__a1_5860_47525880______58_84_49385560______58_840_59875700->any = realloc(reg__0_47779980_channel__a1_5860_47525880______58_84_49385560______58_840_59875700->any,reg__0_47779980_channel__a1_5860_47525880______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
reg__0_47779980_channel__a1_5860_47525880______58_84_49385560______58_840_59875700->any[reg__0_47779980_channel__a1_5860_47525880______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__60144520();

   return behavior;
}

Behavior __60144160;

Behavior make__60144160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60144160 = behavior;
   behavior->owner = (Object)channel__a1_5860_47525880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5862_49756620______58_84_49385560______58_840_59875700);
   _5862_49756620______58_84_49385560______58_840_59875700->num_any += 1;
   _5862_49756620______58_84_49385560______58_840_59875700->any = realloc(_5862_49756620______58_84_49385560______58_840_59875700->any,_5862_49756620______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
_5862_49756620______58_84_49385560______58_840_59875700->any[_5862_49756620______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__60144320();

   return behavior;
}

Scope makechannel__a1_5860_47525880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__a1_5860_47525880 = scope;
   scope->owner = (Object)_____58_84_49385560;
   scope->name = "channel_a1:60";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_47779980();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_5861_47524060();
   scope->scopes[1] = makeraddr_5863_47539900();
   scope->scopes[2] = makewaddr_5866_47559680();
   scope->scopes[3] = makerinc_5869_47558940();
   scope->scopes[4] = makewinc_5872_47557840();
   scope->scopes[5] = makerdec_5875_47556140();
   scope->scopes[6] = makewdec_5879_47579080();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60144360();
   scope->behaviors[1] = make__60144160();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __59777920;

Behavior make__59777920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59777920 = behavior;
   behavior->owner = (Object)_____58_84_49385560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_49047500______58_84_49385560______58_840_59875700);
   clk_49047500______58_84_49385560______58_840_59875700->num_pos += 1;
   clk_49047500______58_84_49385560______58_840_59875700->pos = realloc(clk_49047500______58_84_49385560______58_840_59875700->pos,clk_49047500______58_84_49385560______58_840_59875700->num_pos*sizeof(Object));
clk_49047500______58_84_49385560______58_840_59875700->pos[clk_49047500______58_84_49385560______58_840_59875700->num_pos-1] = (Object)behavior;
   behavior->block = make__59574680();

   return behavior;
}

Behavior __59875860;

Behavior make__59875860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59875860 = behavior;
   register_timed_behavior(behavior);
   behavior->owner = (Object)_____58_84_49385560;
   behavior->activated = 0;
   behavior->timed = 1;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__59777780();

   return behavior;
}

Behavior __60091720;

Behavior make__60091720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60091720 = behavior;
   behavior->owner = (Object)_____58_84_49385560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_49047500______58_84_49385560______58_840_59875700);
   clk_49047500______58_84_49385560______58_840_59875700->num_any += 1;
   clk_49047500______58_84_49385560______58_840_59875700->any = realloc(clk_49047500______58_84_49385560______58_840_59875700->any,clk_49047500______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
clk_49047500______58_84_49385560______58_840_59875700->any[clk_49047500______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_49047480______58_84_49385560______58_840_59875700);
   rst_49047480______58_84_49385560______58_840_59875700->num_any += 1;
   rst_49047480______58_84_49385560______58_840_59875700->any = realloc(rst_49047480______58_84_49385560______58_840_59875700->any,rst_49047480______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
rst_49047480______58_84_49385560______58_840_59875700->any[rst_49047480______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,fill_49047400______58_84_49385560______58_840_59875700);
   fill_49047400______58_84_49385560______58_840_59875700->num_any += 1;
   fill_49047400______58_84_49385560______58_840_59875700->any = realloc(fill_49047400______58_84_49385560______58_840_59875700->any,fill_49047400______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
fill_49047400______58_84_49385560______58_840_59875700->any[fill_49047400______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,req_49047460______58_84_49385560______58_840_59875700);
   req_49047460______58_84_49385560______58_840_59875700->num_any += 1;
   req_49047460______58_84_49385560______58_840_59875700->any = realloc(req_49047460______58_84_49385560______58_840_59875700->any,req_49047460______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
req_49047460______58_84_49385560______58_840_59875700->any[req_49047460______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__0_49047440______58_84_49385560______58_840_59875700);
   ack__0_49047440______58_84_49385560______58_840_59875700->num_any += 1;
   ack__0_49047440______58_84_49385560______58_840_59875700->any = realloc(ack__0_49047440______58_84_49385560______58_840_59875700->any,ack__0_49047440______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
ack__0_49047440______58_84_49385560______58_840_59875700->any[ack__0_49047440______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__59959540();

   return behavior;
}

Behavior __60091560;

Behavior make__60091560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60091560 = behavior;
   behavior->owner = (Object)_____58_84_49385560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__0_53023420_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700);
   ack__0_53023420_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any += 1;
   ack__0_53023420_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any = realloc(ack__0_53023420_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any,ack__0_53023420_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
ack__0_53023420_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->any[ack__0_53023420_layer__hidden_58_840_52985960______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__1_59576980_layer__output_58_840_59579120______58_84_49385560______58_840_59875700);
   ack__1_59576980_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any += 1;
   ack__1_59576980_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any = realloc(ack__1_59576980_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any,ack__1_59576980_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any*sizeof(Object));
ack__1_59576980_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->any[ack__1_59576980_layer__output_58_840_59579120______58_84_49385560______58_840_59875700->num_any-1] = (Object)behavior;
   behavior->block = make__59959480();

   return behavior;
}

Scope make_____58_84_49385560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   _____58_84_49385560 = scope;
   scope->owner = (Object)_____58_840_59875700;
   scope->name = "__:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makelayer__hidden_53023260();
   scope->systemIs[1] = makelayer__output_59576840();
   scope->num_inners = 18;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeclk_49047500();
   scope->inners[1] = makerst_49047480();
   scope->inners[2] = makereq_49047460();
   scope->inners[3] = makeack__0_49047440();
   scope->inners[4] = makeack__1_49047420();
   scope->inners[5] = makefill_49047400();
   scope->inners[6] = make_5815_49334140();
   scope->inners[7] = make_5813_49333820();
   scope->inners[8] = make_5814_49333740();
   scope->inners[9] = make_5817_49333720();
   scope->inners[10] = make_5818_49333580();
   scope->inners[11] = make_5819_48809800();
   scope->inners[12] = make_5832_49416940();
   scope->inners[13] = make_5833_49499780();
   scope->inners[14] = make_5843_49564460();
   scope->inners[15] = make_5844_49675760();
   scope->inners[16] = make_5845_49675680();
   scope->inners[17] = make_5862_49756620();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__x_581_49385260();
   scope->scopes[1] = makechannel__a0_5830_49338820();
   scope->scopes[2] = makechannel__a1_5860_47525880();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59777920();
   scope->behaviors[1] = make__59875860();
   scope->behaviors[2] = make__60091720();
   scope->behaviors[3] = make__60091560();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT make_____58_840_59875700() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   _____58_840_59875700 = systemT;
systemT->owner = NULL;
   systemT->name = "__:T0";
   systemT->num_inputs = 0;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->num_outputs = 0;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make_____58_84_49385560();

   return systemT;
}