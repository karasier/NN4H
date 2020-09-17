#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT _____58_840_59103160;

Block __49342080;

Block __49341920;

Block __49341600;

void code__49341600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59307000(),_5818_47703600______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__49341600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49341600 = block;
   block->owner = (Object)__49341920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49341600;

   return block;
};

void code__49341920() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_45935520______58_84_49209420______58_840_59103160->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59307080();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49341600();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59306940(),_5817_47704080______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__49341920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49341920 = block;
   block->owner = (Object)__49342080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49341920;

   return block;
};

Block __49340720;

Block __49340560;

Block __50478900;

void code__50478900() {
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
                  src0 = _5818_47703600______58_84_49209420______58_840_59103160->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59306680();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5818_47703600______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59306580(),_5817_47704080______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59306520(),_5819_48337460______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__50478900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50478900 = block;
   block->owner = (Object)__49340560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50478900;

   return block;
};

void code__49340560() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_45935520______58_84_49209420______58_840_59103160->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59306820();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50478900();
   }
      }
   }
}

Block make__49340560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49340560 = block;
   block->owner = (Object)__49340720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49340560;

   return block;
};

void code__49340720() {
 code__49340560();
}

Block make__49340720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49340720 = block;
   block->owner = (Object)__49342080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49340720;

   return block;
};

void code__49342080() {
 code__49341920();
   {
      Value cond = fill_45934720______58_84_49209420______58_840_59103160->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49340720();
   }
      }
   }
}

Block make__49342080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49342080 = block;
   block->owner = (Object)__59079100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49342080;

   return block;
};

Block __59078980;

