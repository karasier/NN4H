#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT _____58_840_59831220;

Block __59530340;

Block __59530180;

Block __59529720;

void code__59529720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60068380(),_5818_48698860______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__59529720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59529720 = block;
   block->owner = (Object)__59530180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59529720;

   return block;
};

void code__59530180() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_48565040______58_84_49218480______58_840_59831220->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60068460();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59529720();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60068320(),_5817_48699000______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__59530180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59530180 = block;
   block->owner = (Object)__59530340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59530180;

   return block;
};

Block __59528820;

Block __59528660;

Block __59528340;

void code__59528340() {
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
                  src0 = _5818_48698860______58_84_49218480______58_840_59831220->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60068060();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5818_48698860______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60067960(),_5817_48699000______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60067900(),_5819_49156440______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__59528340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59528340 = block;
   block->owner = (Object)__59528660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59528340;

   return block;
};

void code__59528660() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_48565040______58_84_49218480______58_840_59831220->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60068200();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59528340();
   }
      }
   }
}

Block make__59528660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59528660 = block;
   block->owner = (Object)__59528820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59528660;

   return block;
};

void code__59528820() {
 code__59528660();
}

Block make__59528820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59528820 = block;
   block->owner = (Object)__59530340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59528820;

   return block;
};

void code__59530340() {
 code__59530180();
   {
      Value cond = fill_48564840______58_84_49218480______58_840_59831220->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59528820();
   }
      }
   }
}

Block make__59530340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59530340 = block;
   block->owner = (Object)__59749880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59530340;

   return block;
};

Block __59749760;

