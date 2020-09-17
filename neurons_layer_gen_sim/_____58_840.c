#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT _____58_840_49030160;

Block __47700240;

Block __47699180;

Block __47698360;

void code__47698360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51410660(),_5818_48950260______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__47698360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47698360 = block;
   block->owner = (Object)__47699180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47698360;

   return block;
};

void code__47699180() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_48950440______58_84_49047020______58_840_49030160->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51410920();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47698360();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51410280(),_5817_48950340______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__47699180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47699180 = block;
   block->owner = (Object)__47700240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47699180;

   return block;
};

Block __47717200;

Block __47710460;

Block __47733740;

void code__47733740() {
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
                  src0 = _5818_48950260______58_84_49047020______58_840_49030160->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__51408820();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5818_48950260______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51408680(),_5817_48950340______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51408560(),_5819_49095560______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__47733740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47733740 = block;
   block->owner = (Object)__47710460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47733740;

   return block;
};

void code__47710460() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_48950440______58_84_49047020______58_840_49030160->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51409340();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47733740();
   }
      }
   }
}

Block make__47710460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47710460 = block;
   block->owner = (Object)__47717200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47710460;

   return block;
};

void code__47717200() {
 code__47710460();
}

Block make__47717200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47717200 = block;
   block->owner = (Object)__47700240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47717200;

   return block;
};

void code__47700240() {
 code__47699180();
   {
      Value cond = fill_48950400______58_84_49047020______58_840_49030160->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47717200();
   }
      }
   }
}

Block make__47700240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47700240 = block;
   block->owner = (Object)__48654480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47700240;

   return block;
};

Block __48654200;

