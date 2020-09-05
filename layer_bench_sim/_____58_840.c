#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT _____58_840_61083740;

Block __60923480;

Block __60923320;

Block __60923000;

void code__60923000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61266120(),_5818_49819320______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__60923000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60923000 = block;
   block->owner = (Object)__60923320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60923000;

   return block;
};

void code__60923320() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49738860______58_84_48125920______58_840_61083740->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61266200();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60923000();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61266060(),_5817_49819400______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__60923320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60923320 = block;
   block->owner = (Object)__60923480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60923320;

   return block;
};

Block __60922220;

Block __60922060;

Block __60921740;

void code__60921740() {
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
                  src0 = _5818_49819320______58_84_48125920______58_840_61083740->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__61265800();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5818_49819320______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61265700(),_5817_49819400______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__61265640(),_5819_49925080______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__60921740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60921740 = block;
   block->owner = (Object)__60922060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60921740;

   return block;
};

void code__60922060() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49738860______58_84_48125920______58_840_61083740->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__61265940();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60921740();
   }
      }
   }
}

Block make__60922060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60922060 = block;
   block->owner = (Object)__60922220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60922060;

   return block;
};

void code__60922220() {
 code__60922060();
}

Block make__60922220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60922220 = block;
   block->owner = (Object)__60923480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60922220;

   return block;
};

void code__60923480() {
 code__60923320();
   {
      Value cond = fill_49738760______58_84_48125920______58_840_61083740->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60922220();
   }
      }
   }
}

Block make__60923480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60923480 = block;
   block->owner = (Object)__61054900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60923480;

   return block;
};

Block __61054780;

void code__61054780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__61265580(),clk_49738900______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__61265520(),rst_49738860______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__61265460(),req_49738840______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__61265400(),fill_49738760______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__61083860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__61265340(),rst_49738860______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__61083860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__61265280(),clk_49738900______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__61083860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__61265220(),clk_49738900______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__61265160(),rst_49738860______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__61265100(),fill_49738760______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__61083860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__61265040(),clk_49738900______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__61083860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__61264980(),clk_49738900______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__61083860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__61264920(),clk_49738900______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__61083860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__61264860(),clk_49738900______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__61083860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__61264800(),clk_49738900______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__61083860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__61264740(),clk_49738900______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__61083860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__61264680(),clk_49738900______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__61083860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__61264600(),clk_49738900______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__61083860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__61264520(),clk_49738900______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__61083860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__61264460(),clk_49738900______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__61083860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__61264400(),clk_49738900______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__61083860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__61264280(),clk_49738900______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__61083860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__61264220(),clk_49738900______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__61083860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__61264160(),clk_49738900______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__61083860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__61264100(),clk_49738900______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__61083860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__61264040(),clk_49738900______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__61083860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__61263980(),clk_49738900______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__61083860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__61263920(),clk_49738900______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__61083860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__61263860(),clk_49738900______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__61083860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__61263800(),clk_49738900______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__61083860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__61263740(),fill_49738760______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__61263680(),clk_49738900______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__61263620(),clk_49738900______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__61263560(),req_49738840______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__61083860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__61263500(),clk_49738900______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__61083860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__61263440(),clk_49738900______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__61263380(),req_49738840______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__61263320(),clk_49738900______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__61083860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__61263260(),clk_49738900______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__61083860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__61263200(),clk_49738900______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__61083860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__61263140(),clk_49738900______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__61083860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__61263080(),clk_49738900______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__61083860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__61263020(),clk_49738900______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__61083860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__61262960(),clk_49738900______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__61083860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__61262900(),clk_49738900______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__61083860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__61262840(),clk_49738900______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__61083860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__61262780(),clk_49738900______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__61083860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__61262720(),clk_49738900______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__61083860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__61262660(),clk_49738900______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__61083860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__61262600(),clk_49738900______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__61083860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__61262520(),clk_49738900______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__61083860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__61262440(),clk_49738900______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__61083860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__61262380(),clk_49738900______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__61083860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__61262320(),clk_49738900______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__61083860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__61262200(),clk_49738900______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__61083860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__61262140(),clk_49738900______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__61083860);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__61262080(),clk_49738900______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__61083860);
}

Block make__61054780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61054780 = block;
   block->owner = (Object)__61083860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61054780;

   return block;
};

Block __61168900;

void code__61168900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_49738900______58_84_48125920______58_840_61083740->c_value,clk_53930120_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_49738860______58_84_48125920______58_840_61083740->c_value,rst_53930060_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(fill_49738760______58_84_48125920______58_840_61083740->c_value,fill_53930000_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(req_49738840______58_84_48125920______58_840_61083740->c_value,req_53929980_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_49738900______58_84_48125920______58_840_61083740->c_value,clk_60901240_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_49738860______58_84_48125920______58_840_61083740->c_value,rst_60901220_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(fill_49738760______58_84_48125920______58_840_61083740->c_value,fill_60901200_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__0_49738820______58_84_48125920______58_840_61083740->c_value,req_60901180_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61168900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61168900 = block;
   block->owner = (Object)__61162400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61168900;

   return block;
};

Block __61168840;

void code__61168840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__0_53929920_layer0_58_840_53932980______58_84_48125920______58_840_61083740->c_value,ack__0_49738820______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__1_60901140_layer1_58_840_60903180______58_84_48125920______58_840_61083740->c_value,ack__1_49738800______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61168840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61168840 = block;
   block->owner = (Object)__61162240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61168840;

   return block;
};

Block __49606520;

Block __49802880;

void code__49802880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_48369420_channel__x_581_48125620______58_84_48125920______58_840_61083740->c_value,make_ref_rangeS(mem_49364360_channel__x_581_48125620______58_84_48125920______58_840_61083740,value2integer(abus__w_48369260_channel__x_581_48125620______58_84_48125920______58_840_61083740->c_value),value2integer(abus__w_48369260_channel__x_581_48125620______58_84_48125920______58_840_61083740->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__49802880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49802880 = block;
   block->owner = (Object)__49606520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49802880;

   return block;
};

void code__49606520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_49364360_channel__x_581_48125620______58_84_48125920______58_840_61083740->c_value;
            idx = value2integer(abus__r_48369340_channel__x_581_48125620______58_84_48125920______58_840_61083740->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_48256620_channel__x_581_48125620______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_48122760_channel__x_581_48125620______58_84_48125920______58_840_61083740->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49802880();
   }
      }
   }
}