void code__59749760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60067820(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60067740(),rst_48565040______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60067680(),req_48565020______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60067620(),fill_48564840______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60067500(),rst_48565040______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60067440(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60067380(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60067320(),rst_48565040______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60067260(),fill_48564840______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60067200(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60067140(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60067080(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60067020(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60066960(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60066900(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60066840(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60066780(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60066720(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60066640(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60066560(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60066500(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60066420(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60066320(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60066260(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60066200(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60066140(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60066080(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60066020(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60065960(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60065900(),fill_48564840______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60065840(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60065760(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60065700(),req_48565020______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60065620(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60065560(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60065480(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60065380(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60065320(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60065260(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60065200(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60065140(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60065080(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60065020(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60064960(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60064900(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60064840(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60064780(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60064720(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60064660(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60064600(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60064540(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60064460(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60064380(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60064320(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60064240(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60064140(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60064080(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60064020(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60063960(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60063900(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60063840(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60063780(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60088260(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60088180(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60088100(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60088040(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60087960(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60087860(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60087800(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60087740(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60087680(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60087620(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60087560(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60087500(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60087440(),clk_48565080______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59831340);
}

Block make__59749760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59749760 = block;
   block->owner = (Object)__59831340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59749760;

   return block;
};

Block __59931500;

void code__59931500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_48565080______58_84_49218480______58_840_59831220->c_value,clk_52928720_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_48565040______58_84_49218480______58_840_59831220->c_value,rst_52928700_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(fill_48564840______58_84_49218480______58_840_59831220->c_value,fill_52928660_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(req_48565020______58_84_49218480______58_840_59831220->c_value,req_52928640_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_48565080______58_84_49218480______58_840_59831220->c_value,clk_59508200_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_48565040______58_84_49218480______58_840_59831220->c_value,rst_59508180_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(fill_48564840______58_84_49218480______58_840_59831220->c_value,fill_59508160_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__0_48564960______58_84_49218480______58_840_59831220->c_value,req_59508140_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__59931500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59931500 = block;
   block->owner = (Object)__59924560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59931500;

   return block;
};

Block __59931440;

void code__59931440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__0_52928560_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->c_value,ack__0_48564960______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__1_59508100_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->c_value,ack__1_48564900______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__59931440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59931440 = block;
   block->owner = (Object)__59957120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59931440;

   return block;
};

Block __47067860;

Block __47762820;

void code__47762820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_49367520_channel__x_581_49241840______58_84_49218480______58_840_59831220->c_value,make_ref_rangeS(mem_49457340_channel__x_581_49241840______58_84_49218480______58_840_59831220,value2integer(abus__w_49366460_channel__x_581_49241840______58_84_49218480______58_840_59831220->c_value),value2integer(abus__w_49366460_channel__x_581_49241840______58_84_49218480______58_840_59831220->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__47762820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47762820 = block;
   block->owner = (Object)__47067860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47762820;

   return block;
};

void code__47067860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_49457340_channel__x_581_49241840______58_84_49218480______58_840_59831220->c_value;
            idx = value2integer(abus__r_49367040_channel__x_581_49241840______58_84_49218480______58_840_59831220->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_49301100_channel__x_581_49241840______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_49237280_channel__x_581_49241840______58_84_49218480______58_840_59831220->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47762820();
   }
      }
   }
}

Block make__47067860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47067860 = block;
   block->owner = (Object)__48679080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47067860;

   return block;
};

Block __59956300;

void code__59956300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_49301100_channel__x_581_49241840______58_84_49218480______58_840_59831220->c_value,_5815_48699220______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__59956300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59956300 = block;
   block->owner = (Object)__59956140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59956300;

   return block;
};

Block __59956080;

void code__59956080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5815_48699220______58_84_49218480______58_840_59831220->c_value,dbus__r_49301100_channel__x_581_49241840______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__59956080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59956080 = block;
   block->owner = (Object)__59955900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59956080;

   return block;
};

Block __59955540;

void code__59955540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_49237300_channel__x_581_49241840______58_84_49218480______58_840_59831220->c_value,_5813_48699200______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__59955540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59955540 = block;
   block->owner = (Object)__59955380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59955540;

   return block;
};

Block __59955340;

void code__59955340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5813_48699200______58_84_49218480______58_840_59831220->c_value,trig__r_49237300_channel__x_581_49241840______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__59955340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59955340 = block;
   block->owner = (Object)__59955180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59955340;

   return block;
};

Block __59954880;

void code__59954880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_49367040_channel__x_581_49241840______58_84_49218480______58_840_59831220->c_value,_5814_48699020______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__59954880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59954880 = block;
   block->owner = (Object)__59954700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59954880;

   return block;
};

Block __59954660;

void code__59954660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5814_48699020______58_84_49218480______58_840_59831220->c_value,abus__r_49367040_channel__x_581_49241840______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__59954660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59954660 = block;
   block->owner = (Object)__59954480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59954660;

   return block;
};

Block __59954120;

void code__59954120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_49237280_channel__x_581_49241840______58_84_49218480______58_840_59831220->c_value,_5817_48699000______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__59954120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59954120 = block;
   block->owner = (Object)__59953920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59954120;

   return block;
};

Block __59953880;

void code__59953880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5817_48699000______58_84_49218480______58_840_59831220->c_value,trig__w_49237280_channel__x_581_49241840______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__59953880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59953880 = block;
   block->owner = (Object)__59953660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59953880;

   return block;
};

Block __59953360;

void code__59953360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_49366460_channel__x_581_49241840______58_84_49218480______58_840_59831220->c_value,_5818_48698860______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__59953360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59953360 = block;
   block->owner = (Object)__59953200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59953360;

   return block;
};

Block __59953160;

void code__59953160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5818_48698860______58_84_49218480______58_840_59831220->c_value,abus__w_49366460_channel__x_581_49241840______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__59953160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59953160 = block;
   block->owner = (Object)__59953000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59953160;

   return block;
};

Block __59952700;

void code__59952700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_49367520_channel__x_581_49241840______58_84_49218480______58_840_59831220->c_value,_5819_49156440______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__59952700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59952700 = block;
   block->owner = (Object)__59952520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59952700;

   return block;
};

Block __59952480;

void code__59952480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5819_49156440______58_84_49218480______58_840_59831220->c_value,dbus__w_49367520_channel__x_581_49241840______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__59952480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59952480 = block;
   block->owner = (Object)__59952300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59952480;

   return block;
};

Block __59950620;

void code__59950620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_49107540_channel__a0_5830_48678320______58_84_49218480______58_840_59831220->c_value,_5832_49274580______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__59950620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59950620 = block;
   block->owner = (Object)__59950460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59950620;

   return block;
};

Block __59950420;

void code__59950420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5832_49274580______58_84_49218480______58_840_59831220->c_value,reg__0_49107540_channel__a0_5830_48678320______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__59950420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59950420 = block;
   block->owner = (Object)__59950220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59950420;

   return block;
};

Block __59949840;

void code__59949840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_49252800_channel__a0_5830_48678320______58_84_49218480______58_840_59831220->c_value,_5833_49334720______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__59949840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59949840 = block;
   block->owner = (Object)__59949660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59949840;

   return block;
};

Block __59949600;

void code__59949600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5833_49334720______58_84_49218480______58_840_59831220->c_value,reg__1_49252800_channel__a0_5830_48678320______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__59949600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59949600 = block;
   block->owner = (Object)__59949400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59949600;

   return block;
};

Block __59949100;

void code__59949100() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_49107540_channel__a0_5830_48678320______58_84_49218480______58_840_59831220->c_value,_5843_49399480______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__59949100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59949100 = block;
   block->owner = (Object)__59973480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59949100;

   return block;
};

Block __59973440;

void code__59973440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5843_49399480______58_84_49218480______58_840_59831220->c_value,reg__0_49107540_channel__a0_5830_48678320______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__59973440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59973440 = block;
   block->owner = (Object)__59973280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59973440;

   return block;
};

Block __59972980;

void code__59972980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_49252800_channel__a0_5830_48678320______58_84_49218480______58_840_59831220->c_value,_5844_49508340______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__59972980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59972980 = block;
   block->owner = (Object)__59972820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59972980;

   return block;
};

Block __59972780;

void code__59972780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5844_49508340______58_84_49218480______58_840_59831220->c_value,reg__1_49252800_channel__a0_5830_48678320______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__59972780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59972780 = block;
   block->owner = (Object)__59972580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59972780;

   return block;
};

Block __59970940;

void code__59970940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_48700200_rinc_5842_48700580_channel__a0_5830_48678320______58_84_49218480______58_840_59831220->c_value,_5845_49508260______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__59970940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59970940 = block;
   block->owner = (Object)__59970780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59970940;

   return block;
};

Block __59970740;

void code__59970740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5845_49508260______58_84_49218480______58_840_59831220->c_value,abus__r_48700200_rinc_5842_48700580_channel__a0_5830_48678320______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__59970740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59970740 = block;
   block->owner = (Object)__59970580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59970740;

   return block;
};

Block __59969160;

void code__59969160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_47701140_channel__a1_5860_47376180______58_84_49218480______58_840_59831220->c_value,_5862_49591460______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__59969160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59969160 = block;
   block->owner = (Object)__59969000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59969160;

   return block;
};

Block __59968960;

void code__59968960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5862_49591460______58_84_49218480______58_840_59831220->c_value,reg__0_47701140_channel__a1_5860_47376180______58_84_49218480______58_840_59831220);
      set_value_pos(pool_state);
   }
}

Block make__59968960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59968960 = block;
   block->owner = (Object)__59968800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59968960;

   return block;
};

Value make__60068460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60068380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60068320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60068200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60068060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60067960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60067900() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60067820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60067740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60067680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60067620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60067500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60067440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60067380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60067320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60067260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60067200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60067140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60067080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60067020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60066960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60066900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60066840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60066780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60066720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60066640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60066560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60066500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60066420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60066320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60066260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60066200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60066140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60066080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60066020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60065960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60065900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60065840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60065760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60065700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60065620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60065560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60065480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60065380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60065320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60065260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60065200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60065140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60065080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60065020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60064960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60064900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60064840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60064780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60064720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60064660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60064600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60064540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60064460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60064380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60064320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60064240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60064140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60064080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60064020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60063960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60063900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60063840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60063780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60088260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60088180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60088100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60088040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60087960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60087860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60087800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60087740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60087680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60087620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60087560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60087500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60087440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope _____58_84_49218480;

SignalI clk_48565080______58_84_49218480______58_840_59831220;

SignalI makeclk_48565080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_48565080______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)_____58_84_49218480;
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

SignalI rst_48565040______58_84_49218480______58_840_59831220;

SignalI makerst_48565040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_48565040______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)_____58_84_49218480;
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

SignalI req_48565020______58_84_49218480______58_840_59831220;

SignalI makereq_48565020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_48565020______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)_____58_84_49218480;
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

SignalI ack__0_48564960______58_84_49218480______58_840_59831220;

SignalI makeack__0_48564960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__0_48564960______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)_____58_84_49218480;
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

SignalI ack__1_48564900______58_84_49218480______58_840_59831220;

SignalI makeack__1_48564900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__1_48564900______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)_____58_84_49218480;
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

SignalI fill_48564840______58_84_49218480______58_840_59831220;

SignalI makefill_48564840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_48564840______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)_____58_84_49218480;
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

SignalI _5815_48699220______58_84_49218480______58_840_59831220;

SignalI make_5815_48699220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5815_48699220______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)_____58_84_49218480;
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

SignalI _5813_48699200______58_84_49218480______58_840_59831220;

SignalI make_5813_48699200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5813_48699200______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)_____58_84_49218480;
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

SignalI _5814_48699020______58_84_49218480______58_840_59831220;

SignalI make_5814_48699020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5814_48699020______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)_____58_84_49218480;
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

SignalI _5817_48699000______58_84_49218480______58_840_59831220;

SignalI make_5817_48699000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5817_48699000______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)_____58_84_49218480;
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

SignalI _5818_48698860______58_84_49218480______58_840_59831220;

SignalI make_5818_48698860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5818_48698860______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)_____58_84_49218480;
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

SignalI _5819_49156440______58_84_49218480______58_840_59831220;

SignalI make_5819_49156440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5819_49156440______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)_____58_84_49218480;
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

SignalI _5832_49274580______58_84_49218480______58_840_59831220;

SignalI make_5832_49274580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5832_49274580______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)_____58_84_49218480;
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

SignalI _5833_49334720______58_84_49218480______58_840_59831220;

SignalI make_5833_49334720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5833_49334720______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)_____58_84_49218480;
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

SignalI _5843_49399480______58_84_49218480______58_840_59831220;

SignalI make_5843_49399480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5843_49399480______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)_____58_84_49218480;
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

SignalI _5844_49508340______58_84_49218480______58_840_59831220;

SignalI make_5844_49508340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5844_49508340______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)_____58_84_49218480;
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

SignalI _5845_49508260______58_84_49218480______58_840_59831220;

SignalI make_5845_49508260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5845_49508260______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)_____58_84_49218480;
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

SignalI _5862_49591460______58_84_49218480______58_840_59831220;

SignalI make_5862_49591460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5862_49591460______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)_____58_84_49218480;
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

SystemI layer__hidden_52969060;

SystemI makelayer__hidden_52969060() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer__hidden_52969060 = systemI;
   systemI->owner = (Object)_____58_84_49218480;
   systemI->name = "layer_hidden";
   systemI->system = layer__hidden_58_840_52932100;

   return systemI;
};

SystemI layer__output_59507960;

SystemI makelayer__output_59507960() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer__output_59507960 = systemI;
   systemI->owner = (Object)_____58_84_49218480;
   systemI->name = "layer_output";
   systemI->system = layer__output_58_840_59510240;

   return systemI;
};

Scope channel__x_581_49241840;

SignalI trig__r_49237300_channel__x_581_49241840______58_84_49218480______58_840_59831220;

SignalI maketrig__r_49237300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_49237300_channel__x_581_49241840______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)channel__x_581_49241840;
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

SignalI trig__w_49237280_channel__x_581_49241840______58_84_49218480______58_840_59831220;

SignalI maketrig__w_49237280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_49237280_channel__x_581_49241840______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)channel__x_581_49241840;
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

SignalI dbus__r_49301100_channel__x_581_49241840______58_84_49218480______58_840_59831220;

SignalI makedbus__r_49301100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_49301100_channel__x_581_49241840______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)channel__x_581_49241840;
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

SignalI dbus__w_49367520_channel__x_581_49241840______58_84_49218480______58_840_59831220;

SignalI makedbus__w_49367520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_49367520_channel__x_581_49241840______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)channel__x_581_49241840;
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

SignalI abus__r_49367040_channel__x_581_49241840______58_84_49218480______58_840_59831220;

SignalI makeabus__r_49367040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49367040_channel__x_581_49241840______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)channel__x_581_49241840;
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

SignalI abus__w_49366460_channel__x_581_49241840______58_84_49218480______58_840_59831220;

SignalI makeabus__w_49366460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49366460_channel__x_581_49241840______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)channel__x_581_49241840;
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

SignalI mem_49457340_channel__x_581_49241840______58_84_49218480______58_840_59831220;

SignalI makemem_49457340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_49457340_channel__x_581_49241840______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)channel__x_581_49241840;
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

Scope raddr_582_49241360;

Scope makeraddr_582_49241360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_582_49241360 = scope;
   scope->owner = (Object)channel__x_581_49241840;
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

Scope waddr_587_49239740;

Scope makewaddr_587_49239740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_587_49239740 = scope;
   scope->owner = (Object)channel__x_581_49241840;
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

Scope rinc_5812_49239080;

Scope makerinc_5812_49239080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5812_49239080 = scope;
   scope->owner = (Object)channel__x_581_49241840;
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

Scope winc_5816_49238620;

Scope makewinc_5816_49238620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5816_49238620 = scope;
   scope->owner = (Object)channel__x_581_49241840;
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

Scope rdec_5820_49238200;

Scope makerdec_5820_49238200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5820_49238200 = scope;
   scope->owner = (Object)channel__x_581_49241840;
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

Scope wdec_5825_49237780;

Scope makewdec_5825_49237780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5825_49237780 = scope;
   scope->owner = (Object)channel__x_581_49241840;
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

Behavior __48679080;

Behavior make__48679080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48679080 = behavior;
   behavior->owner = (Object)channel__x_581_49241840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_48565080______58_84_49218480______58_840_59831220);
   clk_48565080______58_84_49218480______58_840_59831220->num_neg += 1;
   clk_48565080______58_84_49218480______58_840_59831220->neg = realloc(clk_48565080______58_84_49218480______58_840_59831220->neg,clk_48565080______58_84_49218480______58_840_59831220->num_neg*sizeof(Object));
clk_48565080______58_84_49218480______58_840_59831220->neg[clk_48565080______58_84_49218480______58_840_59831220->num_neg-1] = (Object)behavior;
   behavior->block = make__47067860();

   return behavior;
}

Behavior __59956140;

Behavior make__59956140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59956140 = behavior;
   behavior->owner = (Object)channel__x_581_49241840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_49301100_channel__x_581_49241840______58_84_49218480______58_840_59831220);
   dbus__r_49301100_channel__x_581_49241840______58_84_49218480______58_840_59831220->num_any += 1;
   dbus__r_49301100_channel__x_581_49241840______58_84_49218480______58_840_59831220->any = realloc(dbus__r_49301100_channel__x_581_49241840______58_84_49218480______58_840_59831220->any,dbus__r_49301100_channel__x_581_49241840______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
dbus__r_49301100_channel__x_581_49241840______58_84_49218480______58_840_59831220->any[dbus__r_49301100_channel__x_581_49241840______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__59956300();

   return behavior;
}

Behavior __59955900;

Behavior make__59955900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59955900 = behavior;
   behavior->owner = (Object)channel__x_581_49241840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5815_48699220______58_84_49218480______58_840_59831220);
   _5815_48699220______58_84_49218480______58_840_59831220->num_any += 1;
   _5815_48699220______58_84_49218480______58_840_59831220->any = realloc(_5815_48699220______58_84_49218480______58_840_59831220->any,_5815_48699220______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
_5815_48699220______58_84_49218480______58_840_59831220->any[_5815_48699220______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__59956080();

   return behavior;
}

Behavior __59955380;

Behavior make__59955380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59955380 = behavior;
   behavior->owner = (Object)channel__x_581_49241840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_49237300_channel__x_581_49241840______58_84_49218480______58_840_59831220);
   trig__r_49237300_channel__x_581_49241840______58_84_49218480______58_840_59831220->num_any += 1;
   trig__r_49237300_channel__x_581_49241840______58_84_49218480______58_840_59831220->any = realloc(trig__r_49237300_channel__x_581_49241840______58_84_49218480______58_840_59831220->any,trig__r_49237300_channel__x_581_49241840______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
trig__r_49237300_channel__x_581_49241840______58_84_49218480______58_840_59831220->any[trig__r_49237300_channel__x_581_49241840______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__59955540();

   return behavior;
}

Behavior __59955180;

Behavior make__59955180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59955180 = behavior;
   behavior->owner = (Object)channel__x_581_49241840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5813_48699200______58_84_49218480______58_840_59831220);
   _5813_48699200______58_84_49218480______58_840_59831220->num_any += 1;
   _5813_48699200______58_84_49218480______58_840_59831220->any = realloc(_5813_48699200______58_84_49218480______58_840_59831220->any,_5813_48699200______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
_5813_48699200______58_84_49218480______58_840_59831220->any[_5813_48699200______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__59955340();

   return behavior;
}

Behavior __59954700;

Behavior make__59954700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59954700 = behavior;
   behavior->owner = (Object)channel__x_581_49241840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_49367040_channel__x_581_49241840______58_84_49218480______58_840_59831220);
   abus__r_49367040_channel__x_581_49241840______58_84_49218480______58_840_59831220->num_any += 1;
   abus__r_49367040_channel__x_581_49241840______58_84_49218480______58_840_59831220->any = realloc(abus__r_49367040_channel__x_581_49241840______58_84_49218480______58_840_59831220->any,abus__r_49367040_channel__x_581_49241840______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
abus__r_49367040_channel__x_581_49241840______58_84_49218480______58_840_59831220->any[abus__r_49367040_channel__x_581_49241840______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__59954880();

   return behavior;
}

Behavior __59954480;

Behavior make__59954480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59954480 = behavior;
   behavior->owner = (Object)channel__x_581_49241840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5814_48699020______58_84_49218480______58_840_59831220);
   _5814_48699020______58_84_49218480______58_840_59831220->num_any += 1;
   _5814_48699020______58_84_49218480______58_840_59831220->any = realloc(_5814_48699020______58_84_49218480______58_840_59831220->any,_5814_48699020______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
_5814_48699020______58_84_49218480______58_840_59831220->any[_5814_48699020______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__59954660();

   return behavior;
}

Behavior __59953920;

Behavior make__59953920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59953920 = behavior;
   behavior->owner = (Object)channel__x_581_49241840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_49237280_channel__x_581_49241840______58_84_49218480______58_840_59831220);
   trig__w_49237280_channel__x_581_49241840______58_84_49218480______58_840_59831220->num_any += 1;
   trig__w_49237280_channel__x_581_49241840______58_84_49218480______58_840_59831220->any = realloc(trig__w_49237280_channel__x_581_49241840______58_84_49218480______58_840_59831220->any,trig__w_49237280_channel__x_581_49241840______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
trig__w_49237280_channel__x_581_49241840______58_84_49218480______58_840_59831220->any[trig__w_49237280_channel__x_581_49241840______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__59954120();

   return behavior;
}

Behavior __59953660;

Behavior make__59953660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59953660 = behavior;
   behavior->owner = (Object)channel__x_581_49241840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5817_48699000______58_84_49218480______58_840_59831220);
   _5817_48699000______58_84_49218480______58_840_59831220->num_any += 1;
   _5817_48699000______58_84_49218480______58_840_59831220->any = realloc(_5817_48699000______58_84_49218480______58_840_59831220->any,_5817_48699000______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
_5817_48699000______58_84_49218480______58_840_59831220->any[_5817_48699000______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__59953880();

   return behavior;
}

Behavior __59953200;

Behavior make__59953200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59953200 = behavior;
   behavior->owner = (Object)channel__x_581_49241840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_49366460_channel__x_581_49241840______58_84_49218480______58_840_59831220);
   abus__w_49366460_channel__x_581_49241840______58_84_49218480______58_840_59831220->num_any += 1;
   abus__w_49366460_channel__x_581_49241840______58_84_49218480______58_840_59831220->any = realloc(abus__w_49366460_channel__x_581_49241840______58_84_49218480______58_840_59831220->any,abus__w_49366460_channel__x_581_49241840______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
abus__w_49366460_channel__x_581_49241840______58_84_49218480______58_840_59831220->any[abus__w_49366460_channel__x_581_49241840______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__59953360();

   return behavior;
}

Behavior __59953000;

Behavior make__59953000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59953000 = behavior;
   behavior->owner = (Object)channel__x_581_49241840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5818_48698860______58_84_49218480______58_840_59831220);
   _5818_48698860______58_84_49218480______58_840_59831220->num_any += 1;
   _5818_48698860______58_84_49218480______58_840_59831220->any = realloc(_5818_48698860______58_84_49218480______58_840_59831220->any,_5818_48698860______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
_5818_48698860______58_84_49218480______58_840_59831220->any[_5818_48698860______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__59953160();

   return behavior;
}

Behavior __59952520;

Behavior make__59952520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59952520 = behavior;
   behavior->owner = (Object)channel__x_581_49241840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_49367520_channel__x_581_49241840______58_84_49218480______58_840_59831220);
   dbus__w_49367520_channel__x_581_49241840______58_84_49218480______58_840_59831220->num_any += 1;
   dbus__w_49367520_channel__x_581_49241840______58_84_49218480______58_840_59831220->any = realloc(dbus__w_49367520_channel__x_581_49241840______58_84_49218480______58_840_59831220->any,dbus__w_49367520_channel__x_581_49241840______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
dbus__w_49367520_channel__x_581_49241840______58_84_49218480______58_840_59831220->any[dbus__w_49367520_channel__x_581_49241840______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__59952700();

   return behavior;
}

Behavior __59952300;

Behavior make__59952300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59952300 = behavior;
   behavior->owner = (Object)channel__x_581_49241840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5819_49156440______58_84_49218480______58_840_59831220);
   _5819_49156440______58_84_49218480______58_840_59831220->num_any += 1;
   _5819_49156440______58_84_49218480______58_840_59831220->any = realloc(_5819_49156440______58_84_49218480______58_840_59831220->any,_5819_49156440______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
_5819_49156440______58_84_49218480______58_840_59831220->any[_5819_49156440______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__59952480();

   return behavior;
}

Scope makechannel__x_581_49241840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__x_581_49241840 = scope;
   scope->owner = (Object)_____58_84_49218480;
   scope->name = "channel_x:1";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_49237300();
   scope->inners[1] = maketrig__w_49237280();
   scope->inners[2] = makedbus__r_49301100();
   scope->inners[3] = makedbus__w_49367520();
   scope->inners[4] = makeabus__r_49367040();
   scope->inners[5] = makeabus__w_49366460();
   scope->inners[6] = makemem_49457340();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_582_49241360();
   scope->scopes[1] = makewaddr_587_49239740();
   scope->scopes[2] = makerinc_5812_49239080();
   scope->scopes[3] = makewinc_5816_49238620();
   scope->scopes[4] = makerdec_5820_49238200();
   scope->scopes[5] = makewdec_5825_49237780();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48679080();
   scope->behaviors[1] = make__59956140();
   scope->behaviors[2] = make__59955900();
   scope->behaviors[3] = make__59955380();
   scope->behaviors[4] = make__59955180();
   scope->behaviors[5] = make__59954700();
   scope->behaviors[6] = make__59954480();
   scope->behaviors[7] = make__59953920();
   scope->behaviors[8] = make__59953660();
   scope->behaviors[9] = make__59953200();
   scope->behaviors[10] = make__59953000();
   scope->behaviors[11] = make__59952520();
   scope->behaviors[12] = make__59952300();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__a0_5830_48678320;

SignalI reg__0_49107540_channel__a0_5830_48678320______58_84_49218480______58_840_59831220;

SignalI makereg__0_49107540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_49107540_channel__a0_5830_48678320______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)channel__a0_5830_48678320;
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

SignalI reg__1_49252800_channel__a0_5830_48678320______58_84_49218480______58_840_59831220;

SignalI makereg__1_49252800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_49252800_channel__a0_5830_48678320______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)channel__a0_5830_48678320;
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

Scope anum_5831_48677980;

Scope makeanum_5831_48677980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_5831_48677980 = scope;
   scope->owner = (Object)channel__a0_5830_48678320;
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

Scope raddr_5834_48677380;

Scope makeraddr_5834_48677380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5834_48677380 = scope;
   scope->owner = (Object)channel__a0_5830_48678320;
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

Scope waddr_5838_48676920;

Scope makewaddr_5838_48676920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5838_48676920 = scope;
   scope->owner = (Object)channel__a0_5830_48678320;
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

Scope rinc_5842_48700580;

SignalI abus__r_48700200_rinc_5842_48700580_channel__a0_5830_48678320______58_84_49218480______58_840_59831220;

SignalI makeabus__r_48700200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48700200_rinc_5842_48700580_channel__a0_5830_48678320______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)rinc_5842_48700580;
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

Behavior __59970780;

Behavior make__59970780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59970780 = behavior;
   behavior->owner = (Object)rinc_5842_48700580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_48700200_rinc_5842_48700580_channel__a0_5830_48678320______58_84_49218480______58_840_59831220);
   abus__r_48700200_rinc_5842_48700580_channel__a0_5830_48678320______58_84_49218480______58_840_59831220->num_any += 1;
   abus__r_48700200_rinc_5842_48700580_channel__a0_5830_48678320______58_84_49218480______58_840_59831220->any = realloc(abus__r_48700200_rinc_5842_48700580_channel__a0_5830_48678320______58_84_49218480______58_840_59831220->any,abus__r_48700200_rinc_5842_48700580_channel__a0_5830_48678320______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
abus__r_48700200_rinc_5842_48700580_channel__a0_5830_48678320______58_84_49218480______58_840_59831220->any[abus__r_48700200_rinc_5842_48700580_channel__a0_5830_48678320______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__59970940();

   return behavior;
}

Behavior __59970580;

Behavior make__59970580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59970580 = behavior;
   behavior->owner = (Object)rinc_5842_48700580;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5845_49508260______58_84_49218480______58_840_59831220);
   _5845_49508260______58_84_49218480______58_840_59831220->num_any += 1;
   _5845_49508260______58_84_49218480______58_840_59831220->any = realloc(_5845_49508260______58_84_49218480______58_840_59831220->any,_5845_49508260______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
_5845_49508260______58_84_49218480______58_840_59831220->any[_5845_49508260______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__59970740();

   return behavior;
}

Scope makerinc_5842_48700580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5842_48700580 = scope;
   scope->owner = (Object)channel__a0_5830_48678320;
   scope->name = "rinc:42";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_48700200();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59970780();
   scope->behaviors[1] = make__59970580();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5846_48699620;

SignalI abus__w_48698920_winc_5846_48699620_channel__a0_5830_48678320______58_84_49218480______58_840_59831220;

SignalI makeabus__w_48698920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48698920_winc_5846_48699620_channel__a0_5830_48678320______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)winc_5846_48699620;
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

Scope makewinc_5846_48699620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5846_48699620 = scope;
   scope->owner = (Object)channel__a0_5830_48678320;
   scope->name = "winc:46";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_48698920();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5850_48698800;

SignalI abus__r_48698420_rdec_5850_48698800_channel__a0_5830_48678320______58_84_49218480______58_840_59831220;

SignalI makeabus__r_48698420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48698420_rdec_5850_48698800_channel__a0_5830_48678320______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)rdec_5850_48698800;
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

