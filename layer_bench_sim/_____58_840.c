#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT _____58_840_62073920;

Block __61970300;

Block __61970140;

Block __61969820;

void code__61969820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62313600(),_5818_49160720______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__61969820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61969820 = block;
   block->owner = (Object)__61970140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61969820;

   return block;
};

void code__61970140() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49330020______58_84_49959720______58_840_62073920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__62313700();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__61969820();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62313540(),_5817_49160800______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__61970140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61970140 = block;
   block->owner = (Object)__61970300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61970140;

   return block;
};

Block __61969140;

Block __61968980;

Block __61968640;

void code__61968640() {
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
                  src0 = _5818_49160720______58_84_49959720______58_840_62073920->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__62313220();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5818_49160720______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62313120(),_5817_49160800______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__62313060(),_5819_49458380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__61968640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61968640 = block;
   block->owner = (Object)__61968980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61968640;

   return block;
};

void code__61968980() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49330020______58_84_49959720______58_840_62073920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__62313360();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__61968640();
   }
      }
   }
}

Block make__61968980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61968980 = block;
   block->owner = (Object)__61969140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61968980;

   return block;
};

void code__61969140() {
 code__61968980();
}

Block make__61969140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61969140 = block;
   block->owner = (Object)__61970300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61969140;

   return block;
};

void code__61970300() {
 code__61970140();
   {
      Value cond = fill_49329920______58_84_49959720______58_840_62073920->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__61969140();
   }
      }
   }
}

Block make__61970300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61970300 = block;
   block->owner = (Object)__62044840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61970300;

   return block;
};

Block __62044720;

void code__62044720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62313000(),clk_49330040______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62312940(),rst_49330020______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62312880(),req_49330000______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62312820(),fill_49329920______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__62074040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62312760(),rst_49330020______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__62074040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62312700(),clk_49330040______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__62074040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62312640(),clk_49330040______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62312580(),rst_49330020______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62312520(),fill_49329920______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__62074040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62312460(),clk_49330040______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__62074040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62312400(),clk_49330040______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__62074040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62312340(),clk_49330040______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__62074040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62312280(),clk_49330040______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__62074040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62312220(),clk_49330040______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__62074040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62312160(),clk_49330040______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__62074040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62312100(),clk_49330040______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__62074040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62312040(),clk_49330040______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__62074040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62311980(),clk_49330040______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__62074040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62311920(),clk_49330040______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__62074040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62311860(),clk_49330040______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__62074040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62311800(),clk_49330040______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__62074040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62311740(),clk_49330040______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__62074040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62311680(),clk_49330040______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__62074040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62311600(),clk_49330040______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__62074040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62311520(),clk_49330040______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__62074040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62311460(),clk_49330040______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__62074040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62311400(),clk_49330040______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__62074040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62311280(),clk_49330040______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__62074040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62311220(),clk_49330040______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__62074040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62311160(),fill_49329920______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62311100(),clk_49330040______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62311040(),clk_49330040______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62310980(),req_49330000______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__62074040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62310920(),clk_49330040______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__62074040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62310860(),clk_49330040______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62310800(),req_49330000______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62310740(),clk_49330040______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__62074040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62310680(),clk_49330040______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__62074040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62310620(),clk_49330040______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__62074040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62310560(),clk_49330040______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__62074040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62310500(),clk_49330040______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__62074040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62310440(),clk_49330040______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__62074040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62310380(),clk_49330040______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__62074040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62310320(),clk_49330040______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__62074040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62310260(),clk_49330040______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__62074040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62310200(),clk_49330040______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__62074040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62310140(),clk_49330040______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__62074040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62310080(),clk_49330040______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__62074040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62310020(),clk_49330040______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__62074040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62309960(),clk_49330040______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__62074040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62309900(),clk_49330040______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__62074040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62309840(),clk_49330040______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__62074040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62309780(),clk_49330040______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__62074040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62309720(),clk_49330040______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__62074040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62309660(),clk_49330040______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__62074040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__62309600(),clk_49330040______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__62074040);
}

Block make__62044720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62044720 = block;
   block->owner = (Object)__62074040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62044720;

   return block;
};

Block __62108060;

void code__62108060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_49330040______58_84_49959720______58_840_62073920->c_value,clk_45829420_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_49330020______58_84_49959720______58_840_62073920->c_value,rst_45829380_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(fill_49329920______58_84_49959720______58_840_62073920->c_value,fill_45829120_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(req_49330000______58_84_49959720______58_840_62073920->c_value,req_45829060_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_49330040______58_84_49959720______58_840_62073920->c_value,clk_61948300_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_49330020______58_84_49959720______58_840_62073920->c_value,rst_61948260_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(fill_49329920______58_84_49959720______58_840_62073920->c_value,fill_61948240_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__0_49329980______58_84_49959720______58_840_62073920->c_value,req_61948180_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62108060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62108060 = block;
   block->owner = (Object)__62126080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62108060;

   return block;
};

Block __62108000;

void code__62108000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__0_45829000_layer0_58_840_45714380______58_84_49959720______58_840_62073920->c_value,ack__0_49329980______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__1_61948140_layer1_58_840_61950180______58_84_49959720______58_840_62073920->c_value,ack__1_49329960______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62108000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62108000 = block;
   block->owner = (Object)__62125880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62108000;

   return block;
};

Block __48209600;

Block __48628500;

void code__48628500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_50119640_channel__x_581_49959420______58_84_49959720______58_840_62073920->c_value,make_ref_rangeS(mem_50265660_channel__x_581_49959420______58_84_49959720______58_840_62073920,value2integer(abus__w_50119480_channel__x_581_49959420______58_84_49959720______58_840_62073920->c_value),value2integer(abus__w_50119480_channel__x_581_49959420______58_84_49959720______58_840_62073920->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__48628500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48628500 = block;
   block->owner = (Object)__48209600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48628500;

   return block;
};

void code__48209600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_50265660_channel__x_581_49959420______58_84_49959720______58_840_62073920->c_value;
            idx = value2integer(abus__r_50119560_channel__x_581_49959420______58_84_49959720______58_840_62073920->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_50059480_channel__x_581_49959420______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_49956560_channel__x_581_49959420______58_84_49959720______58_840_62073920->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48628500();
   }
      }
   }
}

Block make__48209600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48209600 = block;
   block->owner = (Object)__49475020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48209600;

   return block;
};

Block __62125120;

