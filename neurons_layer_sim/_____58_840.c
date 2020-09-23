#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT _____58_840_60561680;

Block __60181460;

Block __60181300;

Block __60180980;

void code__60180980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47473600(),_5818_49575340______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__60180980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60180980 = block;
   block->owner = (Object)__60181300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60180980;

   return block;
};

void code__60181300() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49575900______58_84_49346360______58_840_60561680->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47473720();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60180980();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47473540(),_5817_49575640______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__60181300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60181300 = block;
   block->owner = (Object)__60181460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60181300;

   return block;
};

Block __60180100;

Block __60179940;

Block __60179520;

void code__60179520() {
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
                  src0 = _5818_49575340______58_84_49346360______58_840_60561680->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__47473040();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5818_49575340______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47496880(),_5817_49575640______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__47494500(),_5819_49736560______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__60179520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60179520 = block;
   block->owner = (Object)__60179940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60179520;

   return block;
};

void code__60179940() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49575900______58_84_49346360______58_840_60561680->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47473360();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60179520();
   }
      }
   }
}

Block make__60179940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60179940 = block;
   block->owner = (Object)__60180100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60179940;

   return block;
};

void code__60180100() {
 code__60179940();
}

Block make__60180100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60180100 = block;
   block->owner = (Object)__60181460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60180100;

   return block;
};

void code__60181460() {
 code__60181300();
   {
      Value cond = fill_49575840______58_84_49346360______58_840_60561680->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60180100();
   }
      }
   }
}

Block make__60181460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60181460 = block;
   block->owner = (Object)__60358680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60181460;

   return block;
};

Block __60522360;