Scope makerdec_5850_48698800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5850_48698800 = scope;
   scope->owner = (Object)channel__a0_5830_48678320;
   scope->name = "rdec:50";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_48698420();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_5855_48698300;

SignalI abus__w_48697800_wdec_5855_48698300_channel__a0_5830_48678320______58_84_49218480______58_840_59831220;

SignalI makeabus__w_48697800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48697800_wdec_5855_48698300_channel__a0_5830_48678320______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)wdec_5855_48698300;
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

Scope makewdec_5855_48698300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5855_48698300 = scope;
   scope->owner = (Object)channel__a0_5830_48678320;
   scope->name = "wdec:55";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_48697800();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __59950460;

Behavior make__59950460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59950460 = behavior;
   behavior->owner = (Object)channel__a0_5830_48678320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_49107540_channel__a0_5830_48678320______58_84_49218480______58_840_59831220);
   reg__0_49107540_channel__a0_5830_48678320______58_84_49218480______58_840_59831220->num_any += 1;
   reg__0_49107540_channel__a0_5830_48678320______58_84_49218480______58_840_59831220->any = realloc(reg__0_49107540_channel__a0_5830_48678320______58_84_49218480______58_840_59831220->any,reg__0_49107540_channel__a0_5830_48678320______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
reg__0_49107540_channel__a0_5830_48678320______58_84_49218480______58_840_59831220->any[reg__0_49107540_channel__a0_5830_48678320______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__59950620();

   return behavior;
}

Behavior __59950220;

Behavior make__59950220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59950220 = behavior;
   behavior->owner = (Object)channel__a0_5830_48678320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5832_49274580______58_84_49218480______58_840_59831220);
   _5832_49274580______58_84_49218480______58_840_59831220->num_any += 1;
   _5832_49274580______58_84_49218480______58_840_59831220->any = realloc(_5832_49274580______58_84_49218480______58_840_59831220->any,_5832_49274580______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
_5832_49274580______58_84_49218480______58_840_59831220->any[_5832_49274580______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__59950420();

   return behavior;
}

Behavior __59949660;

Behavior make__59949660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59949660 = behavior;
   behavior->owner = (Object)channel__a0_5830_48678320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_49252800_channel__a0_5830_48678320______58_84_49218480______58_840_59831220);
   reg__1_49252800_channel__a0_5830_48678320______58_84_49218480______58_840_59831220->num_any += 1;
   reg__1_49252800_channel__a0_5830_48678320______58_84_49218480______58_840_59831220->any = realloc(reg__1_49252800_channel__a0_5830_48678320______58_84_49218480______58_840_59831220->any,reg__1_49252800_channel__a0_5830_48678320______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
reg__1_49252800_channel__a0_5830_48678320______58_84_49218480______58_840_59831220->any[reg__1_49252800_channel__a0_5830_48678320______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__59949840();

   return behavior;
}

Behavior __59949400;

Behavior make__59949400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59949400 = behavior;
   behavior->owner = (Object)channel__a0_5830_48678320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5833_49334720______58_84_49218480______58_840_59831220);
   _5833_49334720______58_84_49218480______58_840_59831220->num_any += 1;
   _5833_49334720______58_84_49218480______58_840_59831220->any = realloc(_5833_49334720______58_84_49218480______58_840_59831220->any,_5833_49334720______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
_5833_49334720______58_84_49218480______58_840_59831220->any[_5833_49334720______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__59949600();

   return behavior;
}

Behavior __59973480;

Behavior make__59973480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59973480 = behavior;
   behavior->owner = (Object)channel__a0_5830_48678320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_49107540_channel__a0_5830_48678320______58_84_49218480______58_840_59831220);
   reg__0_49107540_channel__a0_5830_48678320______58_84_49218480______58_840_59831220->num_any += 1;
   reg__0_49107540_channel__a0_5830_48678320______58_84_49218480______58_840_59831220->any = realloc(reg__0_49107540_channel__a0_5830_48678320______58_84_49218480______58_840_59831220->any,reg__0_49107540_channel__a0_5830_48678320______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
reg__0_49107540_channel__a0_5830_48678320______58_84_49218480______58_840_59831220->any[reg__0_49107540_channel__a0_5830_48678320______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__59949100();

   return behavior;
}

Behavior __59973280;

Behavior make__59973280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59973280 = behavior;
   behavior->owner = (Object)channel__a0_5830_48678320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5843_49399480______58_84_49218480______58_840_59831220);
   _5843_49399480______58_84_49218480______58_840_59831220->num_any += 1;
   _5843_49399480______58_84_49218480______58_840_59831220->any = realloc(_5843_49399480______58_84_49218480______58_840_59831220->any,_5843_49399480______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
_5843_49399480______58_84_49218480______58_840_59831220->any[_5843_49399480______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__59973440();

   return behavior;
}

Behavior __59972820;

Behavior make__59972820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59972820 = behavior;
   behavior->owner = (Object)channel__a0_5830_48678320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_49252800_channel__a0_5830_48678320______58_84_49218480______58_840_59831220);
   reg__1_49252800_channel__a0_5830_48678320______58_84_49218480______58_840_59831220->num_any += 1;
   reg__1_49252800_channel__a0_5830_48678320______58_84_49218480______58_840_59831220->any = realloc(reg__1_49252800_channel__a0_5830_48678320______58_84_49218480______58_840_59831220->any,reg__1_49252800_channel__a0_5830_48678320______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
reg__1_49252800_channel__a0_5830_48678320______58_84_49218480______58_840_59831220->any[reg__1_49252800_channel__a0_5830_48678320______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__59972980();

   return behavior;
}

Behavior __59972580;

Behavior make__59972580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59972580 = behavior;
   behavior->owner = (Object)channel__a0_5830_48678320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5844_49508340______58_84_49218480______58_840_59831220);
   _5844_49508340______58_84_49218480______58_840_59831220->num_any += 1;
   _5844_49508340______58_84_49218480______58_840_59831220->any = realloc(_5844_49508340______58_84_49218480______58_840_59831220->any,_5844_49508340______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
_5844_49508340______58_84_49218480______58_840_59831220->any[_5844_49508340______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__59972780();

   return behavior;
}

Scope makechannel__a0_5830_48678320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__a0_5830_48678320 = scope;
   scope->owner = (Object)_____58_84_49218480;
   scope->name = "channel_a0:30";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_49107540();
   scope->inners[1] = makereg__1_49252800();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_5831_48677980();
   scope->scopes[1] = makeraddr_5834_48677380();
   scope->scopes[2] = makewaddr_5838_48676920();
   scope->scopes[3] = makerinc_5842_48700580();
   scope->scopes[4] = makewinc_5846_48699620();
   scope->scopes[5] = makerdec_5850_48698800();
   scope->scopes[6] = makewdec_5855_48698300();
   scope->num_behaviors = 8;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59950460();
   scope->behaviors[1] = make__59950220();
   scope->behaviors[2] = make__59949660();
   scope->behaviors[3] = make__59949400();
   scope->behaviors[4] = make__59973480();
   scope->behaviors[5] = make__59973280();
   scope->behaviors[6] = make__59972820();
   scope->behaviors[7] = make__59972580();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__a1_5860_47376180;

SignalI reg__0_47701140_channel__a1_5860_47376180______58_84_49218480______58_840_59831220;

SignalI makereg__0_47701140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_47701140_channel__a1_5860_47376180______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)channel__a1_5860_47376180;
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

