#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT _____58_840_51546480;

Block __51239320;

Block __51239000;

Block __51238320;

void code__51238320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51892580(),_5818_47886720______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__51238320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51238320 = block;
   block->owner = (Object)__51239000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51238320;

   return block;
};

void code__51239000() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_47886960______58_84_43395440______58_840_51546480->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51892740();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51238320();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51892520(),_5817_47886840______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__51239000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51239000 = block;
   block->owner = (Object)__51239320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51239000;

   return block;
};

Block __51237200;

Block __51236880;

Block __51236360;

void code__51236360() {
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
                  src0 = _5818_47886720______58_84_43395440______58_840_51546480->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__51892160();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5818_47886720______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51891980(),_5817_47886840______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__51891840(),_5819_47966200______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__51236360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51236360 = block;
   block->owner = (Object)__51236880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51236360;

   return block;
};

void code__51236880() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_47886960______58_84_43395440______58_840_51546480->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__51892340();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51236360();
   }
      }
   }
}

Block make__51236880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51236880 = block;
   block->owner = (Object)__51237200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51236880;

   return block;
};

void code__51237200() {
 code__51236880();
}

Block make__51237200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51237200 = block;
   block->owner = (Object)__51239320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51237200;

   return block;
};

void code__51239320() {
 code__51239000();
   {
      Value cond = fill_47886880______58_84_43395440______58_840_51546480->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__51237200();
   }
      }
   }
}

Block make__51239320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51239320 = block;
   block->owner = (Object)__51510300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51239320;

   return block;
};

Block __51509960;

void code__51509960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51891680(),clk_47886980______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51891580(),rst_47886960______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51891480(),req_47886940______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51891340(),fill_47886880______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__51547240);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51891220(),rst_47886960______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__51547240);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51891100(),clk_47886980______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__51547240);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51890920(),clk_47886980______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51890820(),rst_47886960______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51890720(),fill_47886880______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__51547240);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51890660(),clk_47886980______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__51547240);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51890480(),clk_47886980______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__51547240);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51890340(),clk_47886980______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__51547240);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51890260(),clk_47886980______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__51547240);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51890140(),clk_47886980______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__51547240);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51890040(),clk_47886980______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__51547240);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51889980(),clk_47886980______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__51547240);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51889900(),clk_47886980______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__51547240);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51889820(),clk_47886980______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__51547240);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51889760(),clk_47886980______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__51547240);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51889700(),clk_47886980______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__51547240);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51889580(),clk_47886980______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__51547240);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51889520(),clk_47886980______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__51547240);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51889460(),clk_47886980______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__51547240);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51889400(),clk_47886980______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__51547240);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51889320(),clk_47886980______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__51547240);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51889240(),clk_47886980______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__51547240);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51889160(),clk_47886980______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__51547240);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51889080(),clk_47886980______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__51547240);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51888960(),clk_47886980______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__51547240);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51888900(),fill_47886880______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51888720(),clk_47886980______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51888560(),clk_47886980______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51888260(),req_47886940______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__51547240);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51888180(),clk_47886980______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__51547240);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51912400(),clk_47886980______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51912340(),req_47886940______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51912140(),clk_47886980______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__51547240);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51911920(),clk_47886980______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__51547240);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51911680(),clk_47886980______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__51547240);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51911620(),clk_47886980______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__51547240);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51911560(),clk_47886980______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__51547240);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51911500(),clk_47886980______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__51547240);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51911440(),clk_47886980______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__51547240);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51911360(),clk_47886980______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__51547240);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51911240(),clk_47886980______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__51547240);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51911140(),clk_47886980______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__51547240);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51911060(),clk_47886980______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__51547240);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51910840(),clk_47886980______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__51547240);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51910780(),clk_47886980______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__51547240);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51910680(),clk_47886980______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__51547240);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51910580(),clk_47886980______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__51547240);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51910500(),clk_47886980______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__51547240);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51910340(),clk_47886980______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__51547240);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51910240(),clk_47886980______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__51547240);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51910120(),clk_47886980______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__51547240);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__51910060(),clk_47886980______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__51547240);
}

Block make__51509960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51509960 = block;
   block->owner = (Object)__51547240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51509960;

   return block;
};

Block __51603400;

void code__51603400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_47886980______58_84_43395440______58_840_51546480->c_value,clk_51056900_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_47886960______58_84_43395440______58_840_51546480->c_value,rst_51056780_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(req_47886940______58_84_43395440______58_840_51546480->c_value,req_51056760_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(fill_47886880______58_84_43395440______58_840_51546480->c_value,fill_51056740_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__51603400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51603400 = block;
   block->owner = (Object)__51622360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51603400;

   return block;
};

Block __51603220;

void code__51603220() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__0_51192480_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,ack__0_47886920______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__51603220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51603220 = block;
   block->owner = (Object)__51621820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51603220;

   return block;
};

