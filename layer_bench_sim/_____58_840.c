#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT _____58_840_49693060;

Block __51645660;

Block __51645440;

Block __51644960;

void code__51644960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55627000(),_5818_50776560______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__51644960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51644960 = block;
   block->owner = (Object)__51645440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51644960;

   return block;
};

void code__51645440() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_50776740______58_84_43644360______58_840_49693060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__55627140();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51644960();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55626940(),_5817_50776640______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__51645440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51645440 = block;
   block->owner = (Object)__51645660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51645440;

   return block;
};

Block __51643480;

Block __51643100;

Block __51683180;

void code__51683180() {
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
                  src0 = _5818_50776560______58_84_43644360______58_840_49693060->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__55626680();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5818_50776560______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55626580(),_5817_50776640______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__55626520(),_5819_50929400______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__51683180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51683180 = block;
   block->owner = (Object)__51643100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51683180;

   return block;
};

void code__51643100() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_50776740______58_84_43644360______58_840_49693060->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__55626820();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51683180();
   }
      }
   }
}

Block make__51643100() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51643100 = block;
   block->owner = (Object)__51643480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51643100;

   return block;
};

void code__51643480() {
 code__51643100();
}

Block make__51643480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51643480 = block;
   block->owner = (Object)__51645660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51643480;

   return block;
};

void code__51645660() {
 code__51645440();
   {
      Value cond = fill_50776660______58_84_43644360______58_840_49693060->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51643480();
   }
      }
   }
}

Block make__51645660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51645660 = block;
   block->owner = (Object)__52053500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51645660;

   return block;
};

Block __52053180;

void code__52053180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__55626440(),clk_50776760______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__55626360(),rst_50776740______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__55626300(),req_50776720______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__55626240(),fill_50776660______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__49693220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__55626120(),rst_50776740______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__49693220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__55626060(),clk_50776760______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__49693220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__55626000(),clk_50776760______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__55625940(),rst_50776740______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__55625880(),fill_50776660______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__49693220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__55625820(),clk_50776760______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__49693220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__55625760(),clk_50776760______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__49693220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__55625700(),clk_50776760______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__49693220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__55625640(),clk_50776760______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__49693220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__55625580(),clk_50776760______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__49693220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__55625520(),clk_50776760______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__49693220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__55625460(),clk_50776760______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__49693220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__55625400(),clk_50776760______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__49693220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__55625340(),clk_50776760______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__49693220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__55625260(),clk_50776760______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__49693220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__55625200(),clk_50776760______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__49693220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__55625120(),clk_50776760______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__49693220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__55625060(),clk_50776760______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__49693220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__55624980(),clk_50776760______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__49693220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__55624880(),clk_50776760______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__49693220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__55624820(),clk_50776760______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__49693220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__55624760(),clk_50776760______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__49693220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__55624700(),clk_50776760______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__49693220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__55624640(),clk_50776760______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__49693220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__55624580(),clk_50776760______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__49693220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__55624520(),fill_50776660______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__55624460(),clk_50776760______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__55624400(),clk_50776760______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__55624340(),req_50776720______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__49693220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__55624260(),clk_50776760______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__49693220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__55624180(),clk_50776760______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__55624120(),req_50776720______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__55624060(),clk_50776760______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__49693220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__55623940(),clk_50776760______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__49693220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__55623880(),clk_50776760______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__49693220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__55623820(),clk_50776760______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__49693220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__55623760(),clk_50776760______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__49693220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__55623700(),clk_50776760______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__49693220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__55664560(),clk_50776760______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__49693220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__55664500(),clk_50776760______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__49693220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__55664440(),clk_50776760______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__49693220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__55664380(),clk_50776760______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__49693220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__55664320(),clk_50776760______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__49693220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__55664260(),clk_50776760______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__49693220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__55664200(),clk_50776760______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__49693220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__55664140(),clk_50776760______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__49693220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__55664060(),clk_50776760______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__49693220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__55663980(),clk_50776760______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__49693220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__55663920(),clk_50776760______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__49693220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__55663840(),clk_50776760______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__49693220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__55663740(),clk_50776760______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__49693220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__55663680(),clk_50776760______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__49693220);
}

Block make__52053180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __52053180 = block;
   block->owner = (Object)__49693220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__52053180;

   return block;
};

Block __54008500;

void code__54008500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_50776760______58_84_43644360______58_840_49693060->c_value,clk_51405580_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_50776740______58_84_43644360______58_840_49693060->c_value,rst_51405540_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(req_50776720______58_84_43644360______58_840_49693060->c_value,req_51405500_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(fill_50776660______58_84_43644360______58_840_49693060->c_value,fill_51405480_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__54008500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54008500 = block;
   block->owner = (Object)__54004720;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54008500;

   return block;
};

Block __54008440;

void code__54008440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__0_51649960_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,ack__0_50776700______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__54008440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54008440 = block;
   block->owner = (Object)__54004500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54008440;

   return block;
};