void code__62125120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_50059480_channel__x_581_49959420______58_84_49959720______58_840_62073920->c_value,_5815_49160920______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62125120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62125120 = block;
   block->owner = (Object)__62124960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62125120;

   return block;
};

Block __62124920;

void code__62124920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5815_49160920______58_84_49959720______58_840_62073920->c_value,dbus__r_50059480_channel__x_581_49959420______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62124920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62124920 = block;
   block->owner = (Object)__62124760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62124920;

   return block;
};

Block __62124460;

void code__62124460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_49956580_channel__x_581_49959420______58_84_49959720______58_840_62073920->c_value,_5813_49160900______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62124460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62124460 = block;
   block->owner = (Object)__62124300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62124460;

   return block;
};

Block __62124260;

void code__62124260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5813_49160900______58_84_49959720______58_840_62073920->c_value,trig__r_49956580_channel__x_581_49959420______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62124260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62124260 = block;
   block->owner = (Object)__62124100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62124260;

   return block;
};

Block __62123700;

void code__62123700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_50119560_channel__x_581_49959420______58_84_49959720______58_840_62073920->c_value,_5814_49160820______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62123700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62123700 = block;
   block->owner = (Object)__62123540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62123700;

   return block;
};

Block __62123500;

void code__62123500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5814_49160820______58_84_49959720______58_840_62073920->c_value,abus__r_50119560_channel__x_581_49959420______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62123500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62123500 = block;
   block->owner = (Object)__62123340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62123500;

   return block;
};

Block __62123040;

void code__62123040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_49956560_channel__x_581_49959420______58_84_49959720______58_840_62073920->c_value,_5817_49160800______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62123040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62123040 = block;
   block->owner = (Object)__62122880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62123040;

   return block;
};

Block __62122840;

void code__62122840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5817_49160800______58_84_49959720______58_840_62073920->c_value,trig__w_49956560_channel__x_581_49959420______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62122840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62122840 = block;
   block->owner = (Object)__62122680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62122840;

   return block;
};

Block __62122380;

void code__62122380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_50119480_channel__x_581_49959420______58_84_49959720______58_840_62073920->c_value,_5818_49160720______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62122380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62122380 = block;
   block->owner = (Object)__62122220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62122380;

   return block;
};

Block __62122180;

void code__62122180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5818_49160720______58_84_49959720______58_840_62073920->c_value,abus__w_50119480_channel__x_581_49959420______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62122180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62122180 = block;
   block->owner = (Object)__62122020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62122180;

   return block;
};

Block __62121620;

void code__62121620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_50119640_channel__x_581_49959420______58_84_49959720______58_840_62073920->c_value,_5819_49458380______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62121620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62121620 = block;
   block->owner = (Object)__62121460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62121620;

   return block;
};

Block __62121420;

void code__62121420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5819_49458380______58_84_49959720______58_840_62073920->c_value,dbus__w_50119640_channel__x_581_49959420______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62121420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62121420 = block;
   block->owner = (Object)__62121260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62121420;

   return block;
};

Block __62160620;

void code__62160620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_49643460_channel__a0_5830_49474900______58_84_49959720______58_840_62073920->c_value,_5832_49593920______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62160620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62160620 = block;
   block->owner = (Object)__62160400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62160620;

   return block;
};

Block __62160360;

void code__62160360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5832_49593920______58_84_49959720______58_840_62073920->c_value,reg__0_49643460_channel__a0_5830_49474900______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62160360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62160360 = block;
   block->owner = (Object)__62160200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62160360;

   return block;
};

Block __62159900;

void code__62159900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_49862300_channel__a0_5830_49474900______58_84_49959720______58_840_62073920->c_value,_5833_49784060______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62159900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62159900 = block;
   block->owner = (Object)__62159740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62159900;

   return block;
};

Block __62159700;

void code__62159700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5833_49784060______58_84_49959720______58_840_62073920->c_value,reg__1_49862300_channel__a0_5830_49474900______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62159700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62159700 = block;
   block->owner = (Object)__62159540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62159700;

   return block;
};

Block __62159240;

void code__62159240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_49643460_channel__a0_5830_49474900______58_84_49959720______58_840_62073920->c_value,_5843_49924660______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62159240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62159240 = block;
   block->owner = (Object)__62159080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62159240;

   return block;
};

Block __62159040;

void code__62159040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5843_49924660______58_84_49959720______58_840_62073920->c_value,reg__0_49643460_channel__a0_5830_49474900______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62159040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62159040 = block;
   block->owner = (Object)__62158880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62159040;

   return block;
};

Block __62158540;

void code__62158540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_49862300_channel__a0_5830_49474900______58_84_49959720______58_840_62073920->c_value,_5844_50040480______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62158540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62158540 = block;
   block->owner = (Object)__62158320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62158540;

   return block;
};

Block __62158280;

void code__62158280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5844_50040480______58_84_49959720______58_840_62073920->c_value,reg__1_49862300_channel__a0_5830_49474900______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62158280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62158280 = block;
   block->owner = (Object)__62158120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62158280;

   return block;
};

Block __62156620;

void code__62156620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_49472960_rinc_5842_49473340_channel__a0_5830_49474900______58_84_49959720______58_840_62073920->c_value,_5845_50040400______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62156620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62156620 = block;
   block->owner = (Object)__62156440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62156620;

   return block;
};

Block __62156380;

void code__62156380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5845_50040400______58_84_49959720______58_840_62073920->c_value,abus__r_49472960_rinc_5842_49473340_channel__a0_5830_49474900______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62156380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62156380 = block;
   block->owner = (Object)__62156180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62156380;

   return block;
};

Block __62154960;

void code__62154960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_48433140_channel__a1_5860_48225720______58_84_49959720______58_840_62073920->c_value,_5862_50121720______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62154960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62154960 = block;
   block->owner = (Object)__62154800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62154960;

   return block;
};

Block __62154760;

void code__62154760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5862_50121720______58_84_49959720______58_840_62073920->c_value,reg__0_48433140_channel__a1_5860_48225720______58_84_49959720______58_840_62073920);
      set_value_pos(pool_state);
   }
}

Block make__62154760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __62154760 = block;
   block->owner = (Object)__62154580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__62154760;

   return block;
};