Block make__49606520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49606520 = block;
   block->owner = (Object)__50044200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49606520;

   return block;
};

Block __61185820;

void code__61185820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_48256620_channel__x_581_48125620______58_84_48125920______58_840_61083740->c_value,_5815_49819520______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61185820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61185820 = block;
   block->owner = (Object)__61185660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61185820;

   return block;
};

Block __61185620;

void code__61185620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5815_49819520______58_84_48125920______58_840_61083740->c_value,dbus__r_48256620_channel__x_581_48125620______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61185620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61185620 = block;
   block->owner = (Object)__61185460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61185620;

   return block;
};

Block __61185160;

void code__61185160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_48122780_channel__x_581_48125620______58_84_48125920______58_840_61083740->c_value,_5813_49819500______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61185160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61185160 = block;
   block->owner = (Object)__61185000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61185160;

   return block;
};

Block __61184960;

void code__61184960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5813_49819500______58_84_48125920______58_840_61083740->c_value,trig__r_48122780_channel__x_581_48125620______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61184960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61184960 = block;
   block->owner = (Object)__61184800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61184960;

   return block;
};

Block __61184500;

void code__61184500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_48369340_channel__x_581_48125620______58_84_48125920______58_840_61083740->c_value,_5814_49819420______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61184500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61184500 = block;
   block->owner = (Object)__61184340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61184500;

   return block;
};

Block __61184300;

void code__61184300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5814_49819420______58_84_48125920______58_840_61083740->c_value,abus__r_48369340_channel__x_581_48125620______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61184300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61184300 = block;
   block->owner = (Object)__61184120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61184300;

   return block;
};

Block __61183740;

void code__61183740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_48122760_channel__x_581_48125620______58_84_48125920______58_840_61083740->c_value,_5817_49819400______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61183740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61183740 = block;
   block->owner = (Object)__61183580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61183740;

   return block;
};

Block __61183540;

void code__61183540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5817_49819400______58_84_48125920______58_840_61083740->c_value,trig__w_48122760_channel__x_581_48125620______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61183540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61183540 = block;
   block->owner = (Object)__61183380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61183540;

   return block;
};

Block __61183080;

void code__61183080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_48369260_channel__x_581_48125620______58_84_48125920______58_840_61083740->c_value,_5818_49819320______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61183080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61183080 = block;
   block->owner = (Object)__61182920;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61183080;

   return block;
};

Block __61182880;

void code__61182880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5818_49819320______58_84_48125920______58_840_61083740->c_value,abus__w_48369260_channel__x_581_48125620______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61182880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61182880 = block;
   block->owner = (Object)__61182720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61182880;

   return block;
};

Block __61182420;

void code__61182420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_48369420_channel__x_581_48125620______58_84_48125920______58_840_61083740->c_value,_5819_49925080______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61182420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61182420 = block;
   block->owner = (Object)__61182260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61182420;

   return block;
};

Block __61182220;

void code__61182220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5819_49925080______58_84_48125920______58_840_61083740->c_value,dbus__w_48369420_channel__x_581_48125620______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61182220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61182220 = block;
   block->owner = (Object)__61182040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61182220;

   return block;
};

Block __61180440;

void code__61180440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_50108880_channel__a0_5830_50044080______58_84_48125920______58_840_61083740->c_value,_5832_49991620______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61180440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61180440 = block;
   block->owner = (Object)__61180280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61180440;

   return block;
};

Block __61180240;

void code__61180240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5832_49991620______58_84_48125920______58_840_61083740->c_value,reg__0_50108880_channel__a0_5830_50044080______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61180240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61180240 = block;
   block->owner = (Object)__61180080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61180240;

   return block;
};

Block __61179680;

void code__61179680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_50201140_channel__a0_5830_50044080______58_84_48125920______58_840_61083740->c_value,_5833_50054760______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61179680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61179680 = block;
   block->owner = (Object)__61179520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61179680;

   return block;
};

Block __61179480;

void code__61179480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5833_50054760______58_84_48125920______58_840_61083740->c_value,reg__1_50201140_channel__a0_5830_50044080______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61179480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61179480 = block;
   block->owner = (Object)__61179320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61179480;

   return block;
};

Block __61179020;

void code__61179020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_50108880_channel__a0_5830_50044080______58_84_48125920______58_840_61083740->c_value,_5843_50155200______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61179020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61179020 = block;
   block->owner = (Object)__61178860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61179020;

   return block;
};

Block __61178820;

void code__61178820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5843_50155200______58_84_48125920______58_840_61083740->c_value,reg__0_50108880_channel__a0_5830_50044080______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61178820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61178820 = block;
   block->owner = (Object)__61178660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61178820;

   return block;
};

Block __61178360;

void code__61178360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_50201140_channel__a0_5830_50044080______58_84_48125920______58_840_61083740->c_value,_5844_46008960______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61178360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61178360 = block;
   block->owner = (Object)__61178200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61178360;

   return block;
};

Block __61178160;

void code__61178160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5844_46008960______58_84_48125920______58_840_61083740->c_value,reg__1_50201140_channel__a0_5830_50044080______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61178160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61178160 = block;
   block->owner = (Object)__61178000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61178160;

   return block;
};

Block __61217340;

void code__61217340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_50042140_rinc_5842_50042520_channel__a0_5830_50044080______58_84_48125920______58_840_61083740->c_value,_5845_46008740______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61217340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61217340 = block;
   block->owner = (Object)__61217180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61217340;

   return block;
};

Block __61217140;

void code__61217140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5845_46008740______58_84_48125920______58_840_61083740->c_value,abus__r_50042140_rinc_5842_50042520_channel__a0_5830_50044080______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61217140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61217140 = block;
   block->owner = (Object)__61216980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61217140;

   return block;
};

Block __61215660;

void code__61215660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_49603560_channel__a1_5860_49221720______58_84_48125920______58_840_61083740->c_value,_5862_47894660______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61215660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61215660 = block;
   block->owner = (Object)__61215500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61215660;

   return block;
};

Block __61215460;

void code__61215460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5862_47894660______58_84_48125920______58_840_61083740->c_value,reg__0_49603560_channel__a1_5860_49221720______58_84_48125920______58_840_61083740);
      set_value_pos(pool_state);
   }
}

Block make__61215460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __61215460 = block;
   block->owner = (Object)__61215300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__61215460;

   return block;
};