Block __48600860;

Block __47810740;

void code__47810740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_46002880_channel__x_581_44750820______58_84_43644360______58_840_49693060->c_value,make_ref_rangeS(mem_47908560_channel__x_581_44750820______58_84_43644360______58_840_49693060,value2integer(abus__w_46002480_channel__x_581_44750820______58_84_43644360______58_840_49693060->c_value),value2integer(abus__w_46002480_channel__x_581_44750820______58_84_43644360______58_840_49693060->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__47810740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47810740 = block;
   block->owner = (Object)__48600860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47810740;

   return block;
};

void code__48600860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_47908560_channel__x_581_44750820______58_84_43644360______58_840_49693060->c_value;
            idx = value2integer(abus__r_46002720_channel__x_581_44750820______58_84_43644360______58_840_49693060->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_48448020_channel__x_581_44750820______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_48063920_channel__x_581_44750820______58_84_43644360______58_840_49693060->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47810740();
   }
      }
   }
}

Block make__48600860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48600860 = block;
   block->owner = (Object)__48388960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48600860;

   return block;
};

Block __54003940;

void code__54003940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_48063920_channel__x_581_44750820______58_84_43644360______58_840_49693060->c_value,_5817_50776640______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__54003940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54003940 = block;
   block->owner = (Object)__54003780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54003940;

   return block;
};

Block __54003740;

void code__54003740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5817_50776640______58_84_43644360______58_840_49693060->c_value,trig__w_48063920_channel__x_581_44750820______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__54003740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54003740 = block;
   block->owner = (Object)__54003580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54003740;

   return block;
};

Block __54003260;

void code__54003260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_46002480_channel__x_581_44750820______58_84_43644360______58_840_49693060->c_value,_5818_50776560______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__54003260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54003260 = block;
   block->owner = (Object)__54003080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54003260;

   return block;
};

Block __54003040;

void code__54003040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5818_50776560______58_84_43644360______58_840_49693060->c_value,abus__w_46002480_channel__x_581_44750820______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__54003040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54003040 = block;
   block->owner = (Object)__54002800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54003040;

   return block;
};

Block __54002420;

void code__54002420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_46002880_channel__x_581_44750820______58_84_43644360______58_840_49693060->c_value,_5819_50929400______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__54002420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54002420 = block;
   block->owner = (Object)__54002260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54002420;

   return block;
};

Block __54002220;

void code__54002220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5819_50929400______58_84_43644360______58_840_49693060->c_value,dbus__w_46002880_channel__x_581_44750820______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__54002220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54002220 = block;
   block->owner = (Object)__54002060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54002220;

   return block;
};

Block __54026060;

void code__54026060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_48448020_channel__x_581_44750820______58_84_43644360______58_840_49693060->c_value,_5815_51650020_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__54026060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54026060 = block;
   block->owner = (Object)__54019400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54026060;

   return block;
};

Block __54026000;

void code__54026000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5813_51649940_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,trig__r_48063980_channel__x_581_44750820______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5814_51649820_layer0_58_840_51409440______58_84_43644360______58_840_49693060->c_value,abus__r_46002720_channel__x_581_44750820______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__54026000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54026000 = block;
   block->owner = (Object)__54019240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54026000;

   return block;
};

Block __54018180;

void code__54018180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_48553360_channel__a0_5830_48388760______58_84_43644360______58_840_49693060->c_value,_5832_51000360______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__54018180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54018180 = block;
   block->owner = (Object)__53477300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54018180;

   return block;
};

Block __53477260;

void code__53477260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5832_51000360______58_84_43644360______58_840_49693060->c_value,reg__0_48553360_channel__a0_5830_48388760______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__53477260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53477260 = block;
   block->owner = (Object)__53477100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53477260;

   return block;
};

Block __53476800;

void code__53476800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_49850220_channel__a0_5830_48388760______58_84_43644360______58_840_49693060->c_value,_5833_51063100______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__53476800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53476800 = block;
   block->owner = (Object)__53476640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53476800;

   return block;
};

Block __53476600;

void code__53476600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5833_51063100______58_84_43644360______58_840_49693060->c_value,reg__1_49850220_channel__a0_5830_48388760______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__53476600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53476600 = block;
   block->owner = (Object)__53476440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53476600;

   return block;
};

Block __53474260;

void code__53474260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_50536840_channel__a1_5860_50461240______58_84_43644360______58_840_49693060->c_value,_5862_51183140______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__53474260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53474260 = block;
   block->owner = (Object)__53474100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53474260;

   return block;
};

Block __53474060;

void code__53474060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5862_51183140______58_84_43644360______58_840_49693060->c_value,reg__0_50536840_channel__a1_5860_50461240______58_84_43644360______58_840_49693060);
      set_value_pos(pool_state);
   }
}