Scope anum_5861_47375580;

Scope makeanum_5861_47375580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_5861_47375580 = scope;
   scope->owner = (Object)channel__a1_5860_47376180;
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

Scope raddr_5863_47375080;

Scope makeraddr_5863_47375080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5863_47375080 = scope;
   scope->owner = (Object)channel__a1_5860_47376180;
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

Scope waddr_5866_47374620;

Scope makewaddr_5866_47374620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5866_47374620 = scope;
   scope->owner = (Object)channel__a1_5860_47376180;
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

Scope rinc_5869_47394960;

SignalI abus__r_47406440_rinc_5869_47394960_channel__a1_5860_47376180______58_84_49218480______58_840_59831220;

SignalI makeabus__r_47406440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47406440_rinc_5869_47394960_channel__a1_5860_47376180______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)rinc_5869_47394960;
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

Scope makerinc_5869_47394960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5869_47394960 = scope;
   scope->owner = (Object)channel__a1_5860_47376180;
   scope->name = "rinc:69";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47406440();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5872_47405520;

SignalI abus__w_47405100_winc_5872_47405520_channel__a1_5860_47376180______58_84_49218480______58_840_59831220;

SignalI makeabus__w_47405100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47405100_winc_5872_47405520_channel__a1_5860_47376180______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)winc_5872_47405520;
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