Value make__62313700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62313600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__62313540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62313360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62313220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__62313120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62313060() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__62313000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62312940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62312880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62312820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62312760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62312700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62312640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62312580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62312520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62312460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62312400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62312340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62312280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62312220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62312160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62312100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62312040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62311980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62311920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62311860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62311800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62311740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62311680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62311600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62311520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62311460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62311400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62311280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62311220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62311160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62311100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62311040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62310980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62310920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62310860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62310800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62310740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62310680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62310620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62310560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62310500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62310440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62310380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62310320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62310260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62310200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62310140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62310080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62310020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62309960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62309900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62309840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62309780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62309720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62309660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__62309600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope _____58_84_49959720;

SignalI clk_49330040______58_84_49959720______58_840_62073920;

SignalI makeclk_49330040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_49330040______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)_____58_84_49959720;
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

SignalI rst_49330020______58_84_49959720______58_840_62073920;

SignalI makerst_49330020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_49330020______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)_____58_84_49959720;
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

SignalI req_49330000______58_84_49959720______58_840_62073920;

SignalI makereq_49330000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_49330000______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)_____58_84_49959720;
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

SignalI ack__0_49329980______58_84_49959720______58_840_62073920;

SignalI makeack__0_49329980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__0_49329980______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)_____58_84_49959720;
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

SignalI ack__1_49329960______58_84_49959720______58_840_62073920;

SignalI makeack__1_49329960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__1_49329960______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)_____58_84_49959720;
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

SignalI fill_49329920______58_84_49959720______58_840_62073920;

SignalI makefill_49329920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_49329920______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)_____58_84_49959720;
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

SignalI _5815_49160920______58_84_49959720______58_840_62073920;

SignalI make_5815_49160920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5815_49160920______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)_____58_84_49959720;
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

SignalI _5813_49160900______58_84_49959720______58_840_62073920;

SignalI make_5813_49160900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5813_49160900______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)_____58_84_49959720;
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

SignalI _5814_49160820______58_84_49959720______58_840_62073920;

SignalI make_5814_49160820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5814_49160820______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)_____58_84_49959720;
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

SignalI _5817_49160800______58_84_49959720______58_840_62073920;

SignalI make_5817_49160800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5817_49160800______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)_____58_84_49959720;
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

SignalI _5818_49160720______58_84_49959720______58_840_62073920;

SignalI make_5818_49160720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5818_49160720______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)_____58_84_49959720;
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

SignalI _5819_49458380______58_84_49959720______58_840_62073920;

SignalI make_5819_49458380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5819_49458380______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)_____58_84_49959720;
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

SignalI _5832_49593920______58_84_49959720______58_840_62073920;

SignalI make_5832_49593920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5832_49593920______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)_____58_84_49959720;
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

SignalI _5833_49784060______58_84_49959720______58_840_62073920;

SignalI make_5833_49784060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5833_49784060______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)_____58_84_49959720;
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

SignalI _5843_49924660______58_84_49959720______58_840_62073920;

SignalI make_5843_49924660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5843_49924660______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)_____58_84_49959720;
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

SignalI _5844_50040480______58_84_49959720______58_840_62073920;

SignalI make_5844_50040480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5844_50040480______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)_____58_84_49959720;
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

SignalI _5845_50040400______58_84_49959720______58_840_62073920;

SignalI make_5845_50040400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5845_50040400______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)_____58_84_49959720;
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

SignalI _5862_50121720______58_84_49959720______58_840_62073920;

SignalI make_5862_50121720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5862_50121720______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)_____58_84_49959720;
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

SystemI layer0_45849640;

SystemI makelayer0_45849640() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer0_45849640 = systemI;
   systemI->owner = (Object)_____58_84_49959720;
   systemI->name = "layer0";
   systemI->system = layer0_58_840_45714380;

   return systemI;
};

SystemI layer1_61948000;

SystemI makelayer1_61948000() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer1_61948000 = systemI;
   systemI->owner = (Object)_____58_84_49959720;
   systemI->name = "layer1";
   systemI->system = layer1_58_840_61950180;

   return systemI;
};

Scope channel__x_581_49959420;

SignalI trig__r_49956580_channel__x_581_49959420______58_84_49959720______58_840_62073920;

SignalI maketrig__r_49956580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_49956580_channel__x_581_49959420______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)channel__x_581_49959420;
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

SignalI trig__w_49956560_channel__x_581_49959420______58_84_49959720______58_840_62073920;

SignalI maketrig__w_49956560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_49956560_channel__x_581_49959420______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)channel__x_581_49959420;
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

SignalI dbus__r_50059480_channel__x_581_49959420______58_84_49959720______58_840_62073920;

SignalI makedbus__r_50059480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_50059480_channel__x_581_49959420______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)channel__x_581_49959420;
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

SignalI dbus__w_50119640_channel__x_581_49959420______58_84_49959720______58_840_62073920;

SignalI makedbus__w_50119640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_50119640_channel__x_581_49959420______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)channel__x_581_49959420;
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

SignalI abus__r_50119560_channel__x_581_49959420______58_84_49959720______58_840_62073920;

SignalI makeabus__r_50119560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50119560_channel__x_581_49959420______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)channel__x_581_49959420;
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

SignalI abus__w_50119480_channel__x_581_49959420______58_84_49959720______58_840_62073920;

SignalI makeabus__w_50119480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50119480_channel__x_581_49959420______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)channel__x_581_49959420;
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

SignalI mem_50265660_channel__x_581_49959420______58_84_49959720______58_840_62073920;

SignalI makemem_50265660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_50265660_channel__x_581_49959420______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)channel__x_581_49959420;
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

Scope raddr_582_49959120;

Scope makeraddr_582_49959120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_582_49959120 = scope;
   scope->owner = (Object)channel__x_581_49959420;
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

Scope waddr_587_49958700;

Scope makewaddr_587_49958700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_587_49958700 = scope;
   scope->owner = (Object)channel__x_581_49959420;
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

Scope rinc_5812_49958280;

Scope makerinc_5812_49958280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5812_49958280 = scope;
   scope->owner = (Object)channel__x_581_49959420;
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

Scope winc_5816_49957860;

Scope makewinc_5816_49957860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5816_49957860 = scope;
   scope->owner = (Object)channel__x_581_49959420;
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

Scope rdec_5820_49957440;

Scope makerdec_5820_49957440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5820_49957440 = scope;
   scope->owner = (Object)channel__x_581_49959420;
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

Scope wdec_5825_49957020;