Value make__61266200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61266120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__61266060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61265940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61265800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__61265700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61265640() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__61265580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61265520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61265460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61265400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61265340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61265280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61265220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61265160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61265100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61265040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61264980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61264920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61264860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61264800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61264740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61264680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61264600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61264520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61264460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61264400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61264280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61264220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61264160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61264100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61264040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61263980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61263920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61263860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61263800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61263740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61263680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61263620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61263560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61263500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61263440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61263380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61263320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61263260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61263200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61263140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61263080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61263020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61262960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61262900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61262840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61262780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61262720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61262660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61262600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61262520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61262440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61262380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61262320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61262200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61262140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__61262080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope _____58_84_48125920;

SignalI clk_49738900______58_84_48125920______58_840_61083740;

SignalI makeclk_49738900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_49738900______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)_____58_84_48125920;
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

SignalI rst_49738860______58_84_48125920______58_840_61083740;

SignalI makerst_49738860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_49738860______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)_____58_84_48125920;
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

SignalI req_49738840______58_84_48125920______58_840_61083740;

SignalI makereq_49738840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_49738840______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)_____58_84_48125920;
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

SignalI ack__0_49738820______58_84_48125920______58_840_61083740;

SignalI makeack__0_49738820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__0_49738820______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)_____58_84_48125920;
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

SignalI ack__1_49738800______58_84_48125920______58_840_61083740;

SignalI makeack__1_49738800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__1_49738800______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)_____58_84_48125920;
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

SignalI fill_49738760______58_84_48125920______58_840_61083740;

SignalI makefill_49738760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_49738760______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)_____58_84_48125920;
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

SignalI _5815_49819520______58_84_48125920______58_840_61083740;

SignalI make_5815_49819520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5815_49819520______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)_____58_84_48125920;
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

SignalI _5813_49819500______58_84_48125920______58_840_61083740;

SignalI make_5813_49819500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5813_49819500______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)_____58_84_48125920;
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

SignalI _5814_49819420______58_84_48125920______58_840_61083740;

SignalI make_5814_49819420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5814_49819420______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)_____58_84_48125920;
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

SignalI _5817_49819400______58_84_48125920______58_840_61083740;

SignalI make_5817_49819400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5817_49819400______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)_____58_84_48125920;
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

SignalI _5818_49819320______58_84_48125920______58_840_61083740;

SignalI make_5818_49819320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5818_49819320______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)_____58_84_48125920;
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

SignalI _5819_49925080______58_84_48125920______58_840_61083740;

SignalI make_5819_49925080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5819_49925080______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)_____58_84_48125920;
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

SignalI _5832_49991620______58_84_48125920______58_840_61083740;

SignalI make_5832_49991620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5832_49991620______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)_____58_84_48125920;
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

SignalI _5833_50054760______58_84_48125920______58_840_61083740;

SignalI make_5833_50054760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5833_50054760______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)_____58_84_48125920;
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

SignalI _5843_50155200______58_84_48125920______58_840_61083740;

SignalI make_5843_50155200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5843_50155200______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)_____58_84_48125920;
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

SignalI _5844_46008960______58_84_48125920______58_840_61083740;

SignalI make_5844_46008960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5844_46008960______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)_____58_84_48125920;
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

SignalI _5845_46008740______58_84_48125920______58_840_61083740;

SignalI make_5845_46008740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5845_46008740______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)_____58_84_48125920;
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

SignalI _5862_47894660______58_84_48125920______58_840_61083740;

SignalI make_5862_47894660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5862_47894660______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)_____58_84_48125920;
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

SystemI layer0_53929500;

SystemI makelayer0_53929500() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer0_53929500 = systemI;
   systemI->owner = (Object)_____58_84_48125920;
   systemI->name = "layer0";
   systemI->system = layer0_58_840_53932980;

   return systemI;
};

SystemI layer1_60901000;

SystemI makelayer1_60901000() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer1_60901000 = systemI;
   systemI->owner = (Object)_____58_84_48125920;
   systemI->name = "layer1";
   systemI->system = layer1_58_840_60903180;

   return systemI;
};

Scope channel__x_581_48125620;

SignalI trig__r_48122780_channel__x_581_48125620______58_84_48125920______58_840_61083740;

SignalI maketrig__r_48122780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_48122780_channel__x_581_48125620______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)channel__x_581_48125620;
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

SignalI trig__w_48122760_channel__x_581_48125620______58_84_48125920______58_840_61083740;

SignalI maketrig__w_48122760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_48122760_channel__x_581_48125620______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)channel__x_581_48125620;
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

SignalI dbus__r_48256620_channel__x_581_48125620______58_84_48125920______58_840_61083740;

SignalI makedbus__r_48256620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_48256620_channel__x_581_48125620______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)channel__x_581_48125620;
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

SignalI dbus__w_48369420_channel__x_581_48125620______58_84_48125920______58_840_61083740;

SignalI makedbus__w_48369420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_48369420_channel__x_581_48125620______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)channel__x_581_48125620;
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

SignalI abus__r_48369340_channel__x_581_48125620______58_84_48125920______58_840_61083740;

SignalI makeabus__r_48369340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48369340_channel__x_581_48125620______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)channel__x_581_48125620;
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

SignalI abus__w_48369260_channel__x_581_48125620______58_84_48125920______58_840_61083740;

SignalI makeabus__w_48369260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48369260_channel__x_581_48125620______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)channel__x_581_48125620;
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

SignalI mem_49364360_channel__x_581_48125620______58_84_48125920______58_840_61083740;

SignalI makemem_49364360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_49364360_channel__x_581_48125620______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)channel__x_581_48125620;
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

Scope raddr_582_48125320;

Scope makeraddr_582_48125320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_582_48125320 = scope;
   scope->owner = (Object)channel__x_581_48125620;
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

Scope waddr_587_48124900;

Scope makewaddr_587_48124900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_587_48124900 = scope;
   scope->owner = (Object)channel__x_581_48125620;
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

Scope rinc_5812_48124480;

Scope makerinc_5812_48124480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5812_48124480 = scope;
   scope->owner = (Object)channel__x_581_48125620;
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

Scope winc_5816_48124060;

Scope makewinc_5816_48124060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5816_48124060 = scope;
   scope->owner = (Object)channel__x_581_48125620;
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

Scope rdec_5820_48123640;

Scope makerdec_5820_48123640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5820_48123640 = scope;
   scope->owner = (Object)channel__x_581_48125620;
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