void code__59078980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59306460(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59306400(),rst_45935520______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59306340(),req_45935480______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59306280(),fill_45934720______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59306220(),rst_45935520______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59306160(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59306100(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59306040(),rst_45935520______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59305980(),fill_45934720______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59305920(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59305860(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59305800(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59305720(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59305660(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59305580(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59305520(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59305420(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59305300(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59305240(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59305120(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59305060(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59305000(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59304940(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59304880(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59304820(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59304760(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59304700(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59304640(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59304580(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59304520(),fill_45934720______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59304460(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59304400(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59304340(),req_45935480______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59304280(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59304220(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59304160(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59304100(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59304040(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59303980(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59303920(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59303860(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59303800(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59303740(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59303680(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59303620(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59303540(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59303480(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59303380(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59303320(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59303220(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59303100(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59303000(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59302940(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59302880(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59302820(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59302760(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59302700(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59302640(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59302580(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59302520(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59302460(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59302400(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59302340(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59302280(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59302220(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59302160(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59302100(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59302040(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59301980(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59301920(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59326400(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59326340(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59326280(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59326220(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59326160(),clk_45935560______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59103280);
}

Block make__59078980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59078980 = block;
   block->owner = (Object)__59103280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59078980;

   return block;
};

Block __59153860;

void code__59153860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_45935560______58_84_49209420______58_840_59103160->c_value,clk_49898820_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_45935520______58_84_49209420______58_840_59103160->c_value,rst_49898780_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(fill_45934720______58_84_49209420______58_840_59103160->c_value,fill_49898740_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(req_45935480______58_84_49209420______58_840_59103160->c_value,req_49898720_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_45935560______58_84_49209420______58_840_59103160->c_value,clk_49344480_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_45935520______58_84_49209420______58_840_59103160->c_value,rst_49344460_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(fill_45934720______58_84_49209420______58_840_59103160->c_value,fill_49344440_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__0_45935140______58_84_49209420______58_840_59103160->c_value,req_49344420_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59153860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59153860 = block;
   block->owner = (Object)__59147060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59153860;

   return block;
};

Block __59153800;

void code__59153800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__0_49898540_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->c_value,ack__0_45935140______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__1_49344380_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->c_value,ack__1_45934740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59153800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59153800 = block;
   block->owner = (Object)__59146840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59153800;

   return block;
};

Block __49852660;

Block __50090700;

void code__50090700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_49484980_channel__x_581_49233660______58_84_49209420______58_840_59103160->c_value,make_ref_rangeS(mem_49552920_channel__x_581_49233660______58_84_49209420______58_840_59103160,value2integer(abus__w_49484820_channel__x_581_49233660______58_84_49209420______58_840_59103160->c_value),value2integer(abus__w_49484820_channel__x_581_49233660______58_84_49209420______58_840_59103160->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__50090700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50090700 = block;
   block->owner = (Object)__49852660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50090700;

   return block;
};

void code__49852660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_49552920_channel__x_581_49233660______58_84_49209420______58_840_59103160->c_value;
            idx = value2integer(abus__r_49484900_channel__x_581_49233660______58_84_49209420______58_840_59103160->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_49291920_channel__x_581_49233660______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_49230760_channel__x_581_49233660______58_84_49209420______58_840_59103160->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50090700();
   }
      }
   }
}

Block make__49852660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49852660 = block;
   block->owner = (Object)__47770880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49852660;

   return block;
};

Block __59170500;

void code__59170500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_49291920_channel__x_581_49233660______58_84_49209420______58_840_59103160->c_value,_5815_47705200______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59170500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59170500 = block;
   block->owner = (Object)__59170340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59170500;

   return block;
};

Block __59170300;

void code__59170300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5815_47705200______58_84_49209420______58_840_59103160->c_value,dbus__r_49291920_channel__x_581_49233660______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59170300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59170300 = block;
   block->owner = (Object)__59170140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59170300;

   return block;
};

Block __59169840;

void code__59169840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_49230780_channel__x_581_49233660______58_84_49209420______58_840_59103160->c_value,_5813_47705120______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59169840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59169840 = block;
   block->owner = (Object)__59169680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59169840;

   return block;
};

Block __59169640;

void code__59169640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5813_47705120______58_84_49209420______58_840_59103160->c_value,trig__r_49230780_channel__x_581_49233660______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59169640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59169640 = block;
   block->owner = (Object)__59169480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59169640;

   return block;
};

Block __59169100;

void code__59169100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_49484900_channel__x_581_49233660______58_84_49209420______58_840_59103160->c_value,_5814_47704200______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59169100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59169100 = block;
   block->owner = (Object)__59168820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59169100;

   return block;
};

Block __59168780;

void code__59168780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5814_47704200______58_84_49209420______58_840_59103160->c_value,abus__r_49484900_channel__x_581_49233660______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59168780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59168780 = block;
   block->owner = (Object)__59168620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59168780;

   return block;
};

Block __59168320;

void code__59168320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_49230760_channel__x_581_49233660______58_84_49209420______58_840_59103160->c_value,_5817_47704080______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59168320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59168320 = block;
   block->owner = (Object)__59168160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59168320;

   return block;
};

Block __59168120;

void code__59168120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5817_47704080______58_84_49209420______58_840_59103160->c_value,trig__w_49230760_channel__x_581_49233660______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59168120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59168120 = block;
   block->owner = (Object)__59167960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59168120;

   return block;
};

Block __59167660;

void code__59167660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_49484820_channel__x_581_49233660______58_84_49209420______58_840_59103160->c_value,_5818_47703600______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59167660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59167660 = block;
   block->owner = (Object)__59167500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59167660;

   return block;
};

Block __59167460;

void code__59167460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5818_47703600______58_84_49209420______58_840_59103160->c_value,abus__w_49484820_channel__x_581_49233660______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59167460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59167460 = block;
   block->owner = (Object)__59167300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59167460;

   return block;
};

Block __59166760;

void code__59166760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_49484980_channel__x_581_49233660______58_84_49209420______58_840_59103160->c_value,_5819_48337460______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59166760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59166760 = block;
   block->owner = (Object)__59166500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59166760;

   return block;
};

Block __59166460;

void code__59166460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5819_48337460______58_84_49209420______58_840_59103160->c_value,dbus__w_49484980_channel__x_581_49233660______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59166460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59166460 = block;
   block->owner = (Object)__59166300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59166460;

   return block;
};

Block __59164680;

void code__59164680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_48352720_channel__a0_5830_47770220______58_84_49209420______58_840_59103160->c_value,_5832_49209920______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59164680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59164680 = block;
   block->owner = (Object)__59164460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59164680;

   return block;
};

Block __59164380;

void code__59164380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5832_49209920______58_84_49209420______58_840_59103160->c_value,reg__0_48352720_channel__a0_5830_47770220______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59164380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59164380 = block;
   block->owner = (Object)__59164220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59164380;

   return block;
};

Block __59163920;

void code__59163920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_49229500_channel__a0_5830_47770220______58_84_49209420______58_840_59103160->c_value,_5833_49314420______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59163920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59163920 = block;
   block->owner = (Object)__59163760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59163920;

   return block;
};

Block __59163720;

void code__59163720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5833_49314420______58_84_49209420______58_840_59103160->c_value,reg__1_49229500_channel__a0_5830_47770220______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59163720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59163720 = block;
   block->owner = (Object)__59163560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59163720;

   return block;
};

Block __59163260;

void code__59163260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_48352720_channel__a0_5830_47770220______58_84_49209420______58_840_59103160->c_value,_5843_49504200______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59163260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59163260 = block;
   block->owner = (Object)__59163100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59163260;

   return block;
};

Block __59163060;

void code__59163060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5843_49504200______58_84_49209420______58_840_59103160->c_value,reg__0_48352720_channel__a0_5830_47770220______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59163060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59163060 = block;
   block->owner = (Object)__59162880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59163060;

   return block;
};

Block __59244340;

void code__59244340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_49229500_channel__a0_5830_47770220______58_84_49209420______58_840_59103160->c_value,_5844_49561740______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59244340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59244340 = block;
   block->owner = (Object)__59244160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59244340;

   return block;
};

Block __59244080;

void code__59244080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5844_49561740______58_84_49209420______58_840_59103160->c_value,reg__1_49229500_channel__a0_5830_47770220______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59244080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59244080 = block;
   block->owner = (Object)__59243920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59244080;

   return block;
};

Block __59242340;

void code__59242340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_47786880_rinc_5842_47788000_channel__a0_5830_47770220______58_84_49209420______58_840_59103160->c_value,_5845_49585860______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59242340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59242340 = block;
   block->owner = (Object)__59242140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59242340;

   return block;
};

Block __59242100;

void code__59242100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5845_49585860______58_84_49209420______58_840_59103160->c_value,abus__r_47786880_rinc_5842_47788000_channel__a0_5830_47770220______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59242100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59242100 = block;
   block->owner = (Object)__59241880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59242100;

   return block;
};

Block __59240660;

void code__59240660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_50075320_channel__a1_5860_49948480______58_84_49209420______58_840_59103160->c_value,_5862_49667980______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59240660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59240660 = block;
   block->owner = (Object)__59240460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59240660;

   return block;
};

Block __59240420;

void code__59240420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5862_49667980______58_84_49209420______58_840_59103160->c_value,reg__0_50075320_channel__a1_5860_49948480______58_84_49209420______58_840_59103160);
      set_value_pos(pool_state);
   }
}

Block make__59240420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59240420 = block;
   block->owner = (Object)__59240200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59240420;

   return block;
};

Value make__59307080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59307000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59306940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59306820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59306680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59306580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59306520() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__59306460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59306400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59306340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59306280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59306220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59306160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59306100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59306040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59305980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59305920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59305860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59305800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59305720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59305660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59305580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59305520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59305420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59305300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59305240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59305120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59305060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59305000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59304940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59304880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59304820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59304760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59304700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59304640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59304580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59304520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59304460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59304400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59304340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59304280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59304220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59304160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59304100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59304040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59303980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59303920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59303860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59303800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59303740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59303680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59303620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59303540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59303480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59303380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59303320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59303220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59303100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59303000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59302940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59302880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59302820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59302760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59302700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59302640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59302580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59302520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59302460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59302400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59302340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59302280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59302220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59302160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59302100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59302040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59301980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59301920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59326400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59326340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59326280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59326220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59326160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope _____58_84_49209420;

SignalI clk_45935560______58_84_49209420______58_840_59103160;

SignalI makeclk_45935560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_45935560______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)_____58_84_49209420;
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

SignalI rst_45935520______58_84_49209420______58_840_59103160;

SignalI makerst_45935520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_45935520______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)_____58_84_49209420;
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

SignalI req_45935480______58_84_49209420______58_840_59103160;

SignalI makereq_45935480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_45935480______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)_____58_84_49209420;
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

SignalI ack__0_45935140______58_84_49209420______58_840_59103160;

SignalI makeack__0_45935140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__0_45935140______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)_____58_84_49209420;
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

SignalI ack__1_45934740______58_84_49209420______58_840_59103160;

SignalI makeack__1_45934740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__1_45934740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)_____58_84_49209420;
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

SignalI fill_45934720______58_84_49209420______58_840_59103160;

SignalI makefill_45934720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_45934720______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)_____58_84_49209420;
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

SignalI _5815_47705200______58_84_49209420______58_840_59103160;

SignalI make_5815_47705200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5815_47705200______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)_____58_84_49209420;
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

SignalI _5813_47705120______58_84_49209420______58_840_59103160;

SignalI make_5813_47705120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5813_47705120______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)_____58_84_49209420;
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

SignalI _5814_47704200______58_84_49209420______58_840_59103160;

SignalI make_5814_47704200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5814_47704200______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)_____58_84_49209420;
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

SignalI _5817_47704080______58_84_49209420______58_840_59103160;

SignalI make_5817_47704080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5817_47704080______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)_____58_84_49209420;
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

SignalI _5818_47703600______58_84_49209420______58_840_59103160;

SignalI make_5818_47703600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5818_47703600______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)_____58_84_49209420;
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

SignalI _5819_48337460______58_84_49209420______58_840_59103160;

SignalI make_5819_48337460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5819_48337460______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)_____58_84_49209420;
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

SignalI _5832_49209920______58_84_49209420______58_840_59103160;

SignalI make_5832_49209920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5832_49209920______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)_____58_84_49209420;
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

SignalI _5833_49314420______58_84_49209420______58_840_59103160;

SignalI make_5833_49314420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5833_49314420______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)_____58_84_49209420;
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

SignalI _5843_49504200______58_84_49209420______58_840_59103160;

SignalI make_5843_49504200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5843_49504200______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)_____58_84_49209420;
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

SignalI _5844_49561740______58_84_49209420______58_840_59103160;

SignalI make_5844_49561740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5844_49561740______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)_____58_84_49209420;
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

SignalI _5845_49585860______58_84_49209420______58_840_59103160;

SignalI make_5845_49585860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5845_49585860______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)_____58_84_49209420;
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

SignalI _5862_49667980______58_84_49209420______58_840_59103160;

SignalI make_5862_49667980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5862_49667980______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)_____58_84_49209420;
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

SystemI layer__hidden_49898160;

SystemI makelayer__hidden_49898160() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer__hidden_49898160 = systemI;
   systemI->owner = (Object)_____58_84_49209420;
   systemI->name = "layer_hidden";
   systemI->system = layer__hidden_58_840_49905400;

   return systemI;
};

SystemI layer__output_49344240;

SystemI makelayer__output_49344240() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer__output_49344240 = systemI;
   systemI->owner = (Object)_____58_84_49209420;
   systemI->name = "layer_output";
   systemI->system = layer__output_58_840_49346740;

   return systemI;
};

Scope channel__x_581_49233660;

SignalI trig__r_49230780_channel__x_581_49233660______58_84_49209420______58_840_59103160;

SignalI maketrig__r_49230780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_49230780_channel__x_581_49233660______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)channel__x_581_49233660;
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

SignalI trig__w_49230760_channel__x_581_49233660______58_84_49209420______58_840_59103160;

SignalI maketrig__w_49230760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_49230760_channel__x_581_49233660______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)channel__x_581_49233660;
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

SignalI dbus__r_49291920_channel__x_581_49233660______58_84_49209420______58_840_59103160;

SignalI makedbus__r_49291920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_49291920_channel__x_581_49233660______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)channel__x_581_49233660;
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

SignalI dbus__w_49484980_channel__x_581_49233660______58_84_49209420______58_840_59103160;

SignalI makedbus__w_49484980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_49484980_channel__x_581_49233660______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)channel__x_581_49233660;
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

SignalI abus__r_49484900_channel__x_581_49233660______58_84_49209420______58_840_59103160;

SignalI makeabus__r_49484900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49484900_channel__x_581_49233660______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)channel__x_581_49233660;
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

SignalI abus__w_49484820_channel__x_581_49233660______58_84_49209420______58_840_59103160;

SignalI makeabus__w_49484820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49484820_channel__x_581_49233660______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)channel__x_581_49233660;
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

SignalI mem_49552920_channel__x_581_49233660______58_84_49209420______58_840_59103160;

SignalI makemem_49552920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_49552920_channel__x_581_49233660______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)channel__x_581_49233660;
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

Scope raddr_582_49233360;

Scope makeraddr_582_49233360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_582_49233360 = scope;
   scope->owner = (Object)channel__x_581_49233660;
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

Scope waddr_587_49232940;

Scope makewaddr_587_49232940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_587_49232940 = scope;
   scope->owner = (Object)channel__x_581_49233660;
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

Scope rinc_5812_49232520;

Scope makerinc_5812_49232520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5812_49232520 = scope;
   scope->owner = (Object)channel__x_581_49233660;
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

Scope winc_5816_49232100;

Scope makewinc_5816_49232100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5816_49232100 = scope;
   scope->owner = (Object)channel__x_581_49233660;
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

Scope rdec_5820_49231680;

Scope makerdec_5820_49231680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5820_49231680 = scope;
   scope->owner = (Object)channel__x_581_49233660;
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

Scope wdec_5825_49231260;

Scope makewdec_5825_49231260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5825_49231260 = scope;
   scope->owner = (Object)channel__x_581_49233660;
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

Behavior __47770880;

Behavior make__47770880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47770880 = behavior;
   behavior->owner = (Object)channel__x_581_49233660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_45935560______58_84_49209420______58_840_59103160);
   clk_45935560______58_84_49209420______58_840_59103160->num_neg += 1;
   clk_45935560______58_84_49209420______58_840_59103160->neg = realloc(clk_45935560______58_84_49209420______58_840_59103160->neg,clk_45935560______58_84_49209420______58_840_59103160->num_neg*sizeof(Object));
clk_45935560______58_84_49209420______58_840_59103160->neg[clk_45935560______58_84_49209420______58_840_59103160->num_neg-1] = (Object)behavior;
   behavior->block = make__49852660();

   return behavior;
}

Behavior __59170340;

Behavior make__59170340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59170340 = behavior;
   behavior->owner = (Object)channel__x_581_49233660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_49291920_channel__x_581_49233660______58_84_49209420______58_840_59103160);
   dbus__r_49291920_channel__x_581_49233660______58_84_49209420______58_840_59103160->num_any += 1;
   dbus__r_49291920_channel__x_581_49233660______58_84_49209420______58_840_59103160->any = realloc(dbus__r_49291920_channel__x_581_49233660______58_84_49209420______58_840_59103160->any,dbus__r_49291920_channel__x_581_49233660______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
dbus__r_49291920_channel__x_581_49233660______58_84_49209420______58_840_59103160->any[dbus__r_49291920_channel__x_581_49233660______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59170500();

   return behavior;
}

Behavior __59170140;

Behavior make__59170140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59170140 = behavior;
   behavior->owner = (Object)channel__x_581_49233660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5815_47705200______58_84_49209420______58_840_59103160);
   _5815_47705200______58_84_49209420______58_840_59103160->num_any += 1;
   _5815_47705200______58_84_49209420______58_840_59103160->any = realloc(_5815_47705200______58_84_49209420______58_840_59103160->any,_5815_47705200______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
_5815_47705200______58_84_49209420______58_840_59103160->any[_5815_47705200______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59170300();

   return behavior;
}

Behavior __59169680;

Behavior make__59169680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59169680 = behavior;
   behavior->owner = (Object)channel__x_581_49233660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_49230780_channel__x_581_49233660______58_84_49209420______58_840_59103160);
   trig__r_49230780_channel__x_581_49233660______58_84_49209420______58_840_59103160->num_any += 1;
   trig__r_49230780_channel__x_581_49233660______58_84_49209420______58_840_59103160->any = realloc(trig__r_49230780_channel__x_581_49233660______58_84_49209420______58_840_59103160->any,trig__r_49230780_channel__x_581_49233660______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
trig__r_49230780_channel__x_581_49233660______58_84_49209420______58_840_59103160->any[trig__r_49230780_channel__x_581_49233660______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59169840();

   return behavior;
}

Behavior __59169480;

Behavior make__59169480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59169480 = behavior;
   behavior->owner = (Object)channel__x_581_49233660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5813_47705120______58_84_49209420______58_840_59103160);
   _5813_47705120______58_84_49209420______58_840_59103160->num_any += 1;
   _5813_47705120______58_84_49209420______58_840_59103160->any = realloc(_5813_47705120______58_84_49209420______58_840_59103160->any,_5813_47705120______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
_5813_47705120______58_84_49209420______58_840_59103160->any[_5813_47705120______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59169640();

   return behavior;
}

Behavior __59168820;

Behavior make__59168820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59168820 = behavior;
   behavior->owner = (Object)channel__x_581_49233660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_49484900_channel__x_581_49233660______58_84_49209420______58_840_59103160);
   abus__r_49484900_channel__x_581_49233660______58_84_49209420______58_840_59103160->num_any += 1;
   abus__r_49484900_channel__x_581_49233660______58_84_49209420______58_840_59103160->any = realloc(abus__r_49484900_channel__x_581_49233660______58_84_49209420______58_840_59103160->any,abus__r_49484900_channel__x_581_49233660______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
abus__r_49484900_channel__x_581_49233660______58_84_49209420______58_840_59103160->any[abus__r_49484900_channel__x_581_49233660______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59169100();

   return behavior;
}

Behavior __59168620;

Behavior make__59168620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59168620 = behavior;
   behavior->owner = (Object)channel__x_581_49233660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5814_47704200______58_84_49209420______58_840_59103160);
   _5814_47704200______58_84_49209420______58_840_59103160->num_any += 1;
   _5814_47704200______58_84_49209420______58_840_59103160->any = realloc(_5814_47704200______58_84_49209420______58_840_59103160->any,_5814_47704200______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
_5814_47704200______58_84_49209420______58_840_59103160->any[_5814_47704200______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59168780();

   return behavior;
}

Behavior __59168160;

Behavior make__59168160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59168160 = behavior;
   behavior->owner = (Object)channel__x_581_49233660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_49230760_channel__x_581_49233660______58_84_49209420______58_840_59103160);
   trig__w_49230760_channel__x_581_49233660______58_84_49209420______58_840_59103160->num_any += 1;
   trig__w_49230760_channel__x_581_49233660______58_84_49209420______58_840_59103160->any = realloc(trig__w_49230760_channel__x_581_49233660______58_84_49209420______58_840_59103160->any,trig__w_49230760_channel__x_581_49233660______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
trig__w_49230760_channel__x_581_49233660______58_84_49209420______58_840_59103160->any[trig__w_49230760_channel__x_581_49233660______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59168320();

   return behavior;
}

Behavior __59167960;

Behavior make__59167960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59167960 = behavior;
   behavior->owner = (Object)channel__x_581_49233660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5817_47704080______58_84_49209420______58_840_59103160);
   _5817_47704080______58_84_49209420______58_840_59103160->num_any += 1;
   _5817_47704080______58_84_49209420______58_840_59103160->any = realloc(_5817_47704080______58_84_49209420______58_840_59103160->any,_5817_47704080______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
_5817_47704080______58_84_49209420______58_840_59103160->any[_5817_47704080______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59168120();

   return behavior;
}

Behavior __59167500;

Behavior make__59167500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59167500 = behavior;
   behavior->owner = (Object)channel__x_581_49233660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_49484820_channel__x_581_49233660______58_84_49209420______58_840_59103160);
   abus__w_49484820_channel__x_581_49233660______58_84_49209420______58_840_59103160->num_any += 1;
   abus__w_49484820_channel__x_581_49233660______58_84_49209420______58_840_59103160->any = realloc(abus__w_49484820_channel__x_581_49233660______58_84_49209420______58_840_59103160->any,abus__w_49484820_channel__x_581_49233660______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
abus__w_49484820_channel__x_581_49233660______58_84_49209420______58_840_59103160->any[abus__w_49484820_channel__x_581_49233660______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59167660();

   return behavior;
}

Behavior __59167300;

Behavior make__59167300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59167300 = behavior;
   behavior->owner = (Object)channel__x_581_49233660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5818_47703600______58_84_49209420______58_840_59103160);
   _5818_47703600______58_84_49209420______58_840_59103160->num_any += 1;
   _5818_47703600______58_84_49209420______58_840_59103160->any = realloc(_5818_47703600______58_84_49209420______58_840_59103160->any,_5818_47703600______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
_5818_47703600______58_84_49209420______58_840_59103160->any[_5818_47703600______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59167460();

   return behavior;
}

Behavior __59166500;

Behavior make__59166500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59166500 = behavior;
   behavior->owner = (Object)channel__x_581_49233660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_49484980_channel__x_581_49233660______58_84_49209420______58_840_59103160);
   dbus__w_49484980_channel__x_581_49233660______58_84_49209420______58_840_59103160->num_any += 1;
   dbus__w_49484980_channel__x_581_49233660______58_84_49209420______58_840_59103160->any = realloc(dbus__w_49484980_channel__x_581_49233660______58_84_49209420______58_840_59103160->any,dbus__w_49484980_channel__x_581_49233660______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
dbus__w_49484980_channel__x_581_49233660______58_84_49209420______58_840_59103160->any[dbus__w_49484980_channel__x_581_49233660______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59166760();

   return behavior;
}

Behavior __59166300;

Behavior make__59166300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59166300 = behavior;
   behavior->owner = (Object)channel__x_581_49233660;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5819_48337460______58_84_49209420______58_840_59103160);
   _5819_48337460______58_84_49209420______58_840_59103160->num_any += 1;
   _5819_48337460______58_84_49209420______58_840_59103160->any = realloc(_5819_48337460______58_84_49209420______58_840_59103160->any,_5819_48337460______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
_5819_48337460______58_84_49209420______58_840_59103160->any[_5819_48337460______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59166460();

   return behavior;
}

Scope makechannel__x_581_49233660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__x_581_49233660 = scope;
   scope->owner = (Object)_____58_84_49209420;
   scope->name = "channel_x:1";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_49230780();
   scope->inners[1] = maketrig__w_49230760();
   scope->inners[2] = makedbus__r_49291920();
   scope->inners[3] = makedbus__w_49484980();
   scope->inners[4] = makeabus__r_49484900();
   scope->inners[5] = makeabus__w_49484820();
   scope->inners[6] = makemem_49552920();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_582_49233360();
   scope->scopes[1] = makewaddr_587_49232940();
   scope->scopes[2] = makerinc_5812_49232520();
   scope->scopes[3] = makewinc_5816_49232100();
   scope->scopes[4] = makerdec_5820_49231680();
   scope->scopes[5] = makewdec_5825_49231260();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47770880();
   scope->behaviors[1] = make__59170340();
   scope->behaviors[2] = make__59170140();
   scope->behaviors[3] = make__59169680();
   scope->behaviors[4] = make__59169480();
   scope->behaviors[5] = make__59168820();
   scope->behaviors[6] = make__59168620();
   scope->behaviors[7] = make__59168160();
   scope->behaviors[8] = make__59167960();
   scope->behaviors[9] = make__59167500();
   scope->behaviors[10] = make__59167300();
   scope->behaviors[11] = make__59166500();
   scope->behaviors[12] = make__59166300();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__a0_5830_47770220;

SignalI reg__0_48352720_channel__a0_5830_47770220______58_84_49209420______58_840_59103160;

SignalI makereg__0_48352720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_48352720_channel__a0_5830_47770220______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)channel__a0_5830_47770220;
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

SignalI reg__1_49229500_channel__a0_5830_47770220______58_84_49209420______58_840_59103160;

SignalI makereg__1_49229500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_49229500_channel__a0_5830_47770220______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)channel__a0_5830_47770220;
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

Scope anum_5831_47767960;

Scope makeanum_5831_47767960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_5831_47767960 = scope;
   scope->owner = (Object)channel__a0_5830_47770220;
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

Scope raddr_5834_47791520;

Scope makeraddr_5834_47791520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5834_47791520 = scope;
   scope->owner = (Object)channel__a0_5830_47770220;
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

Scope waddr_5838_47790800;

Scope makewaddr_5838_47790800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5838_47790800 = scope;
   scope->owner = (Object)channel__a0_5830_47770220;
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

Scope rinc_5842_47788000;

SignalI abus__r_47786880_rinc_5842_47788000_channel__a0_5830_47770220______58_84_49209420______58_840_59103160;

SignalI makeabus__r_47786880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47786880_rinc_5842_47788000_channel__a0_5830_47770220______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)rinc_5842_47788000;
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

Behavior __59242140;

Behavior make__59242140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59242140 = behavior;
   behavior->owner = (Object)rinc_5842_47788000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_47786880_rinc_5842_47788000_channel__a0_5830_47770220______58_84_49209420______58_840_59103160);
   abus__r_47786880_rinc_5842_47788000_channel__a0_5830_47770220______58_84_49209420______58_840_59103160->num_any += 1;
   abus__r_47786880_rinc_5842_47788000_channel__a0_5830_47770220______58_84_49209420______58_840_59103160->any = realloc(abus__r_47786880_rinc_5842_47788000_channel__a0_5830_47770220______58_84_49209420______58_840_59103160->any,abus__r_47786880_rinc_5842_47788000_channel__a0_5830_47770220______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
abus__r_47786880_rinc_5842_47788000_channel__a0_5830_47770220______58_84_49209420______58_840_59103160->any[abus__r_47786880_rinc_5842_47788000_channel__a0_5830_47770220______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59242340();

   return behavior;
}

Behavior __59241880;

Behavior make__59241880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59241880 = behavior;
   behavior->owner = (Object)rinc_5842_47788000;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5845_49585860______58_84_49209420______58_840_59103160);
   _5845_49585860______58_84_49209420______58_840_59103160->num_any += 1;
   _5845_49585860______58_84_49209420______58_840_59103160->any = realloc(_5845_49585860______58_84_49209420______58_840_59103160->any,_5845_49585860______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
_5845_49585860______58_84_49209420______58_840_59103160->any[_5845_49585860______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59242100();

   return behavior;
}

Scope makerinc_5842_47788000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5842_47788000 = scope;
   scope->owner = (Object)channel__a0_5830_47770220;
   scope->name = "rinc:42";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47786880();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59242140();
   scope->behaviors[1] = make__59241880();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5846_47785100;

SignalI abus__w_47808300_winc_5846_47785100_channel__a0_5830_47770220______58_84_49209420______58_840_59103160;

SignalI makeabus__w_47808300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47808300_winc_5846_47785100_channel__a0_5830_47770220______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)winc_5846_47785100;
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

Scope makewinc_5846_47785100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5846_47785100 = scope;
   scope->owner = (Object)channel__a0_5830_47770220;
   scope->name = "winc:46";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47808300();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5850_47819620;

SignalI abus__r_47829520_rdec_5850_47819620_channel__a0_5830_47770220______58_84_49209420______58_840_59103160;

SignalI makeabus__r_47829520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47829520_rdec_5850_47819620_channel__a0_5830_47770220______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)rdec_5850_47819620;
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