Scope makewdec_5825_49957020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5825_49957020 = scope;
   scope->owner = (Object)channel__x_581_49959420;
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

Behavior __49475020;

Behavior make__49475020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49475020 = behavior;
   behavior->owner = (Object)channel__x_581_49959420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_49330040______58_84_49959720______58_840_62073920);
   clk_49330040______58_84_49959720______58_840_62073920->num_neg += 1;
   clk_49330040______58_84_49959720______58_840_62073920->neg = realloc(clk_49330040______58_84_49959720______58_840_62073920->neg,clk_49330040______58_84_49959720______58_840_62073920->num_neg*sizeof(Object));
clk_49330040______58_84_49959720______58_840_62073920->neg[clk_49330040______58_84_49959720______58_840_62073920->num_neg-1] = (Object)behavior;
   behavior->block = make__48209600();

   return behavior;
}

Behavior __62124960;

Behavior make__62124960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62124960 = behavior;
   behavior->owner = (Object)channel__x_581_49959420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_50059480_channel__x_581_49959420______58_84_49959720______58_840_62073920);
   dbus__r_50059480_channel__x_581_49959420______58_84_49959720______58_840_62073920->num_any += 1;
   dbus__r_50059480_channel__x_581_49959420______58_84_49959720______58_840_62073920->any = realloc(dbus__r_50059480_channel__x_581_49959420______58_84_49959720______58_840_62073920->any,dbus__r_50059480_channel__x_581_49959420______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
dbus__r_50059480_channel__x_581_49959420______58_84_49959720______58_840_62073920->any[dbus__r_50059480_channel__x_581_49959420______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62125120();

   return behavior;
}

Behavior __62124760;

Behavior make__62124760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62124760 = behavior;
   behavior->owner = (Object)channel__x_581_49959420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5815_49160920______58_84_49959720______58_840_62073920);
   _5815_49160920______58_84_49959720______58_840_62073920->num_any += 1;
   _5815_49160920______58_84_49959720______58_840_62073920->any = realloc(_5815_49160920______58_84_49959720______58_840_62073920->any,_5815_49160920______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
_5815_49160920______58_84_49959720______58_840_62073920->any[_5815_49160920______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62124920();

   return behavior;
}

Behavior __62124300;

Behavior make__62124300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62124300 = behavior;
   behavior->owner = (Object)channel__x_581_49959420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_49956580_channel__x_581_49959420______58_84_49959720______58_840_62073920);
   trig__r_49956580_channel__x_581_49959420______58_84_49959720______58_840_62073920->num_any += 1;
   trig__r_49956580_channel__x_581_49959420______58_84_49959720______58_840_62073920->any = realloc(trig__r_49956580_channel__x_581_49959420______58_84_49959720______58_840_62073920->any,trig__r_49956580_channel__x_581_49959420______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
trig__r_49956580_channel__x_581_49959420______58_84_49959720______58_840_62073920->any[trig__r_49956580_channel__x_581_49959420______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62124460();

   return behavior;
}

Behavior __62124100;

Behavior make__62124100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62124100 = behavior;
   behavior->owner = (Object)channel__x_581_49959420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5813_49160900______58_84_49959720______58_840_62073920);
   _5813_49160900______58_84_49959720______58_840_62073920->num_any += 1;
   _5813_49160900______58_84_49959720______58_840_62073920->any = realloc(_5813_49160900______58_84_49959720______58_840_62073920->any,_5813_49160900______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
_5813_49160900______58_84_49959720______58_840_62073920->any[_5813_49160900______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62124260();

   return behavior;
}

Behavior __62123540;

Behavior make__62123540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62123540 = behavior;
   behavior->owner = (Object)channel__x_581_49959420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_50119560_channel__x_581_49959420______58_84_49959720______58_840_62073920);
   abus__r_50119560_channel__x_581_49959420______58_84_49959720______58_840_62073920->num_any += 1;
   abus__r_50119560_channel__x_581_49959420______58_84_49959720______58_840_62073920->any = realloc(abus__r_50119560_channel__x_581_49959420______58_84_49959720______58_840_62073920->any,abus__r_50119560_channel__x_581_49959420______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
abus__r_50119560_channel__x_581_49959420______58_84_49959720______58_840_62073920->any[abus__r_50119560_channel__x_581_49959420______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62123700();

   return behavior;
}

Behavior __62123340;

Behavior make__62123340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62123340 = behavior;
   behavior->owner = (Object)channel__x_581_49959420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5814_49160820______58_84_49959720______58_840_62073920);
   _5814_49160820______58_84_49959720______58_840_62073920->num_any += 1;
   _5814_49160820______58_84_49959720______58_840_62073920->any = realloc(_5814_49160820______58_84_49959720______58_840_62073920->any,_5814_49160820______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
_5814_49160820______58_84_49959720______58_840_62073920->any[_5814_49160820______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62123500();

   return behavior;
}

Behavior __62122880;

Behavior make__62122880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62122880 = behavior;
   behavior->owner = (Object)channel__x_581_49959420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_49956560_channel__x_581_49959420______58_84_49959720______58_840_62073920);
   trig__w_49956560_channel__x_581_49959420______58_84_49959720______58_840_62073920->num_any += 1;
   trig__w_49956560_channel__x_581_49959420______58_84_49959720______58_840_62073920->any = realloc(trig__w_49956560_channel__x_581_49959420______58_84_49959720______58_840_62073920->any,trig__w_49956560_channel__x_581_49959420______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
trig__w_49956560_channel__x_581_49959420______58_84_49959720______58_840_62073920->any[trig__w_49956560_channel__x_581_49959420______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62123040();

   return behavior;
}

Behavior __62122680;

Behavior make__62122680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62122680 = behavior;
   behavior->owner = (Object)channel__x_581_49959420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5817_49160800______58_84_49959720______58_840_62073920);
   _5817_49160800______58_84_49959720______58_840_62073920->num_any += 1;
   _5817_49160800______58_84_49959720______58_840_62073920->any = realloc(_5817_49160800______58_84_49959720______58_840_62073920->any,_5817_49160800______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
_5817_49160800______58_84_49959720______58_840_62073920->any[_5817_49160800______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62122840();

   return behavior;
}

Behavior __62122220;

Behavior make__62122220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62122220 = behavior;
   behavior->owner = (Object)channel__x_581_49959420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_50119480_channel__x_581_49959420______58_84_49959720______58_840_62073920);
   abus__w_50119480_channel__x_581_49959420______58_84_49959720______58_840_62073920->num_any += 1;
   abus__w_50119480_channel__x_581_49959420______58_84_49959720______58_840_62073920->any = realloc(abus__w_50119480_channel__x_581_49959420______58_84_49959720______58_840_62073920->any,abus__w_50119480_channel__x_581_49959420______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
abus__w_50119480_channel__x_581_49959420______58_84_49959720______58_840_62073920->any[abus__w_50119480_channel__x_581_49959420______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62122380();

   return behavior;
}

Behavior __62122020;

Behavior make__62122020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62122020 = behavior;
   behavior->owner = (Object)channel__x_581_49959420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5818_49160720______58_84_49959720______58_840_62073920);
   _5818_49160720______58_84_49959720______58_840_62073920->num_any += 1;
   _5818_49160720______58_84_49959720______58_840_62073920->any = realloc(_5818_49160720______58_84_49959720______58_840_62073920->any,_5818_49160720______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
_5818_49160720______58_84_49959720______58_840_62073920->any[_5818_49160720______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62122180();

   return behavior;
}

Behavior __62121460;

Behavior make__62121460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62121460 = behavior;
   behavior->owner = (Object)channel__x_581_49959420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_50119640_channel__x_581_49959420______58_84_49959720______58_840_62073920);
   dbus__w_50119640_channel__x_581_49959420______58_84_49959720______58_840_62073920->num_any += 1;
   dbus__w_50119640_channel__x_581_49959420______58_84_49959720______58_840_62073920->any = realloc(dbus__w_50119640_channel__x_581_49959420______58_84_49959720______58_840_62073920->any,dbus__w_50119640_channel__x_581_49959420______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
dbus__w_50119640_channel__x_581_49959420______58_84_49959720______58_840_62073920->any[dbus__w_50119640_channel__x_581_49959420______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62121620();

   return behavior;
}

Behavior __62121260;

Behavior make__62121260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62121260 = behavior;
   behavior->owner = (Object)channel__x_581_49959420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5819_49458380______58_84_49959720______58_840_62073920);
   _5819_49458380______58_84_49959720______58_840_62073920->num_any += 1;
   _5819_49458380______58_84_49959720______58_840_62073920->any = realloc(_5819_49458380______58_84_49959720______58_840_62073920->any,_5819_49458380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
_5819_49458380______58_84_49959720______58_840_62073920->any[_5819_49458380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62121420();

   return behavior;
}

Scope makechannel__x_581_49959420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__x_581_49959420 = scope;
   scope->owner = (Object)_____58_84_49959720;
   scope->name = "channel_x:1";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_49956580();
   scope->inners[1] = maketrig__w_49956560();
   scope->inners[2] = makedbus__r_50059480();
   scope->inners[3] = makedbus__w_50119640();
   scope->inners[4] = makeabus__r_50119560();
   scope->inners[5] = makeabus__w_50119480();
   scope->inners[6] = makemem_50265660();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_582_49959120();
   scope->scopes[1] = makewaddr_587_49958700();
   scope->scopes[2] = makerinc_5812_49958280();
   scope->scopes[3] = makewinc_5816_49957860();
   scope->scopes[4] = makerdec_5820_49957440();
   scope->scopes[5] = makewdec_5825_49957020();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49475020();
   scope->behaviors[1] = make__62124960();
   scope->behaviors[2] = make__62124760();
   scope->behaviors[3] = make__62124300();
   scope->behaviors[4] = make__62124100();
   scope->behaviors[5] = make__62123540();
   scope->behaviors[6] = make__62123340();
   scope->behaviors[7] = make__62122880();
   scope->behaviors[8] = make__62122680();
   scope->behaviors[9] = make__62122220();
   scope->behaviors[10] = make__62122020();
   scope->behaviors[11] = make__62121460();
   scope->behaviors[12] = make__62121260();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__a0_5830_49474900;

SignalI reg__0_49643460_channel__a0_5830_49474900______58_84_49959720______58_840_62073920;

SignalI makereg__0_49643460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_49643460_channel__a0_5830_49474900______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)channel__a0_5830_49474900;
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