void code__48654200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51408380(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51408300(),rst_48950440______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51408220(),req_48950420______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51408060(),fill_48950400______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51407980(),rst_48950440______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51407880(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51407780(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51407620(),rst_48950440______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51407280(),fill_48950400______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51407020(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51406960(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51406840(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51405900(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51405640(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51405380(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51405220(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51429280(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51429080(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51428820(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51428460(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51428380(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51428280(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51428220(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51428160(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51428100(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51428040(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51427960(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51427880(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51427820(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51427760(),fill_48950400______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51427640(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51427560(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51427440(),req_48950420______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51427320(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51427180(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51426980(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51426820(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51426700(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51426620(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51426340(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51425940(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51425820(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51425540(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51425060(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51424600(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51424300(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51423980(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51423840(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51423760(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51423560(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51423480(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51423420(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51423340(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51423220(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51423140(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51423080(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51422960(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51422820(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51422700(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51422280(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51422200(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51422060(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51421900(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51421780(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51421700(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51421520(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51421420(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51421300(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51445720(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51445300(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51445220(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51445080(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51444980(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51444820(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51444540(),clk_48950460______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__49031220);
}

Block make__48654200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48654200 = block;
   block->owner = (Object)__49031220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48654200;

   return block;
};

Block __49231140;

void code__49231140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_48950460______58_84_49047020______58_840_49030160->c_value,clk_49304660_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_48950440______58_84_49047020______58_840_49030160->c_value,rst_49304620_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(fill_48950400______58_84_49047020______58_840_49030160->c_value,fill_49304560_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(req_48950420______58_84_49047020______58_840_49030160->c_value,req_49304500_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_48950460______58_84_49047020______58_840_49030160->c_value,clk_61016700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_48950440______58_84_49047020______58_840_49030160->c_value,rst_61016680_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(fill_48950400______58_84_49047020______58_840_49030160->c_value,fill_61016660_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__0_48950380______58_84_49047020______58_840_49030160->c_value,req_61016640_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__49231140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49231140 = block;
   block->owner = (Object)__49316320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49231140;

   return block;
};

Block __49230780;

void code__49230780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__layer_49499000_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,ack__0_48950380______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__1_44927700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value,ack__1_48950360______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__49230780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49230780 = block;
   block->owner = (Object)__49339020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49230780;

   return block;
};

Block __47486160;

Block __48812020;

void code__48812020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_49451780_channel__x_581_49046720______58_84_49047020______58_840_49030160->c_value,make_ref_rangeS(mem_45679560_channel__x_581_49046720______58_84_49047020______58_840_49030160,value2integer(abus__w_49451560_channel__x_581_49046720______58_84_49047020______58_840_49030160->c_value),value2integer(abus__w_49451560_channel__x_581_49046720______58_84_49047020______58_840_49030160->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__48812020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48812020 = block;
   block->owner = (Object)__47486160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48812020;

   return block;
};

void code__47486160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_45679560_channel__x_581_49046720______58_84_49047020______58_840_49030160->c_value;
            idx = value2integer(abus__r_49451660_channel__x_581_49046720______58_84_49047020______58_840_49030160->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_49365980_channel__x_581_49046720______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_49306240_channel__x_581_49046720______58_84_49047020______58_840_49030160->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48812020();
   }
      }
   }
}

Block make__47486160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47486160 = block;
   block->owner = (Object)__48933600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47486160;

   return block;
};

Block __49337140;

void code__49337140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_49306240_channel__x_581_49046720______58_84_49047020______58_840_49030160->c_value,_5817_48950340______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__49337140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49337140 = block;
   block->owner = (Object)__49336640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49337140;

   return block;
};

Block __49336580;

void code__49336580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5817_48950340______58_84_49047020______58_840_49030160->c_value,trig__w_49306240_channel__x_581_49046720______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__49336580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49336580 = block;
   block->owner = (Object)__49335800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49336580;

   return block;
};

Block __49334860;

void code__49334860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_49451560_channel__x_581_49046720______58_84_49047020______58_840_49030160->c_value,_5818_48950260______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__49334860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49334860 = block;
   block->owner = (Object)__49334500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49334860;

   return block;
};

Block __49334220;

void code__49334220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5818_48950260______58_84_49047020______58_840_49030160->c_value,abus__w_49451560_channel__x_581_49046720______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__49334220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49334220 = block;
   block->owner = (Object)__49334020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49334220;

   return block;
};

Block __49333360;

void code__49333360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_49451780_channel__x_581_49046720______58_84_49047020______58_840_49030160->c_value,_5819_49095560______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__49333360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49333360 = block;
   block->owner = (Object)__49332900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49333360;

   return block;
};

Block __49332860;

void code__49332860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5819_49095560______58_84_49047020______58_840_49030160->c_value,dbus__w_49451780_channel__x_581_49046720______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__49332860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49332860 = block;
   block->owner = (Object)__49332540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49332860;

   return block;
};

Block __49355000;

void code__49355000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_49365980_channel__x_581_49046720______58_84_49047020______58_840_49030160->c_value,_5815_49499100_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__49355000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49355000 = block;
   block->owner = (Object)__49419160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49355000;

   return block;
};

Block __49354880;

void code__49354880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5813_49498860_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,trig__r_49306260_channel__x_581_49046720______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5814_49498140_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,abus__r_49451660_channel__x_581_49046720______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__49354880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49354880 = block;
   block->owner = (Object)__49418760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49354880;

   return block;
};

Block __49437120;

void code__49437120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_47728400_channel__a0_5830_48933480______58_84_49047020______58_840_49030160->c_value,_5832_51393980_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__49437120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49437120 = block;
   block->owner = (Object)__49436760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49437120;

   return block;
};

Block __49436680;

void code__49436680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5832_51393980_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,reg__0_47728400_channel__a0_5830_48933480______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__49436680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49436680 = block;
   block->owner = (Object)__49436100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49436680;

   return block;
};

Block __49452480;

void code__49452480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_47911720_channel__a0_5830_48933480______58_84_49047020______58_840_49030160->c_value,_5833_51525720_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__49452480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49452480 = block;
   block->owner = (Object)__49451840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49452480;

   return block;
};

Block __49451240;

void code__49451240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5833_51525720_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->c_value,reg__1_47911720_channel__a0_5830_48933480______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__49451240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49451240 = block;
   block->owner = (Object)__49451000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49451240;

   return block;
};

Block __50976860;

void code__50976860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_49402500_rinc_5842_49402880_channel__a0_5830_48933480______58_84_49047020______58_840_49030160->c_value,_5845_44926280_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__50976860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50976860 = block;
   block->owner = (Object)__50976640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50976860;

   return block;
};

Block __50976560;

void code__50976560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5845_44926280_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value,abus__r_49402500_rinc_5842_49402880_channel__a0_5830_48933480______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__50976560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50976560 = block;
   block->owner = (Object)__50976120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50976560;

   return block;
};

Block __49448520;

void code__49448520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_47728400_channel__a0_5830_48933480______58_84_49047020______58_840_49030160->c_value,_5843_61100160_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_47911720_channel__a0_5830_48933480______58_84_49047020______58_840_49030160->c_value,_5844_44927860_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__49448520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49448520 = block;
   block->owner = (Object)__50975380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49448520;

   return block;
};

Block __48496500;

void code__48496500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_48950600_channel__a1_5860_47911600______58_84_49047020______58_840_49030160->c_value,_5862_47651080_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__48496500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48496500 = block;
   block->owner = (Object)__48496120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48496500;

   return block;
};

Block __48495780;

void code__48495780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5862_47651080_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->c_value,reg__0_48950600_channel__a1_5860_47911600______58_84_49047020______58_840_49030160);
      set_value_pos(pool_state);
   }
}

Block make__48495780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48495780 = block;
   block->owner = (Object)__48494980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48495780;

   return block;
};

Value make__51410920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51410660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51410280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51409340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51408820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51408680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51408560() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51408380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51408300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51408220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51408060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51407980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51407880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51407780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51407620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51407280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51407020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51406960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51406840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51405900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51405640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51405380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51405220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51429280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51429080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51428820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51428460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51428380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51428280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51428220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51428160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51428100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51428040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51427960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51427880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51427820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51427760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51427640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51427560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51427440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51427320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51427180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51426980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51426820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51426700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51426620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51426340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51425940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51425820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51425540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51425060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51424600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51424300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51423980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51423840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51423760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51423560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51423480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51423420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51423340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51423220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51423140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51423080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51422960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51422820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51422700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51422280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51422200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51422060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51421900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51421780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51421700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51421520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51421420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51421300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51445720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51445300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51445220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51445080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51444980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51444820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51444540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope _____58_84_49047020;

SignalI clk_48950460______58_84_49047020______58_840_49030160;

SignalI makeclk_48950460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_48950460______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)_____58_84_49047020;
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

SignalI rst_48950440______58_84_49047020______58_840_49030160;

SignalI makerst_48950440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_48950440______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)_____58_84_49047020;
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

SignalI req_48950420______58_84_49047020______58_840_49030160;

SignalI makereq_48950420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_48950420______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)_____58_84_49047020;
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

SignalI fill_48950400______58_84_49047020______58_840_49030160;

SignalI makefill_48950400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_48950400______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)_____58_84_49047020;
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

SignalI ack__0_48950380______58_84_49047020______58_840_49030160;

SignalI makeack__0_48950380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__0_48950380______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)_____58_84_49047020;
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

SignalI ack__1_48950360______58_84_49047020______58_840_49030160;

SignalI makeack__1_48950360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__1_48950360______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)_____58_84_49047020;
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

SignalI _5817_48950340______58_84_49047020______58_840_49030160;

SignalI make_5817_48950340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5817_48950340______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)_____58_84_49047020;
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

SignalI _5818_48950260______58_84_49047020______58_840_49030160;

SignalI make_5818_48950260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5818_48950260______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)_____58_84_49047020;
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

SignalI _5819_49095560______58_84_49047020______58_840_49030160;

SignalI make_5819_49095560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5819_49095560______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)_____58_84_49047020;
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

SystemI layer__hidden_51525420;

SystemI makelayer__hidden_51525420() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer__hidden_51525420 = systemI;
   systemI->owner = (Object)_____58_84_49047020;
   systemI->name = "layer_hidden";
   systemI->system = layer__hidden_58_840_49263940;

   return systemI;
};

SystemI layer__output_47650520;

SystemI makelayer__output_47650520() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer__output_47650520 = systemI;
   systemI->owner = (Object)_____58_84_49047020;
   systemI->name = "layer_output";
   systemI->system = layer__output_58_840_61018740;

   return systemI;
};

Scope channel__x_581_49046720;

SignalI trig__r_49306260_channel__x_581_49046720______58_84_49047020______58_840_49030160;

SignalI maketrig__r_49306260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_49306260_channel__x_581_49046720______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)channel__x_581_49046720;
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

SignalI trig__w_49306240_channel__x_581_49046720______58_84_49047020______58_840_49030160;

SignalI maketrig__w_49306240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_49306240_channel__x_581_49046720______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)channel__x_581_49046720;
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

SignalI dbus__r_49365980_channel__x_581_49046720______58_84_49047020______58_840_49030160;

SignalI makedbus__r_49365980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_49365980_channel__x_581_49046720______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)channel__x_581_49046720;
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

SignalI dbus__w_49451780_channel__x_581_49046720______58_84_49047020______58_840_49030160;

SignalI makedbus__w_49451780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_49451780_channel__x_581_49046720______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)channel__x_581_49046720;
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

SignalI abus__r_49451660_channel__x_581_49046720______58_84_49047020______58_840_49030160;

SignalI makeabus__r_49451660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49451660_channel__x_581_49046720______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)channel__x_581_49046720;
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

SignalI abus__w_49451560_channel__x_581_49046720______58_84_49047020______58_840_49030160;

SignalI makeabus__w_49451560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49451560_channel__x_581_49046720______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)channel__x_581_49046720;
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

SignalI mem_45679560_channel__x_581_49046720______58_84_49047020______58_840_49030160;

SignalI makemem_45679560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_45679560_channel__x_581_49046720______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)channel__x_581_49046720;
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

Scope raddr_582_49046420;

Scope makeraddr_582_49046420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_582_49046420 = scope;
   scope->owner = (Object)channel__x_581_49046720;
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

Scope waddr_587_49046000;

Scope makewaddr_587_49046000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_587_49046000 = scope;
   scope->owner = (Object)channel__x_581_49046720;
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

Scope rinc_5812_49045540;

Behavior __49419160;

Behavior make__49419160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49419160 = behavior;
   behavior->owner = (Object)rinc_5812_49045540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_49365980_channel__x_581_49046720______58_84_49047020______58_840_49030160);
   dbus__r_49365980_channel__x_581_49046720______58_84_49047020______58_840_49030160->num_any += 1;
   dbus__r_49365980_channel__x_581_49046720______58_84_49047020______58_840_49030160->any = realloc(dbus__r_49365980_channel__x_581_49046720______58_84_49047020______58_840_49030160->any,dbus__r_49365980_channel__x_581_49046720______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
dbus__r_49365980_channel__x_581_49046720______58_84_49047020______58_840_49030160->any[dbus__r_49365980_channel__x_581_49046720______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__49355000();

   return behavior;
}

Behavior __49418760;

Behavior make__49418760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49418760 = behavior;
   behavior->owner = (Object)rinc_5812_49045540;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5813_49498860_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   _5813_49498860_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   _5813_49498860_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(_5813_49498860_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,_5813_49498860_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
_5813_49498860_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[_5813_49498860_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,_5814_49498140_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   _5814_49498140_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   _5814_49498140_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(_5814_49498140_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,_5814_49498140_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
_5814_49498140_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[_5814_49498140_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__49354880();

   return behavior;
}

Scope makerinc_5812_49045540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5812_49045540 = scope;
   scope->owner = (Object)channel__x_581_49046720;
   scope->name = "rinc:12";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49419160();
   scope->behaviors[1] = make__49418760();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5816_49307540;

Scope makewinc_5816_49307540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5816_49307540 = scope;
   scope->owner = (Object)channel__x_581_49046720;
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

Scope rdec_5820_49307120;

Scope makerdec_5820_49307120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5820_49307120 = scope;
   scope->owner = (Object)channel__x_581_49046720;
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

Scope wdec_5825_49306700;

Scope makewdec_5825_49306700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5825_49306700 = scope;
   scope->owner = (Object)channel__x_581_49046720;
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

Behavior __48933600;

Behavior make__48933600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48933600 = behavior;
   behavior->owner = (Object)channel__x_581_49046720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_48950460______58_84_49047020______58_840_49030160);
   clk_48950460______58_84_49047020______58_840_49030160->num_neg += 1;
   clk_48950460______58_84_49047020______58_840_49030160->neg = realloc(clk_48950460______58_84_49047020______58_840_49030160->neg,clk_48950460______58_84_49047020______58_840_49030160->num_neg*sizeof(Object));
clk_48950460______58_84_49047020______58_840_49030160->neg[clk_48950460______58_84_49047020______58_840_49030160->num_neg-1] = (Object)behavior;
   behavior->block = make__47486160();

   return behavior;
}

Behavior __49336640;

Behavior make__49336640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49336640 = behavior;
   behavior->owner = (Object)channel__x_581_49046720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_49306240_channel__x_581_49046720______58_84_49047020______58_840_49030160);
   trig__w_49306240_channel__x_581_49046720______58_84_49047020______58_840_49030160->num_any += 1;
   trig__w_49306240_channel__x_581_49046720______58_84_49047020______58_840_49030160->any = realloc(trig__w_49306240_channel__x_581_49046720______58_84_49047020______58_840_49030160->any,trig__w_49306240_channel__x_581_49046720______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
trig__w_49306240_channel__x_581_49046720______58_84_49047020______58_840_49030160->any[trig__w_49306240_channel__x_581_49046720______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__49337140();

   return behavior;
}

Behavior __49335800;

Behavior make__49335800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49335800 = behavior;
   behavior->owner = (Object)channel__x_581_49046720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5817_48950340______58_84_49047020______58_840_49030160);
   _5817_48950340______58_84_49047020______58_840_49030160->num_any += 1;
   _5817_48950340______58_84_49047020______58_840_49030160->any = realloc(_5817_48950340______58_84_49047020______58_840_49030160->any,_5817_48950340______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
_5817_48950340______58_84_49047020______58_840_49030160->any[_5817_48950340______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__49336580();

   return behavior;
}

Behavior __49334500;

Behavior make__49334500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49334500 = behavior;
   behavior->owner = (Object)channel__x_581_49046720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_49451560_channel__x_581_49046720______58_84_49047020______58_840_49030160);
   abus__w_49451560_channel__x_581_49046720______58_84_49047020______58_840_49030160->num_any += 1;
   abus__w_49451560_channel__x_581_49046720______58_84_49047020______58_840_49030160->any = realloc(abus__w_49451560_channel__x_581_49046720______58_84_49047020______58_840_49030160->any,abus__w_49451560_channel__x_581_49046720______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
abus__w_49451560_channel__x_581_49046720______58_84_49047020______58_840_49030160->any[abus__w_49451560_channel__x_581_49046720______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__49334860();

   return behavior;
}

Behavior __49334020;

Behavior make__49334020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49334020 = behavior;
   behavior->owner = (Object)channel__x_581_49046720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5818_48950260______58_84_49047020______58_840_49030160);
   _5818_48950260______58_84_49047020______58_840_49030160->num_any += 1;
   _5818_48950260______58_84_49047020______58_840_49030160->any = realloc(_5818_48950260______58_84_49047020______58_840_49030160->any,_5818_48950260______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
_5818_48950260______58_84_49047020______58_840_49030160->any[_5818_48950260______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__49334220();

   return behavior;
}

Behavior __49332900;

Behavior make__49332900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49332900 = behavior;
   behavior->owner = (Object)channel__x_581_49046720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_49451780_channel__x_581_49046720______58_84_49047020______58_840_49030160);
   dbus__w_49451780_channel__x_581_49046720______58_84_49047020______58_840_49030160->num_any += 1;
   dbus__w_49451780_channel__x_581_49046720______58_84_49047020______58_840_49030160->any = realloc(dbus__w_49451780_channel__x_581_49046720______58_84_49047020______58_840_49030160->any,dbus__w_49451780_channel__x_581_49046720______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
dbus__w_49451780_channel__x_581_49046720______58_84_49047020______58_840_49030160->any[dbus__w_49451780_channel__x_581_49046720______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__49333360();

   return behavior;
}

Behavior __49332540;

Behavior make__49332540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49332540 = behavior;
   behavior->owner = (Object)channel__x_581_49046720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5819_49095560______58_84_49047020______58_840_49030160);
   _5819_49095560______58_84_49047020______58_840_49030160->num_any += 1;
   _5819_49095560______58_84_49047020______58_840_49030160->any = realloc(_5819_49095560______58_84_49047020______58_840_49030160->any,_5819_49095560______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
_5819_49095560______58_84_49047020______58_840_49030160->any[_5819_49095560______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__49332860();

   return behavior;
}

Scope makechannel__x_581_49046720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__x_581_49046720 = scope;
   scope->owner = (Object)_____58_84_49047020;
   scope->name = "channel_x:1";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_49306260();
   scope->inners[1] = maketrig__w_49306240();
   scope->inners[2] = makedbus__r_49365980();
   scope->inners[3] = makedbus__w_49451780();
   scope->inners[4] = makeabus__r_49451660();
   scope->inners[5] = makeabus__w_49451560();
   scope->inners[6] = makemem_45679560();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_582_49046420();
   scope->scopes[1] = makewaddr_587_49046000();
   scope->scopes[2] = makerinc_5812_49045540();
   scope->scopes[3] = makewinc_5816_49307540();
   scope->scopes[4] = makerdec_5820_49307120();
   scope->scopes[5] = makewdec_5825_49306700();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48933600();
   scope->behaviors[1] = make__49336640();
   scope->behaviors[2] = make__49335800();
   scope->behaviors[3] = make__49334500();
   scope->behaviors[4] = make__49334020();
   scope->behaviors[5] = make__49332900();
   scope->behaviors[6] = make__49332540();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__a0_5830_48933480;

SignalI reg__0_47728400_channel__a0_5830_48933480______58_84_49047020______58_840_49030160;

SignalI makereg__0_47728400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_47728400_channel__a0_5830_48933480______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)channel__a0_5830_48933480;
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

SignalI reg__1_47911720_channel__a0_5830_48933480______58_84_49047020______58_840_49030160;

SignalI makereg__1_47911720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_47911720_channel__a0_5830_48933480______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)channel__a0_5830_48933480;
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

Scope anum_5831_48933180;

Behavior __49436760;

Behavior make__49436760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49436760 = behavior;
   behavior->owner = (Object)anum_5831_48933180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_47728400_channel__a0_5830_48933480______58_84_49047020______58_840_49030160);
   reg__0_47728400_channel__a0_5830_48933480______58_84_49047020______58_840_49030160->num_any += 1;
   reg__0_47728400_channel__a0_5830_48933480______58_84_49047020______58_840_49030160->any = realloc(reg__0_47728400_channel__a0_5830_48933480______58_84_49047020______58_840_49030160->any,reg__0_47728400_channel__a0_5830_48933480______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
reg__0_47728400_channel__a0_5830_48933480______58_84_49047020______58_840_49030160->any[reg__0_47728400_channel__a0_5830_48933480______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__49437120();

   return behavior;
}

Behavior __49436100;

Behavior make__49436100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49436100 = behavior;
   behavior->owner = (Object)anum_5831_48933180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5832_51393980_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   _5832_51393980_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   _5832_51393980_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(_5832_51393980_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,_5832_51393980_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
_5832_51393980_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[_5832_51393980_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__49436680();

   return behavior;
}

Behavior __49451840;

Behavior make__49451840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49451840 = behavior;
   behavior->owner = (Object)anum_5831_48933180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_47911720_channel__a0_5830_48933480______58_84_49047020______58_840_49030160);
   reg__1_47911720_channel__a0_5830_48933480______58_84_49047020______58_840_49030160->num_any += 1;
   reg__1_47911720_channel__a0_5830_48933480______58_84_49047020______58_840_49030160->any = realloc(reg__1_47911720_channel__a0_5830_48933480______58_84_49047020______58_840_49030160->any,reg__1_47911720_channel__a0_5830_48933480______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
reg__1_47911720_channel__a0_5830_48933480______58_84_49047020______58_840_49030160->any[reg__1_47911720_channel__a0_5830_48933480______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__49452480();

   return behavior;
}

Behavior __49451000;

Behavior make__49451000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49451000 = behavior;
   behavior->owner = (Object)anum_5831_48933180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5833_51525720_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   _5833_51525720_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   _5833_51525720_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(_5833_51525720_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,_5833_51525720_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
_5833_51525720_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[_5833_51525720_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__49451240();

   return behavior;
}

Scope makeanum_5831_48933180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_5831_48933180 = scope;
   scope->owner = (Object)channel__a0_5830_48933480;
   scope->name = "anum:31";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49436760();
   scope->behaviors[1] = make__49436100();
   scope->behaviors[2] = make__49451840();
   scope->behaviors[3] = make__49451000();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope raddr_5834_49403720;

Scope makeraddr_5834_49403720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5834_49403720 = scope;
   scope->owner = (Object)channel__a0_5830_48933480;
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

Scope waddr_5838_49403300;

Scope makewaddr_5838_49403300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5838_49403300 = scope;
   scope->owner = (Object)channel__a0_5830_48933480;
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

Scope rinc_5842_49402880;

SignalI abus__r_49402500_rinc_5842_49402880_channel__a0_5830_48933480______58_84_49047020______58_840_49030160;

SignalI makeabus__r_49402500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49402500_rinc_5842_49402880_channel__a0_5830_48933480______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)rinc_5842_49402880;
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

Behavior __50976640;

Behavior make__50976640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50976640 = behavior;
   behavior->owner = (Object)rinc_5842_49402880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_49402500_rinc_5842_49402880_channel__a0_5830_48933480______58_84_49047020______58_840_49030160);
   abus__r_49402500_rinc_5842_49402880_channel__a0_5830_48933480______58_84_49047020______58_840_49030160->num_any += 1;
   abus__r_49402500_rinc_5842_49402880_channel__a0_5830_48933480______58_84_49047020______58_840_49030160->any = realloc(abus__r_49402500_rinc_5842_49402880_channel__a0_5830_48933480______58_84_49047020______58_840_49030160->any,abus__r_49402500_rinc_5842_49402880_channel__a0_5830_48933480______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
abus__r_49402500_rinc_5842_49402880_channel__a0_5830_48933480______58_84_49047020______58_840_49030160->any[abus__r_49402500_rinc_5842_49402880_channel__a0_5830_48933480______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__50976860();

   return behavior;
}

Behavior __50976120;

Behavior make__50976120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50976120 = behavior;
   behavior->owner = (Object)rinc_5842_49402880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5845_44926280_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
   _5845_44926280_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any += 1;
   _5845_44926280_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any = realloc(_5845_44926280_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any,_5845_44926280_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
_5845_44926280_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any[_5845_44926280_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__50976560();

   return behavior;
}

Behavior __50975380;

Behavior make__50975380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50975380 = behavior;
   behavior->owner = (Object)rinc_5842_49402880;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_47728400_channel__a0_5830_48933480______58_84_49047020______58_840_49030160);
   reg__0_47728400_channel__a0_5830_48933480______58_84_49047020______58_840_49030160->num_any += 1;
   reg__0_47728400_channel__a0_5830_48933480______58_84_49047020______58_840_49030160->any = realloc(reg__0_47728400_channel__a0_5830_48933480______58_84_49047020______58_840_49030160->any,reg__0_47728400_channel__a0_5830_48933480______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
reg__0_47728400_channel__a0_5830_48933480______58_84_49047020______58_840_49030160->any[reg__0_47728400_channel__a0_5830_48933480______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,reg__1_47911720_channel__a0_5830_48933480______58_84_49047020______58_840_49030160);
   reg__1_47911720_channel__a0_5830_48933480______58_84_49047020______58_840_49030160->num_any += 1;
   reg__1_47911720_channel__a0_5830_48933480______58_84_49047020______58_840_49030160->any = realloc(reg__1_47911720_channel__a0_5830_48933480______58_84_49047020______58_840_49030160->any,reg__1_47911720_channel__a0_5830_48933480______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
reg__1_47911720_channel__a0_5830_48933480______58_84_49047020______58_840_49030160->any[reg__1_47911720_channel__a0_5830_48933480______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__49448520();

   return behavior;
}

Scope makerinc_5842_49402880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5842_49402880 = scope;
   scope->owner = (Object)channel__a0_5830_48933480;
   scope->name = "rinc:42";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49402500();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50976640();
   scope->behaviors[1] = make__50976120();
   scope->behaviors[2] = make__50975380();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5846_47584660;

SignalI abus__w_47584180_winc_5846_47584660_channel__a0_5830_48933480______58_84_49047020______58_840_49030160;

SignalI makeabus__w_47584180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47584180_winc_5846_47584660_channel__a0_5830_48933480______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)winc_5846_47584660;
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

Scope makewinc_5846_47584660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5846_47584660 = scope;
   scope->owner = (Object)channel__a0_5830_48933480;
   scope->name = "winc:46";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47584180();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5850_47583940;

SignalI abus__r_47582440_rdec_5850_47583940_channel__a0_5830_48933480______58_84_49047020______58_840_49030160;

SignalI makeabus__r_47582440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47582440_rdec_5850_47583940_channel__a0_5830_48933480______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)rdec_5850_47583940;
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

Scope makerdec_5850_47583940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5850_47583940 = scope;
   scope->owner = (Object)channel__a0_5830_48933480;
   scope->name = "rdec:50";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47582440();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_5855_47582320;

SignalI abus__w_47581300_wdec_5855_47582320_channel__a0_5830_48933480______58_84_49047020______58_840_49030160;

SignalI makeabus__w_47581300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47581300_wdec_5855_47582320_channel__a0_5830_48933480______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)wdec_5855_47582320;
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

Scope makewdec_5855_47582320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5855_47582320 = scope;
   scope->owner = (Object)channel__a0_5830_48933480;
   scope->name = "wdec:55";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47581300();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope makechannel__a0_5830_48933480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__a0_5830_48933480 = scope;
   scope->owner = (Object)_____58_84_49047020;
   scope->name = "channel_a0:30";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_47728400();
   scope->inners[1] = makereg__1_47911720();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_5831_48933180();
   scope->scopes[1] = makeraddr_5834_49403720();
   scope->scopes[2] = makewaddr_5838_49403300();
   scope->scopes[3] = makerinc_5842_49402880();
   scope->scopes[4] = makewinc_5846_47584660();
   scope->scopes[5] = makerdec_5850_47583940();
   scope->scopes[6] = makewdec_5855_47582320();
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__a1_5860_47911600;

SignalI reg__0_48950600_channel__a1_5860_47911600______58_84_49047020______58_840_49030160;

SignalI makereg__0_48950600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_48950600_channel__a1_5860_47911600______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)channel__a1_5860_47911600;
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

Scope anum_5861_47911300;

Behavior __48496120;

Behavior make__48496120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48496120 = behavior;
   behavior->owner = (Object)anum_5861_47911300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_48950600_channel__a1_5860_47911600______58_84_49047020______58_840_49030160);
   reg__0_48950600_channel__a1_5860_47911600______58_84_49047020______58_840_49030160->num_any += 1;
   reg__0_48950600_channel__a1_5860_47911600______58_84_49047020______58_840_49030160->any = realloc(reg__0_48950600_channel__a1_5860_47911600______58_84_49047020______58_840_49030160->any,reg__0_48950600_channel__a1_5860_47911600______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
reg__0_48950600_channel__a1_5860_47911600______58_84_49047020______58_840_49030160->any[reg__0_48950600_channel__a1_5860_47911600______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__48496500();

   return behavior;
}

Behavior __48494980;

Behavior make__48494980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48494980 = behavior;
   behavior->owner = (Object)anum_5861_47911300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5862_47651080_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
   _5862_47651080_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any += 1;
   _5862_47651080_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any = realloc(_5862_47651080_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any,_5862_47651080_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
_5862_47651080_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any[_5862_47651080_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__48495780();

   return behavior;
}

Scope makeanum_5861_47911300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_5861_47911300 = scope;
   scope->owner = (Object)channel__a1_5860_47911600;
   scope->name = "anum:61";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48496120();
   scope->behaviors[1] = make__48494980();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope raddr_5863_48671260;

Scope makeraddr_5863_48671260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5863_48671260 = scope;
   scope->owner = (Object)channel__a1_5860_47911600;
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

Scope waddr_5866_48670840;

Scope makewaddr_5866_48670840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5866_48670840 = scope;
   scope->owner = (Object)channel__a1_5860_47911600;
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

Scope rinc_5869_48670420;

SignalI abus__r_48670040_rinc_5869_48670420_channel__a1_5860_47911600______58_84_49047020______58_840_49030160;

SignalI makeabus__r_48670040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48670040_rinc_5869_48670420_channel__a1_5860_47911600______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)rinc_5869_48670420;
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

Scope makerinc_5869_48670420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5869_48670420 = scope;
   scope->owner = (Object)channel__a1_5860_47911600;
   scope->name = "rinc:69";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_48670040();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5872_48669880;

SignalI abus__w_48669080_winc_5872_48669880_channel__a1_5860_47911600______58_84_49047020______58_840_49030160;

SignalI makeabus__w_48669080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48669080_winc_5872_48669880_channel__a1_5860_47911600______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)winc_5872_48669880;
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

Scope makewinc_5872_48669880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5872_48669880 = scope;
   scope->owner = (Object)channel__a1_5860_47911600;
   scope->name = "winc:72";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_48669080();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5875_48668960;

SignalI abus__r_48693120_rdec_5875_48668960_channel__a1_5860_47911600______58_84_49047020______58_840_49030160;

SignalI makeabus__r_48693120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48693120_rdec_5875_48668960_channel__a1_5860_47911600______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)rdec_5875_48668960;
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

Scope makerdec_5875_48668960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5875_48668960 = scope;
   scope->owner = (Object)channel__a1_5860_47911600;
   scope->name = "rdec:75";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_48693120();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_5879_48693000;

SignalI abus__w_48692160_wdec_5879_48693000_channel__a1_5860_47911600______58_84_49047020______58_840_49030160;

SignalI makeabus__w_48692160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48692160_wdec_5879_48693000_channel__a1_5860_47911600______58_84_49047020______58_840_49030160 = signalI;
   signalI->owner = (Object)wdec_5879_48693000;
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

Scope makewdec_5879_48693000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5879_48693000 = scope;
   scope->owner = (Object)channel__a1_5860_47911600;
   scope->name = "wdec:79";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_48692160();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope makechannel__a1_5860_47911600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__a1_5860_47911600 = scope;
   scope->owner = (Object)_____58_84_49047020;
   scope->name = "channel_a1:60";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_48950600();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_5861_47911300();
   scope->scopes[1] = makeraddr_5863_48671260();
   scope->scopes[2] = makewaddr_5866_48670840();
   scope->scopes[3] = makerinc_5869_48670420();
   scope->scopes[4] = makewinc_5872_48669880();
   scope->scopes[5] = makerdec_5875_48668960();
   scope->scopes[6] = makewdec_5879_48693000();
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __48654480;

Behavior make__48654480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48654480 = behavior;
   behavior->owner = (Object)_____58_84_49047020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_48950460______58_84_49047020______58_840_49030160);
   clk_48950460______58_84_49047020______58_840_49030160->num_pos += 1;
   clk_48950460______58_84_49047020______58_840_49030160->pos = realloc(clk_48950460______58_84_49047020______58_840_49030160->pos,clk_48950460______58_84_49047020______58_840_49030160->num_pos*sizeof(Object));
clk_48950460______58_84_49047020______58_840_49030160->pos[clk_48950460______58_84_49047020______58_840_49030160->num_pos-1] = (Object)behavior;
   behavior->block = make__47700240();

   return behavior;
}

Behavior __49031220;

Behavior make__49031220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49031220 = behavior;
   register_timed_behavior(behavior);
   behavior->owner = (Object)_____58_84_49047020;
   behavior->activated = 0;
   behavior->timed = 1;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__48654200();

   return behavior;
}

Behavior __49316320;

Behavior make__49316320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49316320 = behavior;
   behavior->owner = (Object)_____58_84_49047020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_48950460______58_84_49047020______58_840_49030160);
   clk_48950460______58_84_49047020______58_840_49030160->num_any += 1;
   clk_48950460______58_84_49047020______58_840_49030160->any = realloc(clk_48950460______58_84_49047020______58_840_49030160->any,clk_48950460______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
clk_48950460______58_84_49047020______58_840_49030160->any[clk_48950460______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_48950440______58_84_49047020______58_840_49030160);
   rst_48950440______58_84_49047020______58_840_49030160->num_any += 1;
   rst_48950440______58_84_49047020______58_840_49030160->any = realloc(rst_48950440______58_84_49047020______58_840_49030160->any,rst_48950440______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
rst_48950440______58_84_49047020______58_840_49030160->any[rst_48950440______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,fill_48950400______58_84_49047020______58_840_49030160);
   fill_48950400______58_84_49047020______58_840_49030160->num_any += 1;
   fill_48950400______58_84_49047020______58_840_49030160->any = realloc(fill_48950400______58_84_49047020______58_840_49030160->any,fill_48950400______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
fill_48950400______58_84_49047020______58_840_49030160->any[fill_48950400______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,req_48950420______58_84_49047020______58_840_49030160);
   req_48950420______58_84_49047020______58_840_49030160->num_any += 1;
   req_48950420______58_84_49047020______58_840_49030160->any = realloc(req_48950420______58_84_49047020______58_840_49030160->any,req_48950420______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
req_48950420______58_84_49047020______58_840_49030160->any[req_48950420______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__0_48950380______58_84_49047020______58_840_49030160);
   ack__0_48950380______58_84_49047020______58_840_49030160->num_any += 1;
   ack__0_48950380______58_84_49047020______58_840_49030160->any = realloc(ack__0_48950380______58_84_49047020______58_840_49030160->any,ack__0_48950380______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
ack__0_48950380______58_84_49047020______58_840_49030160->any[ack__0_48950380______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__49231140();

   return behavior;
}

Behavior __49339020;

Behavior make__49339020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49339020 = behavior;
   behavior->owner = (Object)_____58_84_49047020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__layer_49499000_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160);
   ack__layer_49499000_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any += 1;
   ack__layer_49499000_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any = realloc(ack__layer_49499000_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any,ack__layer_49499000_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
ack__layer_49499000_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->any[ack__layer_49499000_layer__hidden_58_840_49263940______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__1_44927700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160);
   ack__1_44927700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any += 1;
   ack__1_44927700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any = realloc(ack__1_44927700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any,ack__1_44927700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any*sizeof(Object));
ack__1_44927700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->any[ack__1_44927700_layer__output_58_840_61018740______58_84_49047020______58_840_49030160->num_any-1] = (Object)behavior;
   behavior->block = make__49230780();

   return behavior;
}

Scope make_____58_84_49047020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   _____58_84_49047020 = scope;
   scope->owner = (Object)_____58_840_49030160;
   scope->name = "__:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makelayer__hidden_51525420();
   scope->systemIs[1] = makelayer__output_47650520();
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeclk_48950460();
   scope->inners[1] = makerst_48950440();
   scope->inners[2] = makereq_48950420();
   scope->inners[3] = makefill_48950400();
   scope->inners[4] = makeack__0_48950380();
   scope->inners[5] = makeack__1_48950360();
   scope->inners[6] = make_5817_48950340();
   scope->inners[7] = make_5818_48950260();
   scope->inners[8] = make_5819_49095560();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__x_581_49046720();
   scope->scopes[1] = makechannel__a0_5830_48933480();
   scope->scopes[2] = makechannel__a1_5860_47911600();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48654480();
   scope->behaviors[1] = make__49031220();
   scope->behaviors[2] = make__49316320();
   scope->behaviors[3] = make__49339020();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT make_____58_840_49030160() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   _____58_840_49030160 = systemT;
systemT->owner = NULL;
   systemT->name = "__:T0";
   systemT->num_inputs = 0;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->num_outputs = 0;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make_____58_84_49047020();

   return systemT;
}