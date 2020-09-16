#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT _____58_840_53587240;

Block __53023720;

Block __53023400;

Block __53022760;

void code__53022760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54348240(),_5818_45731940______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__53022760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53022760 = block;
   block->owner = (Object)__53023400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53022760;

   return block;
};

void code__53023400() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49837460______58_84_48032420______58_840_53587240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__54348320();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53022760();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54348160(),_5817_45732040______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__53023400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53023400 = block;
   block->owner = (Object)__53023720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53023400;

   return block;
};

Block __53021300;

Block __53020940;

Block __53020020;

void code__53020020() {
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
                  src0 = _5818_45731940______58_84_48032420______58_840_53587240->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__54347560();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5818_45731940______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54347320(),_5817_45732040______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__54347200(),_5819_47538320______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__53020020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53020020 = block;
   block->owner = (Object)__53020940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53020020;

   return block;
};

void code__53020940() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49837460______58_84_48032420______58_840_53587240->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__54347980();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53020020();
   }
      }
   }
}

Block make__53020940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53020940 = block;
   block->owner = (Object)__53021300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53020940;

   return block;
};

void code__53021300() {
 code__53020940();
}

Block make__53021300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53021300 = block;
   block->owner = (Object)__53023720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53021300;

   return block;
};

void code__53023720() {
 code__53023400();
   {
      Value cond = fill_49837320______58_84_48032420______58_840_53587240->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__53021300();
   }
      }
   }
}

Block make__53023720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53023720 = block;
   block->owner = (Object)__53394060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53023720;

   return block;
};

Block __53393940;