SignalI reg__1_49862300_channel__a0_5830_49474900______58_84_49959720______58_840_62073920;

SignalI makereg__1_49862300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_49862300_channel__a0_5830_49474900______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)channel__a0_5830_49474900;
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

Scope anum_5831_49474600;

Scope makeanum_5831_49474600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_5831_49474600 = scope;
   scope->owner = (Object)channel__a0_5830_49474900;
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

Scope raddr_5834_49474180;

Scope makeraddr_5834_49474180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5834_49474180 = scope;
   scope->owner = (Object)channel__a0_5830_49474900;
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

Scope waddr_5838_49473760;

Scope makewaddr_5838_49473760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5838_49473760 = scope;
   scope->owner = (Object)channel__a0_5830_49474900;
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

Scope rinc_5842_49473340;

SignalI abus__r_49472960_rinc_5842_49473340_channel__a0_5830_49474900______58_84_49959720______58_840_62073920;

SignalI makeabus__r_49472960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49472960_rinc_5842_49473340_channel__a0_5830_49474900______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)rinc_5842_49473340;
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

Behavior __62156440;

Behavior make__62156440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62156440 = behavior;
   behavior->owner = (Object)rinc_5842_49473340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_49472960_rinc_5842_49473340_channel__a0_5830_49474900______58_84_49959720______58_840_62073920);
   abus__r_49472960_rinc_5842_49473340_channel__a0_5830_49474900______58_84_49959720______58_840_62073920->num_any += 1;
   abus__r_49472960_rinc_5842_49473340_channel__a0_5830_49474900______58_84_49959720______58_840_62073920->any = realloc(abus__r_49472960_rinc_5842_49473340_channel__a0_5830_49474900______58_84_49959720______58_840_62073920->any,abus__r_49472960_rinc_5842_49473340_channel__a0_5830_49474900______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
abus__r_49472960_rinc_5842_49473340_channel__a0_5830_49474900______58_84_49959720______58_840_62073920->any[abus__r_49472960_rinc_5842_49473340_channel__a0_5830_49474900______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62156620();

   return behavior;
}

Behavior __62156180;

Behavior make__62156180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62156180 = behavior;
   behavior->owner = (Object)rinc_5842_49473340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5845_50040400______58_84_49959720______58_840_62073920);
   _5845_50040400______58_84_49959720______58_840_62073920->num_any += 1;
   _5845_50040400______58_84_49959720______58_840_62073920->any = realloc(_5845_50040400______58_84_49959720______58_840_62073920->any,_5845_50040400______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
_5845_50040400______58_84_49959720______58_840_62073920->any[_5845_50040400______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62156380();

   return behavior;
}

Scope makerinc_5842_49473340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5842_49473340 = scope;
   scope->owner = (Object)channel__a0_5830_49474900;
   scope->name = "rinc:42";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49472960();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__62156440();
   scope->behaviors[1] = make__62156180();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5846_49472580;

SignalI abus__w_49472200_winc_5846_49472580_channel__a0_5830_49474900______58_84_49959720______58_840_62073920;

SignalI makeabus__w_49472200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49472200_winc_5846_49472580_channel__a0_5830_49474900______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)winc_5846_49472580;
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