Block __47773940;

Block __48019960;

void code__48019960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_46322360_channel__x_581_43394860______58_84_43395440______58_840_51546480->c_value,make_ref_rangeS(mem_46809180_channel__x_581_43394860______58_84_43395440______58_840_51546480,value2integer(abus__w_46322200_channel__x_581_43394860______58_84_43395440______58_840_51546480->c_value),value2integer(abus__w_46322200_channel__x_581_43394860______58_84_43395440______58_840_51546480->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__48019960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48019960 = block;
   block->owner = (Object)__47773940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48019960;

   return block;
};

void code__47773940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_46809180_channel__x_581_43394860______58_84_43395440______58_840_51546480->c_value;
            idx = value2integer(abus__r_46322280_channel__x_581_43394860______58_84_43395440______58_840_51546480->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_46733740_channel__x_581_43394860______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_45671880_channel__x_581_43394860______58_84_43395440______58_840_51546480->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48019960();
   }
      }
   }
}

Block make__47773940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47773940 = block;
   block->owner = (Object)__48384340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47773940;

   return block;
};

Block __51620880;

void code__51620880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_45671880_channel__x_581_43394860______58_84_43395440______58_840_51546480->c_value,_5817_47886840______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__51620880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51620880 = block;
   block->owner = (Object)__51620700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51620880;

   return block;
};

Block __51620640;

void code__51620640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5817_47886840______58_84_43395440______58_840_51546480->c_value,trig__w_45671880_channel__x_581_43394860______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__51620640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51620640 = block;
   block->owner = (Object)__51620420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51620640;

   return block;
};

Block __51619940;

void code__51619940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_46322200_channel__x_581_43394860______58_84_43395440______58_840_51546480->c_value,_5818_47886720______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__51619940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51619940 = block;
   block->owner = (Object)__51619620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51619940;

   return block;
};

Block __51619540;

void code__51619540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5818_47886720______58_84_43395440______58_840_51546480->c_value,abus__w_46322200_channel__x_581_43394860______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__51619540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51619540 = block;
   block->owner = (Object)__51619300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51619540;

   return block;
};

Block __51618460;

void code__51618460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_46322360_channel__x_581_43394860______58_84_43395440______58_840_51546480->c_value,_5819_47966200______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__51618460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51618460 = block;
   block->owner = (Object)__51618260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51618460;

   return block;
};

Block __51618180;

void code__51618180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5819_47966200______58_84_43395440______58_840_51546480->c_value,dbus__w_46322360_channel__x_581_43394860______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__51618180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51618180 = block;
   block->owner = (Object)__51618000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51618180;

   return block;
};

Block __51641820;

void code__51641820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_46733740_channel__x_581_43394860______58_84_43395440______58_840_51546480->c_value,_5815_51192580_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__51641820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51641820 = block;
   block->owner = (Object)__51661500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51641820;

   return block;
};

Block __51641740;

void code__51641740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5813_51192460_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,trig__r_45671900_channel__x_581_43394860______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5814_51192380_layer0_58_840_51003420______58_84_43395440______58_840_51546480->c_value,abus__r_46322280_channel__x_581_43394860______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__51641740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51641740 = block;
   block->owner = (Object)__51660680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51641740;

   return block;
};

Block __51659180;

void code__51659180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_43560740_channel__a0_5830_48384220______58_84_43395440______58_840_51546480->c_value,_5832_48033360______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__51659180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51659180 = block;
   block->owner = (Object)__51658940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51659180;

   return block;
};

Block __51658780;

void code__51658780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5832_48033360______58_84_43395440______58_840_51546480->c_value,reg__0_43560740_channel__a0_5830_48384220______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__51658780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51658780 = block;
   block->owner = (Object)__51813400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51658780;

   return block;
};

Block __51813000;

void code__51813000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_44675700_channel__a0_5830_48384220______58_84_43395440______58_840_51546480->c_value,_5833_48171780______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__51813000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51813000 = block;
   block->owner = (Object)__51812600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51813000;

   return block;
};

Block __51812560;

void code__51812560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5833_48171780______58_84_43395440______58_840_51546480->c_value,reg__1_44675700_channel__a0_5830_48384220______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__51812560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51812560 = block;
   block->owner = (Object)__51812340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51812560;

   return block;
};

Block __51809800;

void code__51809800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_47661000_channel__a1_5860_46812800______58_84_43395440______58_840_51546480->c_value,_5862_48321100______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__51809800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51809800 = block;
   block->owner = (Object)__51809460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51809800;

   return block;
};

Block __51809380;

void code__51809380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5862_48321100______58_84_43395440______58_840_51546480->c_value,reg__0_47661000_channel__a1_5860_46812800______58_84_43395440______58_840_51546480);
      set_value_pos(pool_state);
   }
}