void code__53393940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54347120(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54347000(),rst_49837460______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54346880(),req_49837440______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54346820(),fill_49837320______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54346740(),rst_49837460______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54346620(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54346520(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54346360(),rst_49837460______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54346240(),fill_49837320______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54346060(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54345840(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54345760(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54370220(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54370040(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54369960(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54369900(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54369820(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54369640(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54369460(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54369400(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54369060(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54368940(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54368800(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54368680(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54368560(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54368460(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54368320(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54368220(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54368100(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54368000(),fill_49837320______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54367940(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54367880(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54367800(),req_49837440______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54367720(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54367600(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54367540(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54367280(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54367220(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54366500(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54366280(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54366180(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54365840(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54365780(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54365720(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54365660(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54365600(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54365520(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54365420(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54365340(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54365220(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54365060(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54364860(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54364760(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54364540(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54364400(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54364340(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54364240(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54363940(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54363840(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54363720(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54363600(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54363500(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54363440(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54363340(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54363280(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54363140(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54363020(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54362940(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54362840(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54362640(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54362460(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54394820(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54394680(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54394500(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__54394420(),clk_49837480______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__53587400);
}

Block make__53393940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53393940 = block;
   block->owner = (Object)__53587400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53393940;

   return block;
};

Block __53663720;

void code__53663720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_49837480______58_84_48032420______58_840_53587240->c_value,clk_54630560_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_49837460______58_84_48032420______58_840_53587240->c_value,rst_54630520_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(fill_49837320______58_84_48032420______58_840_53587240->c_value,fill_54630500_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(req_49837440______58_84_48032420______58_840_53587240->c_value,req_54630440_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_49837480______58_84_48032420______58_840_53587240->c_value,clk_53004680_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_49837460______58_84_48032420______58_840_53587240->c_value,rst_53004660_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(fill_49837320______58_84_48032420______58_840_53587240->c_value,fill_53004520_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__0_49837420______58_84_48032420______58_840_53587240->c_value,req_53004380_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__53663720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53663720 = block;
   block->owner = (Object)__53763180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53663720;

   return block;
};

Block __53663640;

void code__53663640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__0_54630400_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->c_value,ack__0_49837420______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__1_53004160_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->c_value,ack__1_49837400______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__53663640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53663640 = block;
   block->owner = (Object)__53762300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53663640;

   return block;
};

Block __49307580;

Block __49692300;

void code__49692300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_48550700_channel__x_581_48031500______58_84_48032420______58_840_53587240->c_value,make_ref_rangeS(mem_48755680_channel__x_581_48031500______58_84_48032420______58_840_53587240,value2integer(abus__w_48550540_channel__x_581_48031500______58_84_48032420______58_840_53587240->c_value),value2integer(abus__w_48550540_channel__x_581_48031500______58_84_48032420______58_840_53587240->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__49692300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49692300 = block;
   block->owner = (Object)__49307580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49692300;

   return block;
};

void code__49307580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_48755680_channel__x_581_48031500______58_84_48032420______58_840_53587240->c_value;
            idx = value2integer(abus__r_48550620_channel__x_581_48031500______58_84_48032420______58_840_53587240->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_48161740_channel__x_581_48031500______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_48050520_channel__x_581_48031500______58_84_48032420______58_840_53587240->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49692300();
   }
      }
   }
}

Block make__49307580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49307580 = block;
   block->owner = (Object)__47452680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49307580;

   return block;
};

Block __53759700;

void code__53759700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_48161740_channel__x_581_48031500______58_84_48032420______58_840_53587240->c_value,_5815_45732660______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__53759700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53759700 = block;
   block->owner = (Object)__53759500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53759700;

   return block;
};

Block __53759420;

void code__53759420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5815_45732660______58_84_48032420______58_840_53587240->c_value,dbus__r_48161740_channel__x_581_48031500______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__53759420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53759420 = block;
   block->owner = (Object)__53759200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53759420;

   return block;
};

Block __53758180;

void code__53758180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_48050540_channel__x_581_48031500______58_84_48032420______58_840_53587240->c_value,_5813_45732620______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__53758180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53758180 = block;
   block->owner = (Object)__53757780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53758180;

   return block;
};

Block __53757720;

void code__53757720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5813_45732620______58_84_48032420______58_840_53587240->c_value,trig__r_48050540_channel__x_581_48031500______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__53757720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53757720 = block;
   block->owner = (Object)__53757380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53757720;

   return block;
};

Block __53756880;

void code__53756880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_48550620_channel__x_581_48031500______58_84_48032420______58_840_53587240->c_value,_5814_45732060______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__53756880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53756880 = block;
   block->owner = (Object)__53756480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53756880;

   return block;
};

Block __53756420;

void code__53756420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5814_45732060______58_84_48032420______58_840_53587240->c_value,abus__r_48550620_channel__x_581_48031500______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__53756420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53756420 = block;
   block->owner = (Object)__53756000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53756420;

   return block;
};

Block __53951860;

void code__53951860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_48050520_channel__x_581_48031500______58_84_48032420______58_840_53587240->c_value,_5817_45732040______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__53951860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53951860 = block;
   block->owner = (Object)__53951680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53951860;

   return block;
};

Block __53951640;

void code__53951640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5817_45732040______58_84_48032420______58_840_53587240->c_value,trig__w_48050520_channel__x_581_48031500______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__53951640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53951640 = block;
   block->owner = (Object)__53951400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53951640;

   return block;
};

Block __53950560;

void code__53950560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_48550540_channel__x_581_48031500______58_84_48032420______58_840_53587240->c_value,_5818_45731940______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__53950560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53950560 = block;
   block->owner = (Object)__53950260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53950560;

   return block;
};

Block __53950140;

void code__53950140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5818_45731940______58_84_48032420______58_840_53587240->c_value,abus__w_48550540_channel__x_581_48031500______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__53950140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53950140 = block;
   block->owner = (Object)__53949740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53950140;

   return block;
};

Block __53949080;

void code__53949080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_48550700_channel__x_581_48031500______58_84_48032420______58_840_53587240->c_value,_5819_47538320______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__53949080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53949080 = block;
   block->owner = (Object)__53948840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53949080;

   return block;
};

Block __53948760;

void code__53948760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5819_47538320______58_84_48032420______58_840_53587240->c_value,dbus__w_48550700_channel__x_581_48031500______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__53948760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53948760 = block;
   block->owner = (Object)__53948300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53948760;

   return block;
};

Block __53944420;

void code__53944420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_47710080_channel__a0_5830_47452560______58_84_48032420______58_840_53587240->c_value,_5832_47754100______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__53944420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53944420 = block;
   block->owner = (Object)__53968520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53944420;

   return block;
};

Block __53968480;

void code__53968480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5832_47754100______58_84_48032420______58_840_53587240->c_value,reg__0_47710080_channel__a0_5830_47452560______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__53968480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53968480 = block;
   block->owner = (Object)__53968260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53968480;

   return block;
};

Block __53967780;

void code__53967780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_47917340_channel__a0_5830_47452560______58_84_48032420______58_840_53587240->c_value,_5833_48036020______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__53967780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53967780 = block;
   block->owner = (Object)__53967440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53967780;

   return block;
};

Block __53967360;

void code__53967360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5833_48036020______58_84_48032420______58_840_53587240->c_value,reg__1_47917340_channel__a0_5830_47452560______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__53967360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53967360 = block;
   block->owner = (Object)__53966600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53967360;

   return block;
};

Block __53966000;

void code__53966000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_47710080_channel__a0_5830_47452560______58_84_48032420______58_840_53587240->c_value,_5843_48161800______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__53966000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53966000 = block;
   block->owner = (Object)__53965200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53966000;

   return block;
};

Block __53965140;

void code__53965140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5843_48161800______58_84_48032420______58_840_53587240->c_value,reg__0_47710080_channel__a0_5830_47452560______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__53965140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53965140 = block;
   block->owner = (Object)__53964560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53965140;

   return block;
};

Block __53964120;

void code__53964120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_47917340_channel__a0_5830_47452560______58_84_48032420______58_840_53587240->c_value,_5844_48547320______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__53964120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53964120 = block;
   block->owner = (Object)__53963840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53964120;

   return block;
};

Block __53963800;

void code__53963800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5844_48547320______58_84_48032420______58_840_53587240->c_value,reg__1_47917340_channel__a0_5830_47452560______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__53963800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53963800 = block;
   block->owner = (Object)__53963600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53963800;

   return block;
};

Block __54115680;

void code__54115680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_47330200_rinc_5842_47313260_channel__a0_5830_47452560______58_84_48032420______58_840_53587240->c_value,_5845_48547180______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__54115680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54115680 = block;
   block->owner = (Object)__54115060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54115680;

   return block;
};

Block __54115020;

void code__54115020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5845_48547180______58_84_48032420______58_840_53587240->c_value,abus__r_47330200_rinc_5842_47313260_channel__a0_5830_47452560______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__54115020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54115020 = block;
   block->owner = (Object)__54114240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54115020;

   return block;
};

Block __54111640;

void code__54111640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_49559760_channel__a1_5860_49388240______58_84_48032420______58_840_53587240->c_value,_5862_48773820______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__54111640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54111640 = block;
   block->owner = (Object)__54111300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54111640;

   return block;
};

Block __54111260;

void code__54111260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5862_48773820______58_84_48032420______58_840_53587240->c_value,reg__0_49559760_channel__a1_5860_49388240______58_84_48032420______58_840_53587240);
      set_value_pos(pool_state);
   }
}

Block make__54111260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54111260 = block;
   block->owner = (Object)__54110540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54111260;

   return block;
};

Value make__54348320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__54348240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__54348160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54347980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__54347560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__54347320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54347200() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__54347120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54347000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54346880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54346820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54346740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54346620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54346520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54346360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54346240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54346060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54345840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54345760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54370220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54370040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54369960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54369900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54369820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54369640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54369460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54369400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54369060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54368940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54368800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54368680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54368560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54368460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54368320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54368220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54368100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54368000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54367940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54367880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54367800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54367720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54367600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54367540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54367280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54367220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54366500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54366280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54366180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54365840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54365780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54365720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54365660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54365600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54365520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54365420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54365340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54365220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54365060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54364860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54364760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54364540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54364400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54364340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54364240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54363940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54363840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54363720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54363600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54363500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54363440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54363340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54363280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54363140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54363020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54362940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54362840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54362640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54362460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54394820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54394680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54394500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__54394420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope _____58_84_48032420;

SignalI clk_49837480______58_84_48032420______58_840_53587240;

SignalI makeclk_49837480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_49837480______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)_____58_84_48032420;
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

SignalI rst_49837460______58_84_48032420______58_840_53587240;

SignalI makerst_49837460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_49837460______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)_____58_84_48032420;
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

SignalI req_49837440______58_84_48032420______58_840_53587240;

SignalI makereq_49837440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_49837440______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)_____58_84_48032420;
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

SignalI ack__0_49837420______58_84_48032420______58_840_53587240;

SignalI makeack__0_49837420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__0_49837420______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)_____58_84_48032420;
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

SignalI ack__1_49837400______58_84_48032420______58_840_53587240;

SignalI makeack__1_49837400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__1_49837400______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)_____58_84_48032420;
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

SignalI fill_49837320______58_84_48032420______58_840_53587240;

SignalI makefill_49837320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_49837320______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)_____58_84_48032420;
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

SignalI _5815_45732660______58_84_48032420______58_840_53587240;

SignalI make_5815_45732660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5815_45732660______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)_____58_84_48032420;
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

SignalI _5813_45732620______58_84_48032420______58_840_53587240;

SignalI make_5813_45732620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5813_45732620______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)_____58_84_48032420;
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

SignalI _5814_45732060______58_84_48032420______58_840_53587240;

SignalI make_5814_45732060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5814_45732060______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)_____58_84_48032420;
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

SignalI _5817_45732040______58_84_48032420______58_840_53587240;

SignalI make_5817_45732040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5817_45732040______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)_____58_84_48032420;
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

SignalI _5818_45731940______58_84_48032420______58_840_53587240;

SignalI make_5818_45731940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5818_45731940______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)_____58_84_48032420;
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

SignalI _5819_47538320______58_84_48032420______58_840_53587240;

SignalI make_5819_47538320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5819_47538320______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)_____58_84_48032420;
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

SignalI _5832_47754100______58_84_48032420______58_840_53587240;

SignalI make_5832_47754100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5832_47754100______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)_____58_84_48032420;
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

SignalI _5833_48036020______58_84_48032420______58_840_53587240;

SignalI make_5833_48036020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5833_48036020______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)_____58_84_48032420;
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

SignalI _5843_48161800______58_84_48032420______58_840_53587240;

SignalI make_5843_48161800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5843_48161800______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)_____58_84_48032420;
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

SignalI _5844_48547320______58_84_48032420______58_840_53587240;

SignalI make_5844_48547320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5844_48547320______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)_____58_84_48032420;
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

SignalI _5845_48547180______58_84_48032420______58_840_53587240;

SignalI make_5845_48547180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5845_48547180______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)_____58_84_48032420;
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

SignalI _5862_48773820______58_84_48032420______58_840_53587240;

SignalI make_5862_48773820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5862_48773820______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)_____58_84_48032420;
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

SystemI layer__hidden_54630080;

SystemI makelayer__hidden_54630080() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer__hidden_54630080 = systemI;
   systemI->owner = (Object)_____58_84_48032420;
   systemI->name = "layer_hidden";
   systemI->system = layer__hidden_58_840_54601100;

   return systemI;
};

SystemI layer__output_53003880;

SystemI makelayer__output_53003880() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer__output_53003880 = systemI;
   systemI->owner = (Object)_____58_84_48032420;
   systemI->name = "layer_output";
   systemI->system = layer__output_58_840_52977000;

   return systemI;
};

Scope channel__x_581_48031500;

SignalI trig__r_48050540_channel__x_581_48031500______58_84_48032420______58_840_53587240;

SignalI maketrig__r_48050540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_48050540_channel__x_581_48031500______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)channel__x_581_48031500;
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

SignalI trig__w_48050520_channel__x_581_48031500______58_84_48032420______58_840_53587240;

SignalI maketrig__w_48050520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_48050520_channel__x_581_48031500______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)channel__x_581_48031500;
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

SignalI dbus__r_48161740_channel__x_581_48031500______58_84_48032420______58_840_53587240;

SignalI makedbus__r_48161740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_48161740_channel__x_581_48031500______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)channel__x_581_48031500;
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

SignalI dbus__w_48550700_channel__x_581_48031500______58_84_48032420______58_840_53587240;

SignalI makedbus__w_48550700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_48550700_channel__x_581_48031500______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)channel__x_581_48031500;
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

SignalI abus__r_48550620_channel__x_581_48031500______58_84_48032420______58_840_53587240;

SignalI makeabus__r_48550620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48550620_channel__x_581_48031500______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)channel__x_581_48031500;
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

SignalI abus__w_48550540_channel__x_581_48031500______58_84_48032420______58_840_53587240;

SignalI makeabus__w_48550540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48550540_channel__x_581_48031500______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)channel__x_581_48031500;
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

SignalI mem_48755680_channel__x_581_48031500______58_84_48032420______58_840_53587240;

SignalI makemem_48755680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_48755680_channel__x_581_48031500______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)channel__x_581_48031500;
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

Scope raddr_582_48031160;

Scope makeraddr_582_48031160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_582_48031160 = scope;
   scope->owner = (Object)channel__x_581_48031500;
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

Scope waddr_587_48030220;

Scope makewaddr_587_48030220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_587_48030220 = scope;
   scope->owner = (Object)channel__x_581_48031500;
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

Scope rinc_5812_48054060;

Scope makerinc_5812_48054060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5812_48054060 = scope;
   scope->owner = (Object)channel__x_581_48031500;
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

Scope winc_5816_48053460;

Scope makewinc_5816_48053460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5816_48053460 = scope;
   scope->owner = (Object)channel__x_581_48031500;
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

Scope rdec_5820_48052740;

Scope makerdec_5820_48052740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5820_48052740 = scope;
   scope->owner = (Object)channel__x_581_48031500;
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

Scope wdec_5825_48051880;

Scope makewdec_5825_48051880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5825_48051880 = scope;
   scope->owner = (Object)channel__x_581_48031500;
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

Behavior __47452680;

Behavior make__47452680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47452680 = behavior;
   behavior->owner = (Object)channel__x_581_48031500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_49837480______58_84_48032420______58_840_53587240);
   clk_49837480______58_84_48032420______58_840_53587240->num_neg += 1;
   clk_49837480______58_84_48032420______58_840_53587240->neg = realloc(clk_49837480______58_84_48032420______58_840_53587240->neg,clk_49837480______58_84_48032420______58_840_53587240->num_neg*sizeof(Object));
clk_49837480______58_84_48032420______58_840_53587240->neg[clk_49837480______58_84_48032420______58_840_53587240->num_neg-1] = (Object)behavior;
   behavior->block = make__49307580();

   return behavior;
}

Behavior __53759500;

Behavior make__53759500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53759500 = behavior;
   behavior->owner = (Object)channel__x_581_48031500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_48161740_channel__x_581_48031500______58_84_48032420______58_840_53587240);
   dbus__r_48161740_channel__x_581_48031500______58_84_48032420______58_840_53587240->num_any += 1;
   dbus__r_48161740_channel__x_581_48031500______58_84_48032420______58_840_53587240->any = realloc(dbus__r_48161740_channel__x_581_48031500______58_84_48032420______58_840_53587240->any,dbus__r_48161740_channel__x_581_48031500______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
dbus__r_48161740_channel__x_581_48031500______58_84_48032420______58_840_53587240->any[dbus__r_48161740_channel__x_581_48031500______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__53759700();

   return behavior;
}

Behavior __53759200;

Behavior make__53759200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53759200 = behavior;
   behavior->owner = (Object)channel__x_581_48031500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5815_45732660______58_84_48032420______58_840_53587240);
   _5815_45732660______58_84_48032420______58_840_53587240->num_any += 1;
   _5815_45732660______58_84_48032420______58_840_53587240->any = realloc(_5815_45732660______58_84_48032420______58_840_53587240->any,_5815_45732660______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
_5815_45732660______58_84_48032420______58_840_53587240->any[_5815_45732660______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__53759420();

   return behavior;
}

Behavior __53757780;

Behavior make__53757780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53757780 = behavior;
   behavior->owner = (Object)channel__x_581_48031500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_48050540_channel__x_581_48031500______58_84_48032420______58_840_53587240);
   trig__r_48050540_channel__x_581_48031500______58_84_48032420______58_840_53587240->num_any += 1;
   trig__r_48050540_channel__x_581_48031500______58_84_48032420______58_840_53587240->any = realloc(trig__r_48050540_channel__x_581_48031500______58_84_48032420______58_840_53587240->any,trig__r_48050540_channel__x_581_48031500______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
trig__r_48050540_channel__x_581_48031500______58_84_48032420______58_840_53587240->any[trig__r_48050540_channel__x_581_48031500______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__53758180();

   return behavior;
}

Behavior __53757380;

Behavior make__53757380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53757380 = behavior;
   behavior->owner = (Object)channel__x_581_48031500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5813_45732620______58_84_48032420______58_840_53587240);
   _5813_45732620______58_84_48032420______58_840_53587240->num_any += 1;
   _5813_45732620______58_84_48032420______58_840_53587240->any = realloc(_5813_45732620______58_84_48032420______58_840_53587240->any,_5813_45732620______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
_5813_45732620______58_84_48032420______58_840_53587240->any[_5813_45732620______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__53757720();

   return behavior;
}

Behavior __53756480;

Behavior make__53756480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53756480 = behavior;
   behavior->owner = (Object)channel__x_581_48031500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_48550620_channel__x_581_48031500______58_84_48032420______58_840_53587240);
   abus__r_48550620_channel__x_581_48031500______58_84_48032420______58_840_53587240->num_any += 1;
   abus__r_48550620_channel__x_581_48031500______58_84_48032420______58_840_53587240->any = realloc(abus__r_48550620_channel__x_581_48031500______58_84_48032420______58_840_53587240->any,abus__r_48550620_channel__x_581_48031500______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
abus__r_48550620_channel__x_581_48031500______58_84_48032420______58_840_53587240->any[abus__r_48550620_channel__x_581_48031500______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__53756880();

   return behavior;
}

Behavior __53756000;

Behavior make__53756000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53756000 = behavior;
   behavior->owner = (Object)channel__x_581_48031500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5814_45732060______58_84_48032420______58_840_53587240);
   _5814_45732060______58_84_48032420______58_840_53587240->num_any += 1;
   _5814_45732060______58_84_48032420______58_840_53587240->any = realloc(_5814_45732060______58_84_48032420______58_840_53587240->any,_5814_45732060______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
_5814_45732060______58_84_48032420______58_840_53587240->any[_5814_45732060______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__53756420();

   return behavior;
}

Behavior __53951680;

Behavior make__53951680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53951680 = behavior;
   behavior->owner = (Object)channel__x_581_48031500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_48050520_channel__x_581_48031500______58_84_48032420______58_840_53587240);
   trig__w_48050520_channel__x_581_48031500______58_84_48032420______58_840_53587240->num_any += 1;
   trig__w_48050520_channel__x_581_48031500______58_84_48032420______58_840_53587240->any = realloc(trig__w_48050520_channel__x_581_48031500______58_84_48032420______58_840_53587240->any,trig__w_48050520_channel__x_581_48031500______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
trig__w_48050520_channel__x_581_48031500______58_84_48032420______58_840_53587240->any[trig__w_48050520_channel__x_581_48031500______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__53951860();

   return behavior;
}

Behavior __53951400;

Behavior make__53951400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53951400 = behavior;
   behavior->owner = (Object)channel__x_581_48031500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5817_45732040______58_84_48032420______58_840_53587240);
   _5817_45732040______58_84_48032420______58_840_53587240->num_any += 1;
   _5817_45732040______58_84_48032420______58_840_53587240->any = realloc(_5817_45732040______58_84_48032420______58_840_53587240->any,_5817_45732040______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
_5817_45732040______58_84_48032420______58_840_53587240->any[_5817_45732040______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__53951640();

   return behavior;
}

Behavior __53950260;

Behavior make__53950260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53950260 = behavior;
   behavior->owner = (Object)channel__x_581_48031500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_48550540_channel__x_581_48031500______58_84_48032420______58_840_53587240);
   abus__w_48550540_channel__x_581_48031500______58_84_48032420______58_840_53587240->num_any += 1;
   abus__w_48550540_channel__x_581_48031500______58_84_48032420______58_840_53587240->any = realloc(abus__w_48550540_channel__x_581_48031500______58_84_48032420______58_840_53587240->any,abus__w_48550540_channel__x_581_48031500______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
abus__w_48550540_channel__x_581_48031500______58_84_48032420______58_840_53587240->any[abus__w_48550540_channel__x_581_48031500______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__53950560();

   return behavior;
}

Behavior __53949740;

Behavior make__53949740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53949740 = behavior;
   behavior->owner = (Object)channel__x_581_48031500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5818_45731940______58_84_48032420______58_840_53587240);
   _5818_45731940______58_84_48032420______58_840_53587240->num_any += 1;
   _5818_45731940______58_84_48032420______58_840_53587240->any = realloc(_5818_45731940______58_84_48032420______58_840_53587240->any,_5818_45731940______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
_5818_45731940______58_84_48032420______58_840_53587240->any[_5818_45731940______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__53950140();

   return behavior;
}

Behavior __53948840;

Behavior make__53948840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53948840 = behavior;
   behavior->owner = (Object)channel__x_581_48031500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_48550700_channel__x_581_48031500______58_84_48032420______58_840_53587240);
   dbus__w_48550700_channel__x_581_48031500______58_84_48032420______58_840_53587240->num_any += 1;
   dbus__w_48550700_channel__x_581_48031500______58_84_48032420______58_840_53587240->any = realloc(dbus__w_48550700_channel__x_581_48031500______58_84_48032420______58_840_53587240->any,dbus__w_48550700_channel__x_581_48031500______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
dbus__w_48550700_channel__x_581_48031500______58_84_48032420______58_840_53587240->any[dbus__w_48550700_channel__x_581_48031500______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__53949080();

   return behavior;
}

Behavior __53948300;

Behavior make__53948300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53948300 = behavior;
   behavior->owner = (Object)channel__x_581_48031500;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5819_47538320______58_84_48032420______58_840_53587240);
   _5819_47538320______58_84_48032420______58_840_53587240->num_any += 1;
   _5819_47538320______58_84_48032420______58_840_53587240->any = realloc(_5819_47538320______58_84_48032420______58_840_53587240->any,_5819_47538320______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
_5819_47538320______58_84_48032420______58_840_53587240->any[_5819_47538320______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__53948760();

   return behavior;
}

Scope makechannel__x_581_48031500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__x_581_48031500 = scope;
   scope->owner = (Object)_____58_84_48032420;
   scope->name = "channel_x:1";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_48050540();
   scope->inners[1] = maketrig__w_48050520();
   scope->inners[2] = makedbus__r_48161740();
   scope->inners[3] = makedbus__w_48550700();
   scope->inners[4] = makeabus__r_48550620();
   scope->inners[5] = makeabus__w_48550540();
   scope->inners[6] = makemem_48755680();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_582_48031160();
   scope->scopes[1] = makewaddr_587_48030220();
   scope->scopes[2] = makerinc_5812_48054060();
   scope->scopes[3] = makewinc_5816_48053460();
   scope->scopes[4] = makerdec_5820_48052740();
   scope->scopes[5] = makewdec_5825_48051880();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47452680();
   scope->behaviors[1] = make__53759500();
   scope->behaviors[2] = make__53759200();
   scope->behaviors[3] = make__53757780();
   scope->behaviors[4] = make__53757380();
   scope->behaviors[5] = make__53756480();
   scope->behaviors[6] = make__53756000();
   scope->behaviors[7] = make__53951680();
   scope->behaviors[8] = make__53951400();
   scope->behaviors[9] = make__53950260();
   scope->behaviors[10] = make__53949740();
   scope->behaviors[11] = make__53948840();
   scope->behaviors[12] = make__53948300();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__a0_5830_47452560;

SignalI reg__0_47710080_channel__a0_5830_47452560______58_84_48032420______58_840_53587240;

SignalI makereg__0_47710080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_47710080_channel__a0_5830_47452560______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)channel__a0_5830_47452560;
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

SignalI reg__1_47917340_channel__a0_5830_47452560______58_84_48032420______58_840_53587240;

SignalI makereg__1_47917340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_47917340_channel__a0_5830_47452560______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)channel__a0_5830_47452560;
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

Scope anum_5831_47452180;

Scope makeanum_5831_47452180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_5831_47452180 = scope;
   scope->owner = (Object)channel__a0_5830_47452560;
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

Scope raddr_5834_47451300;

Scope makeraddr_5834_47451300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5834_47451300 = scope;
   scope->owner = (Object)channel__a0_5830_47452560;
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

Scope waddr_5838_47449940;

Scope makewaddr_5838_47449940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5838_47449940 = scope;
   scope->owner = (Object)channel__a0_5830_47452560;
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

Scope rinc_5842_47313260;

SignalI abus__r_47330200_rinc_5842_47313260_channel__a0_5830_47452560______58_84_48032420______58_840_53587240;

SignalI makeabus__r_47330200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47330200_rinc_5842_47313260_channel__a0_5830_47452560______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)rinc_5842_47313260;
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

Behavior __54115060;

Behavior make__54115060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54115060 = behavior;
   behavior->owner = (Object)rinc_5842_47313260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_47330200_rinc_5842_47313260_channel__a0_5830_47452560______58_84_48032420______58_840_53587240);
   abus__r_47330200_rinc_5842_47313260_channel__a0_5830_47452560______58_84_48032420______58_840_53587240->num_any += 1;
   abus__r_47330200_rinc_5842_47313260_channel__a0_5830_47452560______58_84_48032420______58_840_53587240->any = realloc(abus__r_47330200_rinc_5842_47313260_channel__a0_5830_47452560______58_84_48032420______58_840_53587240->any,abus__r_47330200_rinc_5842_47313260_channel__a0_5830_47452560______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
abus__r_47330200_rinc_5842_47313260_channel__a0_5830_47452560______58_84_48032420______58_840_53587240->any[abus__r_47330200_rinc_5842_47313260_channel__a0_5830_47452560______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__54115680();

   return behavior;
}

Behavior __54114240;

Behavior make__54114240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54114240 = behavior;
   behavior->owner = (Object)rinc_5842_47313260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5845_48547180______58_84_48032420______58_840_53587240);
   _5845_48547180______58_84_48032420______58_840_53587240->num_any += 1;
   _5845_48547180______58_84_48032420______58_840_53587240->any = realloc(_5845_48547180______58_84_48032420______58_840_53587240->any,_5845_48547180______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
_5845_48547180______58_84_48032420______58_840_53587240->any[_5845_48547180______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__54115020();

   return behavior;
}

Scope makerinc_5842_47313260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5842_47313260 = scope;
   scope->owner = (Object)channel__a0_5830_47452560;
   scope->name = "rinc:42";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47330200();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54115060();
   scope->behaviors[1] = make__54114240();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5846_47326880;

SignalI abus__w_47477980_winc_5846_47326880_channel__a0_5830_47452560______58_84_48032420______58_840_53587240;

SignalI makeabus__w_47477980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47477980_winc_5846_47326880_channel__a0_5830_47452560______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)winc_5846_47326880;
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

Scope makewinc_5846_47326880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5846_47326880 = scope;
   scope->owner = (Object)channel__a0_5830_47452560;
   scope->name = "winc:46";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47477980();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5850_47477660;

SignalI abus__r_47476760_rdec_5850_47477660_channel__a0_5830_47452560______58_84_48032420______58_840_53587240;

SignalI makeabus__r_47476760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47476760_rdec_5850_47477660_channel__a0_5830_47452560______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)rdec_5850_47477660;
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