Scope wdec_5825_48123220;

Scope makewdec_5825_48123220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5825_48123220 = scope;
   scope->owner = (Object)channel__x_581_48125620;
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

Behavior __50044200;

Behavior make__50044200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50044200 = behavior;
   behavior->owner = (Object)channel__x_581_48125620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_49738900______58_84_48125920______58_840_61083740);
   clk_49738900______58_84_48125920______58_840_61083740->num_neg += 1;
   clk_49738900______58_84_48125920______58_840_61083740->neg = realloc(clk_49738900______58_84_48125920______58_840_61083740->neg,clk_49738900______58_84_48125920______58_840_61083740->num_neg*sizeof(Object));
clk_49738900______58_84_48125920______58_840_61083740->neg[clk_49738900______58_84_48125920______58_840_61083740->num_neg-1] = (Object)behavior;
   behavior->block = make__49606520();

   return behavior;
}

Behavior __61185660;

Behavior make__61185660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61185660 = behavior;
   behavior->owner = (Object)channel__x_581_48125620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_48256620_channel__x_581_48125620______58_84_48125920______58_840_61083740);
   dbus__r_48256620_channel__x_581_48125620______58_84_48125920______58_840_61083740->num_any += 1;
   dbus__r_48256620_channel__x_581_48125620______58_84_48125920______58_840_61083740->any = realloc(dbus__r_48256620_channel__x_581_48125620______58_84_48125920______58_840_61083740->any,dbus__r_48256620_channel__x_581_48125620______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
dbus__r_48256620_channel__x_581_48125620______58_84_48125920______58_840_61083740->any[dbus__r_48256620_channel__x_581_48125620______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61185820();

   return behavior;
}

Behavior __61185460;

Behavior make__61185460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61185460 = behavior;
   behavior->owner = (Object)channel__x_581_48125620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5815_49819520______58_84_48125920______58_840_61083740);
   _5815_49819520______58_84_48125920______58_840_61083740->num_any += 1;
   _5815_49819520______58_84_48125920______58_840_61083740->any = realloc(_5815_49819520______58_84_48125920______58_840_61083740->any,_5815_49819520______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
_5815_49819520______58_84_48125920______58_840_61083740->any[_5815_49819520______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61185620();

   return behavior;
}

Behavior __61185000;

Behavior make__61185000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61185000 = behavior;
   behavior->owner = (Object)channel__x_581_48125620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_48122780_channel__x_581_48125620______58_84_48125920______58_840_61083740);
   trig__r_48122780_channel__x_581_48125620______58_84_48125920______58_840_61083740->num_any += 1;
   trig__r_48122780_channel__x_581_48125620______58_84_48125920______58_840_61083740->any = realloc(trig__r_48122780_channel__x_581_48125620______58_84_48125920______58_840_61083740->any,trig__r_48122780_channel__x_581_48125620______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
trig__r_48122780_channel__x_581_48125620______58_84_48125920______58_840_61083740->any[trig__r_48122780_channel__x_581_48125620______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61185160();

   return behavior;
}

Behavior __61184800;

Behavior make__61184800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61184800 = behavior;
   behavior->owner = (Object)channel__x_581_48125620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5813_49819500______58_84_48125920______58_840_61083740);
   _5813_49819500______58_84_48125920______58_840_61083740->num_any += 1;
   _5813_49819500______58_84_48125920______58_840_61083740->any = realloc(_5813_49819500______58_84_48125920______58_840_61083740->any,_5813_49819500______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
_5813_49819500______58_84_48125920______58_840_61083740->any[_5813_49819500______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61184960();

   return behavior;
}

Behavior __61184340;

Behavior make__61184340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61184340 = behavior;
   behavior->owner = (Object)channel__x_581_48125620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_48369340_channel__x_581_48125620______58_84_48125920______58_840_61083740);
   abus__r_48369340_channel__x_581_48125620______58_84_48125920______58_840_61083740->num_any += 1;
   abus__r_48369340_channel__x_581_48125620______58_84_48125920______58_840_61083740->any = realloc(abus__r_48369340_channel__x_581_48125620______58_84_48125920______58_840_61083740->any,abus__r_48369340_channel__x_581_48125620______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
abus__r_48369340_channel__x_581_48125620______58_84_48125920______58_840_61083740->any[abus__r_48369340_channel__x_581_48125620______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61184500();

   return behavior;
}

Behavior __61184120;

Behavior make__61184120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61184120 = behavior;
   behavior->owner = (Object)channel__x_581_48125620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5814_49819420______58_84_48125920______58_840_61083740);
   _5814_49819420______58_84_48125920______58_840_61083740->num_any += 1;
   _5814_49819420______58_84_48125920______58_840_61083740->any = realloc(_5814_49819420______58_84_48125920______58_840_61083740->any,_5814_49819420______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
_5814_49819420______58_84_48125920______58_840_61083740->any[_5814_49819420______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61184300();

   return behavior;
}

Behavior __61183580;

Behavior make__61183580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61183580 = behavior;
   behavior->owner = (Object)channel__x_581_48125620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_48122760_channel__x_581_48125620______58_84_48125920______58_840_61083740);
   trig__w_48122760_channel__x_581_48125620______58_84_48125920______58_840_61083740->num_any += 1;
   trig__w_48122760_channel__x_581_48125620______58_84_48125920______58_840_61083740->any = realloc(trig__w_48122760_channel__x_581_48125620______58_84_48125920______58_840_61083740->any,trig__w_48122760_channel__x_581_48125620______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
trig__w_48122760_channel__x_581_48125620______58_84_48125920______58_840_61083740->any[trig__w_48122760_channel__x_581_48125620______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61183740();

   return behavior;
}

Behavior __61183380;

Behavior make__61183380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61183380 = behavior;
   behavior->owner = (Object)channel__x_581_48125620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5817_49819400______58_84_48125920______58_840_61083740);
   _5817_49819400______58_84_48125920______58_840_61083740->num_any += 1;
   _5817_49819400______58_84_48125920______58_840_61083740->any = realloc(_5817_49819400______58_84_48125920______58_840_61083740->any,_5817_49819400______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
_5817_49819400______58_84_48125920______58_840_61083740->any[_5817_49819400______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61183540();

   return behavior;
}

Behavior __61182920;

Behavior make__61182920() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61182920 = behavior;
   behavior->owner = (Object)channel__x_581_48125620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_48369260_channel__x_581_48125620______58_84_48125920______58_840_61083740);
   abus__w_48369260_channel__x_581_48125620______58_84_48125920______58_840_61083740->num_any += 1;
   abus__w_48369260_channel__x_581_48125620______58_84_48125920______58_840_61083740->any = realloc(abus__w_48369260_channel__x_581_48125620______58_84_48125920______58_840_61083740->any,abus__w_48369260_channel__x_581_48125620______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
abus__w_48369260_channel__x_581_48125620______58_84_48125920______58_840_61083740->any[abus__w_48369260_channel__x_581_48125620______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61183080();

   return behavior;
}

Behavior __61182720;

Behavior make__61182720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61182720 = behavior;
   behavior->owner = (Object)channel__x_581_48125620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5818_49819320______58_84_48125920______58_840_61083740);
   _5818_49819320______58_84_48125920______58_840_61083740->num_any += 1;
   _5818_49819320______58_84_48125920______58_840_61083740->any = realloc(_5818_49819320______58_84_48125920______58_840_61083740->any,_5818_49819320______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
_5818_49819320______58_84_48125920______58_840_61083740->any[_5818_49819320______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61182880();

   return behavior;
}

Behavior __61182260;

Behavior make__61182260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61182260 = behavior;
   behavior->owner = (Object)channel__x_581_48125620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_48369420_channel__x_581_48125620______58_84_48125920______58_840_61083740);
   dbus__w_48369420_channel__x_581_48125620______58_84_48125920______58_840_61083740->num_any += 1;
   dbus__w_48369420_channel__x_581_48125620______58_84_48125920______58_840_61083740->any = realloc(dbus__w_48369420_channel__x_581_48125620______58_84_48125920______58_840_61083740->any,dbus__w_48369420_channel__x_581_48125620______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
dbus__w_48369420_channel__x_581_48125620______58_84_48125920______58_840_61083740->any[dbus__w_48369420_channel__x_581_48125620______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61182420();

   return behavior;
}

Behavior __61182040;

Behavior make__61182040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61182040 = behavior;
   behavior->owner = (Object)channel__x_581_48125620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5819_49925080______58_84_48125920______58_840_61083740);
   _5819_49925080______58_84_48125920______58_840_61083740->num_any += 1;
   _5819_49925080______58_84_48125920______58_840_61083740->any = realloc(_5819_49925080______58_84_48125920______58_840_61083740->any,_5819_49925080______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
_5819_49925080______58_84_48125920______58_840_61083740->any[_5819_49925080______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61182220();

   return behavior;
}

Scope makechannel__x_581_48125620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__x_581_48125620 = scope;
   scope->owner = (Object)_____58_84_48125920;
   scope->name = "channel_x:1";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_48122780();
   scope->inners[1] = maketrig__w_48122760();
   scope->inners[2] = makedbus__r_48256620();
   scope->inners[3] = makedbus__w_48369420();
   scope->inners[4] = makeabus__r_48369340();
   scope->inners[5] = makeabus__w_48369260();
   scope->inners[6] = makemem_49364360();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_582_48125320();
   scope->scopes[1] = makewaddr_587_48124900();
   scope->scopes[2] = makerinc_5812_48124480();
   scope->scopes[3] = makewinc_5816_48124060();
   scope->scopes[4] = makerdec_5820_48123640();
   scope->scopes[5] = makewdec_5825_48123220();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50044200();
   scope->behaviors[1] = make__61185660();
   scope->behaviors[2] = make__61185460();
   scope->behaviors[3] = make__61185000();
   scope->behaviors[4] = make__61184800();
   scope->behaviors[5] = make__61184340();
   scope->behaviors[6] = make__61184120();
   scope->behaviors[7] = make__61183580();
   scope->behaviors[8] = make__61183380();
   scope->behaviors[9] = make__61182920();
   scope->behaviors[10] = make__61182720();
   scope->behaviors[11] = make__61182260();
   scope->behaviors[12] = make__61182040();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__a0_5830_50044080;

SignalI reg__0_50108880_channel__a0_5830_50044080______58_84_48125920______58_840_61083740;

SignalI makereg__0_50108880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_50108880_channel__a0_5830_50044080______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)channel__a0_5830_50044080;
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