Block make__51809380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51809380 = block;
   block->owner = (Object)__51809220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51809380;

   return block;
};

Value make__51892740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51892580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__51892520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51892340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51892160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__51891980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51891840() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__51891680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51891580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51891480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51891340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51891220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51891100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51890920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51890820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51890720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51890660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51890480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51890340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51890260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51890140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51890040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51889980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51889900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51889820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51889760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51889700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51889580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51889520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51889460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51889400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51889320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51889240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51889160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51889080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51888960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51888900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51888720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51888560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51888260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51888180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51912400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51912340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51912140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51911920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51911680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51911620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51911560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51911500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51911440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51911360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51911240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51911140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51911060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51910840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51910780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51910680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51910580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51910500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51910340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51910240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51910120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__51910060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope _____58_84_43395440;

SignalI clk_47886980______58_84_43395440______58_840_51546480;

SignalI makeclk_47886980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_47886980______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)_____58_84_43395440;
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

SignalI rst_47886960______58_84_43395440______58_840_51546480;

SignalI makerst_47886960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_47886960______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)_____58_84_43395440;
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

SignalI req_47886940______58_84_43395440______58_840_51546480;

SignalI makereq_47886940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_47886940______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)_____58_84_43395440;
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

SignalI ack__0_47886920______58_84_43395440______58_840_51546480;

SignalI makeack__0_47886920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__0_47886920______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)_____58_84_43395440;
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

SignalI ack__1_47886900______58_84_43395440______58_840_51546480;

SignalI makeack__1_47886900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__1_47886900______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)_____58_84_43395440;
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

SignalI fill_47886880______58_84_43395440______58_840_51546480;

SignalI makefill_47886880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_47886880______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)_____58_84_43395440;
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

SignalI _5817_47886840______58_84_43395440______58_840_51546480;

SignalI make_5817_47886840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5817_47886840______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)_____58_84_43395440;
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

SignalI _5818_47886720______58_84_43395440______58_840_51546480;

SignalI make_5818_47886720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5818_47886720______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)_____58_84_43395440;
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

SignalI _5819_47966200______58_84_43395440______58_840_51546480;

SignalI make_5819_47966200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5819_47966200______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)_____58_84_43395440;
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

SignalI _5832_48033360______58_84_43395440______58_840_51546480;

SignalI make_5832_48033360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5832_48033360______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)_____58_84_43395440;
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

SignalI _5833_48171780______58_84_43395440______58_840_51546480;

SignalI make_5833_48171780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5833_48171780______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)_____58_84_43395440;
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

SignalI _5862_48321100______58_84_43395440______58_840_51546480;

SignalI make_5862_48321100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5862_48321100______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)_____58_84_43395440;
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

SystemI layer0_51192180;

SystemI makelayer0_51192180() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer0_51192180 = systemI;
   systemI->owner = (Object)_____58_84_43395440;
   systemI->name = "layer0";
   systemI->system = layer0_58_840_51003420;

   return systemI;
};

Scope channel__x_581_43394860;

SignalI trig__r_45671900_channel__x_581_43394860______58_84_43395440______58_840_51546480;

SignalI maketrig__r_45671900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_45671900_channel__x_581_43394860______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)channel__x_581_43394860;
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

SignalI trig__w_45671880_channel__x_581_43394860______58_84_43395440______58_840_51546480;

SignalI maketrig__w_45671880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_45671880_channel__x_581_43394860______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)channel__x_581_43394860;
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

SignalI dbus__r_46733740_channel__x_581_43394860______58_84_43395440______58_840_51546480;

SignalI makedbus__r_46733740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_46733740_channel__x_581_43394860______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)channel__x_581_43394860;
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

SignalI dbus__w_46322360_channel__x_581_43394860______58_84_43395440______58_840_51546480;

SignalI makedbus__w_46322360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_46322360_channel__x_581_43394860______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)channel__x_581_43394860;
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

SignalI abus__r_46322280_channel__x_581_43394860______58_84_43395440______58_840_51546480;

SignalI makeabus__r_46322280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_46322280_channel__x_581_43394860______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)channel__x_581_43394860;
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

SignalI abus__w_46322200_channel__x_581_43394860______58_84_43395440______58_840_51546480;

SignalI makeabus__w_46322200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_46322200_channel__x_581_43394860______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)channel__x_581_43394860;
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

SignalI mem_46809180_channel__x_581_43394860______58_84_43395440______58_840_51546480;

SignalI makemem_46809180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_46809180_channel__x_581_43394860______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)channel__x_581_43394860;
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

Scope raddr_582_43244520;

Scope makeraddr_582_43244520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_582_43244520 = scope;
   scope->owner = (Object)channel__x_581_43394860;
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

Scope waddr_587_42979440;

Scope makewaddr_587_42979440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_587_42979440 = scope;
   scope->owner = (Object)channel__x_581_43394860;
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