Block make__53474060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __53474060 = block;
   block->owner = (Object)__53473900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__53474060;

   return block;
};

Value make__55627140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55627000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__55626940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55626820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55626680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__55626580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55626520() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__55626440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55626360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55626300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55626240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55626120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55626060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55626000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55625940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55625880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55625820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55625760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55625700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55625640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55625580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55625520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55625460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55625400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55625340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55625260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55625200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55625120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55625060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55624980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55624880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55624820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55624760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55624700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55624640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55624580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55624520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55624460() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55624400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55624340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55624260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55624180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55624120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55624060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55623940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55623880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55623820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55623760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55623700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55664560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55664500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55664440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55664380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55664320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55664260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55664200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55664140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55664060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55663980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55663920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55663840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55663740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__55663680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope _____58_84_43644360;

SignalI clk_50776760______58_84_43644360______58_840_49693060;

SignalI makeclk_50776760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_50776760______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)_____58_84_43644360;
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

SignalI rst_50776740______58_84_43644360______58_840_49693060;

SignalI makerst_50776740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_50776740______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)_____58_84_43644360;
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

SignalI req_50776720______58_84_43644360______58_840_49693060;

SignalI makereq_50776720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_50776720______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)_____58_84_43644360;
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

SignalI ack__0_50776700______58_84_43644360______58_840_49693060;

SignalI makeack__0_50776700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__0_50776700______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)_____58_84_43644360;
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

SignalI ack__1_50776680______58_84_43644360______58_840_49693060;

SignalI makeack__1_50776680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__1_50776680______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)_____58_84_43644360;
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

SignalI fill_50776660______58_84_43644360______58_840_49693060;

SignalI makefill_50776660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_50776660______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)_____58_84_43644360;
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

SignalI _5817_50776640______58_84_43644360______58_840_49693060;

SignalI make_5817_50776640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5817_50776640______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)_____58_84_43644360;
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

SignalI _5818_50776560______58_84_43644360______58_840_49693060;

SignalI make_5818_50776560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5818_50776560______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)_____58_84_43644360;
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

SignalI _5819_50929400______58_84_43644360______58_840_49693060;

SignalI make_5819_50929400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5819_50929400______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)_____58_84_43644360;
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

SignalI _5832_51000360______58_84_43644360______58_840_49693060;

SignalI make_5832_51000360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5832_51000360______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)_____58_84_43644360;
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

SignalI _5833_51063100______58_84_43644360______58_840_49693060;

SignalI make_5833_51063100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5833_51063100______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)_____58_84_43644360;
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

SignalI _5862_51183140______58_84_43644360______58_840_49693060;

SignalI make_5862_51183140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5862_51183140______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)_____58_84_43644360;
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

SystemI layer0_51649080;

SystemI makelayer0_51649080() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer0_51649080 = systemI;
   systemI->owner = (Object)_____58_84_43644360;
   systemI->name = "layer0";
   systemI->system = layer0_58_840_51409440;

   return systemI;
};

Scope channel__x_581_44750820;

SignalI trig__r_48063980_channel__x_581_44750820______58_84_43644360______58_840_49693060;

SignalI maketrig__r_48063980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_48063980_channel__x_581_44750820______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)channel__x_581_44750820;
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

SignalI trig__w_48063920_channel__x_581_44750820______58_84_43644360______58_840_49693060;

SignalI maketrig__w_48063920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_48063920_channel__x_581_44750820______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)channel__x_581_44750820;
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

SignalI dbus__r_48448020_channel__x_581_44750820______58_84_43644360______58_840_49693060;

SignalI makedbus__r_48448020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_48448020_channel__x_581_44750820______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)channel__x_581_44750820;
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

SignalI dbus__w_46002880_channel__x_581_44750820______58_84_43644360______58_840_49693060;

SignalI makedbus__w_46002880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_46002880_channel__x_581_44750820______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)channel__x_581_44750820;
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

SignalI abus__r_46002720_channel__x_581_44750820______58_84_43644360______58_840_49693060;

SignalI makeabus__r_46002720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_46002720_channel__x_581_44750820______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)channel__x_581_44750820;
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

SignalI abus__w_46002480_channel__x_581_44750820______58_84_43644360______58_840_49693060;

SignalI makeabus__w_46002480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_46002480_channel__x_581_44750820______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)channel__x_581_44750820;
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

SignalI mem_47908560_channel__x_581_44750820______58_84_43644360______58_840_49693060;

SignalI makemem_47908560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_47908560_channel__x_581_44750820______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)channel__x_581_44750820;
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

Scope raddr_582_44749580;

Scope makeraddr_582_44749580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_582_44749580 = scope;
   scope->owner = (Object)channel__x_581_44750820;
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

Scope waddr_587_44747880;