Scope makerdec_5850_47819620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5850_47819620 = scope;
   scope->owner = (Object)channel__a0_5830_47770220;
   scope->name = "rdec:50";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47829520();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_5855_47829340;

SignalI abus__w_47828420_wdec_5855_47829340_channel__a0_5830_47770220______58_84_49209420______58_840_59103160;

SignalI makeabus__w_47828420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47828420_wdec_5855_47829340_channel__a0_5830_47770220______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)wdec_5855_47829340;
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

Scope makewdec_5855_47829340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5855_47829340 = scope;
   scope->owner = (Object)channel__a0_5830_47770220;
   scope->name = "wdec:55";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47828420();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __59164460;

Behavior make__59164460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59164460 = behavior;
   behavior->owner = (Object)channel__a0_5830_47770220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_48352720_channel__a0_5830_47770220______58_84_49209420______58_840_59103160);
   reg__0_48352720_channel__a0_5830_47770220______58_84_49209420______58_840_59103160->num_any += 1;
   reg__0_48352720_channel__a0_5830_47770220______58_84_49209420______58_840_59103160->any = realloc(reg__0_48352720_channel__a0_5830_47770220______58_84_49209420______58_840_59103160->any,reg__0_48352720_channel__a0_5830_47770220______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
reg__0_48352720_channel__a0_5830_47770220______58_84_49209420______58_840_59103160->any[reg__0_48352720_channel__a0_5830_47770220______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59164680();

   return behavior;
}

Behavior __59164220;

Behavior make__59164220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59164220 = behavior;
   behavior->owner = (Object)channel__a0_5830_47770220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5832_49209920______58_84_49209420______58_840_59103160);
   _5832_49209920______58_84_49209420______58_840_59103160->num_any += 1;
   _5832_49209920______58_84_49209420______58_840_59103160->any = realloc(_5832_49209920______58_84_49209420______58_840_59103160->any,_5832_49209920______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
_5832_49209920______58_84_49209420______58_840_59103160->any[_5832_49209920______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59164380();

   return behavior;
}

Behavior __59163760;

Behavior make__59163760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59163760 = behavior;
   behavior->owner = (Object)channel__a0_5830_47770220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_49229500_channel__a0_5830_47770220______58_84_49209420______58_840_59103160);
   reg__1_49229500_channel__a0_5830_47770220______58_84_49209420______58_840_59103160->num_any += 1;
   reg__1_49229500_channel__a0_5830_47770220______58_84_49209420______58_840_59103160->any = realloc(reg__1_49229500_channel__a0_5830_47770220______58_84_49209420______58_840_59103160->any,reg__1_49229500_channel__a0_5830_47770220______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
reg__1_49229500_channel__a0_5830_47770220______58_84_49209420______58_840_59103160->any[reg__1_49229500_channel__a0_5830_47770220______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59163920();

   return behavior;
}

Behavior __59163560;

Behavior make__59163560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59163560 = behavior;
   behavior->owner = (Object)channel__a0_5830_47770220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5833_49314420______58_84_49209420______58_840_59103160);
   _5833_49314420______58_84_49209420______58_840_59103160->num_any += 1;
   _5833_49314420______58_84_49209420______58_840_59103160->any = realloc(_5833_49314420______58_84_49209420______58_840_59103160->any,_5833_49314420______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
_5833_49314420______58_84_49209420______58_840_59103160->any[_5833_49314420______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59163720();

   return behavior;
}

Behavior __59163100;

Behavior make__59163100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59163100 = behavior;
   behavior->owner = (Object)channel__a0_5830_47770220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_48352720_channel__a0_5830_47770220______58_84_49209420______58_840_59103160);
   reg__0_48352720_channel__a0_5830_47770220______58_84_49209420______58_840_59103160->num_any += 1;
   reg__0_48352720_channel__a0_5830_47770220______58_84_49209420______58_840_59103160->any = realloc(reg__0_48352720_channel__a0_5830_47770220______58_84_49209420______58_840_59103160->any,reg__0_48352720_channel__a0_5830_47770220______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
reg__0_48352720_channel__a0_5830_47770220______58_84_49209420______58_840_59103160->any[reg__0_48352720_channel__a0_5830_47770220______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59163260();

   return behavior;
}

Behavior __59162880;

Behavior make__59162880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59162880 = behavior;
   behavior->owner = (Object)channel__a0_5830_47770220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5843_49504200______58_84_49209420______58_840_59103160);
   _5843_49504200______58_84_49209420______58_840_59103160->num_any += 1;
   _5843_49504200______58_84_49209420______58_840_59103160->any = realloc(_5843_49504200______58_84_49209420______58_840_59103160->any,_5843_49504200______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
_5843_49504200______58_84_49209420______58_840_59103160->any[_5843_49504200______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59163060();

   return behavior;
}

Behavior __59244160;

Behavior make__59244160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59244160 = behavior;
   behavior->owner = (Object)channel__a0_5830_47770220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_49229500_channel__a0_5830_47770220______58_84_49209420______58_840_59103160);
   reg__1_49229500_channel__a0_5830_47770220______58_84_49209420______58_840_59103160->num_any += 1;
   reg__1_49229500_channel__a0_5830_47770220______58_84_49209420______58_840_59103160->any = realloc(reg__1_49229500_channel__a0_5830_47770220______58_84_49209420______58_840_59103160->any,reg__1_49229500_channel__a0_5830_47770220______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
reg__1_49229500_channel__a0_5830_47770220______58_84_49209420______58_840_59103160->any[reg__1_49229500_channel__a0_5830_47770220______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59244340();

   return behavior;
}

Behavior __59243920;

Behavior make__59243920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59243920 = behavior;
   behavior->owner = (Object)channel__a0_5830_47770220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5844_49561740______58_84_49209420______58_840_59103160);
   _5844_49561740______58_84_49209420______58_840_59103160->num_any += 1;
   _5844_49561740______58_84_49209420______58_840_59103160->any = realloc(_5844_49561740______58_84_49209420______58_840_59103160->any,_5844_49561740______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
_5844_49561740______58_84_49209420______58_840_59103160->any[_5844_49561740______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59244080();

   return behavior;
}

Scope makechannel__a0_5830_47770220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__a0_5830_47770220 = scope;
   scope->owner = (Object)_____58_84_49209420;
   scope->name = "channel_a0:30";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_48352720();
   scope->inners[1] = makereg__1_49229500();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_5831_47767960();
   scope->scopes[1] = makeraddr_5834_47791520();
   scope->scopes[2] = makewaddr_5838_47790800();
   scope->scopes[3] = makerinc_5842_47788000();
   scope->scopes[4] = makewinc_5846_47785100();
   scope->scopes[5] = makerdec_5850_47819620();
   scope->scopes[6] = makewdec_5855_47829340();
   scope->num_behaviors = 8;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59164460();
   scope->behaviors[1] = make__59164220();
   scope->behaviors[2] = make__59163760();
   scope->behaviors[3] = make__59163560();
   scope->behaviors[4] = make__59163100();
   scope->behaviors[5] = make__59162880();
   scope->behaviors[6] = make__59244160();
   scope->behaviors[7] = make__59243920();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__a1_5860_49948480;

SignalI reg__0_50075320_channel__a1_5860_49948480______58_84_49209420______58_840_59103160;

SignalI makereg__0_50075320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_50075320_channel__a1_5860_49948480______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)channel__a1_5860_49948480;
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