Scope makerdec_5850_47477660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5850_47477660 = scope;
   scope->owner = (Object)channel__a0_5830_47452560;
   scope->name = "rdec:50";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47476760();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_5855_47476640;

SignalI abus__w_47476260_wdec_5855_47476640_channel__a0_5830_47452560______58_84_48032420______58_840_53587240;

SignalI makeabus__w_47476260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47476260_wdec_5855_47476640_channel__a0_5830_47452560______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)wdec_5855_47476640;
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

Scope makewdec_5855_47476640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5855_47476640 = scope;
   scope->owner = (Object)channel__a0_5830_47452560;
   scope->name = "wdec:55";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47476260();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __53968520;

Behavior make__53968520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53968520 = behavior;
   behavior->owner = (Object)channel__a0_5830_47452560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_47710080_channel__a0_5830_47452560______58_84_48032420______58_840_53587240);
   reg__0_47710080_channel__a0_5830_47452560______58_84_48032420______58_840_53587240->num_any += 1;
   reg__0_47710080_channel__a0_5830_47452560______58_84_48032420______58_840_53587240->any = realloc(reg__0_47710080_channel__a0_5830_47452560______58_84_48032420______58_840_53587240->any,reg__0_47710080_channel__a0_5830_47452560______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
reg__0_47710080_channel__a0_5830_47452560______58_84_48032420______58_840_53587240->any[reg__0_47710080_channel__a0_5830_47452560______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__53944420();

   return behavior;
}

Behavior __53968260;

Behavior make__53968260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53968260 = behavior;
   behavior->owner = (Object)channel__a0_5830_47452560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5832_47754100______58_84_48032420______58_840_53587240);
   _5832_47754100______58_84_48032420______58_840_53587240->num_any += 1;
   _5832_47754100______58_84_48032420______58_840_53587240->any = realloc(_5832_47754100______58_84_48032420______58_840_53587240->any,_5832_47754100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
_5832_47754100______58_84_48032420______58_840_53587240->any[_5832_47754100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__53968480();

   return behavior;
}

Behavior __53967440;

Behavior make__53967440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53967440 = behavior;
   behavior->owner = (Object)channel__a0_5830_47452560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_47917340_channel__a0_5830_47452560______58_84_48032420______58_840_53587240);
   reg__1_47917340_channel__a0_5830_47452560______58_84_48032420______58_840_53587240->num_any += 1;
   reg__1_47917340_channel__a0_5830_47452560______58_84_48032420______58_840_53587240->any = realloc(reg__1_47917340_channel__a0_5830_47452560______58_84_48032420______58_840_53587240->any,reg__1_47917340_channel__a0_5830_47452560______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
reg__1_47917340_channel__a0_5830_47452560______58_84_48032420______58_840_53587240->any[reg__1_47917340_channel__a0_5830_47452560______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__53967780();

   return behavior;
}

Behavior __53966600;

Behavior make__53966600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53966600 = behavior;
   behavior->owner = (Object)channel__a0_5830_47452560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5833_48036020______58_84_48032420______58_840_53587240);
   _5833_48036020______58_84_48032420______58_840_53587240->num_any += 1;
   _5833_48036020______58_84_48032420______58_840_53587240->any = realloc(_5833_48036020______58_84_48032420______58_840_53587240->any,_5833_48036020______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
_5833_48036020______58_84_48032420______58_840_53587240->any[_5833_48036020______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__53967360();

   return behavior;
}

Behavior __53965200;

Behavior make__53965200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53965200 = behavior;
   behavior->owner = (Object)channel__a0_5830_47452560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_47710080_channel__a0_5830_47452560______58_84_48032420______58_840_53587240);
   reg__0_47710080_channel__a0_5830_47452560______58_84_48032420______58_840_53587240->num_any += 1;
   reg__0_47710080_channel__a0_5830_47452560______58_84_48032420______58_840_53587240->any = realloc(reg__0_47710080_channel__a0_5830_47452560______58_84_48032420______58_840_53587240->any,reg__0_47710080_channel__a0_5830_47452560______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
reg__0_47710080_channel__a0_5830_47452560______58_84_48032420______58_840_53587240->any[reg__0_47710080_channel__a0_5830_47452560______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__53966000();

   return behavior;
}

Behavior __53964560;

Behavior make__53964560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53964560 = behavior;
   behavior->owner = (Object)channel__a0_5830_47452560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5843_48161800______58_84_48032420______58_840_53587240);
   _5843_48161800______58_84_48032420______58_840_53587240->num_any += 1;
   _5843_48161800______58_84_48032420______58_840_53587240->any = realloc(_5843_48161800______58_84_48032420______58_840_53587240->any,_5843_48161800______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
_5843_48161800______58_84_48032420______58_840_53587240->any[_5843_48161800______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__53965140();

   return behavior;
}

Behavior __53963840;

Behavior make__53963840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53963840 = behavior;
   behavior->owner = (Object)channel__a0_5830_47452560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_47917340_channel__a0_5830_47452560______58_84_48032420______58_840_53587240);
   reg__1_47917340_channel__a0_5830_47452560______58_84_48032420______58_840_53587240->num_any += 1;
   reg__1_47917340_channel__a0_5830_47452560______58_84_48032420______58_840_53587240->any = realloc(reg__1_47917340_channel__a0_5830_47452560______58_84_48032420______58_840_53587240->any,reg__1_47917340_channel__a0_5830_47452560______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
reg__1_47917340_channel__a0_5830_47452560______58_84_48032420______58_840_53587240->any[reg__1_47917340_channel__a0_5830_47452560______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__53964120();

   return behavior;
}

Behavior __53963600;

Behavior make__53963600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53963600 = behavior;
   behavior->owner = (Object)channel__a0_5830_47452560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5844_48547320______58_84_48032420______58_840_53587240);
   _5844_48547320______58_84_48032420______58_840_53587240->num_any += 1;
   _5844_48547320______58_84_48032420______58_840_53587240->any = realloc(_5844_48547320______58_84_48032420______58_840_53587240->any,_5844_48547320______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
_5844_48547320______58_84_48032420______58_840_53587240->any[_5844_48547320______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__53963800();

   return behavior;
}

Scope makechannel__a0_5830_47452560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__a0_5830_47452560 = scope;
   scope->owner = (Object)_____58_84_48032420;
   scope->name = "channel_a0:30";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_47710080();
   scope->inners[1] = makereg__1_47917340();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_5831_47452180();
   scope->scopes[1] = makeraddr_5834_47451300();
   scope->scopes[2] = makewaddr_5838_47449940();
   scope->scopes[3] = makerinc_5842_47313260();
   scope->scopes[4] = makewinc_5846_47326880();
   scope->scopes[5] = makerdec_5850_47477660();
   scope->scopes[6] = makewdec_5855_47476640();
   scope->num_behaviors = 8;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53968520();
   scope->behaviors[1] = make__53968260();
   scope->behaviors[2] = make__53967440();
   scope->behaviors[3] = make__53966600();
   scope->behaviors[4] = make__53965200();
   scope->behaviors[5] = make__53964560();
   scope->behaviors[6] = make__53963840();
   scope->behaviors[7] = make__53963600();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__a1_5860_49388240;

SignalI reg__0_49559760_channel__a1_5860_49388240______58_84_48032420______58_840_53587240;

SignalI makereg__0_49559760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_49559760_channel__a1_5860_49388240______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)channel__a1_5860_49388240;
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