Scope makewaddr_587_44747880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_587_44747880 = scope;
   scope->owner = (Object)channel__x_581_44750820;
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

Scope rinc_5812_44747100;

Behavior __54019400;

Behavior make__54019400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54019400 = behavior;
   behavior->owner = (Object)rinc_5812_44747100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_48448020_channel__x_581_44750820______58_84_43644360______58_840_49693060);
   dbus__r_48448020_channel__x_581_44750820______58_84_43644360______58_840_49693060->num_any += 1;
   dbus__r_48448020_channel__x_581_44750820______58_84_43644360______58_840_49693060->any = realloc(dbus__r_48448020_channel__x_581_44750820______58_84_43644360______58_840_49693060->any,dbus__r_48448020_channel__x_581_44750820______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
dbus__r_48448020_channel__x_581_44750820______58_84_43644360______58_840_49693060->any[dbus__r_48448020_channel__x_581_44750820______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__54026060();

   return behavior;
}

Behavior __54019240;

Behavior make__54019240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54019240 = behavior;
   behavior->owner = (Object)rinc_5812_44747100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5813_51649940_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   _5813_51649940_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   _5813_51649940_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(_5813_51649940_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,_5813_51649940_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
_5813_51649940_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[_5813_51649940_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,_5814_51649820_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   _5814_51649820_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   _5814_51649820_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(_5814_51649820_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,_5814_51649820_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
_5814_51649820_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[_5814_51649820_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__54026000();

   return behavior;
}

Scope makerinc_5812_44747100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5812_44747100 = scope;
   scope->owner = (Object)channel__x_581_44750820;
   scope->name = "rinc:12";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__54019400();
   scope->behaviors[1] = make__54019240();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5816_48066180;

Scope makewinc_5816_48066180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5816_48066180 = scope;
   scope->owner = (Object)channel__x_581_44750820;
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

Scope rdec_5820_48065320;

Scope makerdec_5820_48065320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5820_48065320 = scope;
   scope->owner = (Object)channel__x_581_44750820;
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

Scope wdec_5825_48064620;

Scope makewdec_5825_48064620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5825_48064620 = scope;
   scope->owner = (Object)channel__x_581_44750820;
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

Behavior __48388960;

Behavior make__48388960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48388960 = behavior;
   behavior->owner = (Object)channel__x_581_44750820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_50776760______58_84_43644360______58_840_49693060);
   clk_50776760______58_84_43644360______58_840_49693060->num_neg += 1;
   clk_50776760______58_84_43644360______58_840_49693060->neg = realloc(clk_50776760______58_84_43644360______58_840_49693060->neg,clk_50776760______58_84_43644360______58_840_49693060->num_neg*sizeof(Object));
clk_50776760______58_84_43644360______58_840_49693060->neg[clk_50776760______58_84_43644360______58_840_49693060->num_neg-1] = (Object)behavior;
   behavior->block = make__48600860();

   return behavior;
}

Behavior __54003780;

Behavior make__54003780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54003780 = behavior;
   behavior->owner = (Object)channel__x_581_44750820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_48063920_channel__x_581_44750820______58_84_43644360______58_840_49693060);
   trig__w_48063920_channel__x_581_44750820______58_84_43644360______58_840_49693060->num_any += 1;
   trig__w_48063920_channel__x_581_44750820______58_84_43644360______58_840_49693060->any = realloc(trig__w_48063920_channel__x_581_44750820______58_84_43644360______58_840_49693060->any,trig__w_48063920_channel__x_581_44750820______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
trig__w_48063920_channel__x_581_44750820______58_84_43644360______58_840_49693060->any[trig__w_48063920_channel__x_581_44750820______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__54003940();

   return behavior;
}

Behavior __54003580;

Behavior make__54003580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54003580 = behavior;
   behavior->owner = (Object)channel__x_581_44750820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5817_50776640______58_84_43644360______58_840_49693060);
   _5817_50776640______58_84_43644360______58_840_49693060->num_any += 1;
   _5817_50776640______58_84_43644360______58_840_49693060->any = realloc(_5817_50776640______58_84_43644360______58_840_49693060->any,_5817_50776640______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
_5817_50776640______58_84_43644360______58_840_49693060->any[_5817_50776640______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__54003740();

   return behavior;
}

Behavior __54003080;

Behavior make__54003080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54003080 = behavior;
   behavior->owner = (Object)channel__x_581_44750820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_46002480_channel__x_581_44750820______58_84_43644360______58_840_49693060);
   abus__w_46002480_channel__x_581_44750820______58_84_43644360______58_840_49693060->num_any += 1;
   abus__w_46002480_channel__x_581_44750820______58_84_43644360______58_840_49693060->any = realloc(abus__w_46002480_channel__x_581_44750820______58_84_43644360______58_840_49693060->any,abus__w_46002480_channel__x_581_44750820______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
abus__w_46002480_channel__x_581_44750820______58_84_43644360______58_840_49693060->any[abus__w_46002480_channel__x_581_44750820______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__54003260();

   return behavior;
}

Behavior __54002800;

Behavior make__54002800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54002800 = behavior;
   behavior->owner = (Object)channel__x_581_44750820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5818_50776560______58_84_43644360______58_840_49693060);
   _5818_50776560______58_84_43644360______58_840_49693060->num_any += 1;
   _5818_50776560______58_84_43644360______58_840_49693060->any = realloc(_5818_50776560______58_84_43644360______58_840_49693060->any,_5818_50776560______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
_5818_50776560______58_84_43644360______58_840_49693060->any[_5818_50776560______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__54003040();

   return behavior;
}

Behavior __54002260;

Behavior make__54002260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54002260 = behavior;
   behavior->owner = (Object)channel__x_581_44750820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_46002880_channel__x_581_44750820______58_84_43644360______58_840_49693060);
   dbus__w_46002880_channel__x_581_44750820______58_84_43644360______58_840_49693060->num_any += 1;
   dbus__w_46002880_channel__x_581_44750820______58_84_43644360______58_840_49693060->any = realloc(dbus__w_46002880_channel__x_581_44750820______58_84_43644360______58_840_49693060->any,dbus__w_46002880_channel__x_581_44750820______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
dbus__w_46002880_channel__x_581_44750820______58_84_43644360______58_840_49693060->any[dbus__w_46002880_channel__x_581_44750820______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__54002420();

   return behavior;
}

Behavior __54002060;

Behavior make__54002060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54002060 = behavior;
   behavior->owner = (Object)channel__x_581_44750820;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5819_50929400______58_84_43644360______58_840_49693060);
   _5819_50929400______58_84_43644360______58_840_49693060->num_any += 1;
   _5819_50929400______58_84_43644360______58_840_49693060->any = realloc(_5819_50929400______58_84_43644360______58_840_49693060->any,_5819_50929400______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
_5819_50929400______58_84_43644360______58_840_49693060->any[_5819_50929400______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__54002220();

   return behavior;
}

Scope makechannel__x_581_44750820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__x_581_44750820 = scope;
   scope->owner = (Object)_____58_84_43644360;
   scope->name = "channel_x:1";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_48063980();
   scope->inners[1] = maketrig__w_48063920();
   scope->inners[2] = makedbus__r_48448020();
   scope->inners[3] = makedbus__w_46002880();
   scope->inners[4] = makeabus__r_46002720();
   scope->inners[5] = makeabus__w_46002480();
   scope->inners[6] = makemem_47908560();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_582_44749580();
   scope->scopes[1] = makewaddr_587_44747880();
   scope->scopes[2] = makerinc_5812_44747100();
   scope->scopes[3] = makewinc_5816_48066180();
   scope->scopes[4] = makerdec_5820_48065320();
   scope->scopes[5] = makewdec_5825_48064620();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48388960();
   scope->behaviors[1] = make__54003780();
   scope->behaviors[2] = make__54003580();
   scope->behaviors[3] = make__54003080();
   scope->behaviors[4] = make__54002800();
   scope->behaviors[5] = make__54002260();
   scope->behaviors[6] = make__54002060();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__a0_5830_48388760;

SignalI reg__0_48553360_channel__a0_5830_48388760______58_84_43644360______58_840_49693060;

SignalI makereg__0_48553360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_48553360_channel__a0_5830_48388760______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)channel__a0_5830_48388760;
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

SignalI reg__1_49850220_channel__a0_5830_48388760______58_84_43644360______58_840_49693060;

SignalI makereg__1_49850220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_49850220_channel__a0_5830_48388760______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)channel__a0_5830_48388760;
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