Scope anum_5861_49948180;

Scope makeanum_5861_49948180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_5861_49948180 = scope;
   scope->owner = (Object)channel__a1_5860_49948480;
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

Scope raddr_5863_49947760;

Scope makeraddr_5863_49947760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5863_49947760 = scope;
   scope->owner = (Object)channel__a1_5860_49948480;
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

Scope waddr_5866_49947340;

Scope makewaddr_5866_49947340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5866_49947340 = scope;
   scope->owner = (Object)channel__a1_5860_49948480;
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

Scope rinc_5869_49946780;

SignalI abus__r_49969760_rinc_5869_49946780_channel__a1_5860_49948480______58_84_49209420______58_840_59103160;

SignalI makeabus__r_49969760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49969760_rinc_5869_49946780_channel__a1_5860_49948480______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)rinc_5869_49946780;
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

Scope makerinc_5869_49946780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5869_49946780 = scope;
   scope->owner = (Object)channel__a1_5860_49948480;
   scope->name = "rinc:69";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49969760();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5872_49968940;

SignalI abus__w_49968140_winc_5872_49968940_channel__a1_5860_49948480______58_84_49209420______58_840_59103160;

SignalI makeabus__w_49968140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49968140_winc_5872_49968940_channel__a1_5860_49948480______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)winc_5872_49968940;
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