SignalI reg__1_50201140_channel__a0_5830_50044080______58_84_48125920______58_840_61083740;

SignalI makereg__1_50201140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_50201140_channel__a0_5830_50044080______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)channel__a0_5830_50044080;
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

Scope anum_5831_50043780;

Scope makeanum_5831_50043780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_5831_50043780 = scope;
   scope->owner = (Object)channel__a0_5830_50044080;
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

Scope raddr_5834_50043360;

Scope makeraddr_5834_50043360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5834_50043360 = scope;
   scope->owner = (Object)channel__a0_5830_50044080;
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

Scope waddr_5838_50042940;

Scope makewaddr_5838_50042940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5838_50042940 = scope;
   scope->owner = (Object)channel__a0_5830_50044080;
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

Scope rinc_5842_50042520;

SignalI abus__r_50042140_rinc_5842_50042520_channel__a0_5830_50044080______58_84_48125920______58_840_61083740;

SignalI makeabus__r_50042140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50042140_rinc_5842_50042520_channel__a0_5830_50044080______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)rinc_5842_50042520;
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

Behavior __61217180;

Behavior make__61217180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61217180 = behavior;
   behavior->owner = (Object)rinc_5842_50042520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_50042140_rinc_5842_50042520_channel__a0_5830_50044080______58_84_48125920______58_840_61083740);
   abus__r_50042140_rinc_5842_50042520_channel__a0_5830_50044080______58_84_48125920______58_840_61083740->num_any += 1;
   abus__r_50042140_rinc_5842_50042520_channel__a0_5830_50044080______58_84_48125920______58_840_61083740->any = realloc(abus__r_50042140_rinc_5842_50042520_channel__a0_5830_50044080______58_84_48125920______58_840_61083740->any,abus__r_50042140_rinc_5842_50042520_channel__a0_5830_50044080______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
abus__r_50042140_rinc_5842_50042520_channel__a0_5830_50044080______58_84_48125920______58_840_61083740->any[abus__r_50042140_rinc_5842_50042520_channel__a0_5830_50044080______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61217340();

   return behavior;
}

Behavior __61216980;

Behavior make__61216980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61216980 = behavior;
   behavior->owner = (Object)rinc_5842_50042520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5845_46008740______58_84_48125920______58_840_61083740);
   _5845_46008740______58_84_48125920______58_840_61083740->num_any += 1;
   _5845_46008740______58_84_48125920______58_840_61083740->any = realloc(_5845_46008740______58_84_48125920______58_840_61083740->any,_5845_46008740______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
_5845_46008740______58_84_48125920______58_840_61083740->any[_5845_46008740______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61217140();

   return behavior;
}

Scope makerinc_5842_50042520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5842_50042520 = scope;
   scope->owner = (Object)channel__a0_5830_50044080;
   scope->name = "rinc:42";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_50042140();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__61217180();
   scope->behaviors[1] = make__61216980();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5846_50041760;

SignalI abus__w_50041380_winc_5846_50041760_channel__a0_5830_50044080______58_84_48125920______58_840_61083740;

SignalI makeabus__w_50041380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50041380_winc_5846_50041760_channel__a0_5830_50044080______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)winc_5846_50041760;
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