Scope anum_5831_48388200;

Scope makeanum_5831_48388200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_5831_48388200 = scope;
   scope->owner = (Object)channel__a0_5830_48388760;
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

Scope raddr_5834_48387580;

Scope makeraddr_5834_48387580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5834_48387580 = scope;
   scope->owner = (Object)channel__a0_5830_48388760;
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

Scope waddr_5838_48386920;

Scope makewaddr_5838_48386920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5838_48386920 = scope;
   scope->owner = (Object)channel__a0_5830_48388760;
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

Scope rinc_5842_48386300;

SignalI abus__r_48385760_rinc_5842_48386300_channel__a0_5830_48388760______58_84_43644360______58_840_49693060;

SignalI makeabus__r_48385760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48385760_rinc_5842_48386300_channel__a0_5830_48388760______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)rinc_5842_48386300;
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

Scope makerinc_5842_48386300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5842_48386300 = scope;
   scope->owner = (Object)channel__a0_5830_48388760;
   scope->name = "rinc:42";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_48385760();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5846_48385640;

SignalI abus__w_48385040_winc_5846_48385640_channel__a0_5830_48388760______58_84_43644360______58_840_49693060;

SignalI makeabus__w_48385040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48385040_winc_5846_48385640_channel__a0_5830_48388760______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)winc_5846_48385640;
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