Scope rinc_5812_42978700;

Behavior __51661500;

Behavior make__51661500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51661500 = behavior;
   behavior->owner = (Object)rinc_5812_42978700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_46733740_channel__x_581_43394860______58_84_43395440______58_840_51546480);
   dbus__r_46733740_channel__x_581_43394860______58_84_43395440______58_840_51546480->num_any += 1;
   dbus__r_46733740_channel__x_581_43394860______58_84_43395440______58_840_51546480->any = realloc(dbus__r_46733740_channel__x_581_43394860______58_84_43395440______58_840_51546480->any,dbus__r_46733740_channel__x_581_43394860______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
dbus__r_46733740_channel__x_581_43394860______58_84_43395440______58_840_51546480->any[dbus__r_46733740_channel__x_581_43394860______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__51641820();

   return behavior;
}

Behavior __51660680;

Behavior make__51660680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51660680 = behavior;
   behavior->owner = (Object)rinc_5812_42978700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5813_51192460_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   _5813_51192460_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   _5813_51192460_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(_5813_51192460_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,_5813_51192460_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
_5813_51192460_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[_5813_51192460_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,_5814_51192380_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   _5814_51192380_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   _5814_51192380_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(_5814_51192380_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,_5814_51192380_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
_5814_51192380_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[_5814_51192380_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__51641740();

   return behavior;
}

Scope makerinc_5812_42978700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5812_42978700 = scope;
   scope->owner = (Object)channel__x_581_43394860;
   scope->name = "rinc:12";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51661500();
   scope->behaviors[1] = make__51660680();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5816_45673200;

Scope makewinc_5816_45673200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5816_45673200 = scope;
   scope->owner = (Object)channel__x_581_43394860;
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

Scope rdec_5820_45672760;

Scope makerdec_5820_45672760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5820_45672760 = scope;
   scope->owner = (Object)channel__x_581_43394860;
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

Scope wdec_5825_45672340;

Scope makewdec_5825_45672340() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5825_45672340 = scope;
   scope->owner = (Object)channel__x_581_43394860;
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

Behavior __48384340;

Behavior make__48384340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48384340 = behavior;
   behavior->owner = (Object)channel__x_581_43394860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_47886980______58_84_43395440______58_840_51546480);
   clk_47886980______58_84_43395440______58_840_51546480->num_neg += 1;
   clk_47886980______58_84_43395440______58_840_51546480->neg = realloc(clk_47886980______58_84_43395440______58_840_51546480->neg,clk_47886980______58_84_43395440______58_840_51546480->num_neg*sizeof(Object));
clk_47886980______58_84_43395440______58_840_51546480->neg[clk_47886980______58_84_43395440______58_840_51546480->num_neg-1] = (Object)behavior;
   behavior->block = make__47773940();

   return behavior;
}

Behavior __51620700;

Behavior make__51620700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51620700 = behavior;
   behavior->owner = (Object)channel__x_581_43394860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_45671880_channel__x_581_43394860______58_84_43395440______58_840_51546480);
   trig__w_45671880_channel__x_581_43394860______58_84_43395440______58_840_51546480->num_any += 1;
   trig__w_45671880_channel__x_581_43394860______58_84_43395440______58_840_51546480->any = realloc(trig__w_45671880_channel__x_581_43394860______58_84_43395440______58_840_51546480->any,trig__w_45671880_channel__x_581_43394860______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
trig__w_45671880_channel__x_581_43394860______58_84_43395440______58_840_51546480->any[trig__w_45671880_channel__x_581_43394860______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__51620880();

   return behavior;
}

Behavior __51620420;

Behavior make__51620420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51620420 = behavior;
   behavior->owner = (Object)channel__x_581_43394860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5817_47886840______58_84_43395440______58_840_51546480);
   _5817_47886840______58_84_43395440______58_840_51546480->num_any += 1;
   _5817_47886840______58_84_43395440______58_840_51546480->any = realloc(_5817_47886840______58_84_43395440______58_840_51546480->any,_5817_47886840______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
_5817_47886840______58_84_43395440______58_840_51546480->any[_5817_47886840______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__51620640();

   return behavior;
}

Behavior __51619620;

Behavior make__51619620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51619620 = behavior;
   behavior->owner = (Object)channel__x_581_43394860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_46322200_channel__x_581_43394860______58_84_43395440______58_840_51546480);
   abus__w_46322200_channel__x_581_43394860______58_84_43395440______58_840_51546480->num_any += 1;
   abus__w_46322200_channel__x_581_43394860______58_84_43395440______58_840_51546480->any = realloc(abus__w_46322200_channel__x_581_43394860______58_84_43395440______58_840_51546480->any,abus__w_46322200_channel__x_581_43394860______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
abus__w_46322200_channel__x_581_43394860______58_84_43395440______58_840_51546480->any[abus__w_46322200_channel__x_581_43394860______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__51619940();

   return behavior;
}

Behavior __51619300;

Behavior make__51619300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51619300 = behavior;
   behavior->owner = (Object)channel__x_581_43394860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5818_47886720______58_84_43395440______58_840_51546480);
   _5818_47886720______58_84_43395440______58_840_51546480->num_any += 1;
   _5818_47886720______58_84_43395440______58_840_51546480->any = realloc(_5818_47886720______58_84_43395440______58_840_51546480->any,_5818_47886720______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
_5818_47886720______58_84_43395440______58_840_51546480->any[_5818_47886720______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__51619540();

   return behavior;
}

Behavior __51618260;

Behavior make__51618260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51618260 = behavior;
   behavior->owner = (Object)channel__x_581_43394860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_46322360_channel__x_581_43394860______58_84_43395440______58_840_51546480);
   dbus__w_46322360_channel__x_581_43394860______58_84_43395440______58_840_51546480->num_any += 1;
   dbus__w_46322360_channel__x_581_43394860______58_84_43395440______58_840_51546480->any = realloc(dbus__w_46322360_channel__x_581_43394860______58_84_43395440______58_840_51546480->any,dbus__w_46322360_channel__x_581_43394860______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
dbus__w_46322360_channel__x_581_43394860______58_84_43395440______58_840_51546480->any[dbus__w_46322360_channel__x_581_43394860______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__51618460();

   return behavior;
}

Behavior __51618000;

Behavior make__51618000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51618000 = behavior;
   behavior->owner = (Object)channel__x_581_43394860;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5819_47966200______58_84_43395440______58_840_51546480);
   _5819_47966200______58_84_43395440______58_840_51546480->num_any += 1;
   _5819_47966200______58_84_43395440______58_840_51546480->any = realloc(_5819_47966200______58_84_43395440______58_840_51546480->any,_5819_47966200______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
_5819_47966200______58_84_43395440______58_840_51546480->any[_5819_47966200______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__51618180();

   return behavior;
}

Scope makechannel__x_581_43394860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__x_581_43394860 = scope;
   scope->owner = (Object)_____58_84_43395440;
   scope->name = "channel_x:1";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_45671900();
   scope->inners[1] = maketrig__w_45671880();
   scope->inners[2] = makedbus__r_46733740();
   scope->inners[3] = makedbus__w_46322360();
   scope->inners[4] = makeabus__r_46322280();
   scope->inners[5] = makeabus__w_46322200();
   scope->inners[6] = makemem_46809180();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_582_43244520();
   scope->scopes[1] = makewaddr_587_42979440();
   scope->scopes[2] = makerinc_5812_42978700();
   scope->scopes[3] = makewinc_5816_45673200();
   scope->scopes[4] = makerdec_5820_45672760();
   scope->scopes[5] = makewdec_5825_45672340();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48384340();
   scope->behaviors[1] = make__51620700();
   scope->behaviors[2] = make__51620420();
   scope->behaviors[3] = make__51619620();
   scope->behaviors[4] = make__51619300();
   scope->behaviors[5] = make__51618260();
   scope->behaviors[6] = make__51618000();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__a0_5830_48384220;

SignalI reg__0_43560740_channel__a0_5830_48384220______58_84_43395440______58_840_51546480;

SignalI makereg__0_43560740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_43560740_channel__a0_5830_48384220______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)channel__a0_5830_48384220;
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

SignalI reg__1_44675700_channel__a0_5830_48384220______58_84_43395440______58_840_51546480;

SignalI makereg__1_44675700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_44675700_channel__a0_5830_48384220______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)channel__a0_5830_48384220;
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