Scope makewinc_5846_50041760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5846_50041760 = scope;
   scope->owner = (Object)channel__a0_5830_50044080;
   scope->name = "winc:46";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_50041380();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5850_50041260;

SignalI abus__r_50040840_rdec_5850_50041260_channel__a0_5830_50044080______58_84_48125920______58_840_61083740;

SignalI makeabus__r_50040840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50040840_rdec_5850_50041260_channel__a0_5830_50044080______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)rdec_5850_50041260;
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

Scope makerdec_5850_50041260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5850_50041260 = scope;
   scope->owner = (Object)channel__a0_5830_50044080;
   scope->name = "rdec:50";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_50040840();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_5855_50040680;

SignalI abus__w_50040220_wdec_5855_50040680_channel__a0_5830_50044080______58_84_48125920______58_840_61083740;

SignalI makeabus__w_50040220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50040220_wdec_5855_50040680_channel__a0_5830_50044080______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)wdec_5855_50040680;
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

Scope makewdec_5855_50040680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5855_50040680 = scope;
   scope->owner = (Object)channel__a0_5830_50044080;
   scope->name = "wdec:55";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_50040220();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __61180280;

Behavior make__61180280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61180280 = behavior;
   behavior->owner = (Object)channel__a0_5830_50044080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_50108880_channel__a0_5830_50044080______58_84_48125920______58_840_61083740);
   reg__0_50108880_channel__a0_5830_50044080______58_84_48125920______58_840_61083740->num_any += 1;
   reg__0_50108880_channel__a0_5830_50044080______58_84_48125920______58_840_61083740->any = realloc(reg__0_50108880_channel__a0_5830_50044080______58_84_48125920______58_840_61083740->any,reg__0_50108880_channel__a0_5830_50044080______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
reg__0_50108880_channel__a0_5830_50044080______58_84_48125920______58_840_61083740->any[reg__0_50108880_channel__a0_5830_50044080______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61180440();

   return behavior;
}

Behavior __61180080;

Behavior make__61180080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61180080 = behavior;
   behavior->owner = (Object)channel__a0_5830_50044080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5832_49991620______58_84_48125920______58_840_61083740);
   _5832_49991620______58_84_48125920______58_840_61083740->num_any += 1;
   _5832_49991620______58_84_48125920______58_840_61083740->any = realloc(_5832_49991620______58_84_48125920______58_840_61083740->any,_5832_49991620______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
_5832_49991620______58_84_48125920______58_840_61083740->any[_5832_49991620______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61180240();

   return behavior;
}

Behavior __61179520;

Behavior make__61179520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61179520 = behavior;
   behavior->owner = (Object)channel__a0_5830_50044080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_50201140_channel__a0_5830_50044080______58_84_48125920______58_840_61083740);
   reg__1_50201140_channel__a0_5830_50044080______58_84_48125920______58_840_61083740->num_any += 1;
   reg__1_50201140_channel__a0_5830_50044080______58_84_48125920______58_840_61083740->any = realloc(reg__1_50201140_channel__a0_5830_50044080______58_84_48125920______58_840_61083740->any,reg__1_50201140_channel__a0_5830_50044080______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
reg__1_50201140_channel__a0_5830_50044080______58_84_48125920______58_840_61083740->any[reg__1_50201140_channel__a0_5830_50044080______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61179680();

   return behavior;
}

Behavior __61179320;

Behavior make__61179320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61179320 = behavior;
   behavior->owner = (Object)channel__a0_5830_50044080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5833_50054760______58_84_48125920______58_840_61083740);
   _5833_50054760______58_84_48125920______58_840_61083740->num_any += 1;
   _5833_50054760______58_84_48125920______58_840_61083740->any = realloc(_5833_50054760______58_84_48125920______58_840_61083740->any,_5833_50054760______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
_5833_50054760______58_84_48125920______58_840_61083740->any[_5833_50054760______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61179480();

   return behavior;
}

Behavior __61178860;

Behavior make__61178860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61178860 = behavior;
   behavior->owner = (Object)channel__a0_5830_50044080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_50108880_channel__a0_5830_50044080______58_84_48125920______58_840_61083740);
   reg__0_50108880_channel__a0_5830_50044080______58_84_48125920______58_840_61083740->num_any += 1;
   reg__0_50108880_channel__a0_5830_50044080______58_84_48125920______58_840_61083740->any = realloc(reg__0_50108880_channel__a0_5830_50044080______58_84_48125920______58_840_61083740->any,reg__0_50108880_channel__a0_5830_50044080______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
reg__0_50108880_channel__a0_5830_50044080______58_84_48125920______58_840_61083740->any[reg__0_50108880_channel__a0_5830_50044080______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61179020();

   return behavior;
}

Behavior __61178660;

Behavior make__61178660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61178660 = behavior;
   behavior->owner = (Object)channel__a0_5830_50044080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5843_50155200______58_84_48125920______58_840_61083740);
   _5843_50155200______58_84_48125920______58_840_61083740->num_any += 1;
   _5843_50155200______58_84_48125920______58_840_61083740->any = realloc(_5843_50155200______58_84_48125920______58_840_61083740->any,_5843_50155200______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
_5843_50155200______58_84_48125920______58_840_61083740->any[_5843_50155200______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61178820();

   return behavior;
}

Behavior __61178200;

Behavior make__61178200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61178200 = behavior;
   behavior->owner = (Object)channel__a0_5830_50044080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_50201140_channel__a0_5830_50044080______58_84_48125920______58_840_61083740);
   reg__1_50201140_channel__a0_5830_50044080______58_84_48125920______58_840_61083740->num_any += 1;
   reg__1_50201140_channel__a0_5830_50044080______58_84_48125920______58_840_61083740->any = realloc(reg__1_50201140_channel__a0_5830_50044080______58_84_48125920______58_840_61083740->any,reg__1_50201140_channel__a0_5830_50044080______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
reg__1_50201140_channel__a0_5830_50044080______58_84_48125920______58_840_61083740->any[reg__1_50201140_channel__a0_5830_50044080______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61178360();

   return behavior;
}

Behavior __61178000;

Behavior make__61178000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61178000 = behavior;
   behavior->owner = (Object)channel__a0_5830_50044080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5844_46008960______58_84_48125920______58_840_61083740);
   _5844_46008960______58_84_48125920______58_840_61083740->num_any += 1;
   _5844_46008960______58_84_48125920______58_840_61083740->any = realloc(_5844_46008960______58_84_48125920______58_840_61083740->any,_5844_46008960______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
_5844_46008960______58_84_48125920______58_840_61083740->any[_5844_46008960______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61178160();

   return behavior;
}

Scope makechannel__a0_5830_50044080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__a0_5830_50044080 = scope;
   scope->owner = (Object)_____58_84_48125920;
   scope->name = "channel_a0:30";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_50108880();
   scope->inners[1] = makereg__1_50201140();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_5831_50043780();
   scope->scopes[1] = makeraddr_5834_50043360();
   scope->scopes[2] = makewaddr_5838_50042940();
   scope->scopes[3] = makerinc_5842_50042520();
   scope->scopes[4] = makewinc_5846_50041760();
   scope->scopes[5] = makerdec_5850_50041260();
   scope->scopes[6] = makewdec_5855_50040680();
   scope->num_behaviors = 8;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__61180280();
   scope->behaviors[1] = make__61180080();
   scope->behaviors[2] = make__61179520();
   scope->behaviors[3] = make__61179320();
   scope->behaviors[4] = make__61178860();
   scope->behaviors[5] = make__61178660();
   scope->behaviors[6] = make__61178200();
   scope->behaviors[7] = make__61178000();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__a1_5860_49221720;

SignalI reg__0_49603560_channel__a1_5860_49221720______58_84_48125920______58_840_61083740;

SignalI makereg__0_49603560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_49603560_channel__a1_5860_49221720______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)channel__a1_5860_49221720;
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