Scope makewinc_5846_48385640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5846_48385640 = scope;
   scope->owner = (Object)channel__a0_5830_48388760;
   scope->name = "winc:46";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_48385040();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5850_48384920;

SignalI abus__r_48384360_rdec_5850_48384920_channel__a0_5830_48388760______58_84_43644360______58_840_49693060;

SignalI makeabus__r_48384360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48384360_rdec_5850_48384920_channel__a0_5830_48388760______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)rdec_5850_48384920;
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

Scope makerdec_5850_48384920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5850_48384920 = scope;
   scope->owner = (Object)channel__a0_5830_48388760;
   scope->name = "rdec:50";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_48384360();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_5855_48384240;

SignalI abus__w_48383820_wdec_5855_48384240_channel__a0_5830_48388760______58_84_43644360______58_840_49693060;

SignalI makeabus__w_48383820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48383820_wdec_5855_48384240_channel__a0_5830_48388760______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)wdec_5855_48384240;
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

Scope makewdec_5855_48384240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5855_48384240 = scope;
   scope->owner = (Object)channel__a0_5830_48388760;
   scope->name = "wdec:55";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_48383820();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __53477300;

Behavior make__53477300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53477300 = behavior;
   behavior->owner = (Object)channel__a0_5830_48388760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_48553360_channel__a0_5830_48388760______58_84_43644360______58_840_49693060);
   reg__0_48553360_channel__a0_5830_48388760______58_84_43644360______58_840_49693060->num_any += 1;
   reg__0_48553360_channel__a0_5830_48388760______58_84_43644360______58_840_49693060->any = realloc(reg__0_48553360_channel__a0_5830_48388760______58_84_43644360______58_840_49693060->any,reg__0_48553360_channel__a0_5830_48388760______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
reg__0_48553360_channel__a0_5830_48388760______58_84_43644360______58_840_49693060->any[reg__0_48553360_channel__a0_5830_48388760______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__54018180();

   return behavior;
}

Behavior __53477100;

Behavior make__53477100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53477100 = behavior;
   behavior->owner = (Object)channel__a0_5830_48388760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5832_51000360______58_84_43644360______58_840_49693060);
   _5832_51000360______58_84_43644360______58_840_49693060->num_any += 1;
   _5832_51000360______58_84_43644360______58_840_49693060->any = realloc(_5832_51000360______58_84_43644360______58_840_49693060->any,_5832_51000360______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
_5832_51000360______58_84_43644360______58_840_49693060->any[_5832_51000360______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__53477260();

   return behavior;
}

Behavior __53476640;

Behavior make__53476640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53476640 = behavior;
   behavior->owner = (Object)channel__a0_5830_48388760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_49850220_channel__a0_5830_48388760______58_84_43644360______58_840_49693060);
   reg__1_49850220_channel__a0_5830_48388760______58_84_43644360______58_840_49693060->num_any += 1;
   reg__1_49850220_channel__a0_5830_48388760______58_84_43644360______58_840_49693060->any = realloc(reg__1_49850220_channel__a0_5830_48388760______58_84_43644360______58_840_49693060->any,reg__1_49850220_channel__a0_5830_48388760______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
reg__1_49850220_channel__a0_5830_48388760______58_84_43644360______58_840_49693060->any[reg__1_49850220_channel__a0_5830_48388760______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__53476800();

   return behavior;
}

Behavior __53476440;

Behavior make__53476440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53476440 = behavior;
   behavior->owner = (Object)channel__a0_5830_48388760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5833_51063100______58_84_43644360______58_840_49693060);
   _5833_51063100______58_84_43644360______58_840_49693060->num_any += 1;
   _5833_51063100______58_84_43644360______58_840_49693060->any = realloc(_5833_51063100______58_84_43644360______58_840_49693060->any,_5833_51063100______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
_5833_51063100______58_84_43644360______58_840_49693060->any[_5833_51063100______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__53476600();

   return behavior;
}

Scope makechannel__a0_5830_48388760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__a0_5830_48388760 = scope;
   scope->owner = (Object)_____58_84_43644360;
   scope->name = "channel_a0:30";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_48553360();
   scope->inners[1] = makereg__1_49850220();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_5831_48388200();
   scope->scopes[1] = makeraddr_5834_48387580();
   scope->scopes[2] = makewaddr_5838_48386920();
   scope->scopes[3] = makerinc_5842_48386300();
   scope->scopes[4] = makewinc_5846_48385640();
   scope->scopes[5] = makerdec_5850_48384920();
   scope->scopes[6] = makewdec_5855_48384240();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53477300();
   scope->behaviors[1] = make__53477100();
   scope->behaviors[2] = make__53476640();
   scope->behaviors[3] = make__53476440();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__a1_5860_50461240;

SignalI reg__0_50536840_channel__a1_5860_50461240______58_84_43644360______58_840_49693060;

SignalI makereg__0_50536840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_50536840_channel__a1_5860_50461240______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)channel__a1_5860_50461240;
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