Scope makewinc_5846_49472580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5846_49472580 = scope;
   scope->owner = (Object)channel__a0_5830_49474900;
   scope->name = "winc:46";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49472200();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5850_49472080;

SignalI abus__r_49471700_rdec_5850_49472080_channel__a0_5830_49474900______58_84_49959720______58_840_62073920;

SignalI makeabus__r_49471700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49471700_rdec_5850_49472080_channel__a0_5830_49474900______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)rdec_5850_49472080;
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

Scope makerdec_5850_49472080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5850_49472080 = scope;
   scope->owner = (Object)channel__a0_5830_49474900;
   scope->name = "rdec:50";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49471700();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_5855_49471580;

SignalI abus__w_49495740_wdec_5855_49471580_channel__a0_5830_49474900______58_84_49959720______58_840_62073920;

SignalI makeabus__w_49495740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49495740_wdec_5855_49471580_channel__a0_5830_49474900______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)wdec_5855_49471580;
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

Scope makewdec_5855_49471580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5855_49471580 = scope;
   scope->owner = (Object)channel__a0_5830_49474900;
   scope->name = "wdec:55";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49495740();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __62160400;

Behavior make__62160400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62160400 = behavior;
   behavior->owner = (Object)channel__a0_5830_49474900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_49643460_channel__a0_5830_49474900______58_84_49959720______58_840_62073920);
   reg__0_49643460_channel__a0_5830_49474900______58_84_49959720______58_840_62073920->num_any += 1;
   reg__0_49643460_channel__a0_5830_49474900______58_84_49959720______58_840_62073920->any = realloc(reg__0_49643460_channel__a0_5830_49474900______58_84_49959720______58_840_62073920->any,reg__0_49643460_channel__a0_5830_49474900______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
reg__0_49643460_channel__a0_5830_49474900______58_84_49959720______58_840_62073920->any[reg__0_49643460_channel__a0_5830_49474900______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62160620();

   return behavior;
}

Behavior __62160200;

Behavior make__62160200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62160200 = behavior;
   behavior->owner = (Object)channel__a0_5830_49474900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5832_49593920______58_84_49959720______58_840_62073920);
   _5832_49593920______58_84_49959720______58_840_62073920->num_any += 1;
   _5832_49593920______58_84_49959720______58_840_62073920->any = realloc(_5832_49593920______58_84_49959720______58_840_62073920->any,_5832_49593920______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
_5832_49593920______58_84_49959720______58_840_62073920->any[_5832_49593920______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62160360();

   return behavior;
}

Behavior __62159740;

Behavior make__62159740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62159740 = behavior;
   behavior->owner = (Object)channel__a0_5830_49474900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_49862300_channel__a0_5830_49474900______58_84_49959720______58_840_62073920);
   reg__1_49862300_channel__a0_5830_49474900______58_84_49959720______58_840_62073920->num_any += 1;
   reg__1_49862300_channel__a0_5830_49474900______58_84_49959720______58_840_62073920->any = realloc(reg__1_49862300_channel__a0_5830_49474900______58_84_49959720______58_840_62073920->any,reg__1_49862300_channel__a0_5830_49474900______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
reg__1_49862300_channel__a0_5830_49474900______58_84_49959720______58_840_62073920->any[reg__1_49862300_channel__a0_5830_49474900______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62159900();

   return behavior;
}

Behavior __62159540;

Behavior make__62159540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62159540 = behavior;
   behavior->owner = (Object)channel__a0_5830_49474900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5833_49784060______58_84_49959720______58_840_62073920);
   _5833_49784060______58_84_49959720______58_840_62073920->num_any += 1;
   _5833_49784060______58_84_49959720______58_840_62073920->any = realloc(_5833_49784060______58_84_49959720______58_840_62073920->any,_5833_49784060______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
_5833_49784060______58_84_49959720______58_840_62073920->any[_5833_49784060______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62159700();

   return behavior;
}

Behavior __62159080;

Behavior make__62159080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62159080 = behavior;
   behavior->owner = (Object)channel__a0_5830_49474900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_49643460_channel__a0_5830_49474900______58_84_49959720______58_840_62073920);
   reg__0_49643460_channel__a0_5830_49474900______58_84_49959720______58_840_62073920->num_any += 1;
   reg__0_49643460_channel__a0_5830_49474900______58_84_49959720______58_840_62073920->any = realloc(reg__0_49643460_channel__a0_5830_49474900______58_84_49959720______58_840_62073920->any,reg__0_49643460_channel__a0_5830_49474900______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
reg__0_49643460_channel__a0_5830_49474900______58_84_49959720______58_840_62073920->any[reg__0_49643460_channel__a0_5830_49474900______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62159240();

   return behavior;
}

Behavior __62158880;

Behavior make__62158880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62158880 = behavior;
   behavior->owner = (Object)channel__a0_5830_49474900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5843_49924660______58_84_49959720______58_840_62073920);
   _5843_49924660______58_84_49959720______58_840_62073920->num_any += 1;
   _5843_49924660______58_84_49959720______58_840_62073920->any = realloc(_5843_49924660______58_84_49959720______58_840_62073920->any,_5843_49924660______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
_5843_49924660______58_84_49959720______58_840_62073920->any[_5843_49924660______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62159040();

   return behavior;
}

Behavior __62158320;

Behavior make__62158320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62158320 = behavior;
   behavior->owner = (Object)channel__a0_5830_49474900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_49862300_channel__a0_5830_49474900______58_84_49959720______58_840_62073920);
   reg__1_49862300_channel__a0_5830_49474900______58_84_49959720______58_840_62073920->num_any += 1;
   reg__1_49862300_channel__a0_5830_49474900______58_84_49959720______58_840_62073920->any = realloc(reg__1_49862300_channel__a0_5830_49474900______58_84_49959720______58_840_62073920->any,reg__1_49862300_channel__a0_5830_49474900______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
reg__1_49862300_channel__a0_5830_49474900______58_84_49959720______58_840_62073920->any[reg__1_49862300_channel__a0_5830_49474900______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62158540();

   return behavior;
}

Behavior __62158120;

Behavior make__62158120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62158120 = behavior;
   behavior->owner = (Object)channel__a0_5830_49474900;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5844_50040480______58_84_49959720______58_840_62073920);
   _5844_50040480______58_84_49959720______58_840_62073920->num_any += 1;
   _5844_50040480______58_84_49959720______58_840_62073920->any = realloc(_5844_50040480______58_84_49959720______58_840_62073920->any,_5844_50040480______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
_5844_50040480______58_84_49959720______58_840_62073920->any[_5844_50040480______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62158280();

   return behavior;
}

Scope makechannel__a0_5830_49474900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__a0_5830_49474900 = scope;
   scope->owner = (Object)_____58_84_49959720;
   scope->name = "channel_a0:30";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_49643460();
   scope->inners[1] = makereg__1_49862300();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_5831_49474600();
   scope->scopes[1] = makeraddr_5834_49474180();
   scope->scopes[2] = makewaddr_5838_49473760();
   scope->scopes[3] = makerinc_5842_49473340();
   scope->scopes[4] = makewinc_5846_49472580();
   scope->scopes[5] = makerdec_5850_49472080();
   scope->scopes[6] = makewdec_5855_49471580();
   scope->num_behaviors = 8;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__62160400();
   scope->behaviors[1] = make__62160200();
   scope->behaviors[2] = make__62159740();
   scope->behaviors[3] = make__62159540();
   scope->behaviors[4] = make__62159080();
   scope->behaviors[5] = make__62158880();
   scope->behaviors[6] = make__62158320();
   scope->behaviors[7] = make__62158120();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__a1_5860_48225720;

SignalI reg__0_48433140_channel__a1_5860_48225720______58_84_49959720______58_840_62073920;

SignalI makereg__0_48433140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_48433140_channel__a1_5860_48225720______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)channel__a1_5860_48225720;
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