Scope anum_5831_48383700;

Scope makeanum_5831_48383700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_5831_48383700 = scope;
   scope->owner = (Object)channel__a0_5830_48384220;
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

Scope raddr_5834_48383200;

Scope makeraddr_5834_48383200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5834_48383200 = scope;
   scope->owner = (Object)channel__a0_5830_48384220;
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

Scope waddr_5838_48382740;

Scope makewaddr_5838_48382740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5838_48382740 = scope;
   scope->owner = (Object)channel__a0_5830_48384220;
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

Scope rinc_5842_48406120;

SignalI abus__r_48404740_rinc_5842_48406120_channel__a0_5830_48384220______58_84_43395440______58_840_51546480;

SignalI makeabus__r_48404740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48404740_rinc_5842_48406120_channel__a0_5830_48384220______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)rinc_5842_48406120;
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

Scope makerinc_5842_48406120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5842_48406120 = scope;
   scope->owner = (Object)channel__a0_5830_48384220;
   scope->name = "rinc:42";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_48404740();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5846_48404540;

SignalI abus__w_48404000_winc_5846_48404540_channel__a0_5830_48384220______58_84_43395440______58_840_51546480;

SignalI makeabus__w_48404000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48404000_winc_5846_48404540_channel__a0_5830_48384220______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)winc_5846_48404540;
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