Scope anum_5861_50460940;

Scope makeanum_5861_50460940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_5861_50460940 = scope;
   scope->owner = (Object)channel__a1_5860_50461240;
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

Scope raddr_5863_50460520;

Scope makeraddr_5863_50460520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5863_50460520 = scope;
   scope->owner = (Object)channel__a1_5860_50461240;
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

Scope waddr_5866_50460100;

Scope makewaddr_5866_50460100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5866_50460100 = scope;
   scope->owner = (Object)channel__a1_5860_50461240;
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

Scope rinc_5869_50459680;

SignalI abus__r_50459300_rinc_5869_50459680_channel__a1_5860_50461240______58_84_43644360______58_840_49693060;

SignalI makeabus__r_50459300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50459300_rinc_5869_50459680_channel__a1_5860_50461240______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)rinc_5869_50459680;
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

Scope makerinc_5869_50459680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5869_50459680 = scope;
   scope->owner = (Object)channel__a1_5860_50461240;
   scope->name = "rinc:69";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_50459300();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5872_50459180;

SignalI abus__w_50458800_winc_5872_50459180_channel__a1_5860_50461240______58_84_43644360______58_840_49693060;

SignalI makeabus__w_50458800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50458800_winc_5872_50459180_channel__a1_5860_50461240______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)winc_5872_50459180;
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

Scope makewinc_5872_50459180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5872_50459180 = scope;
   scope->owner = (Object)channel__a1_5860_50461240;
   scope->name = "winc:72";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_50458800();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5875_50458680;

SignalI abus__r_50458300_rdec_5875_50458680_channel__a1_5860_50461240______58_84_43644360______58_840_49693060;

SignalI makeabus__r_50458300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50458300_rdec_5875_50458680_channel__a1_5860_50461240______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)rdec_5875_50458680;
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

Scope makerdec_5875_50458680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5875_50458680 = scope;
   scope->owner = (Object)channel__a1_5860_50461240;
   scope->name = "rdec:75";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_50458300();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_5879_50458180;

SignalI abus__w_50457800_wdec_5879_50458180_channel__a1_5860_50461240______58_84_43644360______58_840_49693060;

SignalI makeabus__w_50457800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50457800_wdec_5879_50458180_channel__a1_5860_50461240______58_84_43644360______58_840_49693060 = signalI;
   signalI->owner = (Object)wdec_5879_50458180;
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

Scope makewdec_5879_50458180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5879_50458180 = scope;
   scope->owner = (Object)channel__a1_5860_50461240;
   scope->name = "wdec:79";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_50457800();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __53474100;

Behavior make__53474100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53474100 = behavior;
   behavior->owner = (Object)channel__a1_5860_50461240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_50536840_channel__a1_5860_50461240______58_84_43644360______58_840_49693060);
   reg__0_50536840_channel__a1_5860_50461240______58_84_43644360______58_840_49693060->num_any += 1;
   reg__0_50536840_channel__a1_5860_50461240______58_84_43644360______58_840_49693060->any = realloc(reg__0_50536840_channel__a1_5860_50461240______58_84_43644360______58_840_49693060->any,reg__0_50536840_channel__a1_5860_50461240______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
reg__0_50536840_channel__a1_5860_50461240______58_84_43644360______58_840_49693060->any[reg__0_50536840_channel__a1_5860_50461240______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__53474260();

   return behavior;
}

Behavior __53473900;

Behavior make__53473900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __53473900 = behavior;
   behavior->owner = (Object)channel__a1_5860_50461240;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5862_51183140______58_84_43644360______58_840_49693060);
   _5862_51183140______58_84_43644360______58_840_49693060->num_any += 1;
   _5862_51183140______58_84_43644360______58_840_49693060->any = realloc(_5862_51183140______58_84_43644360______58_840_49693060->any,_5862_51183140______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
_5862_51183140______58_84_43644360______58_840_49693060->any[_5862_51183140______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__53474060();

   return behavior;
}

Scope makechannel__a1_5860_50461240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__a1_5860_50461240 = scope;
   scope->owner = (Object)_____58_84_43644360;
   scope->name = "channel_a1:60";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_50536840();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_5861_50460940();
   scope->scopes[1] = makeraddr_5863_50460520();
   scope->scopes[2] = makewaddr_5866_50460100();
   scope->scopes[3] = makerinc_5869_50459680();
   scope->scopes[4] = makewinc_5872_50459180();
   scope->scopes[5] = makerdec_5875_50458680();
   scope->scopes[6] = makewdec_5879_50458180();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__53474100();
   scope->behaviors[1] = make__53473900();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __52053500;

Behavior make__52053500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __52053500 = behavior;
   behavior->owner = (Object)_____58_84_43644360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_50776760______58_84_43644360______58_840_49693060);
   clk_50776760______58_84_43644360______58_840_49693060->num_pos += 1;
   clk_50776760______58_84_43644360______58_840_49693060->pos = realloc(clk_50776760______58_84_43644360______58_840_49693060->pos,clk_50776760______58_84_43644360______58_840_49693060->num_pos*sizeof(Object));