Scope anum_5861_49386480;

Scope makeanum_5861_49386480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_5861_49386480 = scope;
   scope->owner = (Object)channel__a1_5860_49388240;
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

Scope raddr_5863_49383940;

Scope makeraddr_5863_49383940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5863_49383940 = scope;
   scope->owner = (Object)channel__a1_5860_49388240;
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

Scope waddr_5866_49382060;

Scope makewaddr_5866_49382060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5866_49382060 = scope;
   scope->owner = (Object)channel__a1_5860_49388240;
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

Scope rinc_5869_49403680;

SignalI abus__r_49403160_rinc_5869_49403680_channel__a1_5860_49388240______58_84_48032420______58_840_53587240;

SignalI makeabus__r_49403160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49403160_rinc_5869_49403680_channel__a1_5860_49388240______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)rinc_5869_49403680;
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

Scope makerinc_5869_49403680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5869_49403680 = scope;
   scope->owner = (Object)channel__a1_5860_49388240;
   scope->name = "rinc:69";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49403160();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5872_49402920;

SignalI abus__w_49402520_winc_5872_49402920_channel__a1_5860_49388240______58_84_48032420______58_840_53587240;

SignalI makeabus__w_49402520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49402520_winc_5872_49402920_channel__a1_5860_49388240______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)winc_5872_49402920;
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