Scope anum_5861_48225380;

Scope makeanum_5861_48225380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_5861_48225380 = scope;
   scope->owner = (Object)channel__a1_5860_48225720;
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

Scope raddr_5863_48224860;

Scope makeraddr_5863_48224860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5863_48224860 = scope;
   scope->owner = (Object)channel__a1_5860_48225720;
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

Scope waddr_5866_48224260;

Scope makewaddr_5866_48224260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5866_48224260 = scope;
   scope->owner = (Object)channel__a1_5860_48225720;
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

Scope rinc_5869_48223800;

SignalI abus__r_48223420_rinc_5869_48223800_channel__a1_5860_48225720______58_84_49959720______58_840_62073920;

SignalI makeabus__r_48223420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48223420_rinc_5869_48223800_channel__a1_5860_48225720______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)rinc_5869_48223800;
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

Scope makerinc_5869_48223800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5869_48223800 = scope;
   scope->owner = (Object)channel__a1_5860_48225720;
   scope->name = "rinc:69";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_48223420();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5872_48223300;

SignalI abus__w_48222820_winc_5872_48223300_channel__a1_5860_48225720______58_84_49959720______58_840_62073920;

SignalI makeabus__w_48222820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48222820_winc_5872_48223300_channel__a1_5860_48225720______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)winc_5872_48223300;
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

Scope makewinc_5872_48223300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5872_48223300 = scope;
   scope->owner = (Object)channel__a1_5860_48225720;
   scope->name = "winc:72";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_48222820();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5875_48222700;

SignalI abus__r_48222320_rdec_5875_48222700_channel__a1_5860_48225720______58_84_49959720______58_840_62073920;

SignalI makeabus__r_48222320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48222320_rdec_5875_48222700_channel__a1_5860_48225720______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)rdec_5875_48222700;
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

Scope makerdec_5875_48222700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5875_48222700 = scope;
   scope->owner = (Object)channel__a1_5860_48225720;
   scope->name = "rdec:75";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_48222320();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_5879_48222200;

SignalI abus__w_48221820_wdec_5879_48222200_channel__a1_5860_48225720______58_84_49959720______58_840_62073920;

SignalI makeabus__w_48221820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48221820_wdec_5879_48222200_channel__a1_5860_48225720______58_84_49959720______58_840_62073920 = signalI;
   signalI->owner = (Object)wdec_5879_48222200;
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

Scope makewdec_5879_48222200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5879_48222200 = scope;
   scope->owner = (Object)channel__a1_5860_48225720;
   scope->name = "wdec:79";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_48221820();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __62154800;

Behavior make__62154800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62154800 = behavior;
   behavior->owner = (Object)channel__a1_5860_48225720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_48433140_channel__a1_5860_48225720______58_84_49959720______58_840_62073920);
   reg__0_48433140_channel__a1_5860_48225720______58_84_49959720______58_840_62073920->num_any += 1;
   reg__0_48433140_channel__a1_5860_48225720______58_84_49959720______58_840_62073920->any = realloc(reg__0_48433140_channel__a1_5860_48225720______58_84_49959720______58_840_62073920->any,reg__0_48433140_channel__a1_5860_48225720______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
reg__0_48433140_channel__a1_5860_48225720______58_84_49959720______58_840_62073920->any[reg__0_48433140_channel__a1_5860_48225720______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62154960();

   return behavior;
}

Behavior __62154580;

Behavior make__62154580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62154580 = behavior;
   behavior->owner = (Object)channel__a1_5860_48225720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5862_50121720______58_84_49959720______58_840_62073920);
   _5862_50121720______58_84_49959720______58_840_62073920->num_any += 1;
   _5862_50121720______58_84_49959720______58_840_62073920->any = realloc(_5862_50121720______58_84_49959720______58_840_62073920->any,_5862_50121720______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
_5862_50121720______58_84_49959720______58_840_62073920->any[_5862_50121720______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62154760();

   return behavior;
}

Scope makechannel__a1_5860_48225720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__a1_5860_48225720 = scope;
   scope->owner = (Object)_____58_84_49959720;
   scope->name = "channel_a1:60";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_48433140();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_5861_48225380();
   scope->scopes[1] = makeraddr_5863_48224860();
   scope->scopes[2] = makewaddr_5866_48224260();
   scope->scopes[3] = makerinc_5869_48223800();
   scope->scopes[4] = makewinc_5872_48223300();
   scope->scopes[5] = makerdec_5875_48222700();
   scope->scopes[6] = makewdec_5879_48222200();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__62154800();
   scope->behaviors[1] = make__62154580();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __62044840;

Behavior make__62044840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62044840 = behavior;
   behavior->owner = (Object)_____58_84_49959720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_49330040______58_84_49959720______58_840_62073920);
   clk_49330040______58_84_49959720______58_840_62073920->num_pos += 1;
   clk_49330040______58_84_49959720______58_840_62073920->pos = realloc(clk_49330040______58_84_49959720______58_840_62073920->pos,clk_49330040______58_84_49959720______58_840_62073920->num_pos*sizeof(Object));