Scope makewinc_5872_49968940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5872_49968940 = scope;
   scope->owner = (Object)channel__a1_5860_49948480;
   scope->name = "winc:72";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49968140();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5875_49968020;

SignalI abus__r_49967640_rdec_5875_49968020_channel__a1_5860_49948480______58_84_49209420______58_840_59103160;

SignalI makeabus__r_49967640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49967640_rdec_5875_49968020_channel__a1_5860_49948480______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)rdec_5875_49968020;
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

Scope makerdec_5875_49968020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5875_49968020 = scope;
   scope->owner = (Object)channel__a1_5860_49948480;
   scope->name = "rdec:75";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49967640();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_5879_49967520;

SignalI abus__w_49967040_wdec_5879_49967520_channel__a1_5860_49948480______58_84_49209420______58_840_59103160;

SignalI makeabus__w_49967040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49967040_wdec_5879_49967520_channel__a1_5860_49948480______58_84_49209420______58_840_59103160 = signalI;
   signalI->owner = (Object)wdec_5879_49967520;
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

Scope makewdec_5879_49967520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5879_49967520 = scope;
   scope->owner = (Object)channel__a1_5860_49948480;
   scope->name = "wdec:79";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49967040();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __59240460;

Behavior make__59240460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59240460 = behavior;
   behavior->owner = (Object)channel__a1_5860_49948480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_50075320_channel__a1_5860_49948480______58_84_49209420______58_840_59103160);
   reg__0_50075320_channel__a1_5860_49948480______58_84_49209420______58_840_59103160->num_any += 1;
   reg__0_50075320_channel__a1_5860_49948480______58_84_49209420______58_840_59103160->any = realloc(reg__0_50075320_channel__a1_5860_49948480______58_84_49209420______58_840_59103160->any,reg__0_50075320_channel__a1_5860_49948480______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
reg__0_50075320_channel__a1_5860_49948480______58_84_49209420______58_840_59103160->any[reg__0_50075320_channel__a1_5860_49948480______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59240660();

   return behavior;
}

Behavior __59240200;

Behavior make__59240200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59240200 = behavior;
   behavior->owner = (Object)channel__a1_5860_49948480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5862_49667980______58_84_49209420______58_840_59103160);
   _5862_49667980______58_84_49209420______58_840_59103160->num_any += 1;
   _5862_49667980______58_84_49209420______58_840_59103160->any = realloc(_5862_49667980______58_84_49209420______58_840_59103160->any,_5862_49667980______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
_5862_49667980______58_84_49209420______58_840_59103160->any[_5862_49667980______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59240420();

   return behavior;
}

Scope makechannel__a1_5860_49948480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__a1_5860_49948480 = scope;
   scope->owner = (Object)_____58_84_49209420;
   scope->name = "channel_a1:60";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_50075320();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_5861_49948180();
   scope->scopes[1] = makeraddr_5863_49947760();
   scope->scopes[2] = makewaddr_5866_49947340();
   scope->scopes[3] = makerinc_5869_49946780();
   scope->scopes[4] = makewinc_5872_49968940();
   scope->scopes[5] = makerdec_5875_49968020();
   scope->scopes[6] = makewdec_5879_49967520();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59240460();
   scope->behaviors[1] = make__59240200();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __59079100;

Behavior make__59079100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59079100 = behavior;
   behavior->owner = (Object)_____58_84_49209420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_45935560______58_84_49209420______58_840_59103160);
   clk_45935560______58_84_49209420______58_840_59103160->num_pos += 1;
   clk_45935560______58_84_49209420______58_840_59103160->pos = realloc(clk_45935560______58_84_49209420______58_840_59103160->pos,clk_45935560______58_84_49209420______58_840_59103160->num_pos*sizeof(Object));