Scope makewinc_5846_48404540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5846_48404540 = scope;
   scope->owner = (Object)channel__a0_5830_48384220;
   scope->name = "winc:46";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_48404000();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5850_48403880;

SignalI abus__r_48403240_rdec_5850_48403880_channel__a0_5830_48384220______58_84_43395440______58_840_51546480;

SignalI makeabus__r_48403240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48403240_rdec_5850_48403880_channel__a0_5830_48384220______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)rdec_5850_48403880;
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

Scope makerdec_5850_48403880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5850_48403880 = scope;
   scope->owner = (Object)channel__a0_5830_48384220;
   scope->name = "rdec:50";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_48403240();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_5855_48403120;

SignalI abus__w_48401700_wdec_5855_48403120_channel__a0_5830_48384220______58_84_43395440______58_840_51546480;

SignalI makeabus__w_48401700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48401700_wdec_5855_48403120_channel__a0_5830_48384220______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)wdec_5855_48403120;
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

Scope makewdec_5855_48403120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5855_48403120 = scope;
   scope->owner = (Object)channel__a0_5830_48384220;
   scope->name = "wdec:55";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_48401700();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __51658940;

Behavior make__51658940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51658940 = behavior;
   behavior->owner = (Object)channel__a0_5830_48384220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_43560740_channel__a0_5830_48384220______58_84_43395440______58_840_51546480);
   reg__0_43560740_channel__a0_5830_48384220______58_84_43395440______58_840_51546480->num_any += 1;
   reg__0_43560740_channel__a0_5830_48384220______58_84_43395440______58_840_51546480->any = realloc(reg__0_43560740_channel__a0_5830_48384220______58_84_43395440______58_840_51546480->any,reg__0_43560740_channel__a0_5830_48384220______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
reg__0_43560740_channel__a0_5830_48384220______58_84_43395440______58_840_51546480->any[reg__0_43560740_channel__a0_5830_48384220______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__51659180();

   return behavior;
}

Behavior __51813400;

Behavior make__51813400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51813400 = behavior;
   behavior->owner = (Object)channel__a0_5830_48384220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5832_48033360______58_84_43395440______58_840_51546480);
   _5832_48033360______58_84_43395440______58_840_51546480->num_any += 1;
   _5832_48033360______58_84_43395440______58_840_51546480->any = realloc(_5832_48033360______58_84_43395440______58_840_51546480->any,_5832_48033360______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
_5832_48033360______58_84_43395440______58_840_51546480->any[_5832_48033360______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__51658780();

   return behavior;
}

Behavior __51812600;

Behavior make__51812600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51812600 = behavior;
   behavior->owner = (Object)channel__a0_5830_48384220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_44675700_channel__a0_5830_48384220______58_84_43395440______58_840_51546480);
   reg__1_44675700_channel__a0_5830_48384220______58_84_43395440______58_840_51546480->num_any += 1;
   reg__1_44675700_channel__a0_5830_48384220______58_84_43395440______58_840_51546480->any = realloc(reg__1_44675700_channel__a0_5830_48384220______58_84_43395440______58_840_51546480->any,reg__1_44675700_channel__a0_5830_48384220______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
reg__1_44675700_channel__a0_5830_48384220______58_84_43395440______58_840_51546480->any[reg__1_44675700_channel__a0_5830_48384220______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__51813000();

   return behavior;
}

Behavior __51812340;

Behavior make__51812340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51812340 = behavior;
   behavior->owner = (Object)channel__a0_5830_48384220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5833_48171780______58_84_43395440______58_840_51546480);
   _5833_48171780______58_84_43395440______58_840_51546480->num_any += 1;
   _5833_48171780______58_84_43395440______58_840_51546480->any = realloc(_5833_48171780______58_84_43395440______58_840_51546480->any,_5833_48171780______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
_5833_48171780______58_84_43395440______58_840_51546480->any[_5833_48171780______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__51812560();

   return behavior;
}

Scope makechannel__a0_5830_48384220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__a0_5830_48384220 = scope;
   scope->owner = (Object)_____58_84_43395440;
   scope->name = "channel_a0:30";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_43560740();
   scope->inners[1] = makereg__1_44675700();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_5831_48383700();
   scope->scopes[1] = makeraddr_5834_48383200();
   scope->scopes[2] = makewaddr_5838_48382740();
   scope->scopes[3] = makerinc_5842_48406120();
   scope->scopes[4] = makewinc_5846_48404540();
   scope->scopes[5] = makerdec_5850_48403880();
   scope->scopes[6] = makewdec_5855_48403120();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51658940();
   scope->behaviors[1] = make__51813400();
   scope->behaviors[2] = make__51812600();
   scope->behaviors[3] = make__51812340();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__a1_5860_46812800;

SignalI reg__0_47661000_channel__a1_5860_46812800______58_84_43395440______58_840_51546480;

SignalI makereg__0_47661000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_47661000_channel__a1_5860_46812800______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)channel__a1_5860_46812800;
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