Scope makewinc_5872_47405520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5872_47405520 = scope;
   scope->owner = (Object)channel__a1_5860_47376180;
   scope->name = "winc:72";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47405100();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5875_47404980;

SignalI abus__r_47404340_rdec_5875_47404980_channel__a1_5860_47376180______58_84_49218480______58_840_59831220;

SignalI makeabus__r_47404340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47404340_rdec_5875_47404980_channel__a1_5860_47376180______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)rdec_5875_47404980;
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

Scope makerdec_5875_47404980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5875_47404980 = scope;
   scope->owner = (Object)channel__a1_5860_47376180;
   scope->name = "rdec:75";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47404340();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_5879_47403940;

SignalI abus__w_47403240_wdec_5879_47403940_channel__a1_5860_47376180______58_84_49218480______58_840_59831220;

SignalI makeabus__w_47403240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47403240_wdec_5879_47403940_channel__a1_5860_47376180______58_84_49218480______58_840_59831220 = signalI;
   signalI->owner = (Object)wdec_5879_47403940;
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

Scope makewdec_5879_47403940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5879_47403940 = scope;
   scope->owner = (Object)channel__a1_5860_47376180;
   scope->name = "wdec:79";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47403240();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __59969000;

Behavior make__59969000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59969000 = behavior;
   behavior->owner = (Object)channel__a1_5860_47376180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_47701140_channel__a1_5860_47376180______58_84_49218480______58_840_59831220);
   reg__0_47701140_channel__a1_5860_47376180______58_84_49218480______58_840_59831220->num_any += 1;
   reg__0_47701140_channel__a1_5860_47376180______58_84_49218480______58_840_59831220->any = realloc(reg__0_47701140_channel__a1_5860_47376180______58_84_49218480______58_840_59831220->any,reg__0_47701140_channel__a1_5860_47376180______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
reg__0_47701140_channel__a1_5860_47376180______58_84_49218480______58_840_59831220->any[reg__0_47701140_channel__a1_5860_47376180______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__59969160();

   return behavior;
}

Behavior __59968800;

Behavior make__59968800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59968800 = behavior;
   behavior->owner = (Object)channel__a1_5860_47376180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5862_49591460______58_84_49218480______58_840_59831220);
   _5862_49591460______58_84_49218480______58_840_59831220->num_any += 1;
   _5862_49591460______58_84_49218480______58_840_59831220->any = realloc(_5862_49591460______58_84_49218480______58_840_59831220->any,_5862_49591460______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
_5862_49591460______58_84_49218480______58_840_59831220->any[_5862_49591460______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__59968960();

   return behavior;
}

Scope makechannel__a1_5860_47376180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__a1_5860_47376180 = scope;
   scope->owner = (Object)_____58_84_49218480;
   scope->name = "channel_a1:60";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_47701140();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_5861_47375580();
   scope->scopes[1] = makeraddr_5863_47375080();
   scope->scopes[2] = makewaddr_5866_47374620();
   scope->scopes[3] = makerinc_5869_47394960();
   scope->scopes[4] = makewinc_5872_47405520();
   scope->scopes[5] = makerdec_5875_47404980();
   scope->scopes[6] = makewdec_5879_47403940();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59969000();
   scope->behaviors[1] = make__59968800();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __59749880;

Behavior make__59749880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59749880 = behavior;
   behavior->owner = (Object)_____58_84_49218480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_48565080______58_84_49218480______58_840_59831220);
   clk_48565080______58_84_49218480______58_840_59831220->num_pos += 1;
   clk_48565080______58_84_49218480______58_840_59831220->pos = realloc(clk_48565080______58_84_49218480______58_840_59831220->pos,clk_48565080______58_84_49218480______58_840_59831220->num_pos*sizeof(Object));