void code__60522360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47493700(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47490980(),rst_49575900______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47490460(),req_49575860______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47489880(),fill_49575840______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47513460(),rst_49575900______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47512340(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47508740(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47508620(),rst_49575900______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47508100(),fill_49575840______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47506900(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47506020(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47529600(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47529440(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47529320(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47529200(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47529040(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47528940(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47528780(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47528720(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47528580(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47528480(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47528380(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47528280(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47528040(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47527660(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47527380(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47527060(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47526400(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47526080(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47525500(),fill_49575840______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47524460(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47522580(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47521880(),req_49575860______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47562100(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47561060(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47560700(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47560400(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47559600(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47559380(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47559180(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47559000(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47558800(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47558200(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47557580(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47557160(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47557060(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47556880(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47556300(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47555680(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47555280(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47555020(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47554660(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47578960(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47578760(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47578640(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47578560(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47578300(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47578100(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47577860(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47577400(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47576880(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47576360(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47574860(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47573860(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47572940(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47594480(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47592360(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47609200(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47604460(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47604200(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47628020(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47627820(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47627720(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47627580(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__47627280(),clk_49575920______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__60561860);
}

Block make__60522360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60522360 = block;
   block->owner = (Object)__60561860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60522360;

   return block;
};

Block __60585320;

void code__60585320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_49575920______58_84_49346360______58_840_60561680->c_value,clk_53382480_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_49575900______58_84_49346360______58_840_60561680->c_value,rst_53382460_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(fill_49575840______58_84_49346360______58_840_60561680->c_value,fill_53382400_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(req_49575860______58_84_49346360______58_840_60561680->c_value,req_53382380_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_49575920______58_84_49346360______58_840_60561680->c_value,clk_59733980_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_49575900______58_84_49346360______58_840_60561680->c_value,rst_59733960_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(fill_49575840______58_84_49346360______58_840_60561680->c_value,fill_59733940_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__0_49575700______58_84_49346360______58_840_60561680->c_value,req_59733920_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__60585320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60585320 = block;
   block->owner = (Object)__60617320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60585320;

   return block;
};

Block __60585260;

void code__60585260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__layer_43496620_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,ack__0_49575700______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__layer_60109740_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value,ack__1_49575680______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__60585260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60585260 = block;
   block->owner = (Object)__60617160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60585260;

   return block;
};

Block __48031440;

Block __48776040;

void code__48776040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_46977860_channel__x_581_49346060______58_84_49346360______58_840_60561680->c_value,make_ref_rangeS(mem_47441300_channel__x_581_49346060______58_84_49346360______58_840_60561680,value2integer(abus__w_46976440_channel__x_581_49346060______58_84_49346360______58_840_60561680->c_value),value2integer(abus__w_46976440_channel__x_581_49346060______58_84_49346360______58_840_60561680->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__48776040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48776040 = block;
   block->owner = (Object)__48031440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48776040;

   return block;
};

void code__48031440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_47441300_channel__x_581_49346060______58_84_49346360______58_840_60561680->c_value;
            idx = value2integer(abus__r_46977040_channel__x_581_49346060______58_84_49346360______58_840_60561680->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_43171180_channel__x_581_49346060______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_49741480_channel__x_581_49346060______58_84_49346360______58_840_60561680->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48776040();
   }
      }
   }
}

Block make__48031440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48031440 = block;
   block->owner = (Object)__49340820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48031440;

   return block;
};

Block __60616240;

void code__60616240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_49741480_channel__x_581_49346060______58_84_49346360______58_840_60561680->c_value,_5817_49575640______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__60616240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60616240 = block;
   block->owner = (Object)__60616080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60616240;

   return block;
};

Block __60616040;

void code__60616040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5817_49575640______58_84_49346360______58_840_60561680->c_value,trig__w_49741480_channel__x_581_49346060______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__60616040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60616040 = block;
   block->owner = (Object)__60615880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60616040;

   return block;
};

Block __60615480;

void code__60615480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_46976440_channel__x_581_49346060______58_84_49346360______58_840_60561680->c_value,_5818_49575340______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__60615480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60615480 = block;
   block->owner = (Object)__60615320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60615480;

   return block;
};

Block __60615280;

void code__60615280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5818_49575340______58_84_49346360______58_840_60561680->c_value,abus__w_46976440_channel__x_581_49346060______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__60615280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60615280 = block;
   block->owner = (Object)__60615120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60615280;

   return block;
};

Block __60614760;

void code__60614760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_46977860_channel__x_581_49346060______58_84_49346360______58_840_60561680->c_value,_5819_49736560______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__60614760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60614760 = block;
   block->owner = (Object)__60614540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60614760;

   return block;
};

Block __60614500;

void code__60614500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5819_49736560______58_84_49346360______58_840_60561680->c_value,dbus__w_46977860_channel__x_581_49346060______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__60614500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60614500 = block;
   block->owner = (Object)__60614300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60614500;

   return block;
};

Block __60613600;

void code__60613600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_43171180_channel__x_581_49346060______58_84_49346360______58_840_60561680->c_value,_5815_43496800_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__60613600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60613600 = block;
   block->owner = (Object)__60770140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60613600;

   return block;
};

Block __60613520;

void code__60613520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5813_43526020_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,trig__r_49741500_channel__x_581_49346060______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5814_43563960_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,abus__r_46977040_channel__x_581_49346060______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__60613520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60613520 = block;
   block->owner = (Object)__60769980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60613520;

   return block;
};

Block __60857140;

void code__60857140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_47259540_channel__a0_5830_49340700______58_84_49346360______58_840_60561680->c_value,_5832_47526820_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__60857140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60857140 = block;
   block->owner = (Object)__60856960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60857140;

   return block;
};

Block __60856920;

void code__60856920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5832_47526820_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,reg__0_47259540_channel__a0_5830_49340700______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__60856920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60856920 = block;
   block->owner = (Object)__60856720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60856920;

   return block;
};

Block __60855000;

void code__60855000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_47981600_channel__a0_5830_49340700______58_84_49346360______58_840_60561680->c_value,_5833_48493040_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__60855000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60855000 = block;
   block->owner = (Object)__60854820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60855000;

   return block;
};

Block __60854780;

void code__60854780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5833_48493040_layer0_58_840_53385880______58_84_49346360______58_840_60561680->c_value,reg__1_47981600_channel__a0_5830_49340700______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__60854780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60854780 = block;
   block->owner = (Object)__60854600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60854780;

   return block;
};

Block __43108900;

void code__43108900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_47657340_rinc_5842_47657880_channel__a0_5830_49340700______58_84_49346360______58_840_60561680->c_value,_5845_60109620_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__43108900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __43108900 = block;
   block->owner = (Object)__43108300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__43108900;

   return block;
};

Block __43107240;

void code__43107240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5845_60109620_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value,abus__r_47657340_rinc_5842_47657880_channel__a0_5830_49340700______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__43107240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __43107240 = block;
   block->owner = (Object)__43126760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__43107240;

   return block;
};

Block __60853800;

void code__60853800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_47259540_channel__a0_5830_49340700______58_84_49346360______58_840_60561680->c_value,_5843_59914760_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_47981600_channel__a0_5830_49340700______58_84_49346360______58_840_60561680->c_value,_5844_60109780_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__60853800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60853800 = block;
   block->owner = (Object)__43124640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60853800;

   return block;
};

Block __45223360;

void code__45223360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_49576060_channel__a1_5860_47981380______58_84_49346360______58_840_60561680->c_value,_5862_60183840_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__45223360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45223360 = block;
   block->owner = (Object)__45221200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45223360;

   return block;
};

Block __45220020;

void code__45220020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5862_60183840_layer1_58_840_59711580______58_84_49346360______58_840_60561680->c_value,reg__0_49576060_channel__a1_5860_47981380______58_84_49346360______58_840_60561680);
      set_value_pos(pool_state);
   }
}

Block make__45220020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __45220020 = block;
   block->owner = (Object)__45315560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__45220020;

   return block;
};

Value make__47473720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47473600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47473540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47473360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47473040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47496880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47494500() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__47493700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47490980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47490460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47489880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47513460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47512340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47508740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47508620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47508100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47506900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47506020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47529600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47529440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47529320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47529200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47529040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47528940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47528780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47528720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47528580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47528480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47528380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47528280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47528040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47527660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47527380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47527060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47526400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47526080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47525500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47524460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47522580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47521880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47562100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47561060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47560700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47560400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47559600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47559380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47559180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47559000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47558800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47558200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47557580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47557160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47557060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47556880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47556300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47555680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47555280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47555020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47554660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47578960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47578760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47578640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47578560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47578300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47578100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47577860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47577400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47576880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47576360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47574860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47573860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47572940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47594480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47592360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47609200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47604460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47604200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47628020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47627820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47627720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47627580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__47627280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope _____58_84_49346360;

SignalI clk_49575920______58_84_49346360______58_840_60561680;

SignalI makeclk_49575920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_49575920______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)_____58_84_49346360;
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

SignalI rst_49575900______58_84_49346360______58_840_60561680;

SignalI makerst_49575900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_49575900______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)_____58_84_49346360;
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

SignalI req_49575860______58_84_49346360______58_840_60561680;

SignalI makereq_49575860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_49575860______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)_____58_84_49346360;
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

SignalI fill_49575840______58_84_49346360______58_840_60561680;

SignalI makefill_49575840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_49575840______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)_____58_84_49346360;
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

SignalI ack__0_49575700______58_84_49346360______58_840_60561680;

SignalI makeack__0_49575700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__0_49575700______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)_____58_84_49346360;
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

SignalI ack__1_49575680______58_84_49346360______58_840_60561680;

SignalI makeack__1_49575680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__1_49575680______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)_____58_84_49346360;
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

SignalI _5817_49575640______58_84_49346360______58_840_60561680;

SignalI make_5817_49575640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5817_49575640______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)_____58_84_49346360;
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

SignalI _5818_49575340______58_84_49346360______58_840_60561680;

SignalI make_5818_49575340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5818_49575340______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)_____58_84_49346360;
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

SignalI _5819_49736560______58_84_49346360______58_840_60561680;

SignalI make_5819_49736560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5819_49736560______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)_____58_84_49346360;
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

SystemI layer0_48492800;

SystemI makelayer0_48492800() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer0_48492800 = systemI;
   systemI->owner = (Object)_____58_84_49346360;
   systemI->name = "layer0";
   systemI->system = layer0_58_840_53385880;

   return systemI;
};

SystemI layer1_60183720;

SystemI makelayer1_60183720() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer1_60183720 = systemI;
   systemI->owner = (Object)_____58_84_49346360;
   systemI->name = "layer1";
   systemI->system = layer1_58_840_59711580;

   return systemI;
};

Scope channel__x_581_49346060;

SignalI trig__r_49741500_channel__x_581_49346060______58_84_49346360______58_840_60561680;

SignalI maketrig__r_49741500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_49741500_channel__x_581_49346060______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)channel__x_581_49346060;
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

SignalI trig__w_49741480_channel__x_581_49346060______58_84_49346360______58_840_60561680;

SignalI maketrig__w_49741480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_49741480_channel__x_581_49346060______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)channel__x_581_49346060;
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

SignalI dbus__r_43171180_channel__x_581_49346060______58_84_49346360______58_840_60561680;

SignalI makedbus__r_43171180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_43171180_channel__x_581_49346060______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)channel__x_581_49346060;
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

SignalI dbus__w_46977860_channel__x_581_49346060______58_84_49346360______58_840_60561680;

SignalI makedbus__w_46977860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_46977860_channel__x_581_49346060______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)channel__x_581_49346060;
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

SignalI abus__r_46977040_channel__x_581_49346060______58_84_49346360______58_840_60561680;

SignalI makeabus__r_46977040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_46977040_channel__x_581_49346060______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)channel__x_581_49346060;
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

SignalI abus__w_46976440_channel__x_581_49346060______58_84_49346360______58_840_60561680;

SignalI makeabus__w_46976440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_46976440_channel__x_581_49346060______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)channel__x_581_49346060;
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

SignalI mem_47441300_channel__x_581_49346060______58_84_49346360______58_840_60561680;

SignalI makemem_47441300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_47441300_channel__x_581_49346060______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)channel__x_581_49346060;
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

Scope raddr_582_49345760;

Scope makeraddr_582_49345760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_582_49345760 = scope;
   scope->owner = (Object)channel__x_581_49346060;
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

Scope waddr_587_49345340;

Scope makewaddr_587_49345340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_587_49345340 = scope;
   scope->owner = (Object)channel__x_581_49346060;
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

Scope rinc_5812_49344920;

Behavior __60770140;

Behavior make__60770140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60770140 = behavior;
   behavior->owner = (Object)rinc_5812_49344920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_43171180_channel__x_581_49346060______58_84_49346360______58_840_60561680);
   dbus__r_43171180_channel__x_581_49346060______58_84_49346360______58_840_60561680->num_any += 1;
   dbus__r_43171180_channel__x_581_49346060______58_84_49346360______58_840_60561680->any = realloc(dbus__r_43171180_channel__x_581_49346060______58_84_49346360______58_840_60561680->any,dbus__r_43171180_channel__x_581_49346060______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
dbus__r_43171180_channel__x_581_49346060______58_84_49346360______58_840_60561680->any[dbus__r_43171180_channel__x_581_49346060______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__60613600();

   return behavior;
}

Behavior __60769980;

Behavior make__60769980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60769980 = behavior;
   behavior->owner = (Object)rinc_5812_49344920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5813_43526020_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   _5813_43526020_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   _5813_43526020_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(_5813_43526020_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,_5813_43526020_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
_5813_43526020_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[_5813_43526020_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,_5814_43563960_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   _5814_43563960_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   _5814_43563960_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(_5814_43563960_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,_5814_43563960_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
_5814_43563960_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[_5814_43563960_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__60613520();

   return behavior;
}

Scope makerinc_5812_49344920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5812_49344920 = scope;
   scope->owner = (Object)channel__x_581_49346060;
   scope->name = "rinc:12";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60770140();
   scope->behaviors[1] = make__60769980();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5816_49718960;

Scope makewinc_5816_49718960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5816_49718960 = scope;
   scope->owner = (Object)channel__x_581_49346060;
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

Scope rdec_5820_49718460;

Scope makerdec_5820_49718460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5820_49718460 = scope;
   scope->owner = (Object)channel__x_581_49346060;
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

Scope wdec_5825_49717400;

Scope makewdec_5825_49717400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5825_49717400 = scope;
   scope->owner = (Object)channel__x_581_49346060;
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

Behavior __49340820;

Behavior make__49340820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49340820 = behavior;
   behavior->owner = (Object)channel__x_581_49346060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_49575920______58_84_49346360______58_840_60561680);
   clk_49575920______58_84_49346360______58_840_60561680->num_neg += 1;
   clk_49575920______58_84_49346360______58_840_60561680->neg = realloc(clk_49575920______58_84_49346360______58_840_60561680->neg,clk_49575920______58_84_49346360______58_840_60561680->num_neg*sizeof(Object));
clk_49575920______58_84_49346360______58_840_60561680->neg[clk_49575920______58_84_49346360______58_840_60561680->num_neg-1] = (Object)behavior;
   behavior->block = make__48031440();

   return behavior;
}

Behavior __60616080;

Behavior make__60616080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60616080 = behavior;
   behavior->owner = (Object)channel__x_581_49346060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_49741480_channel__x_581_49346060______58_84_49346360______58_840_60561680);
   trig__w_49741480_channel__x_581_49346060______58_84_49346360______58_840_60561680->num_any += 1;
   trig__w_49741480_channel__x_581_49346060______58_84_49346360______58_840_60561680->any = realloc(trig__w_49741480_channel__x_581_49346060______58_84_49346360______58_840_60561680->any,trig__w_49741480_channel__x_581_49346060______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
trig__w_49741480_channel__x_581_49346060______58_84_49346360______58_840_60561680->any[trig__w_49741480_channel__x_581_49346060______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__60616240();

   return behavior;
}

Behavior __60615880;

Behavior make__60615880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60615880 = behavior;
   behavior->owner = (Object)channel__x_581_49346060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5817_49575640______58_84_49346360______58_840_60561680);
   _5817_49575640______58_84_49346360______58_840_60561680->num_any += 1;
   _5817_49575640______58_84_49346360______58_840_60561680->any = realloc(_5817_49575640______58_84_49346360______58_840_60561680->any,_5817_49575640______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
_5817_49575640______58_84_49346360______58_840_60561680->any[_5817_49575640______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__60616040();

   return behavior;
}

Behavior __60615320;

Behavior make__60615320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60615320 = behavior;
   behavior->owner = (Object)channel__x_581_49346060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_46976440_channel__x_581_49346060______58_84_49346360______58_840_60561680);
   abus__w_46976440_channel__x_581_49346060______58_84_49346360______58_840_60561680->num_any += 1;
   abus__w_46976440_channel__x_581_49346060______58_84_49346360______58_840_60561680->any = realloc(abus__w_46976440_channel__x_581_49346060______58_84_49346360______58_840_60561680->any,abus__w_46976440_channel__x_581_49346060______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
abus__w_46976440_channel__x_581_49346060______58_84_49346360______58_840_60561680->any[abus__w_46976440_channel__x_581_49346060______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__60615480();

   return behavior;
}

Behavior __60615120;

Behavior make__60615120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60615120 = behavior;
   behavior->owner = (Object)channel__x_581_49346060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5818_49575340______58_84_49346360______58_840_60561680);
   _5818_49575340______58_84_49346360______58_840_60561680->num_any += 1;
   _5818_49575340______58_84_49346360______58_840_60561680->any = realloc(_5818_49575340______58_84_49346360______58_840_60561680->any,_5818_49575340______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
_5818_49575340______58_84_49346360______58_840_60561680->any[_5818_49575340______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__60615280();

   return behavior;
}

Behavior __60614540;

Behavior make__60614540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60614540 = behavior;
   behavior->owner = (Object)channel__x_581_49346060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_46977860_channel__x_581_49346060______58_84_49346360______58_840_60561680);
   dbus__w_46977860_channel__x_581_49346060______58_84_49346360______58_840_60561680->num_any += 1;
   dbus__w_46977860_channel__x_581_49346060______58_84_49346360______58_840_60561680->any = realloc(dbus__w_46977860_channel__x_581_49346060______58_84_49346360______58_840_60561680->any,dbus__w_46977860_channel__x_581_49346060______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
dbus__w_46977860_channel__x_581_49346060______58_84_49346360______58_840_60561680->any[dbus__w_46977860_channel__x_581_49346060______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__60614760();

   return behavior;
}

Behavior __60614300;

Behavior make__60614300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60614300 = behavior;
   behavior->owner = (Object)channel__x_581_49346060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5819_49736560______58_84_49346360______58_840_60561680);
   _5819_49736560______58_84_49346360______58_840_60561680->num_any += 1;
   _5819_49736560______58_84_49346360______58_840_60561680->any = realloc(_5819_49736560______58_84_49346360______58_840_60561680->any,_5819_49736560______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
_5819_49736560______58_84_49346360______58_840_60561680->any[_5819_49736560______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__60614500();

   return behavior;
}

Scope makechannel__x_581_49346060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__x_581_49346060 = scope;
   scope->owner = (Object)_____58_84_49346360;
   scope->name = "channel_x:1";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_49741500();
   scope->inners[1] = maketrig__w_49741480();
   scope->inners[2] = makedbus__r_43171180();
   scope->inners[3] = makedbus__w_46977860();
   scope->inners[4] = makeabus__r_46977040();
   scope->inners[5] = makeabus__w_46976440();
   scope->inners[6] = makemem_47441300();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_582_49345760();
   scope->scopes[1] = makewaddr_587_49345340();
   scope->scopes[2] = makerinc_5812_49344920();
   scope->scopes[3] = makewinc_5816_49718960();
   scope->scopes[4] = makerdec_5820_49718460();
   scope->scopes[5] = makewdec_5825_49717400();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49340820();
   scope->behaviors[1] = make__60616080();
   scope->behaviors[2] = make__60615880();
   scope->behaviors[3] = make__60615320();
   scope->behaviors[4] = make__60615120();
   scope->behaviors[5] = make__60614540();
   scope->behaviors[6] = make__60614300();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__a0_5830_49340700;

SignalI reg__0_47259540_channel__a0_5830_49340700______58_84_49346360______58_840_60561680;

SignalI makereg__0_47259540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_47259540_channel__a0_5830_49340700______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)channel__a0_5830_49340700;
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

SignalI reg__1_47981600_channel__a0_5830_49340700______58_84_49346360______58_840_60561680;

SignalI makereg__1_47981600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_47981600_channel__a0_5830_49340700______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)channel__a0_5830_49340700;
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

Scope anum_5831_49364940;

Behavior __60856960;

Behavior make__60856960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60856960 = behavior;
   behavior->owner = (Object)anum_5831_49364940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_47259540_channel__a0_5830_49340700______58_84_49346360______58_840_60561680);
   reg__0_47259540_channel__a0_5830_49340700______58_84_49346360______58_840_60561680->num_any += 1;
   reg__0_47259540_channel__a0_5830_49340700______58_84_49346360______58_840_60561680->any = realloc(reg__0_47259540_channel__a0_5830_49340700______58_84_49346360______58_840_60561680->any,reg__0_47259540_channel__a0_5830_49340700______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
reg__0_47259540_channel__a0_5830_49340700______58_84_49346360______58_840_60561680->any[reg__0_47259540_channel__a0_5830_49340700______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__60857140();

   return behavior;
}

Behavior __60856720;

Behavior make__60856720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60856720 = behavior;
   behavior->owner = (Object)anum_5831_49364940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5832_47526820_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   _5832_47526820_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   _5832_47526820_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(_5832_47526820_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,_5832_47526820_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
_5832_47526820_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[_5832_47526820_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__60856920();

   return behavior;
}

Behavior __60854820;

Behavior make__60854820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60854820 = behavior;
   behavior->owner = (Object)anum_5831_49364940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_47981600_channel__a0_5830_49340700______58_84_49346360______58_840_60561680);
   reg__1_47981600_channel__a0_5830_49340700______58_84_49346360______58_840_60561680->num_any += 1;
   reg__1_47981600_channel__a0_5830_49340700______58_84_49346360______58_840_60561680->any = realloc(reg__1_47981600_channel__a0_5830_49340700______58_84_49346360______58_840_60561680->any,reg__1_47981600_channel__a0_5830_49340700______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
reg__1_47981600_channel__a0_5830_49340700______58_84_49346360______58_840_60561680->any[reg__1_47981600_channel__a0_5830_49340700______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__60855000();

   return behavior;
}

Behavior __60854600;

Behavior make__60854600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60854600 = behavior;
   behavior->owner = (Object)anum_5831_49364940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5833_48493040_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   _5833_48493040_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   _5833_48493040_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(_5833_48493040_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,_5833_48493040_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
_5833_48493040_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[_5833_48493040_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__60854780();

   return behavior;
}

Scope makeanum_5831_49364940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_5831_49364940 = scope;
   scope->owner = (Object)channel__a0_5830_49340700;
   scope->name = "anum:31";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60856960();
   scope->behaviors[1] = make__60856720();
   scope->behaviors[2] = make__60854820();
   scope->behaviors[3] = make__60854600();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope raddr_5834_47659260;

Scope makeraddr_5834_47659260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5834_47659260 = scope;
   scope->owner = (Object)channel__a0_5830_49340700;
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

Scope waddr_5838_47658680;

Scope makewaddr_5838_47658680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5838_47658680 = scope;
   scope->owner = (Object)channel__a0_5830_49340700;
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

Scope rinc_5842_47657880;

SignalI abus__r_47657340_rinc_5842_47657880_channel__a0_5830_49340700______58_84_49346360______58_840_60561680;

SignalI makeabus__r_47657340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47657340_rinc_5842_47657880_channel__a0_5830_49340700______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)rinc_5842_47657880;
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

Behavior __43108300;

Behavior make__43108300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __43108300 = behavior;
   behavior->owner = (Object)rinc_5842_47657880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_47657340_rinc_5842_47657880_channel__a0_5830_49340700______58_84_49346360______58_840_60561680);
   abus__r_47657340_rinc_5842_47657880_channel__a0_5830_49340700______58_84_49346360______58_840_60561680->num_any += 1;
   abus__r_47657340_rinc_5842_47657880_channel__a0_5830_49340700______58_84_49346360______58_840_60561680->any = realloc(abus__r_47657340_rinc_5842_47657880_channel__a0_5830_49340700______58_84_49346360______58_840_60561680->any,abus__r_47657340_rinc_5842_47657880_channel__a0_5830_49340700______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
abus__r_47657340_rinc_5842_47657880_channel__a0_5830_49340700______58_84_49346360______58_840_60561680->any[abus__r_47657340_rinc_5842_47657880_channel__a0_5830_49340700______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__43108900();

   return behavior;
}

Behavior __43126760;

Behavior make__43126760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __43126760 = behavior;
   behavior->owner = (Object)rinc_5842_47657880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5845_60109620_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
   _5845_60109620_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any += 1;
   _5845_60109620_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any = realloc(_5845_60109620_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any,_5845_60109620_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
_5845_60109620_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any[_5845_60109620_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__43107240();

   return behavior;
}

Behavior __43124640;

Behavior make__43124640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __43124640 = behavior;
   behavior->owner = (Object)rinc_5842_47657880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_47259540_channel__a0_5830_49340700______58_84_49346360______58_840_60561680);
   reg__0_47259540_channel__a0_5830_49340700______58_84_49346360______58_840_60561680->num_any += 1;
   reg__0_47259540_channel__a0_5830_49340700______58_84_49346360______58_840_60561680->any = realloc(reg__0_47259540_channel__a0_5830_49340700______58_84_49346360______58_840_60561680->any,reg__0_47259540_channel__a0_5830_49340700______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
reg__0_47259540_channel__a0_5830_49340700______58_84_49346360______58_840_60561680->any[reg__0_47259540_channel__a0_5830_49340700______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,reg__1_47981600_channel__a0_5830_49340700______58_84_49346360______58_840_60561680);
   reg__1_47981600_channel__a0_5830_49340700______58_84_49346360______58_840_60561680->num_any += 1;
   reg__1_47981600_channel__a0_5830_49340700______58_84_49346360______58_840_60561680->any = realloc(reg__1_47981600_channel__a0_5830_49340700______58_84_49346360______58_840_60561680->any,reg__1_47981600_channel__a0_5830_49340700______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
reg__1_47981600_channel__a0_5830_49340700______58_84_49346360______58_840_60561680->any[reg__1_47981600_channel__a0_5830_49340700______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__60853800();

   return behavior;
}

Scope makerinc_5842_47657880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5842_47657880 = scope;
   scope->owner = (Object)channel__a0_5830_49340700;
   scope->name = "rinc:42";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47657340();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__43108300();
   scope->behaviors[1] = make__43126760();
   scope->behaviors[2] = make__43124640();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5846_49619820;

SignalI abus__w_49659540_winc_5846_49619820_channel__a0_5830_49340700______58_84_49346360______58_840_60561680;

SignalI makeabus__w_49659540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49659540_winc_5846_49619820_channel__a0_5830_49340700______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)winc_5846_49619820;
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

Scope makewinc_5846_49619820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5846_49619820 = scope;
   scope->owner = (Object)channel__a0_5830_49340700;
   scope->name = "winc:46";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49659540();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5850_49659360;

SignalI abus__r_49658920_rdec_5850_49659360_channel__a0_5830_49340700______58_84_49346360______58_840_60561680;

SignalI makeabus__r_49658920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49658920_rdec_5850_49659360_channel__a0_5830_49340700______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)rdec_5850_49659360;
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

Scope makerdec_5850_49659360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5850_49659360 = scope;
   scope->owner = (Object)channel__a0_5830_49340700;
   scope->name = "rdec:50";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49658920();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_5855_49658780;

SignalI abus__w_49658280_wdec_5855_49658780_channel__a0_5830_49340700______58_84_49346360______58_840_60561680;

SignalI makeabus__w_49658280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49658280_wdec_5855_49658780_channel__a0_5830_49340700______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)wdec_5855_49658780;
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

Scope makewdec_5855_49658780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5855_49658780 = scope;
   scope->owner = (Object)channel__a0_5830_49340700;
   scope->name = "wdec:55";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49658280();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope makechannel__a0_5830_49340700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__a0_5830_49340700 = scope;
   scope->owner = (Object)_____58_84_49346360;
   scope->name = "channel_a0:30";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_47259540();
   scope->inners[1] = makereg__1_47981600();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_5831_49364940();
   scope->scopes[1] = makeraddr_5834_47659260();
   scope->scopes[2] = makewaddr_5838_47658680();
   scope->scopes[3] = makerinc_5842_47657880();
   scope->scopes[4] = makewinc_5846_49619820();
   scope->scopes[5] = makerdec_5850_49659360();
   scope->scopes[6] = makewdec_5855_49658780();
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__a1_5860_47981380;

SignalI reg__0_49576060_channel__a1_5860_47981380______58_84_49346360______58_840_60561680;

SignalI makereg__0_49576060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_49576060_channel__a1_5860_47981380______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)channel__a1_5860_47981380;
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

Scope anum_5861_47923160;

Behavior __45221200;

Behavior make__45221200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45221200 = behavior;
   behavior->owner = (Object)anum_5861_47923160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_49576060_channel__a1_5860_47981380______58_84_49346360______58_840_60561680);
   reg__0_49576060_channel__a1_5860_47981380______58_84_49346360______58_840_60561680->num_any += 1;
   reg__0_49576060_channel__a1_5860_47981380______58_84_49346360______58_840_60561680->any = realloc(reg__0_49576060_channel__a1_5860_47981380______58_84_49346360______58_840_60561680->any,reg__0_49576060_channel__a1_5860_47981380______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
reg__0_49576060_channel__a1_5860_47981380______58_84_49346360______58_840_60561680->any[reg__0_49576060_channel__a1_5860_47981380______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__45223360();

   return behavior;
}

Behavior __45315560;

Behavior make__45315560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45315560 = behavior;
   behavior->owner = (Object)anum_5861_47923160;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5862_60183840_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
   _5862_60183840_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any += 1;
   _5862_60183840_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any = realloc(_5862_60183840_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any,_5862_60183840_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
_5862_60183840_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any[_5862_60183840_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__45220020();

   return behavior;
}

Scope makeanum_5861_47923160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_5861_47923160 = scope;
   scope->owner = (Object)channel__a1_5860_47981380;
   scope->name = "anum:61";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__45221200();
   scope->behaviors[1] = make__45315560();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope raddr_5863_49177200;

Scope makeraddr_5863_49177200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5863_49177200 = scope;
   scope->owner = (Object)channel__a1_5860_47981380;
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

Scope waddr_5866_49176780;

Scope makewaddr_5866_49176780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5866_49176780 = scope;
   scope->owner = (Object)channel__a1_5860_47981380;
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

Scope rinc_5869_48848380;

SignalI abus__r_48848000_rinc_5869_48848380_channel__a1_5860_47981380______58_84_49346360______58_840_60561680;

SignalI makeabus__r_48848000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48848000_rinc_5869_48848380_channel__a1_5860_47981380______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)rinc_5869_48848380;
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

Scope makerinc_5869_48848380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5869_48848380 = scope;
   scope->owner = (Object)channel__a1_5860_47981380;
   scope->name = "rinc:69";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_48848000();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5872_48847860;

SignalI abus__w_48847460_winc_5872_48847860_channel__a1_5860_47981380______58_84_49346360______58_840_60561680;

SignalI makeabus__w_48847460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48847460_winc_5872_48847860_channel__a1_5860_47981380______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)winc_5872_48847860;
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

Scope makewinc_5872_48847860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5872_48847860 = scope;
   scope->owner = (Object)channel__a1_5860_47981380;
   scope->name = "winc:72";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_48847460();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5875_48847320;

SignalI abus__r_48846880_rdec_5875_48847320_channel__a1_5860_47981380______58_84_49346360______58_840_60561680;

SignalI makeabus__r_48846880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48846880_rdec_5875_48847320_channel__a1_5860_47981380______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)rdec_5875_48847320;
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

Scope makerdec_5875_48847320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5875_48847320 = scope;
   scope->owner = (Object)channel__a1_5860_47981380;
   scope->name = "rdec:75";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_48846880();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_5879_48846760;

SignalI abus__w_48846380_wdec_5879_48846760_channel__a1_5860_47981380______58_84_49346360______58_840_60561680;

SignalI makeabus__w_48846380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48846380_wdec_5879_48846760_channel__a1_5860_47981380______58_84_49346360______58_840_60561680 = signalI;
   signalI->owner = (Object)wdec_5879_48846760;
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

Scope makewdec_5879_48846760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5879_48846760 = scope;
   scope->owner = (Object)channel__a1_5860_47981380;
   scope->name = "wdec:79";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_48846380();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope makechannel__a1_5860_47981380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__a1_5860_47981380 = scope;
   scope->owner = (Object)_____58_84_49346360;
   scope->name = "channel_a1:60";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_49576060();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_5861_47923160();
   scope->scopes[1] = makeraddr_5863_49177200();
   scope->scopes[2] = makewaddr_5866_49176780();
   scope->scopes[3] = makerinc_5869_48848380();
   scope->scopes[4] = makewinc_5872_48847860();
   scope->scopes[5] = makerdec_5875_48847320();
   scope->scopes[6] = makewdec_5879_48846760();
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __60358680;

Behavior make__60358680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60358680 = behavior;
   behavior->owner = (Object)_____58_84_49346360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_49575920______58_84_49346360______58_840_60561680);
   clk_49575920______58_84_49346360______58_840_60561680->num_pos += 1;
   clk_49575920______58_84_49346360______58_840_60561680->pos = realloc(clk_49575920______58_84_49346360______58_840_60561680->pos,clk_49575920______58_84_49346360______58_840_60561680->num_pos*sizeof(Object));
clk_49575920______58_84_49346360______58_840_60561680->pos[clk_49575920______58_84_49346360______58_840_60561680->num_pos-1] = (Object)behavior;
   behavior->block = make__60181460();

   return behavior;
}

Behavior __60561860;

Behavior make__60561860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60561860 = behavior;
   register_timed_behavior(behavior);
   behavior->owner = (Object)_____58_84_49346360;
   behavior->activated = 0;
   behavior->timed = 1;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__60522360();

   return behavior;
}

Behavior __60617320;

Behavior make__60617320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60617320 = behavior;
   behavior->owner = (Object)_____58_84_49346360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_49575920______58_84_49346360______58_840_60561680);
   clk_49575920______58_84_49346360______58_840_60561680->num_any += 1;
   clk_49575920______58_84_49346360______58_840_60561680->any = realloc(clk_49575920______58_84_49346360______58_840_60561680->any,clk_49575920______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
clk_49575920______58_84_49346360______58_840_60561680->any[clk_49575920______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_49575900______58_84_49346360______58_840_60561680);
   rst_49575900______58_84_49346360______58_840_60561680->num_any += 1;
   rst_49575900______58_84_49346360______58_840_60561680->any = realloc(rst_49575900______58_84_49346360______58_840_60561680->any,rst_49575900______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
rst_49575900______58_84_49346360______58_840_60561680->any[rst_49575900______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,fill_49575840______58_84_49346360______58_840_60561680);
   fill_49575840______58_84_49346360______58_840_60561680->num_any += 1;
   fill_49575840______58_84_49346360______58_840_60561680->any = realloc(fill_49575840______58_84_49346360______58_840_60561680->any,fill_49575840______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
fill_49575840______58_84_49346360______58_840_60561680->any[fill_49575840______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,req_49575860______58_84_49346360______58_840_60561680);
   req_49575860______58_84_49346360______58_840_60561680->num_any += 1;
   req_49575860______58_84_49346360______58_840_60561680->any = realloc(req_49575860______58_84_49346360______58_840_60561680->any,req_49575860______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
req_49575860______58_84_49346360______58_840_60561680->any[req_49575860______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__0_49575700______58_84_49346360______58_840_60561680);
   ack__0_49575700______58_84_49346360______58_840_60561680->num_any += 1;
   ack__0_49575700______58_84_49346360______58_840_60561680->any = realloc(ack__0_49575700______58_84_49346360______58_840_60561680->any,ack__0_49575700______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
ack__0_49575700______58_84_49346360______58_840_60561680->any[ack__0_49575700______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__60585320();

   return behavior;
}

Behavior __60617160;

Behavior make__60617160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60617160 = behavior;
   behavior->owner = (Object)_____58_84_49346360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__layer_43496620_layer0_58_840_53385880______58_84_49346360______58_840_60561680);
   ack__layer_43496620_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any += 1;
   ack__layer_43496620_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any = realloc(ack__layer_43496620_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any,ack__layer_43496620_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
ack__layer_43496620_layer0_58_840_53385880______58_84_49346360______58_840_60561680->any[ack__layer_43496620_layer0_58_840_53385880______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__layer_60109740_layer1_58_840_59711580______58_84_49346360______58_840_60561680);
   ack__layer_60109740_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any += 1;
   ack__layer_60109740_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any = realloc(ack__layer_60109740_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any,ack__layer_60109740_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any*sizeof(Object));
ack__layer_60109740_layer1_58_840_59711580______58_84_49346360______58_840_60561680->any[ack__layer_60109740_layer1_58_840_59711580______58_84_49346360______58_840_60561680->num_any-1] = (Object)behavior;
   behavior->block = make__60585260();

   return behavior;
}

Scope make_____58_84_49346360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   _____58_84_49346360 = scope;
   scope->owner = (Object)_____58_840_60561680;
   scope->name = "__:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makelayer0_48492800();
   scope->systemIs[1] = makelayer1_60183720();
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeclk_49575920();
   scope->inners[1] = makerst_49575900();
   scope->inners[2] = makereq_49575860();
   scope->inners[3] = makefill_49575840();
   scope->inners[4] = makeack__0_49575700();
   scope->inners[5] = makeack__1_49575680();
   scope->inners[6] = make_5817_49575640();
   scope->inners[7] = make_5818_49575340();
   scope->inners[8] = make_5819_49736560();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__x_581_49346060();
   scope->scopes[1] = makechannel__a0_5830_49340700();
   scope->scopes[2] = makechannel__a1_5860_47981380();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60358680();
   scope->behaviors[1] = make__60561860();
   scope->behaviors[2] = make__60617320();
   scope->behaviors[3] = make__60617160();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT make_____58_840_60561680() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   _____58_840_60561680 = systemT;
systemT->owner = NULL;
   systemT->name = "__:T0";
   systemT->num_inputs = 0;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->num_outputs = 0;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make_____58_84_49346360();

   return systemT;
}