Scope anum_5861_46812380;

Scope makeanum_5861_46812380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_5861_46812380 = scope;
   scope->owner = (Object)channel__a1_5860_46812800;
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

Scope raddr_5863_46811240;

Scope makeraddr_5863_46811240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5863_46811240 = scope;
   scope->owner = (Object)channel__a1_5860_46812800;
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

Scope waddr_5866_46810580;

Scope makewaddr_5866_46810580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5866_46810580 = scope;
   scope->owner = (Object)channel__a1_5860_46812800;
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

Scope rinc_5869_46809980;

SignalI abus__r_46809380_rinc_5869_46809980_channel__a1_5860_46812800______58_84_43395440______58_840_51546480;

SignalI makeabus__r_46809380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_46809380_rinc_5869_46809980_channel__a1_5860_46812800______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)rinc_5869_46809980;
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

Scope makerinc_5869_46809980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5869_46809980 = scope;
   scope->owner = (Object)channel__a1_5860_46812800;
   scope->name = "rinc:69";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_46809380();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5872_46833580;

SignalI abus__w_46832020_winc_5872_46833580_channel__a1_5860_46812800______58_84_43395440______58_840_51546480;

SignalI makeabus__w_46832020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_46832020_winc_5872_46833580_channel__a1_5860_46812800______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)winc_5872_46833580;
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

Scope makewinc_5872_46833580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5872_46833580 = scope;
   scope->owner = (Object)channel__a1_5860_46812800;
   scope->name = "winc:72";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_46832020();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5875_46831860;

SignalI abus__r_46830180_rdec_5875_46831860_channel__a1_5860_46812800______58_84_43395440______58_840_51546480;

SignalI makeabus__r_46830180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_46830180_rdec_5875_46831860_channel__a1_5860_46812800______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)rdec_5875_46831860;
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

Scope makerdec_5875_46831860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5875_46831860 = scope;
   scope->owner = (Object)channel__a1_5860_46812800;
   scope->name = "rdec:75";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_46830180();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_5879_46829080;

SignalI abus__w_46849820_wdec_5879_46829080_channel__a1_5860_46812800______58_84_43395440______58_840_51546480;

SignalI makeabus__w_46849820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_46849820_wdec_5879_46829080_channel__a1_5860_46812800______58_84_43395440______58_840_51546480 = signalI;
   signalI->owner = (Object)wdec_5879_46829080;
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

Scope makewdec_5879_46829080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5879_46829080 = scope;
   scope->owner = (Object)channel__a1_5860_46812800;
   scope->name = "wdec:79";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_46849820();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __51809460;

Behavior make__51809460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51809460 = behavior;
   behavior->owner = (Object)channel__a1_5860_46812800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_47661000_channel__a1_5860_46812800______58_84_43395440______58_840_51546480);
   reg__0_47661000_channel__a1_5860_46812800______58_84_43395440______58_840_51546480->num_any += 1;
   reg__0_47661000_channel__a1_5860_46812800______58_84_43395440______58_840_51546480->any = realloc(reg__0_47661000_channel__a1_5860_46812800______58_84_43395440______58_840_51546480->any,reg__0_47661000_channel__a1_5860_46812800______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
reg__0_47661000_channel__a1_5860_46812800______58_84_43395440______58_840_51546480->any[reg__0_47661000_channel__a1_5860_46812800______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__51809800();

   return behavior;
}

Behavior __51809220;

Behavior make__51809220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51809220 = behavior;
   behavior->owner = (Object)channel__a1_5860_46812800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5862_48321100______58_84_43395440______58_840_51546480);
   _5862_48321100______58_84_43395440______58_840_51546480->num_any += 1;
   _5862_48321100______58_84_43395440______58_840_51546480->any = realloc(_5862_48321100______58_84_43395440______58_840_51546480->any,_5862_48321100______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
_5862_48321100______58_84_43395440______58_840_51546480->any[_5862_48321100______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__51809380();

   return behavior;
}

Scope makechannel__a1_5860_46812800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__a1_5860_46812800 = scope;
   scope->owner = (Object)_____58_84_43395440;
   scope->name = "channel_a1:60";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_47661000();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_5861_46812380();
   scope->scopes[1] = makeraddr_5863_46811240();
   scope->scopes[2] = makewaddr_5866_46810580();
   scope->scopes[3] = makerinc_5869_46809980();
   scope->scopes[4] = makewinc_5872_46833580();
   scope->scopes[5] = makerdec_5875_46831860();
   scope->scopes[6] = makewdec_5879_46829080();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51809460();
   scope->behaviors[1] = make__51809220();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __51510300;

Behavior make__51510300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51510300 = behavior;
   behavior->owner = (Object)_____58_84_43395440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_47886980______58_84_43395440______58_840_51546480);
   clk_47886980______58_84_43395440______58_840_51546480->num_pos += 1;
   clk_47886980______58_84_43395440______58_840_51546480->pos = realloc(clk_47886980______58_84_43395440______58_840_51546480->pos,clk_47886980______58_84_43395440______58_840_51546480->num_pos*sizeof(Object));
