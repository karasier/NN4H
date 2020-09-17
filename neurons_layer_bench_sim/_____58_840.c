#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT _____58_840_59987240;

Block __59792300;

Block __59792140;

Block __59791760;

void code__59791760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60198260(),_5818_49052420______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__59791760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59791760 = block;
   block->owner = (Object)__59792140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59791760;

   return block;
};

void code__59792140() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49052600______58_84_49155820______58_840_59987240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60198360();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59791760();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60198200(),_5817_49052500______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__59792140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59792140 = block;
   block->owner = (Object)__59792300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59792140;

   return block;
};

Block __59790800;

Block __59790640;

Block __59790320;

void code__59790320() {
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
                  src0 = _5818_49052420______58_84_49155820______58_840_59987240->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60197840();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5818_49052420______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60197680(),_5817_49052500______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60197620(),_5819_49084220______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__59790320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59790320 = block;
   block->owner = (Object)__59790640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59790320;

   return block;
};

void code__59790640() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49052600______58_84_49155820______58_840_59987240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60198000();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59790320();
   }
      }
   }
}

Block make__59790640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59790640 = block;
   block->owner = (Object)__59790800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59790640;

   return block;
};

void code__59790800() {
 code__59790640();
}

Block make__59790800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59790800 = block;
   block->owner = (Object)__59792300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59790800;

   return block;
};

void code__59792300() {
 code__59792140();
   {
      Value cond = fill_49052560______58_84_49155820______58_840_59987240->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59790800();
   }
      }
   }
}

Block make__59792300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59792300 = block;
   block->owner = (Object)__59955060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59792300;

   return block;
};

Block __59954900;