Scope makewinc_5872_49402920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5872_49402920 = scope;
   scope->owner = (Object)channel__a1_5860_49388240;
   scope->name = "winc:72";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49402520();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5875_49402200;

SignalI abus__r_49401380_rdec_5875_49402200_channel__a1_5860_49388240______58_84_48032420______58_840_53587240;

SignalI makeabus__r_49401380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49401380_rdec_5875_49402200_channel__a1_5860_49388240______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)rdec_5875_49402200;
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

Scope makerdec_5875_49402200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5875_49402200 = scope;
   scope->owner = (Object)channel__a1_5860_49388240;
   scope->name = "rdec:75";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49401380();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_5879_49401040;

SignalI abus__w_49400500_wdec_5879_49401040_channel__a1_5860_49388240______58_84_48032420______58_840_53587240;

SignalI makeabus__w_49400500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49400500_wdec_5879_49401040_channel__a1_5860_49388240______58_84_48032420______58_840_53587240 = signalI;
   signalI->owner = (Object)wdec_5879_49401040;
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

Scope makewdec_5879_49401040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5879_49401040 = scope;
   scope->owner = (Object)channel__a1_5860_49388240;
   scope->name = "wdec:79";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49400500();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __54111300;

Behavior make__54111300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54111300 = behavior;
   behavior->owner = (Object)channel__a1_5860_49388240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_49559760_channel__a1_5860_49388240______58_84_48032420______58_840_53587240);
   reg__0_49559760_channel__a1_5860_49388240______58_84_48032420______58_840_53587240->num_any += 1;
   reg__0_49559760_channel__a1_5860_49388240______58_84_48032420______58_840_53587240->any = realloc(reg__0_49559760_channel__a1_5860_49388240______58_84_48032420______58_840_53587240->any,reg__0_49559760_channel__a1_5860_49388240______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
reg__0_49559760_channel__a1_5860_49388240______58_84_48032420______58_840_53587240->any[reg__0_49559760_channel__a1_5860_49388240______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__54111640();

   return behavior;
}

Behavior __54110540;

Behavior make__54110540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54110540 = behavior;
   behavior->owner = (Object)channel__a1_5860_49388240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5862_48773820______58_84_48032420______58_840_53587240);
   _5862_48773820______58_84_48032420______58_840_53587240->num_any += 1;
   _5862_48773820______58_84_48032420______58_840_53587240->any = realloc(_5862_48773820______58_84_48032420______58_840_53587240->any,_5862_48773820______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
_5862_48773820______58_84_48032420______58_840_53587240->any[_5862_48773820______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__54111260();

   return behavior;
}

Scope makechannel__a1_5860_49388240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__a1_5860_49388240 = scope;
   scope->owner = (Object)_____58_84_48032420;
   scope->name = "channel_a1:60";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_49559760();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_5861_49386480();
   scope->scopes[1] = makeraddr_5863_49383940();
   scope->scopes[2] = makewaddr_5866_49382060();
   scope->scopes[3] = makerinc_5869_49403680();
   scope->scopes[4] = makewinc_5872_49402920();
   scope->scopes[5] = makerdec_5875_49402200();
   scope->scopes[6] = makewdec_5879_49401040();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54111300();
   scope->behaviors[1] = make__54110540();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __53394060;

Behavior make__53394060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53394060 = behavior;
   behavior->owner = (Object)_____58_84_48032420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_49837480______58_84_48032420______58_840_53587240);
   clk_49837480______58_84_48032420______58_840_53587240->num_pos += 1;
   clk_49837480______58_84_48032420______58_840_53587240->pos = realloc(clk_49837480______58_84_48032420______58_840_53587240->pos,clk_49837480______58_84_48032420______58_840_53587240->num_pos*sizeof(Object));