clk_47886980______58_84_43395440______58_840_51546480->pos[clk_47886980______58_84_43395440______58_840_51546480->num_pos-1] = (Object)behavior;
   behavior->block = make__51239320();

   return behavior;
}

Behavior __51547240;

Behavior make__51547240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51547240 = behavior;
   register_timed_behavior(behavior);
   behavior->owner = (Object)_____58_84_43395440;
   behavior->activated = 0;
   behavior->timed = 1;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__51509960();

   return behavior;
}

Behavior __51622360;

Behavior make__51622360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51622360 = behavior;
   behavior->owner = (Object)_____58_84_43395440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 4;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_47886980______58_84_43395440______58_840_51546480);
   clk_47886980______58_84_43395440______58_840_51546480->num_any += 1;
   clk_47886980______58_84_43395440______58_840_51546480->any = realloc(clk_47886980______58_84_43395440______58_840_51546480->any,clk_47886980______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
clk_47886980______58_84_43395440______58_840_51546480->any[clk_47886980______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_47886960______58_84_43395440______58_840_51546480);
   rst_47886960______58_84_43395440______58_840_51546480->num_any += 1;
   rst_47886960______58_84_43395440______58_840_51546480->any = realloc(rst_47886960______58_84_43395440______58_840_51546480->any,rst_47886960______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
rst_47886960______58_84_43395440______58_840_51546480->any[rst_47886960______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,req_47886940______58_84_43395440______58_840_51546480);
   req_47886940______58_84_43395440______58_840_51546480->num_any += 1;
   req_47886940______58_84_43395440______58_840_51546480->any = realloc(req_47886940______58_84_43395440______58_840_51546480->any,req_47886940______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
req_47886940______58_84_43395440______58_840_51546480->any[req_47886940______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,fill_47886880______58_84_43395440______58_840_51546480);
   fill_47886880______58_84_43395440______58_840_51546480->num_any += 1;
   fill_47886880______58_84_43395440______58_840_51546480->any = realloc(fill_47886880______58_84_43395440______58_840_51546480->any,fill_47886880______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
fill_47886880______58_84_43395440______58_840_51546480->any[fill_47886880______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__51603400();

   return behavior;
}

Behavior __51621820;

Behavior make__51621820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51621820 = behavior;
   behavior->owner = (Object)_____58_84_43395440;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__0_51192480_layer0_58_840_51003420______58_84_43395440______58_840_51546480);
   ack__0_51192480_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any += 1;
   ack__0_51192480_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any = realloc(ack__0_51192480_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any,ack__0_51192480_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any*sizeof(Object));
ack__0_51192480_layer0_58_840_51003420______58_84_43395440______58_840_51546480->any[ack__0_51192480_layer0_58_840_51003420______58_84_43395440______58_840_51546480->num_any-1] = (Object)behavior;
   behavior->block = make__51603220();

   return behavior;
}

Scope make_____58_84_43395440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   _____58_84_43395440 = scope;
   scope->owner = (Object)_____58_840_51546480;
   scope->name = "__:T";
   scope->num_systemIs = 1;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makelayer0_51192180();
   scope->num_inners = 12;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeclk_47886980();
   scope->inners[1] = makerst_47886960();
   scope->inners[2] = makereq_47886940();
   scope->inners[3] = makeack__0_47886920();
   scope->inners[4] = makeack__1_47886900();
   scope->inners[5] = makefill_47886880();
   scope->inners[6] = make_5817_47886840();
   scope->inners[7] = make_5818_47886720();
   scope->inners[8] = make_5819_47966200();
   scope->inners[9] = make_5832_48033360();
   scope->inners[10] = make_5833_48171780();
   scope->inners[11] = make_5862_48321100();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__x_581_43394860();
   scope->scopes[1] = makechannel__a0_5830_48384220();
   scope->scopes[2] = makechannel__a1_5860_46812800();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51510300();
   scope->behaviors[1] = make__51547240();
   scope->behaviors[2] = make__51622360();
   scope->behaviors[3] = make__51621820();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT make_____58_840_51546480() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   _____58_840_51546480 = systemT;
systemT->owner = NULL;
   systemT->name = "__:T0";
   systemT->num_inputs = 0;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->num_outputs = 0;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make_____58_84_43395440();

   return systemT;
}