clk_49330040______58_84_49959720______58_840_62073920->pos[clk_49330040______58_84_49959720______58_840_62073920->num_pos-1] = (Object)behavior;
   behavior->block = make__61970300();

   return behavior;
}

Behavior __62074040;

Behavior make__62074040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62074040 = behavior;
   register_timed_behavior(behavior);
   behavior->owner = (Object)_____58_84_49959720;
   behavior->activated = 0;
   behavior->timed = 1;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__62044720();

   return behavior;
}

Behavior __62126080;

Behavior make__62126080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62126080 = behavior;
   behavior->owner = (Object)_____58_84_49959720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_49330040______58_84_49959720______58_840_62073920);
   clk_49330040______58_84_49959720______58_840_62073920->num_any += 1;
   clk_49330040______58_84_49959720______58_840_62073920->any = realloc(clk_49330040______58_84_49959720______58_840_62073920->any,clk_49330040______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
clk_49330040______58_84_49959720______58_840_62073920->any[clk_49330040______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_49330020______58_84_49959720______58_840_62073920);
   rst_49330020______58_84_49959720______58_840_62073920->num_any += 1;
   rst_49330020______58_84_49959720______58_840_62073920->any = realloc(rst_49330020______58_84_49959720______58_840_62073920->any,rst_49330020______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
rst_49330020______58_84_49959720______58_840_62073920->any[rst_49330020______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,fill_49329920______58_84_49959720______58_840_62073920);
   fill_49329920______58_84_49959720______58_840_62073920->num_any += 1;
   fill_49329920______58_84_49959720______58_840_62073920->any = realloc(fill_49329920______58_84_49959720______58_840_62073920->any,fill_49329920______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
fill_49329920______58_84_49959720______58_840_62073920->any[fill_49329920______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,req_49330000______58_84_49959720______58_840_62073920);
   req_49330000______58_84_49959720______58_840_62073920->num_any += 1;
   req_49330000______58_84_49959720______58_840_62073920->any = realloc(req_49330000______58_84_49959720______58_840_62073920->any,req_49330000______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
req_49330000______58_84_49959720______58_840_62073920->any[req_49330000______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__0_49329980______58_84_49959720______58_840_62073920);
   ack__0_49329980______58_84_49959720______58_840_62073920->num_any += 1;
   ack__0_49329980______58_84_49959720______58_840_62073920->any = realloc(ack__0_49329980______58_84_49959720______58_840_62073920->any,ack__0_49329980______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
ack__0_49329980______58_84_49959720______58_840_62073920->any[ack__0_49329980______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62108060();

   return behavior;
}

Behavior __62125880;

Behavior make__62125880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __62125880 = behavior;
   behavior->owner = (Object)_____58_84_49959720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__0_45829000_layer0_58_840_45714380______58_84_49959720______58_840_62073920);
   ack__0_45829000_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any += 1;
   ack__0_45829000_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any = realloc(ack__0_45829000_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any,ack__0_45829000_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
ack__0_45829000_layer0_58_840_45714380______58_84_49959720______58_840_62073920->any[ack__0_45829000_layer0_58_840_45714380______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__1_61948140_layer1_58_840_61950180______58_84_49959720______58_840_62073920);
   ack__1_61948140_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any += 1;
   ack__1_61948140_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any = realloc(ack__1_61948140_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any,ack__1_61948140_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any*sizeof(Object));
ack__1_61948140_layer1_58_840_61950180______58_84_49959720______58_840_62073920->any[ack__1_61948140_layer1_58_840_61950180______58_84_49959720______58_840_62073920->num_any-1] = (Object)behavior;
   behavior->block = make__62108000();

   return behavior;
}

Scope make_____58_84_49959720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   _____58_84_49959720 = scope;
   scope->owner = (Object)_____58_840_62073920;
   scope->name = "__:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makelayer0_45849640();
   scope->systemIs[1] = makelayer1_61948000();
   scope->num_inners = 18;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeclk_49330040();
   scope->inners[1] = makerst_49330020();
   scope->inners[2] = makereq_49330000();
   scope->inners[3] = makeack__0_49329980();
   scope->inners[4] = makeack__1_49329960();
   scope->inners[5] = makefill_49329920();
   scope->inners[6] = make_5815_49160920();
   scope->inners[7] = make_5813_49160900();
   scope->inners[8] = make_5814_49160820();
   scope->inners[9] = make_5817_49160800();
   scope->inners[10] = make_5818_49160720();
   scope->inners[11] = make_5819_49458380();
   scope->inners[12] = make_5832_49593920();
   scope->inners[13] = make_5833_49784060();
   scope->inners[14] = make_5843_49924660();
   scope->inners[15] = make_5844_50040480();
   scope->inners[16] = make_5845_50040400();
   scope->inners[17] = make_5862_50121720();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__x_581_49959420();
   scope->scopes[1] = makechannel__a0_5830_49474900();
   scope->scopes[2] = makechannel__a1_5860_48225720();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__62044840();
   scope->behaviors[1] = make__62074040();
   scope->behaviors[2] = make__62126080();
   scope->behaviors[3] = make__62125880();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT make_____58_840_62073920() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   _____58_840_62073920 = systemT;
systemT->owner = NULL;
   systemT->name = "__:T0";
   systemT->num_inputs = 0;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->num_outputs = 0;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make_____58_84_49959720();

   return systemT;
}