Scope anum_5861_49221360;

Scope makeanum_5861_49221360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_5861_49221360 = scope;
   scope->owner = (Object)channel__a1_5860_49221720;
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

Scope raddr_5863_49220900;

Scope makeraddr_5863_49220900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5863_49220900 = scope;
   scope->owner = (Object)channel__a1_5860_49221720;
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

Scope waddr_5866_49220480;

Scope makewaddr_5866_49220480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5866_49220480 = scope;
   scope->owner = (Object)channel__a1_5860_49221720;
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

Scope rinc_5869_49220060;

SignalI abus__r_49219680_rinc_5869_49220060_channel__a1_5860_49221720______58_84_48125920______58_840_61083740;

SignalI makeabus__r_49219680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49219680_rinc_5869_49220060_channel__a1_5860_49221720______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)rinc_5869_49220060;
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

Scope makerinc_5869_49220060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5869_49220060 = scope;
   scope->owner = (Object)channel__a1_5860_49221720;
   scope->name = "rinc:69";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49219680();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5872_49219540;

SignalI abus__w_49218900_winc_5872_49219540_channel__a1_5860_49221720______58_84_48125920______58_840_61083740;

SignalI makeabus__w_49218900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49218900_winc_5872_49219540_channel__a1_5860_49221720______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)winc_5872_49219540;
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

Scope makewinc_5872_49219540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5872_49219540 = scope;
   scope->owner = (Object)channel__a1_5860_49221720;
   scope->name = "winc:72";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49218900();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5875_49218780;

SignalI abus__r_49218400_rdec_5875_49218780_channel__a1_5860_49221720______58_84_48125920______58_840_61083740;

SignalI makeabus__r_49218400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49218400_rdec_5875_49218780_channel__a1_5860_49221720______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)rdec_5875_49218780;
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

Scope makerdec_5875_49218780() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5875_49218780 = scope;
   scope->owner = (Object)channel__a1_5860_49221720;
   scope->name = "rdec:75";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49218400();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_5879_49218280;

SignalI abus__w_49257560_wdec_5879_49218280_channel__a1_5860_49221720______58_84_48125920______58_840_61083740;

SignalI makeabus__w_49257560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49257560_wdec_5879_49218280_channel__a1_5860_49221720______58_84_48125920______58_840_61083740 = signalI;
   signalI->owner = (Object)wdec_5879_49218280;
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

Scope makewdec_5879_49218280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5879_49218280 = scope;
   scope->owner = (Object)channel__a1_5860_49221720;
   scope->name = "wdec:79";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49257560();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __61215500;

Behavior make__61215500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61215500 = behavior;
   behavior->owner = (Object)channel__a1_5860_49221720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_49603560_channel__a1_5860_49221720______58_84_48125920______58_840_61083740);
   reg__0_49603560_channel__a1_5860_49221720______58_84_48125920______58_840_61083740->num_any += 1;
   reg__0_49603560_channel__a1_5860_49221720______58_84_48125920______58_840_61083740->any = realloc(reg__0_49603560_channel__a1_5860_49221720______58_84_48125920______58_840_61083740->any,reg__0_49603560_channel__a1_5860_49221720______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
reg__0_49603560_channel__a1_5860_49221720______58_84_48125920______58_840_61083740->any[reg__0_49603560_channel__a1_5860_49221720______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61215660();

   return behavior;
}

Behavior __61215300;

Behavior make__61215300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61215300 = behavior;
   behavior->owner = (Object)channel__a1_5860_49221720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5862_47894660______58_84_48125920______58_840_61083740);
   _5862_47894660______58_84_48125920______58_840_61083740->num_any += 1;
   _5862_47894660______58_84_48125920______58_840_61083740->any = realloc(_5862_47894660______58_84_48125920______58_840_61083740->any,_5862_47894660______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
_5862_47894660______58_84_48125920______58_840_61083740->any[_5862_47894660______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61215460();

   return behavior;
}

Scope makechannel__a1_5860_49221720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__a1_5860_49221720 = scope;
   scope->owner = (Object)_____58_84_48125920;
   scope->name = "channel_a1:60";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_49603560();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_5861_49221360();
   scope->scopes[1] = makeraddr_5863_49220900();
   scope->scopes[2] = makewaddr_5866_49220480();
   scope->scopes[3] = makerinc_5869_49220060();
   scope->scopes[4] = makewinc_5872_49219540();
   scope->scopes[5] = makerdec_5875_49218780();
   scope->scopes[6] = makewdec_5879_49218280();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__61215500();
   scope->behaviors[1] = make__61215300();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __61054900;

Behavior make__61054900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61054900 = behavior;
   behavior->owner = (Object)_____58_84_48125920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_49738900______58_84_48125920______58_840_61083740);
   clk_49738900______58_84_48125920______58_840_61083740->num_pos += 1;
   clk_49738900______58_84_48125920______58_840_61083740->pos = realloc(clk_49738900______58_84_48125920______58_840_61083740->pos,clk_49738900______58_84_48125920______58_840_61083740->num_pos*sizeof(Object));