clk_50776760______58_84_43644360______58_840_49693060->pos[clk_50776760______58_84_43644360______58_840_49693060->num_pos-1] = (Object)behavior;
   behavior->block = make__51645660();

   return behavior;
}

Behavior __49693220;

Behavior make__49693220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49693220 = behavior;
   register_timed_behavior(behavior);
   behavior->owner = (Object)_____58_84_43644360;
   behavior->activated = 0;
   behavior->timed = 1;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__52053180();

   return behavior;
}

Behavior __54004720;

Behavior make__54004720() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54004720 = behavior;
   behavior->owner = (Object)_____58_84_43644360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 4;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_50776760______58_84_43644360______58_840_49693060);
   clk_50776760______58_84_43644360______58_840_49693060->num_any += 1;
   clk_50776760______58_84_43644360______58_840_49693060->any = realloc(clk_50776760______58_84_43644360______58_840_49693060->any,clk_50776760______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
clk_50776760______58_84_43644360______58_840_49693060->any[clk_50776760______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_50776740______58_84_43644360______58_840_49693060);
   rst_50776740______58_84_43644360______58_840_49693060->num_any += 1;
   rst_50776740______58_84_43644360______58_840_49693060->any = realloc(rst_50776740______58_84_43644360______58_840_49693060->any,rst_50776740______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
rst_50776740______58_84_43644360______58_840_49693060->any[rst_50776740______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,req_50776720______58_84_43644360______58_840_49693060);
   req_50776720______58_84_43644360______58_840_49693060->num_any += 1;
   req_50776720______58_84_43644360______58_840_49693060->any = realloc(req_50776720______58_84_43644360______58_840_49693060->any,req_50776720______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
req_50776720______58_84_43644360______58_840_49693060->any[req_50776720______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,fill_50776660______58_84_43644360______58_840_49693060);
   fill_50776660______58_84_43644360______58_840_49693060->num_any += 1;
   fill_50776660______58_84_43644360______58_840_49693060->any = realloc(fill_50776660______58_84_43644360______58_840_49693060->any,fill_50776660______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
fill_50776660______58_84_43644360______58_840_49693060->any[fill_50776660______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__54008500();

   return behavior;
}

Behavior __54004500;

Behavior make__54004500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __54004500 = behavior;
   behavior->owner = (Object)_____58_84_43644360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__0_51649960_layer0_58_840_51409440______58_84_43644360______58_840_49693060);
   ack__0_51649960_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any += 1;
   ack__0_51649960_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any = realloc(ack__0_51649960_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any,ack__0_51649960_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any*sizeof(Object));
ack__0_51649960_layer0_58_840_51409440______58_84_43644360______58_840_49693060->any[ack__0_51649960_layer0_58_840_51409440______58_84_43644360______58_840_49693060->num_any-1] = (Object)behavior;
   behavior->block = make__54008440();

   return behavior;
}

Scope make_____58_84_43644360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   _____58_84_43644360 = scope;
   scope->owner = (Object)_____58_840_49693060;
   scope->name = "__:T";
   scope->num_systemIs = 1;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makelayer0_51649080();
   scope->num_inners = 12;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeclk_50776760();
   scope->inners[1] = makerst_50776740();
   scope->inners[2] = makereq_50776720();
   scope->inners[3] = makeack__0_50776700();
   scope->inners[4] = makeack__1_50776680();
   scope->inners[5] = makefill_50776660();
   scope->inners[6] = make_5817_50776640();
   scope->inners[7] = make_5818_50776560();
   scope->inners[8] = make_5819_50929400();
   scope->inners[9] = make_5832_51000360();
   scope->inners[10] = make_5833_51063100();
   scope->inners[11] = make_5862_51183140();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__x_581_44750820();
   scope->scopes[1] = makechannel__a0_5830_48388760();
   scope->scopes[2] = makechannel__a1_5860_50461240();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__52053500();
   scope->behaviors[1] = make__49693220();
   scope->behaviors[2] = make__54004720();
   scope->behaviors[3] = make__54004500();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT make_____58_840_49693060() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   _____58_840_49693060 = systemT;
systemT->owner = NULL;
   systemT->name = "__:T0";
   systemT->num_inputs = 0;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->num_outputs = 0;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make_____58_84_43644360();

   return systemT;
}