clk_45935560______58_84_49209420______58_840_59103160->pos[clk_45935560______58_84_49209420______58_840_59103160->num_pos-1] = (Object)behavior;
   behavior->block = make__49342080();

   return behavior;
}

Behavior __59103280;

Behavior make__59103280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59103280 = behavior;
   register_timed_behavior(behavior);
   behavior->owner = (Object)_____58_84_49209420;
   behavior->activated = 0;
   behavior->timed = 1;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__59078980();

   return behavior;
}

Behavior __59147060;

Behavior make__59147060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59147060 = behavior;
   behavior->owner = (Object)_____58_84_49209420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_45935560______58_84_49209420______58_840_59103160);
   clk_45935560______58_84_49209420______58_840_59103160->num_any += 1;
   clk_45935560______58_84_49209420______58_840_59103160->any = realloc(clk_45935560______58_84_49209420______58_840_59103160->any,clk_45935560______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
clk_45935560______58_84_49209420______58_840_59103160->any[clk_45935560______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_45935520______58_84_49209420______58_840_59103160);
   rst_45935520______58_84_49209420______58_840_59103160->num_any += 1;
   rst_45935520______58_84_49209420______58_840_59103160->any = realloc(rst_45935520______58_84_49209420______58_840_59103160->any,rst_45935520______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
rst_45935520______58_84_49209420______58_840_59103160->any[rst_45935520______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,fill_45934720______58_84_49209420______58_840_59103160);
   fill_45934720______58_84_49209420______58_840_59103160->num_any += 1;
   fill_45934720______58_84_49209420______58_840_59103160->any = realloc(fill_45934720______58_84_49209420______58_840_59103160->any,fill_45934720______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
fill_45934720______58_84_49209420______58_840_59103160->any[fill_45934720______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,req_45935480______58_84_49209420______58_840_59103160);
   req_45935480______58_84_49209420______58_840_59103160->num_any += 1;
   req_45935480______58_84_49209420______58_840_59103160->any = realloc(req_45935480______58_84_49209420______58_840_59103160->any,req_45935480______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
req_45935480______58_84_49209420______58_840_59103160->any[req_45935480______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__0_45935140______58_84_49209420______58_840_59103160);
   ack__0_45935140______58_84_49209420______58_840_59103160->num_any += 1;
   ack__0_45935140______58_84_49209420______58_840_59103160->any = realloc(ack__0_45935140______58_84_49209420______58_840_59103160->any,ack__0_45935140______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
ack__0_45935140______58_84_49209420______58_840_59103160->any[ack__0_45935140______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59153860();

   return behavior;
}

Behavior __59146840;

Behavior make__59146840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59146840 = behavior;
   behavior->owner = (Object)_____58_84_49209420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__0_49898540_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160);
   ack__0_49898540_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any += 1;
   ack__0_49898540_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any = realloc(ack__0_49898540_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any,ack__0_49898540_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
ack__0_49898540_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->any[ack__0_49898540_layer__hidden_58_840_49905400______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__1_49344380_layer__output_58_840_49346740______58_84_49209420______58_840_59103160);
   ack__1_49344380_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any += 1;
   ack__1_49344380_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any = realloc(ack__1_49344380_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any,ack__1_49344380_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any*sizeof(Object));
ack__1_49344380_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->any[ack__1_49344380_layer__output_58_840_49346740______58_84_49209420______58_840_59103160->num_any-1] = (Object)behavior;
   behavior->block = make__59153800();

   return behavior;
}

Scope make_____58_84_49209420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   _____58_84_49209420 = scope;
   scope->owner = (Object)_____58_840_59103160;
   scope->name = "__:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makelayer__hidden_49898160();
   scope->systemIs[1] = makelayer__output_49344240();
   scope->num_inners = 18;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeclk_45935560();
   scope->inners[1] = makerst_45935520();
   scope->inners[2] = makereq_45935480();
   scope->inners[3] = makeack__0_45935140();
   scope->inners[4] = makeack__1_45934740();
   scope->inners[5] = makefill_45934720();
   scope->inners[6] = make_5815_47705200();
   scope->inners[7] = make_5813_47705120();
   scope->inners[8] = make_5814_47704200();
   scope->inners[9] = make_5817_47704080();
   scope->inners[10] = make_5818_47703600();
   scope->inners[11] = make_5819_48337460();
   scope->inners[12] = make_5832_49209920();
   scope->inners[13] = make_5833_49314420();
   scope->inners[14] = make_5843_49504200();
   scope->inners[15] = make_5844_49561740();
   scope->inners[16] = make_5845_49585860();
   scope->inners[17] = make_5862_49667980();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__x_581_49233660();
   scope->scopes[1] = makechannel__a0_5830_47770220();
   scope->scopes[2] = makechannel__a1_5860_49948480();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59079100();
   scope->behaviors[1] = make__59103280();
   scope->behaviors[2] = make__59147060();
   scope->behaviors[3] = make__59146840();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT make_____58_840_59103160() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   _____58_840_59103160 = systemT;
systemT->owner = NULL;
   systemT->name = "__:T0";
   systemT->num_inputs = 0;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->num_outputs = 0;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make_____58_84_49209420();

   return systemT;
}