void code__59954900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60197560(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60197500(),rst_49052600______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60197440(),req_49052580______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60197380(),fill_49052560______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60197320(),rst_49052600______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60197260(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60197200(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60197140(),rst_49052600______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60197080(),fill_49052560______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60197020(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60196960(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60196900(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60196840(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60196780(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60196720(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60196660(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60196600(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60196540(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60196480(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60196420(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60196340(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60196280(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60196200(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60196140(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60196060(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60195820(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60195760(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60195680(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60195600(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60195540(),fill_49052560______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60195480(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60195360(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60195300(),req_49052580______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60195240(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60195180(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60195120(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60195060(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60195000(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60194940(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60194880(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60194820(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60219300(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60219240(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60219180(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60219120(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60219060(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60219000(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60218940(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60218880(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60218820(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60218760(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60218700(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60218620(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60218560(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60218480(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60218420(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60218340(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60218240(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60218180(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60218120(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60218040(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60217960(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60217900(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60217840(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60217720(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60217660(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60217600(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60217540(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60217480(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60217420(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60217360(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60217300(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60217240(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60217180(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60217120(),clk_49052620______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59987360);
}

Block make__59954900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59954900 = block;
   block->owner = (Object)__59987360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59954900;

   return block;
};

Block __60038360;

void code__60038360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_49052620______58_84_49155820______58_840_59987240->c_value,clk_51845580_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_49052600______58_84_49155820______58_840_59987240->c_value,rst_51845560_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(fill_49052560______58_84_49155820______58_840_59987240->c_value,fill_51845520_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(req_49052580______58_84_49155820______58_840_59987240->c_value,req_51845500_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_49052620______58_84_49155820______58_840_59987240->c_value,clk_59215020_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_49052600______58_84_49155820______58_840_59987240->c_value,rst_59215000_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(fill_49052560______58_84_49155820______58_840_59987240->c_value,fill_59214980_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__0_49052540______58_84_49155820______58_840_59987240->c_value,req_59214960_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60038360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60038360 = block;
   block->owner = (Object)__60031260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60038360;

   return block;
};

Block __60038300;

void code__60038300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__layer_52018020_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,ack__0_49052540______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__layer_59554880_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value,ack__1_49052520______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60038300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60038300 = block;
   block->owner = (Object)__60031100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60038300;

   return block;
};

Block __49811920;

Block __47609100;

void code__47609100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_49515920_channel__x_581_49155520______58_84_49155820______58_840_59987240->c_value,make_ref_rangeS(mem_49606860_channel__x_581_49155520______58_84_49155820______58_840_59987240,value2integer(abus__w_49515760_channel__x_581_49155520______58_84_49155820______58_840_59987240->c_value),value2integer(abus__w_49515760_channel__x_581_49155520______58_84_49155820______58_840_59987240->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__47609100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47609100 = block;
   block->owner = (Object)__49811920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47609100;

   return block;
};

void code__49811920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_49606860_channel__x_581_49155520______58_84_49155820______58_840_59987240->c_value;
            idx = value2integer(abus__r_49515840_channel__x_581_49155520______58_84_49155820______58_840_59987240->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_49434540_channel__x_581_49155520______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_49316720_channel__x_581_49155520______58_84_49155820______58_840_59987240->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47609100();
   }
      }
   }
}

Block make__49811920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49811920 = block;
   block->owner = (Object)__49065480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49811920;

   return block;
};

Block __60054920;

void code__60054920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_49316720_channel__x_581_49155520______58_84_49155820______58_840_59987240->c_value,_5817_49052500______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60054920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60054920 = block;
   block->owner = (Object)__60054760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60054920;

   return block;
};

Block __60054720;

void code__60054720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5817_49052500______58_84_49155820______58_840_59987240->c_value,trig__w_49316720_channel__x_581_49155520______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60054720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60054720 = block;
   block->owner = (Object)__60054560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60054720;

   return block;
};

Block __60054260;

void code__60054260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_49515760_channel__x_581_49155520______58_84_49155820______58_840_59987240->c_value,_5818_49052420______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60054260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60054260 = block;
   block->owner = (Object)__60054040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60054260;

   return block;
};

Block __60053980;

void code__60053980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5818_49052420______58_84_49155820______58_840_59987240->c_value,abus__w_49515760_channel__x_581_49155520______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60053980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60053980 = block;
   block->owner = (Object)__60053700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60053980;

   return block;
};

Block __60053400;

void code__60053400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_49515920_channel__x_581_49155520______58_84_49155820______58_840_59987240->c_value,_5819_49084220______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60053400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60053400 = block;
   block->owner = (Object)__60053240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60053400;

   return block;
};

Block __60053200;

void code__60053200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5819_49084220______58_84_49155820______58_840_59987240->c_value,dbus__w_49515920_channel__x_581_49155520______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60053200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60053200 = block;
   block->owner = (Object)__60053040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60053200;

   return block;
};

Block __60052400;

void code__60052400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_49434540_channel__x_581_49155520______58_84_49155820______58_840_59987240->c_value,_5815_52018160_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60052400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60052400 = block;
   block->owner = (Object)__60070160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60052400;

   return block;
};

Block __60052340;

void code__60052340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5813_52017940_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,trig__r_49316740_channel__x_581_49155520______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5814_52017860_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,abus__r_49515840_channel__x_581_49155520______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60052340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60052340 = block;
   block->owner = (Object)__60069940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60052340;

   return block;
};

Block __60067740;

void code__60067740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_45537320_channel__a0_5830_49065360______58_84_49155820______58_840_59987240->c_value,_5832_52352860_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60067740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60067740 = block;
   block->owner = (Object)__60067520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60067740;

   return block;
};

Block __60067480;

void code__60067480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5832_52352860_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,reg__0_45537320_channel__a0_5830_49065360______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60067480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60067480 = block;
   block->owner = (Object)__60067240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60067480;

   return block;
};

Block __60066020;

void code__60066020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_47223980_channel__a0_5830_49065360______58_84_49155820______58_840_59987240->c_value,_5833_52545100_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60066020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60066020 = block;
   block->owner = (Object)__60065780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60066020;

   return block;
};

Block __60065740;

void code__60065740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5833_52545100_layer0_58_840_51791280______58_84_49155820______58_840_59987240->c_value,reg__1_47223980_channel__a0_5830_49065360______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60065740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60065740 = block;
   block->owner = (Object)__60065560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60065740;

   return block;
};

Block __60116480;

void code__60116480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_49384960_rinc_5842_49385340_channel__a0_5830_49065360______58_84_49155820______58_840_59987240->c_value,_5845_59554740_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60116480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60116480 = block;
   block->owner = (Object)__60116300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60116480;

   return block;
};

Block __60116260;

void code__60116260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5845_59554740_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value,abus__r_49384960_rinc_5842_49385340_channel__a0_5830_49065360______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60116260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60116260 = block;
   block->owner = (Object)__60116080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60116260;

   return block;
};

Block __60064640;

void code__60064640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_45537320_channel__a0_5830_49065360______58_84_49155820______58_840_59987240->c_value,_5843_59323640_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_47223980_channel__a0_5830_49065360______58_84_49155820______58_840_59987240->c_value,_5844_59554940_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60064640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60064640 = block;
   block->owner = (Object)__60115900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60064640;

   return block;
};

Block __60113580;

void code__60113580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_49052760_channel__a1_5860_47223280______58_84_49155820______58_840_59987240->c_value,_5862_59770040_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60113580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60113580 = block;
   block->owner = (Object)__60113340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60113580;

   return block;
};

Block __60113300;

void code__60113300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5862_59770040_layer1_58_840_59217060______58_84_49155820______58_840_59987240->c_value,reg__0_49052760_channel__a1_5860_47223280______58_84_49155820______58_840_59987240);
      set_value_pos(pool_state);
   }
}

Block make__60113300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60113300 = block;
   block->owner = (Object)__60113120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60113300;

   return block;
};

Value make__60198360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60198260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60198200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60198000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60197840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60197680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60197620() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60197560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60197500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60197440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60197380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60197320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60197260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60197200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60197140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60197080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60197020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60196960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60196900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60196840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60196780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60196720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60196660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60196600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60196540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60196480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60196420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60196340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60196280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60196200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60196140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60196060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60195820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60195760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60195680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60195600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60195540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60195480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60195360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60195300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60195240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60195180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60195120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60195060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60195000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60194940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60194880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60194820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60219300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60219240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60219180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60219120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60219060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60219000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60218940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60218880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60218820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60218760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60218700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60218620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60218560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60218480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60218420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60218340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60218240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60218180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60218120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60218040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60217960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60217900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60217840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60217720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60217660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60217600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60217540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60217480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60217420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60217360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60217300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60217240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60217180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60217120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope _____58_84_49155820;

SignalI clk_49052620______58_84_49155820______58_840_59987240;

SignalI makeclk_49052620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_49052620______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)_____58_84_49155820;
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

SignalI rst_49052600______58_84_49155820______58_840_59987240;

SignalI makerst_49052600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_49052600______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)_____58_84_49155820;
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

SignalI req_49052580______58_84_49155820______58_840_59987240;

SignalI makereq_49052580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_49052580______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)_____58_84_49155820;
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

SignalI fill_49052560______58_84_49155820______58_840_59987240;

SignalI makefill_49052560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_49052560______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)_____58_84_49155820;
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

SignalI ack__0_49052540______58_84_49155820______58_840_59987240;

SignalI makeack__0_49052540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__0_49052540______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)_____58_84_49155820;
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

SignalI ack__1_49052520______58_84_49155820______58_840_59987240;

SignalI makeack__1_49052520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__1_49052520______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)_____58_84_49155820;
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

SignalI _5817_49052500______58_84_49155820______58_840_59987240;

SignalI make_5817_49052500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5817_49052500______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)_____58_84_49155820;
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

SignalI _5818_49052420______58_84_49155820______58_840_59987240;

SignalI make_5818_49052420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5818_49052420______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)_____58_84_49155820;
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

SignalI _5819_49084220______58_84_49155820______58_840_59987240;

SignalI make_5819_49084220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5819_49084220______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)_____58_84_49155820;
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

SystemI layer0_52544980;

SystemI makelayer0_52544980() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer0_52544980 = systemI;
   systemI->owner = (Object)_____58_84_49155820;
   systemI->name = "layer0";
   systemI->system = layer0_58_840_51791280;

   return systemI;
};

SystemI layer1_59769920;

SystemI makelayer1_59769920() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer1_59769920 = systemI;
   systemI->owner = (Object)_____58_84_49155820;
   systemI->name = "layer1";
   systemI->system = layer1_58_840_59217060;

   return systemI;
};

Scope channel__x_581_49155520;

SignalI trig__r_49316740_channel__x_581_49155520______58_84_49155820______58_840_59987240;

SignalI maketrig__r_49316740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_49316740_channel__x_581_49155520______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)channel__x_581_49155520;
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

SignalI trig__w_49316720_channel__x_581_49155520______58_84_49155820______58_840_59987240;

SignalI maketrig__w_49316720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_49316720_channel__x_581_49155520______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)channel__x_581_49155520;
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

SignalI dbus__r_49434540_channel__x_581_49155520______58_84_49155820______58_840_59987240;

SignalI makedbus__r_49434540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_49434540_channel__x_581_49155520______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)channel__x_581_49155520;
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

SignalI dbus__w_49515920_channel__x_581_49155520______58_84_49155820______58_840_59987240;

SignalI makedbus__w_49515920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_49515920_channel__x_581_49155520______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)channel__x_581_49155520;
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

SignalI abus__r_49515840_channel__x_581_49155520______58_84_49155820______58_840_59987240;

SignalI makeabus__r_49515840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49515840_channel__x_581_49155520______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)channel__x_581_49155520;
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

SignalI abus__w_49515760_channel__x_581_49155520______58_84_49155820______58_840_59987240;

SignalI makeabus__w_49515760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49515760_channel__x_581_49155520______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)channel__x_581_49155520;
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

SignalI mem_49606860_channel__x_581_49155520______58_84_49155820______58_840_59987240;

SignalI makemem_49606860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_49606860_channel__x_581_49155520______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)channel__x_581_49155520;
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

Scope raddr_582_49155220;

Scope makeraddr_582_49155220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_582_49155220 = scope;
   scope->owner = (Object)channel__x_581_49155520;
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

Scope waddr_587_49154800;

Scope makewaddr_587_49154800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_587_49154800 = scope;
   scope->owner = (Object)channel__x_581_49155520;
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

Scope rinc_5812_49154380;

Behavior __60070160;

Behavior make__60070160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60070160 = behavior;
   behavior->owner = (Object)rinc_5812_49154380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_49434540_channel__x_581_49155520______58_84_49155820______58_840_59987240);
   dbus__r_49434540_channel__x_581_49155520______58_84_49155820______58_840_59987240->num_any += 1;
   dbus__r_49434540_channel__x_581_49155520______58_84_49155820______58_840_59987240->any = realloc(dbus__r_49434540_channel__x_581_49155520______58_84_49155820______58_840_59987240->any,dbus__r_49434540_channel__x_581_49155520______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
dbus__r_49434540_channel__x_581_49155520______58_84_49155820______58_840_59987240->any[dbus__r_49434540_channel__x_581_49155520______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60052400();

   return behavior;
}

Behavior __60069940;

Behavior make__60069940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60069940 = behavior;
   behavior->owner = (Object)rinc_5812_49154380;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5813_52017940_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   _5813_52017940_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   _5813_52017940_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(_5813_52017940_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,_5813_52017940_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
_5813_52017940_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[_5813_52017940_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,_5814_52017860_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   _5814_52017860_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   _5814_52017860_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(_5814_52017860_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,_5814_52017860_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
_5814_52017860_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[_5814_52017860_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60052340();

   return behavior;
}

Scope makerinc_5812_49154380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5812_49154380 = scope;
   scope->owner = (Object)channel__x_581_49155520;
   scope->name = "rinc:12";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60070160();
   scope->behaviors[1] = make__60069940();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5816_49318020;

Scope makewinc_5816_49318020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5816_49318020 = scope;
   scope->owner = (Object)channel__x_581_49155520;
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

Scope rdec_5820_49317600;

Scope makerdec_5820_49317600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5820_49317600 = scope;
   scope->owner = (Object)channel__x_581_49155520;
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

Scope wdec_5825_49317180;

Scope makewdec_5825_49317180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5825_49317180 = scope;
   scope->owner = (Object)channel__x_581_49155520;
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

Behavior __49065480;

Behavior make__49065480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49065480 = behavior;
   behavior->owner = (Object)channel__x_581_49155520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_49052620______58_84_49155820______58_840_59987240);
   clk_49052620______58_84_49155820______58_840_59987240->num_neg += 1;
   clk_49052620______58_84_49155820______58_840_59987240->neg = realloc(clk_49052620______58_84_49155820______58_840_59987240->neg,clk_49052620______58_84_49155820______58_840_59987240->num_neg*sizeof(Object));
clk_49052620______58_84_49155820______58_840_59987240->neg[clk_49052620______58_84_49155820______58_840_59987240->num_neg-1] = (Object)behavior;
   behavior->block = make__49811920();

   return behavior;
}

Behavior __60054760;

Behavior make__60054760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60054760 = behavior;
   behavior->owner = (Object)channel__x_581_49155520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_49316720_channel__x_581_49155520______58_84_49155820______58_840_59987240);
   trig__w_49316720_channel__x_581_49155520______58_84_49155820______58_840_59987240->num_any += 1;
   trig__w_49316720_channel__x_581_49155520______58_84_49155820______58_840_59987240->any = realloc(trig__w_49316720_channel__x_581_49155520______58_84_49155820______58_840_59987240->any,trig__w_49316720_channel__x_581_49155520______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
trig__w_49316720_channel__x_581_49155520______58_84_49155820______58_840_59987240->any[trig__w_49316720_channel__x_581_49155520______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60054920();

   return behavior;
}

Behavior __60054560;

Behavior make__60054560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60054560 = behavior;
   behavior->owner = (Object)channel__x_581_49155520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5817_49052500______58_84_49155820______58_840_59987240);
   _5817_49052500______58_84_49155820______58_840_59987240->num_any += 1;
   _5817_49052500______58_84_49155820______58_840_59987240->any = realloc(_5817_49052500______58_84_49155820______58_840_59987240->any,_5817_49052500______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
_5817_49052500______58_84_49155820______58_840_59987240->any[_5817_49052500______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60054720();

   return behavior;
}

Behavior __60054040;

Behavior make__60054040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60054040 = behavior;
   behavior->owner = (Object)channel__x_581_49155520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_49515760_channel__x_581_49155520______58_84_49155820______58_840_59987240);
   abus__w_49515760_channel__x_581_49155520______58_84_49155820______58_840_59987240->num_any += 1;
   abus__w_49515760_channel__x_581_49155520______58_84_49155820______58_840_59987240->any = realloc(abus__w_49515760_channel__x_581_49155520______58_84_49155820______58_840_59987240->any,abus__w_49515760_channel__x_581_49155520______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
abus__w_49515760_channel__x_581_49155520______58_84_49155820______58_840_59987240->any[abus__w_49515760_channel__x_581_49155520______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60054260();

   return behavior;
}

Behavior __60053700;

Behavior make__60053700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60053700 = behavior;
   behavior->owner = (Object)channel__x_581_49155520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5818_49052420______58_84_49155820______58_840_59987240);
   _5818_49052420______58_84_49155820______58_840_59987240->num_any += 1;
   _5818_49052420______58_84_49155820______58_840_59987240->any = realloc(_5818_49052420______58_84_49155820______58_840_59987240->any,_5818_49052420______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
_5818_49052420______58_84_49155820______58_840_59987240->any[_5818_49052420______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60053980();

   return behavior;
}

Behavior __60053240;

Behavior make__60053240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60053240 = behavior;
   behavior->owner = (Object)channel__x_581_49155520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_49515920_channel__x_581_49155520______58_84_49155820______58_840_59987240);
   dbus__w_49515920_channel__x_581_49155520______58_84_49155820______58_840_59987240->num_any += 1;
   dbus__w_49515920_channel__x_581_49155520______58_84_49155820______58_840_59987240->any = realloc(dbus__w_49515920_channel__x_581_49155520______58_84_49155820______58_840_59987240->any,dbus__w_49515920_channel__x_581_49155520______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
dbus__w_49515920_channel__x_581_49155520______58_84_49155820______58_840_59987240->any[dbus__w_49515920_channel__x_581_49155520______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60053400();

   return behavior;
}

Behavior __60053040;

Behavior make__60053040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60053040 = behavior;
   behavior->owner = (Object)channel__x_581_49155520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5819_49084220______58_84_49155820______58_840_59987240);
   _5819_49084220______58_84_49155820______58_840_59987240->num_any += 1;
   _5819_49084220______58_84_49155820______58_840_59987240->any = realloc(_5819_49084220______58_84_49155820______58_840_59987240->any,_5819_49084220______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
_5819_49084220______58_84_49155820______58_840_59987240->any[_5819_49084220______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60053200();

   return behavior;
}

Scope makechannel__x_581_49155520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__x_581_49155520 = scope;
   scope->owner = (Object)_____58_84_49155820;
   scope->name = "channel_x:1";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_49316740();
   scope->inners[1] = maketrig__w_49316720();
   scope->inners[2] = makedbus__r_49434540();
   scope->inners[3] = makedbus__w_49515920();
   scope->inners[4] = makeabus__r_49515840();
   scope->inners[5] = makeabus__w_49515760();
   scope->inners[6] = makemem_49606860();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_582_49155220();
   scope->scopes[1] = makewaddr_587_49154800();
   scope->scopes[2] = makerinc_5812_49154380();
   scope->scopes[3] = makewinc_5816_49318020();
   scope->scopes[4] = makerdec_5820_49317600();
   scope->scopes[5] = makewdec_5825_49317180();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49065480();
   scope->behaviors[1] = make__60054760();
   scope->behaviors[2] = make__60054560();
   scope->behaviors[3] = make__60054040();
   scope->behaviors[4] = make__60053700();
   scope->behaviors[5] = make__60053240();
   scope->behaviors[6] = make__60053040();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__a0_5830_49065360;

SignalI reg__0_45537320_channel__a0_5830_49065360______58_84_49155820______58_840_59987240;

SignalI makereg__0_45537320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_45537320_channel__a0_5830_49065360______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)channel__a0_5830_49065360;
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

SignalI reg__1_47223980_channel__a0_5830_49065360______58_84_49155820______58_840_59987240;

SignalI makereg__1_47223980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_47223980_channel__a0_5830_49065360______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)channel__a0_5830_49065360;
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

Scope anum_5831_49065060;

Behavior __60067520;

Behavior make__60067520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60067520 = behavior;
   behavior->owner = (Object)anum_5831_49065060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_45537320_channel__a0_5830_49065360______58_84_49155820______58_840_59987240);
   reg__0_45537320_channel__a0_5830_49065360______58_84_49155820______58_840_59987240->num_any += 1;
   reg__0_45537320_channel__a0_5830_49065360______58_84_49155820______58_840_59987240->any = realloc(reg__0_45537320_channel__a0_5830_49065360______58_84_49155820______58_840_59987240->any,reg__0_45537320_channel__a0_5830_49065360______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
reg__0_45537320_channel__a0_5830_49065360______58_84_49155820______58_840_59987240->any[reg__0_45537320_channel__a0_5830_49065360______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60067740();

   return behavior;
}

Behavior __60067240;

Behavior make__60067240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60067240 = behavior;
   behavior->owner = (Object)anum_5831_49065060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5832_52352860_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   _5832_52352860_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   _5832_52352860_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(_5832_52352860_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,_5832_52352860_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
_5832_52352860_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[_5832_52352860_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60067480();

   return behavior;
}

Behavior __60065780;

Behavior make__60065780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60065780 = behavior;
   behavior->owner = (Object)anum_5831_49065060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_47223980_channel__a0_5830_49065360______58_84_49155820______58_840_59987240);
   reg__1_47223980_channel__a0_5830_49065360______58_84_49155820______58_840_59987240->num_any += 1;
   reg__1_47223980_channel__a0_5830_49065360______58_84_49155820______58_840_59987240->any = realloc(reg__1_47223980_channel__a0_5830_49065360______58_84_49155820______58_840_59987240->any,reg__1_47223980_channel__a0_5830_49065360______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
reg__1_47223980_channel__a0_5830_49065360______58_84_49155820______58_840_59987240->any[reg__1_47223980_channel__a0_5830_49065360______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60066020();

   return behavior;
}

Behavior __60065560;

Behavior make__60065560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60065560 = behavior;
   behavior->owner = (Object)anum_5831_49065060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5833_52545100_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   _5833_52545100_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   _5833_52545100_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(_5833_52545100_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,_5833_52545100_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
_5833_52545100_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[_5833_52545100_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60065740();

   return behavior;
}

Scope makeanum_5831_49065060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_5831_49065060 = scope;
   scope->owner = (Object)channel__a0_5830_49065360;
   scope->name = "anum:31";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60067520();
   scope->behaviors[1] = make__60067240();
   scope->behaviors[2] = make__60065780();
   scope->behaviors[3] = make__60065560();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope raddr_5834_49386280;

Scope makeraddr_5834_49386280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5834_49386280 = scope;
   scope->owner = (Object)channel__a0_5830_49065360;
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

Scope waddr_5838_49385760;

Scope makewaddr_5838_49385760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5838_49385760 = scope;
   scope->owner = (Object)channel__a0_5830_49065360;
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

Scope rinc_5842_49385340;

SignalI abus__r_49384960_rinc_5842_49385340_channel__a0_5830_49065360______58_84_49155820______58_840_59987240;

SignalI makeabus__r_49384960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49384960_rinc_5842_49385340_channel__a0_5830_49065360______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)rinc_5842_49385340;
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

Behavior __60116300;

Behavior make__60116300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60116300 = behavior;
   behavior->owner = (Object)rinc_5842_49385340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_49384960_rinc_5842_49385340_channel__a0_5830_49065360______58_84_49155820______58_840_59987240);
   abus__r_49384960_rinc_5842_49385340_channel__a0_5830_49065360______58_84_49155820______58_840_59987240->num_any += 1;
   abus__r_49384960_rinc_5842_49385340_channel__a0_5830_49065360______58_84_49155820______58_840_59987240->any = realloc(abus__r_49384960_rinc_5842_49385340_channel__a0_5830_49065360______58_84_49155820______58_840_59987240->any,abus__r_49384960_rinc_5842_49385340_channel__a0_5830_49065360______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
abus__r_49384960_rinc_5842_49385340_channel__a0_5830_49065360______58_84_49155820______58_840_59987240->any[abus__r_49384960_rinc_5842_49385340_channel__a0_5830_49065360______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60116480();

   return behavior;
}

Behavior __60116080;

Behavior make__60116080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60116080 = behavior;
   behavior->owner = (Object)rinc_5842_49385340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5845_59554740_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
   _5845_59554740_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any += 1;
   _5845_59554740_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any = realloc(_5845_59554740_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any,_5845_59554740_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
_5845_59554740_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any[_5845_59554740_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60116260();

   return behavior;
}

Behavior __60115900;

Behavior make__60115900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60115900 = behavior;
   behavior->owner = (Object)rinc_5842_49385340;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_45537320_channel__a0_5830_49065360______58_84_49155820______58_840_59987240);
   reg__0_45537320_channel__a0_5830_49065360______58_84_49155820______58_840_59987240->num_any += 1;
   reg__0_45537320_channel__a0_5830_49065360______58_84_49155820______58_840_59987240->any = realloc(reg__0_45537320_channel__a0_5830_49065360______58_84_49155820______58_840_59987240->any,reg__0_45537320_channel__a0_5830_49065360______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
reg__0_45537320_channel__a0_5830_49065360______58_84_49155820______58_840_59987240->any[reg__0_45537320_channel__a0_5830_49065360______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,reg__1_47223980_channel__a0_5830_49065360______58_84_49155820______58_840_59987240);
   reg__1_47223980_channel__a0_5830_49065360______58_84_49155820______58_840_59987240->num_any += 1;
   reg__1_47223980_channel__a0_5830_49065360______58_84_49155820______58_840_59987240->any = realloc(reg__1_47223980_channel__a0_5830_49065360______58_84_49155820______58_840_59987240->any,reg__1_47223980_channel__a0_5830_49065360______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
reg__1_47223980_channel__a0_5830_49065360______58_84_49155820______58_840_59987240->any[reg__1_47223980_channel__a0_5830_49065360______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60064640();

   return behavior;
}

Scope makerinc_5842_49385340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5842_49385340 = scope;
   scope->owner = (Object)channel__a0_5830_49065360;
   scope->name = "rinc:42";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49384960();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60116300();
   scope->behaviors[1] = make__60116080();
   scope->behaviors[2] = make__60115900();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5846_49736960;

SignalI abus__w_49736580_winc_5846_49736960_channel__a0_5830_49065360______58_84_49155820______58_840_59987240;

SignalI makeabus__w_49736580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49736580_winc_5846_49736960_channel__a0_5830_49065360______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)winc_5846_49736960;
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

Scope makewinc_5846_49736960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5846_49736960 = scope;
   scope->owner = (Object)channel__a0_5830_49065360;
   scope->name = "winc:46";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49736580();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5850_49736460;

SignalI abus__r_49736040_rdec_5850_49736460_channel__a0_5830_49065360______58_84_49155820______58_840_59987240;

SignalI makeabus__r_49736040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49736040_rdec_5850_49736460_channel__a0_5830_49065360______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)rdec_5850_49736460;
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

Scope makerdec_5850_49736460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5850_49736460 = scope;
   scope->owner = (Object)channel__a0_5830_49065360;
   scope->name = "rdec:50";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49736040();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_5855_49735920;

SignalI abus__w_49735440_wdec_5855_49735920_channel__a0_5830_49065360______58_84_49155820______58_840_59987240;

SignalI makeabus__w_49735440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49735440_wdec_5855_49735920_channel__a0_5830_49065360______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)wdec_5855_49735920;
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

Scope makewdec_5855_49735920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5855_49735920 = scope;
   scope->owner = (Object)channel__a0_5830_49065360;
   scope->name = "wdec:55";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49735440();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope makechannel__a0_5830_49065360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__a0_5830_49065360 = scope;
   scope->owner = (Object)_____58_84_49155820;
   scope->name = "channel_a0:30";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_45537320();
   scope->inners[1] = makereg__1_47223980();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_5831_49065060();
   scope->scopes[1] = makeraddr_5834_49386280();
   scope->scopes[2] = makewaddr_5838_49385760();
   scope->scopes[3] = makerinc_5842_49385340();
   scope->scopes[4] = makewinc_5846_49736960();
   scope->scopes[5] = makerdec_5850_49736460();
   scope->scopes[6] = makewdec_5855_49735920();
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__a1_5860_47223280;

SignalI reg__0_49052760_channel__a1_5860_47223280______58_84_49155820______58_840_59987240;

SignalI makereg__0_49052760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_49052760_channel__a1_5860_47223280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)channel__a1_5860_47223280;
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

Scope anum_5861_47220940;

Behavior __60113340;

Behavior make__60113340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60113340 = behavior;
   behavior->owner = (Object)anum_5861_47220940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_49052760_channel__a1_5860_47223280______58_84_49155820______58_840_59987240);
   reg__0_49052760_channel__a1_5860_47223280______58_84_49155820______58_840_59987240->num_any += 1;
   reg__0_49052760_channel__a1_5860_47223280______58_84_49155820______58_840_59987240->any = realloc(reg__0_49052760_channel__a1_5860_47223280______58_84_49155820______58_840_59987240->any,reg__0_49052760_channel__a1_5860_47223280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
reg__0_49052760_channel__a1_5860_47223280______58_84_49155820______58_840_59987240->any[reg__0_49052760_channel__a1_5860_47223280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60113580();

   return behavior;
}

Behavior __60113120;

Behavior make__60113120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60113120 = behavior;
   behavior->owner = (Object)anum_5861_47220940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5862_59770040_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
   _5862_59770040_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any += 1;
   _5862_59770040_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any = realloc(_5862_59770040_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any,_5862_59770040_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
_5862_59770040_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any[_5862_59770040_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60113300();

   return behavior;
}

Scope makeanum_5861_47220940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_5861_47220940 = scope;
   scope->owner = (Object)channel__a1_5860_47223280;
   scope->name = "anum:61";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60113340();
   scope->behaviors[1] = make__60113120();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope raddr_5863_47920020;

Scope makeraddr_5863_47920020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5863_47920020 = scope;
   scope->owner = (Object)channel__a1_5860_47223280;
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

Scope waddr_5866_47917400;

Scope makewaddr_5866_47917400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5866_47917400 = scope;
   scope->owner = (Object)channel__a1_5860_47223280;
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

Scope rinc_5869_47916820;

SignalI abus__r_47916260_rinc_5869_47916820_channel__a1_5860_47223280______58_84_49155820______58_840_59987240;

SignalI makeabus__r_47916260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47916260_rinc_5869_47916820_channel__a1_5860_47223280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)rinc_5869_47916820;
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

Scope makerinc_5869_47916820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5869_47916820 = scope;
   scope->owner = (Object)channel__a1_5860_47223280;
   scope->name = "rinc:69";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47916260();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5872_47916140;

SignalI abus__w_47915760_winc_5872_47916140_channel__a1_5860_47223280______58_84_49155820______58_840_59987240;

SignalI makeabus__w_47915760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47915760_winc_5872_47916140_channel__a1_5860_47223280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)winc_5872_47916140;
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

Scope makewinc_5872_47916140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5872_47916140 = scope;
   scope->owner = (Object)channel__a1_5860_47223280;
   scope->name = "winc:72";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47915760();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5875_47915640;

SignalI abus__r_47915080_rdec_5875_47915640_channel__a1_5860_47223280______58_84_49155820______58_840_59987240;

SignalI makeabus__r_47915080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47915080_rdec_5875_47915640_channel__a1_5860_47223280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)rdec_5875_47915640;
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

Scope makerdec_5875_47915640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5875_47915640 = scope;
   scope->owner = (Object)channel__a1_5860_47223280;
   scope->name = "rdec:75";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47915080();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_5879_47939440;

SignalI abus__w_47938900_wdec_5879_47939440_channel__a1_5860_47223280______58_84_49155820______58_840_59987240;

SignalI makeabus__w_47938900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47938900_wdec_5879_47939440_channel__a1_5860_47223280______58_84_49155820______58_840_59987240 = signalI;
   signalI->owner = (Object)wdec_5879_47939440;
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

Scope makewdec_5879_47939440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5879_47939440 = scope;
   scope->owner = (Object)channel__a1_5860_47223280;
   scope->name = "wdec:79";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47938900();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope makechannel__a1_5860_47223280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__a1_5860_47223280 = scope;
   scope->owner = (Object)_____58_84_49155820;
   scope->name = "channel_a1:60";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_49052760();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_5861_47220940();
   scope->scopes[1] = makeraddr_5863_47920020();
   scope->scopes[2] = makewaddr_5866_47917400();
   scope->scopes[3] = makerinc_5869_47916820();
   scope->scopes[4] = makewinc_5872_47916140();
   scope->scopes[5] = makerdec_5875_47915640();
   scope->scopes[6] = makewdec_5879_47939440();
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __59955060;

Behavior make__59955060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59955060 = behavior;
   behavior->owner = (Object)_____58_84_49155820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_49052620______58_84_49155820______58_840_59987240);
   clk_49052620______58_84_49155820______58_840_59987240->num_pos += 1;
   clk_49052620______58_84_49155820______58_840_59987240->pos = realloc(clk_49052620______58_84_49155820______58_840_59987240->pos,clk_49052620______58_84_49155820______58_840_59987240->num_pos*sizeof(Object));
clk_49052620______58_84_49155820______58_840_59987240->pos[clk_49052620______58_84_49155820______58_840_59987240->num_pos-1] = (Object)behavior;
   behavior->block = make__59792300();

   return behavior;
}

Behavior __59987360;

Behavior make__59987360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59987360 = behavior;
   register_timed_behavior(behavior);
   behavior->owner = (Object)_____58_84_49155820;
   behavior->activated = 0;
   behavior->timed = 1;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__59954900();

   return behavior;
}

Behavior __60031260;

Behavior make__60031260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60031260 = behavior;
   behavior->owner = (Object)_____58_84_49155820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_49052620______58_84_49155820______58_840_59987240);
   clk_49052620______58_84_49155820______58_840_59987240->num_any += 1;
   clk_49052620______58_84_49155820______58_840_59987240->any = realloc(clk_49052620______58_84_49155820______58_840_59987240->any,clk_49052620______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
clk_49052620______58_84_49155820______58_840_59987240->any[clk_49052620______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_49052600______58_84_49155820______58_840_59987240);
   rst_49052600______58_84_49155820______58_840_59987240->num_any += 1;
   rst_49052600______58_84_49155820______58_840_59987240->any = realloc(rst_49052600______58_84_49155820______58_840_59987240->any,rst_49052600______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
rst_49052600______58_84_49155820______58_840_59987240->any[rst_49052600______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,fill_49052560______58_84_49155820______58_840_59987240);
   fill_49052560______58_84_49155820______58_840_59987240->num_any += 1;
   fill_49052560______58_84_49155820______58_840_59987240->any = realloc(fill_49052560______58_84_49155820______58_840_59987240->any,fill_49052560______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
fill_49052560______58_84_49155820______58_840_59987240->any[fill_49052560______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,req_49052580______58_84_49155820______58_840_59987240);
   req_49052580______58_84_49155820______58_840_59987240->num_any += 1;
   req_49052580______58_84_49155820______58_840_59987240->any = realloc(req_49052580______58_84_49155820______58_840_59987240->any,req_49052580______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
req_49052580______58_84_49155820______58_840_59987240->any[req_49052580______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__0_49052540______58_84_49155820______58_840_59987240);
   ack__0_49052540______58_84_49155820______58_840_59987240->num_any += 1;
   ack__0_49052540______58_84_49155820______58_840_59987240->any = realloc(ack__0_49052540______58_84_49155820______58_840_59987240->any,ack__0_49052540______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
ack__0_49052540______58_84_49155820______58_840_59987240->any[ack__0_49052540______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60038360();

   return behavior;
}

Behavior __60031100;

Behavior make__60031100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60031100 = behavior;
   behavior->owner = (Object)_____58_84_49155820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__layer_52018020_layer0_58_840_51791280______58_84_49155820______58_840_59987240);
   ack__layer_52018020_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any += 1;
   ack__layer_52018020_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any = realloc(ack__layer_52018020_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any,ack__layer_52018020_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
ack__layer_52018020_layer0_58_840_51791280______58_84_49155820______58_840_59987240->any[ack__layer_52018020_layer0_58_840_51791280______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__layer_59554880_layer1_58_840_59217060______58_84_49155820______58_840_59987240);
   ack__layer_59554880_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any += 1;
   ack__layer_59554880_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any = realloc(ack__layer_59554880_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any,ack__layer_59554880_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any*sizeof(Object));
ack__layer_59554880_layer1_58_840_59217060______58_84_49155820______58_840_59987240->any[ack__layer_59554880_layer1_58_840_59217060______58_84_49155820______58_840_59987240->num_any-1] = (Object)behavior;
   behavior->block = make__60038300();

   return behavior;
}

Scope make_____58_84_49155820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   _____58_84_49155820 = scope;
   scope->owner = (Object)_____58_840_59987240;
   scope->name = "__:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makelayer0_52544980();
   scope->systemIs[1] = makelayer1_59769920();
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeclk_49052620();
   scope->inners[1] = makerst_49052600();
   scope->inners[2] = makereq_49052580();
   scope->inners[3] = makefill_49052560();
   scope->inners[4] = makeack__0_49052540();
   scope->inners[5] = makeack__1_49052520();
   scope->inners[6] = make_5817_49052500();
   scope->inners[7] = make_5818_49052420();
   scope->inners[8] = make_5819_49084220();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__x_581_49155520();
   scope->scopes[1] = makechannel__a0_5830_49065360();
   scope->scopes[2] = makechannel__a1_5860_47223280();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59955060();
   scope->behaviors[1] = make__59987360();
   scope->behaviors[2] = make__60031260();
   scope->behaviors[3] = make__60031100();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT make_____58_840_59987240() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   _____58_840_59987240 = systemT;
systemT->owner = NULL;
   systemT->name = "__:T0";
   systemT->num_inputs = 0;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->num_outputs = 0;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make_____58_84_49155820();

   return systemT;
}