clk_49837480______58_84_48032420______58_840_53587240->pos[clk_49837480______58_84_48032420______58_840_53587240->num_pos-1] = (Object)behavior;
   behavior->block = make__53023720();

   return behavior;
}

Behavior __53587400;

Behavior make__53587400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53587400 = behavior;
   register_timed_behavior(behavior);
   behavior->owner = (Object)_____58_84_48032420;
   behavior->activated = 0;
   behavior->timed = 1;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__53393940();

   return behavior;
}

Behavior __53763180;

Behavior make__53763180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53763180 = behavior;
   behavior->owner = (Object)_____58_84_48032420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_49837480______58_84_48032420______58_840_53587240);
   clk_49837480______58_84_48032420______58_840_53587240->num_any += 1;
   clk_49837480______58_84_48032420______58_840_53587240->any = realloc(clk_49837480______58_84_48032420______58_840_53587240->any,clk_49837480______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
clk_49837480______58_84_48032420______58_840_53587240->any[clk_49837480______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_49837460______58_84_48032420______58_840_53587240);
   rst_49837460______58_84_48032420______58_840_53587240->num_any += 1;
   rst_49837460______58_84_48032420______58_840_53587240->any = realloc(rst_49837460______58_84_48032420______58_840_53587240->any,rst_49837460______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
rst_49837460______58_84_48032420______58_840_53587240->any[rst_49837460______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,fill_49837320______58_84_48032420______58_840_53587240);
   fill_49837320______58_84_48032420______58_840_53587240->num_any += 1;
   fill_49837320______58_84_48032420______58_840_53587240->any = realloc(fill_49837320______58_84_48032420______58_840_53587240->any,fill_49837320______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
fill_49837320______58_84_48032420______58_840_53587240->any[fill_49837320______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,req_49837440______58_84_48032420______58_840_53587240);
   req_49837440______58_84_48032420______58_840_53587240->num_any += 1;
   req_49837440______58_84_48032420______58_840_53587240->any = realloc(req_49837440______58_84_48032420______58_840_53587240->any,req_49837440______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
req_49837440______58_84_48032420______58_840_53587240->any[req_49837440______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__0_49837420______58_84_48032420______58_840_53587240);
   ack__0_49837420______58_84_48032420______58_840_53587240->num_any += 1;
   ack__0_49837420______58_84_48032420______58_840_53587240->any = realloc(ack__0_49837420______58_84_48032420______58_840_53587240->any,ack__0_49837420______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
ack__0_49837420______58_84_48032420______58_840_53587240->any[ack__0_49837420______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__53663720();

   return behavior;
}

Behavior __53762300;

Behavior make__53762300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53762300 = behavior;
   behavior->owner = (Object)_____58_84_48032420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__0_54630400_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240);
   ack__0_54630400_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any += 1;
   ack__0_54630400_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any = realloc(ack__0_54630400_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any,ack__0_54630400_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
ack__0_54630400_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->any[ack__0_54630400_layer__hidden_58_840_54601100______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__1_53004160_layer__output_58_840_52977000______58_84_48032420______58_840_53587240);
   ack__1_53004160_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any += 1;
   ack__1_53004160_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any = realloc(ack__1_53004160_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any,ack__1_53004160_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any*sizeof(Object));
ack__1_53004160_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->any[ack__1_53004160_layer__output_58_840_52977000______58_84_48032420______58_840_53587240->num_any-1] = (Object)behavior;
   behavior->block = make__53663640();

   return behavior;
}

Scope make_____58_84_48032420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   _____58_84_48032420 = scope;
   scope->owner = (Object)_____58_840_53587240;
   scope->name = "__:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makelayer__hidden_54630080();
   scope->systemIs[1] = makelayer__output_53003880();
   scope->num_inners = 18;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeclk_49837480();
   scope->inners[1] = makerst_49837460();
   scope->inners[2] = makereq_49837440();
   scope->inners[3] = makeack__0_49837420();
   scope->inners[4] = makeack__1_49837400();
   scope->inners[5] = makefill_49837320();
   scope->inners[6] = make_5815_45732660();
   scope->inners[7] = make_5813_45732620();
   scope->inners[8] = make_5814_45732060();
   scope->inners[9] = make_5817_45732040();
   scope->inners[10] = make_5818_45731940();
   scope->inners[11] = make_5819_47538320();
   scope->inners[12] = make_5832_47754100();
   scope->inners[13] = make_5833_48036020();
   scope->inners[14] = make_5843_48161800();
   scope->inners[15] = make_5844_48547320();
   scope->inners[16] = make_5845_48547180();
   scope->inners[17] = make_5862_48773820();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__x_581_48031500();
   scope->scopes[1] = makechannel__a0_5830_47452560();
   scope->scopes[2] = makechannel__a1_5860_49388240();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53394060();
   scope->behaviors[1] = make__53587400();
   scope->behaviors[2] = make__53763180();
   scope->behaviors[3] = make__53762300();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT make_____58_840_53587240() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   _____58_840_53587240 = systemT;
systemT->owner = NULL;
   systemT->name = "__:T0";
   systemT->num_inputs = 0;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->num_outputs = 0;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make_____58_84_48032420();

   return systemT;
}