clk_48565080______58_84_49218480______58_840_59831220->pos[clk_48565080______58_84_49218480______58_840_59831220->num_pos-1] = (Object)behavior;
   behavior->block = make__59530340();

   return behavior;
}

Behavior __59831340;

Behavior make__59831340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59831340 = behavior;
   register_timed_behavior(behavior);
   behavior->owner = (Object)_____58_84_49218480;
   behavior->activated = 0;
   behavior->timed = 1;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__59749760();

   return behavior;
}

Behavior __59924560;

Behavior make__59924560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59924560 = behavior;
   behavior->owner = (Object)_____58_84_49218480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_48565080______58_84_49218480______58_840_59831220);
   clk_48565080______58_84_49218480______58_840_59831220->num_any += 1;
   clk_48565080______58_84_49218480______58_840_59831220->any = realloc(clk_48565080______58_84_49218480______58_840_59831220->any,clk_48565080______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
clk_48565080______58_84_49218480______58_840_59831220->any[clk_48565080______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_48565040______58_84_49218480______58_840_59831220);
   rst_48565040______58_84_49218480______58_840_59831220->num_any += 1;
   rst_48565040______58_84_49218480______58_840_59831220->any = realloc(rst_48565040______58_84_49218480______58_840_59831220->any,rst_48565040______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
rst_48565040______58_84_49218480______58_840_59831220->any[rst_48565040______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,fill_48564840______58_84_49218480______58_840_59831220);
   fill_48564840______58_84_49218480______58_840_59831220->num_any += 1;
   fill_48564840______58_84_49218480______58_840_59831220->any = realloc(fill_48564840______58_84_49218480______58_840_59831220->any,fill_48564840______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
fill_48564840______58_84_49218480______58_840_59831220->any[fill_48564840______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,req_48565020______58_84_49218480______58_840_59831220);
   req_48565020______58_84_49218480______58_840_59831220->num_any += 1;
   req_48565020______58_84_49218480______58_840_59831220->any = realloc(req_48565020______58_84_49218480______58_840_59831220->any,req_48565020______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
req_48565020______58_84_49218480______58_840_59831220->any[req_48565020______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__0_48564960______58_84_49218480______58_840_59831220);
   ack__0_48564960______58_84_49218480______58_840_59831220->num_any += 1;
   ack__0_48564960______58_84_49218480______58_840_59831220->any = realloc(ack__0_48564960______58_84_49218480______58_840_59831220->any,ack__0_48564960______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
ack__0_48564960______58_84_49218480______58_840_59831220->any[ack__0_48564960______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__59931500();

   return behavior;
}

Behavior __59957120;

Behavior make__59957120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59957120 = behavior;
   behavior->owner = (Object)_____58_84_49218480;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__0_52928560_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220);
   ack__0_52928560_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any += 1;
   ack__0_52928560_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any = realloc(ack__0_52928560_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any,ack__0_52928560_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
ack__0_52928560_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->any[ack__0_52928560_layer__hidden_58_840_52932100______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__1_59508100_layer__output_58_840_59510240______58_84_49218480______58_840_59831220);
   ack__1_59508100_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any += 1;
   ack__1_59508100_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any = realloc(ack__1_59508100_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any,ack__1_59508100_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any*sizeof(Object));
ack__1_59508100_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->any[ack__1_59508100_layer__output_58_840_59510240______58_84_49218480______58_840_59831220->num_any-1] = (Object)behavior;
   behavior->block = make__59931440();

   return behavior;
}

Scope make_____58_84_49218480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   _____58_84_49218480 = scope;
   scope->owner = (Object)_____58_840_59831220;
   scope->name = "__:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makelayer__hidden_52969060();
   scope->systemIs[1] = makelayer__output_59507960();
   scope->num_inners = 18;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeclk_48565080();
   scope->inners[1] = makerst_48565040();
   scope->inners[2] = makereq_48565020();
   scope->inners[3] = makeack__0_48564960();
   scope->inners[4] = makeack__1_48564900();
   scope->inners[5] = makefill_48564840();
   scope->inners[6] = make_5815_48699220();
   scope->inners[7] = make_5813_48699200();
   scope->inners[8] = make_5814_48699020();
   scope->inners[9] = make_5817_48699000();
   scope->inners[10] = make_5818_48698860();
   scope->inners[11] = make_5819_49156440();
   scope->inners[12] = make_5832_49274580();
   scope->inners[13] = make_5833_49334720();
   scope->inners[14] = make_5843_49399480();
   scope->inners[15] = make_5844_49508340();
   scope->inners[16] = make_5845_49508260();
   scope->inners[17] = make_5862_49591460();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__x_581_49241840();
   scope->scopes[1] = makechannel__a0_5830_48678320();
   scope->scopes[2] = makechannel__a1_5860_47376180();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59749880();
   scope->behaviors[1] = make__59831340();
   scope->behaviors[2] = make__59924560();
   scope->behaviors[3] = make__59957120();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT make_____58_840_59831220() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   _____58_840_59831220 = systemT;
systemT->owner = NULL;
   systemT->name = "__:T0";
   systemT->num_inputs = 0;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->num_outputs = 0;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make_____58_84_49218480();

   return systemT;
}