clk_49738900______58_84_48125920______58_840_61083740->pos[clk_49738900______58_84_48125920______58_840_61083740->num_pos-1] = (Object)behavior;
   behavior->block = make__60923480();

   return behavior;
}

Behavior __61083860;

Behavior make__61083860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61083860 = behavior;
   register_timed_behavior(behavior);
   behavior->owner = (Object)_____58_84_48125920;
   behavior->activated = 0;
   behavior->timed = 1;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__61054780();

   return behavior;
}

Behavior __61162400;

Behavior make__61162400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61162400 = behavior;
   behavior->owner = (Object)_____58_84_48125920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_49738900______58_84_48125920______58_840_61083740);
   clk_49738900______58_84_48125920______58_840_61083740->num_any += 1;
   clk_49738900______58_84_48125920______58_840_61083740->any = realloc(clk_49738900______58_84_48125920______58_840_61083740->any,clk_49738900______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
clk_49738900______58_84_48125920______58_840_61083740->any[clk_49738900______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_49738860______58_84_48125920______58_840_61083740);
   rst_49738860______58_84_48125920______58_840_61083740->num_any += 1;
   rst_49738860______58_84_48125920______58_840_61083740->any = realloc(rst_49738860______58_84_48125920______58_840_61083740->any,rst_49738860______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
rst_49738860______58_84_48125920______58_840_61083740->any[rst_49738860______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,fill_49738760______58_84_48125920______58_840_61083740);
   fill_49738760______58_84_48125920______58_840_61083740->num_any += 1;
   fill_49738760______58_84_48125920______58_840_61083740->any = realloc(fill_49738760______58_84_48125920______58_840_61083740->any,fill_49738760______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
fill_49738760______58_84_48125920______58_840_61083740->any[fill_49738760______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,req_49738840______58_84_48125920______58_840_61083740);
   req_49738840______58_84_48125920______58_840_61083740->num_any += 1;
   req_49738840______58_84_48125920______58_840_61083740->any = realloc(req_49738840______58_84_48125920______58_840_61083740->any,req_49738840______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
req_49738840______58_84_48125920______58_840_61083740->any[req_49738840______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__0_49738820______58_84_48125920______58_840_61083740);
   ack__0_49738820______58_84_48125920______58_840_61083740->num_any += 1;
   ack__0_49738820______58_84_48125920______58_840_61083740->any = realloc(ack__0_49738820______58_84_48125920______58_840_61083740->any,ack__0_49738820______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
ack__0_49738820______58_84_48125920______58_840_61083740->any[ack__0_49738820______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61168900();

   return behavior;
}

Behavior __61162240;

Behavior make__61162240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __61162240 = behavior;
   behavior->owner = (Object)_____58_84_48125920;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__0_53929920_layer0_58_840_53932980______58_84_48125920______58_840_61083740);
   ack__0_53929920_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any += 1;
   ack__0_53929920_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any = realloc(ack__0_53929920_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any,ack__0_53929920_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
ack__0_53929920_layer0_58_840_53932980______58_84_48125920______58_840_61083740->any[ack__0_53929920_layer0_58_840_53932980______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__1_60901140_layer1_58_840_60903180______58_84_48125920______58_840_61083740);
   ack__1_60901140_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any += 1;
   ack__1_60901140_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any = realloc(ack__1_60901140_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any,ack__1_60901140_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any*sizeof(Object));
ack__1_60901140_layer1_58_840_60903180______58_84_48125920______58_840_61083740->any[ack__1_60901140_layer1_58_840_60903180______58_84_48125920______58_840_61083740->num_any-1] = (Object)behavior;
   behavior->block = make__61168840();

   return behavior;
}

Scope make_____58_84_48125920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   _____58_84_48125920 = scope;
   scope->owner = (Object)_____58_840_61083740;
   scope->name = "__:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makelayer0_53929500();
   scope->systemIs[1] = makelayer1_60901000();
   scope->num_inners = 18;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeclk_49738900();
   scope->inners[1] = makerst_49738860();
   scope->inners[2] = makereq_49738840();
   scope->inners[3] = makeack__0_49738820();
   scope->inners[4] = makeack__1_49738800();
   scope->inners[5] = makefill_49738760();
   scope->inners[6] = make_5815_49819520();
   scope->inners[7] = make_5813_49819500();
   scope->inners[8] = make_5814_49819420();
   scope->inners[9] = make_5817_49819400();
   scope->inners[10] = make_5818_49819320();
   scope->inners[11] = make_5819_49925080();
   scope->inners[12] = make_5832_49991620();
   scope->inners[13] = make_5833_50054760();
   scope->inners[14] = make_5843_50155200();
   scope->inners[15] = make_5844_46008960();
   scope->inners[16] = make_5845_46008740();
   scope->inners[17] = make_5862_47894660();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__x_581_48125620();
   scope->scopes[1] = makechannel__a0_5830_50044080();
   scope->scopes[2] = makechannel__a1_5860_49221720();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__61054900();
   scope->behaviors[1] = make__61083860();
   scope->behaviors[2] = make__61162400();
   scope->behaviors[3] = make__61162240();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT make_____58_840_61083740() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   _____58_840_61083740 = systemT;
systemT->owner = NULL;
   systemT->name = "__:T0";
   systemT->num_inputs = 0;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->num_outputs = 0;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make_____58_84_48125920();

   return systemT;
}