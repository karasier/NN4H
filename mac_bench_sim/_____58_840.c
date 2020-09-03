#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT _____58_840_50200720;

Block __49940580;

Block __49940380;

Block __49940000;

void code__49940000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50527560(),_5818_47850800______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__49940000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49940000 = block;
   block->owner = (Object)__49940380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49940000;

   return block;
};

void code__49940380() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_47607820______58_84_44701400______58_840_50200720->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50527660();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49940000();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50527440(),_5817_47850960______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__49940380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49940380 = block;
   block->owner = (Object)__49940580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49940380;

   return block;
};

Block __49939020;

Block __49938820;

Block __49979320;

void code__49979320() {
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
                  src0 = _5818_47850800______58_84_44701400______58_840_50200720->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__50526900();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5818_47850800______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50526760(),_5817_47850960______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50526700(),_5819_44923000______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__49979320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49979320 = block;
   block->owner = (Object)__49938820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49979320;

   return block;
};

void code__49938820() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_47607820______58_84_44701400______58_840_50200720->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50527100();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49979320();
   }
      }
   }
}

Block make__49938820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49938820 = block;
   block->owner = (Object)__49939020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49938820;

   return block;
};

void code__49939020() {
 code__49938820();
}

Block make__49939020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49939020 = block;
   block->owner = (Object)__49940580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49939020;

   return block;
};

void code__49940580() {
 code__49940380();
   {
      Value cond = fill_47607620______58_84_44701400______58_840_50200720->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49939020();
   }
      }
   }
}

Block make__49940580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49940580 = block;
   block->owner = (Object)__50159060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49940580;

   return block;
};

Block __50158940;

void code__50158940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50526640(),clk_47607860______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50526580(),rst_47607820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50526520(),req_47607760______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50526460(),fill_47607620______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50200840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50526400(),rst_47607820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50200840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50526340(),clk_47607860______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50200840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50526280(),clk_47607860______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50526220(),rst_47607820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50526160(),fill_47607620______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50200840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50526100(),clk_47607860______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50200840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50526040(),clk_47607860______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50200840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50525980(),clk_47607860______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50200840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50525920(),clk_47607860______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50200840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50525840(),clk_47607860______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50200840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50525740(),clk_47607860______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50200840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50525680(),clk_47607860______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50200840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50525580(),clk_47607860______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50200840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50525480(),clk_47607860______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50200840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50525380(),clk_47607860______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50200840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50525260(),clk_47607860______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50200840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50525160(),clk_47607860______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50200840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50525000(),clk_47607860______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50200840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50524940(),clk_47607860______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50200840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50524880(),clk_47607860______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50200840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50524680(),clk_47607860______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50200840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50524620(),clk_47607860______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50200840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50524540(),clk_47607860______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50200840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50524480(),clk_47607860______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50200840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50524400(),clk_47607860______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50200840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50524300(),fill_47607620______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50524240(),clk_47607860______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50524180(),clk_47607860______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50524120(),req_47607760______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50200840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50524060(),clk_47607860______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50200840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50524000(),clk_47607860______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50523940(),req_47607760______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50523880(),clk_47607860______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50200840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50523820(),clk_47607860______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50200840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50523760(),clk_47607860______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50200840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50523700(),clk_47607860______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50200840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50523620(),clk_47607860______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50200840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50523540(),clk_47607860______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50200840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50523480(),clk_47607860______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50200840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50523400(),clk_47607860______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50200840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50523280(),clk_47607860______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50200840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50523200(),clk_47607860______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50200840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50523140(),clk_47607860______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50200840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50523040(),clk_47607860______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50200840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50522940(),clk_47607860______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50200840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50522860(),clk_47607860______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50200840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50522780(),clk_47607860______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50200840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50522660(),clk_47607860______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50200840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50522400(),clk_47607860______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50200840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50521920(),clk_47607860______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50200840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50521840(),clk_47607860______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50200840);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50521780(),clk_47607860______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50200840);
}

Block make__50158940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50158940 = block;
   block->owner = (Object)__50200840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50158940;

   return block;
};

Block __50254640;

void code__50254640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_47607860______58_84_44701400______58_840_50200720->c_value,clk_49942380_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_47607820______58_84_44701400______58_840_50200720->c_value,rst_49942360_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(fill_47607620______58_84_44701400______58_840_50200720->c_value,fill_49942340_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(req_47607760______58_84_44701400______58_840_50200720->c_value,req_49942320_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__50254640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50254640 = block;
   block->owner = (Object)__50250300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50254640;

   return block;
};

Block __50254580;

void code__50254580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__0_49942280_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->c_value,ack__0_47607640______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__50254580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50254580 = block;
   block->owner = (Object)__50250000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50254580;

   return block;
};

Block __47457980;

Block __42765160;

void code__42765160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_46768400_channel__x_581_44700320______58_84_44701400______58_840_50200720->c_value,make_ref_rangeS(mem_47076140_channel__x_581_44700320______58_84_44701400______58_840_50200720,value2integer(abus__w_46768180_channel__x_581_44700320______58_84_44701400______58_840_50200720->c_value),value2integer(abus__w_46768180_channel__x_581_44700320______58_84_44701400______58_840_50200720->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__42765160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __42765160 = block;
   block->owner = (Object)__47457980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__42765160;

   return block;
};

void code__47457980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_47076140_channel__x_581_44700320______58_84_44701400______58_840_50200720->c_value;
            idx = value2integer(abus__r_46768280_channel__x_581_44700320______58_84_44701400______58_840_50200720->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_45331480_channel__x_581_44700320______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_44889040_channel__x_581_44700320______58_84_44701400______58_840_50200720->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__42765160();
   }
      }
   }
}

Block make__47457980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47457980 = block;
   block->owner = (Object)__47045820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47457980;

   return block;
};

Block __50289960;

void code__50289960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_45331480_channel__x_581_44700320______58_84_44701400______58_840_50200720->c_value,_5815_47851300______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__50289960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50289960 = block;
   block->owner = (Object)__50289780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50289960;

   return block;
};

Block __50289740;

void code__50289740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5815_47851300______58_84_44701400______58_840_50200720->c_value,dbus__r_45331480_channel__x_581_44700320______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__50289740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50289740 = block;
   block->owner = (Object)__50289500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50289740;

   return block;
};

Block __50289120;

void code__50289120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_44889100_channel__x_581_44700320______58_84_44701400______58_840_50200720->c_value,_5813_47851280______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__50289120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50289120 = block;
   block->owner = (Object)__50288960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50289120;

   return block;
};

Block __50288920;

void code__50288920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5813_47851280______58_84_44701400______58_840_50200720->c_value,trig__r_44889100_channel__x_581_44700320______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__50288920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50288920 = block;
   block->owner = (Object)__50288620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50288920;

   return block;
};

Block __50287860;

void code__50287860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_46768280_channel__x_581_44700320______58_84_44701400______58_840_50200720->c_value,_5814_47851000______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__50287860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50287860 = block;
   block->owner = (Object)__50287680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50287860;

   return block;
};

Block __50287640;

void code__50287640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5814_47851000______58_84_44701400______58_840_50200720->c_value,abus__r_46768280_channel__x_581_44700320______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__50287640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50287640 = block;
   block->owner = (Object)__50287460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50287640;

   return block;
};

Block __50287060;

void code__50287060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_44889040_channel__x_581_44700320______58_84_44701400______58_840_50200720->c_value,_5817_47850960______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__50287060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50287060 = block;
   block->owner = (Object)__50286840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50287060;

   return block;
};

Block __50286800;

void code__50286800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5817_47850960______58_84_44701400______58_840_50200720->c_value,trig__w_44889040_channel__x_581_44700320______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__50286800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50286800 = block;
   block->owner = (Object)__50286580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50286800;

   return block;
};

Block __50286140;

void code__50286140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_46768180_channel__x_581_44700320______58_84_44701400______58_840_50200720->c_value,_5818_47850800______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__50286140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50286140 = block;
   block->owner = (Object)__50285960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50286140;

   return block;
};

Block __50285900;

void code__50285900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5818_47850800______58_84_44701400______58_840_50200720->c_value,abus__w_46768180_channel__x_581_44700320______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__50285900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50285900 = block;
   block->owner = (Object)__50285660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50285900;

   return block;
};

Block __50285240;

void code__50285240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_46768400_channel__x_581_44700320______58_84_44701400______58_840_50200720->c_value,_5819_44923000______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__50285240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50285240 = block;
   block->owner = (Object)__50285020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50285240;

   return block;
};

Block __50284980;

void code__50284980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5819_44923000______58_84_44701400______58_840_50200720->c_value,dbus__w_46768400_channel__x_581_44700320______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__50284980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50284980 = block;
   block->owner = (Object)__50284800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50284980;

   return block;
};

Block __50282520;

void code__50282520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_47201360_channel__a0_5830_47045620______58_84_44701400______58_840_50200720->c_value,_5832_46994000______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__50282520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50282520 = block;
   block->owner = (Object)__50306800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50282520;

   return block;
};

Block __50306680;

void code__50306680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5832_46994000______58_84_44701400______58_840_50200720->c_value,reg__0_47201360_channel__a0_5830_47045620______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__50306680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50306680 = block;
   block->owner = (Object)__50306440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50306680;

   return block;
};

Block __50306060;

void code__50306060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_47201360_channel__a0_5830_47045620______58_84_44701400______58_840_50200720->c_value,_5840_47278620______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__50306060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50306060 = block;
   block->owner = (Object)__50305900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50306060;

   return block;
};

Block __50305860;

void code__50305860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5840_47278620______58_84_44701400______58_840_50200720->c_value,reg__0_47201360_channel__a0_5830_47045620______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__50305860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50305860 = block;
   block->owner = (Object)__50305700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50305860;

   return block;
};

Block __50303480;

void code__50303480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_47043360_rinc_5839_47043740_channel__a0_5830_47045620______58_84_44701400______58_840_50200720->c_value,_5841_47278480______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__50303480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50303480 = block;
   block->owner = (Object)__50303320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50303480;

   return block;
};

Block __50303280;

void code__50303280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5841_47278480______58_84_44701400______58_840_50200720->c_value,abus__r_47043360_rinc_5839_47043740_channel__a0_5830_47045620______58_84_44701400______58_840_50200720);
      set_value_pos(pool_state);
   }
}

Block make__50303280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50303280 = block;
   block->owner = (Object)__50303120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50303280;

   return block;
};

Value make__50527660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50527560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50527440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50527100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50526900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50526760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50526700() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50526640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50526580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50526520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50526460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50526400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50526340() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50526280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50526220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50526160() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50526100() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50526040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50525980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50525920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50525840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50525740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50525680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50525580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50525480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50525380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50525260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50525160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50525000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50524940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50524880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50524680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50524620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50524540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50524480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50524400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50524300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50524240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50524180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50524120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50524060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50524000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50523940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50523880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50523820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50523760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50523700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50523620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50523540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50523480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50523400() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50523280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50523200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50523140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50523040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50522940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50522860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50522780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50522660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50522400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50521920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50521840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50521780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope _____58_84_44701400;

SignalI clk_47607860______58_84_44701400______58_840_50200720;

SignalI makeclk_47607860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_47607860______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)_____58_84_44701400;
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

SignalI rst_47607820______58_84_44701400______58_840_50200720;

SignalI makerst_47607820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_47607820______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)_____58_84_44701400;
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

SignalI req_47607760______58_84_44701400______58_840_50200720;

SignalI makereq_47607760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_47607760______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)_____58_84_44701400;
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

SignalI ack__0_47607640______58_84_44701400______58_840_50200720;

SignalI makeack__0_47607640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__0_47607640______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)_____58_84_44701400;
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

SignalI fill_47607620______58_84_44701400______58_840_50200720;

SignalI makefill_47607620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_47607620______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)_____58_84_44701400;
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

SignalI _5815_47851300______58_84_44701400______58_840_50200720;

SignalI make_5815_47851300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5815_47851300______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)_____58_84_44701400;
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

SignalI _5813_47851280______58_84_44701400______58_840_50200720;

SignalI make_5813_47851280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5813_47851280______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)_____58_84_44701400;
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

SignalI _5814_47851000______58_84_44701400______58_840_50200720;

SignalI make_5814_47851000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5814_47851000______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)_____58_84_44701400;
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

SignalI _5817_47850960______58_84_44701400______58_840_50200720;

SignalI make_5817_47850960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5817_47850960______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)_____58_84_44701400;
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

SignalI _5818_47850800______58_84_44701400______58_840_50200720;

SignalI make_5818_47850800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5818_47850800______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)_____58_84_44701400;
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

SignalI _5819_44923000______58_84_44701400______58_840_50200720;

SignalI make_5819_44923000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5819_44923000______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)_____58_84_44701400;
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

SignalI _5832_46994000______58_84_44701400______58_840_50200720;

SignalI make_5832_46994000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5832_46994000______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)_____58_84_44701400;
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

SignalI _5840_47278620______58_84_44701400______58_840_50200720;

SignalI make_5840_47278620() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5840_47278620______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)_____58_84_44701400;
   signalI->name = ":40";
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

SignalI _5841_47278480______58_84_44701400______58_840_50200720;

SignalI make_5841_47278480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5841_47278480______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)_____58_84_44701400;
   signalI->name = ":41";
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

SystemI layer__output_49942140;

SystemI makelayer__output_49942140() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer__output_49942140 = systemI;
   systemI->owner = (Object)_____58_84_44701400;
   systemI->name = "layer_output";
   systemI->system = layer__output_58_840_49944820;

   return systemI;
};

Scope channel__x_581_44700320;

SignalI trig__r_44889100_channel__x_581_44700320______58_84_44701400______58_840_50200720;

SignalI maketrig__r_44889100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_44889100_channel__x_581_44700320______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)channel__x_581_44700320;
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

SignalI trig__w_44889040_channel__x_581_44700320______58_84_44701400______58_840_50200720;

SignalI maketrig__w_44889040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_44889040_channel__x_581_44700320______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)channel__x_581_44700320;
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

SignalI dbus__r_45331480_channel__x_581_44700320______58_84_44701400______58_840_50200720;

SignalI makedbus__r_45331480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_45331480_channel__x_581_44700320______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)channel__x_581_44700320;
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

SignalI dbus__w_46768400_channel__x_581_44700320______58_84_44701400______58_840_50200720;

SignalI makedbus__w_46768400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_46768400_channel__x_581_44700320______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)channel__x_581_44700320;
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

SignalI abus__r_46768280_channel__x_581_44700320______58_84_44701400______58_840_50200720;

SignalI makeabus__r_46768280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_46768280_channel__x_581_44700320______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)channel__x_581_44700320;
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

SignalI abus__w_46768180_channel__x_581_44700320______58_84_44701400______58_840_50200720;

SignalI makeabus__w_46768180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_46768180_channel__x_581_44700320______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)channel__x_581_44700320;
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

SignalI mem_47076140_channel__x_581_44700320______58_84_44701400______58_840_50200720;

SignalI makemem_47076140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_47076140_channel__x_581_44700320______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)channel__x_581_44700320;
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

Scope raddr_582_44698360;

Scope makeraddr_582_44698360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_582_44698360 = scope;
   scope->owner = (Object)channel__x_581_44700320;
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

Scope waddr_587_44697500;

Scope makewaddr_587_44697500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_587_44697500 = scope;
   scope->owner = (Object)channel__x_581_44700320;
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

Scope rinc_5812_44696700;

Scope makerinc_5812_44696700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5812_44696700 = scope;
   scope->owner = (Object)channel__x_581_44700320;
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

Scope winc_5816_44695720;

Scope makewinc_5816_44695720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5816_44695720 = scope;
   scope->owner = (Object)channel__x_581_44700320;
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

Scope rdec_5820_44891380;

Scope makerdec_5820_44891380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5820_44891380 = scope;
   scope->owner = (Object)channel__x_581_44700320;
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

Scope wdec_5825_44889960;

Scope makewdec_5825_44889960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5825_44889960 = scope;
   scope->owner = (Object)channel__x_581_44700320;
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

Behavior __47045820;

Behavior make__47045820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47045820 = behavior;
   behavior->owner = (Object)channel__x_581_44700320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_47607860______58_84_44701400______58_840_50200720);
   clk_47607860______58_84_44701400______58_840_50200720->num_neg += 1;
   clk_47607860______58_84_44701400______58_840_50200720->neg = realloc(clk_47607860______58_84_44701400______58_840_50200720->neg,clk_47607860______58_84_44701400______58_840_50200720->num_neg*sizeof(Object));
clk_47607860______58_84_44701400______58_840_50200720->neg[clk_47607860______58_84_44701400______58_840_50200720->num_neg-1] = (Object)behavior;
   behavior->block = make__47457980();

   return behavior;
}

Behavior __50289780;

Behavior make__50289780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50289780 = behavior;
   behavior->owner = (Object)channel__x_581_44700320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_45331480_channel__x_581_44700320______58_84_44701400______58_840_50200720);
   dbus__r_45331480_channel__x_581_44700320______58_84_44701400______58_840_50200720->num_any += 1;
   dbus__r_45331480_channel__x_581_44700320______58_84_44701400______58_840_50200720->any = realloc(dbus__r_45331480_channel__x_581_44700320______58_84_44701400______58_840_50200720->any,dbus__r_45331480_channel__x_581_44700320______58_84_44701400______58_840_50200720->num_any*sizeof(Object));
dbus__r_45331480_channel__x_581_44700320______58_84_44701400______58_840_50200720->any[dbus__r_45331480_channel__x_581_44700320______58_84_44701400______58_840_50200720->num_any-1] = (Object)behavior;
   behavior->block = make__50289960();

   return behavior;
}

Behavior __50289500;

Behavior make__50289500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50289500 = behavior;
   behavior->owner = (Object)channel__x_581_44700320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5815_47851300______58_84_44701400______58_840_50200720);
   _5815_47851300______58_84_44701400______58_840_50200720->num_any += 1;
   _5815_47851300______58_84_44701400______58_840_50200720->any = realloc(_5815_47851300______58_84_44701400______58_840_50200720->any,_5815_47851300______58_84_44701400______58_840_50200720->num_any*sizeof(Object));
_5815_47851300______58_84_44701400______58_840_50200720->any[_5815_47851300______58_84_44701400______58_840_50200720->num_any-1] = (Object)behavior;
   behavior->block = make__50289740();

   return behavior;
}

Behavior __50288960;

Behavior make__50288960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50288960 = behavior;
   behavior->owner = (Object)channel__x_581_44700320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_44889100_channel__x_581_44700320______58_84_44701400______58_840_50200720);
   trig__r_44889100_channel__x_581_44700320______58_84_44701400______58_840_50200720->num_any += 1;
   trig__r_44889100_channel__x_581_44700320______58_84_44701400______58_840_50200720->any = realloc(trig__r_44889100_channel__x_581_44700320______58_84_44701400______58_840_50200720->any,trig__r_44889100_channel__x_581_44700320______58_84_44701400______58_840_50200720->num_any*sizeof(Object));
trig__r_44889100_channel__x_581_44700320______58_84_44701400______58_840_50200720->any[trig__r_44889100_channel__x_581_44700320______58_84_44701400______58_840_50200720->num_any-1] = (Object)behavior;
   behavior->block = make__50289120();

   return behavior;
}

Behavior __50288620;

Behavior make__50288620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50288620 = behavior;
   behavior->owner = (Object)channel__x_581_44700320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5813_47851280______58_84_44701400______58_840_50200720);
   _5813_47851280______58_84_44701400______58_840_50200720->num_any += 1;
   _5813_47851280______58_84_44701400______58_840_50200720->any = realloc(_5813_47851280______58_84_44701400______58_840_50200720->any,_5813_47851280______58_84_44701400______58_840_50200720->num_any*sizeof(Object));
_5813_47851280______58_84_44701400______58_840_50200720->any[_5813_47851280______58_84_44701400______58_840_50200720->num_any-1] = (Object)behavior;
   behavior->block = make__50288920();

   return behavior;
}

Behavior __50287680;

Behavior make__50287680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50287680 = behavior;
   behavior->owner = (Object)channel__x_581_44700320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_46768280_channel__x_581_44700320______58_84_44701400______58_840_50200720);
   abus__r_46768280_channel__x_581_44700320______58_84_44701400______58_840_50200720->num_any += 1;
   abus__r_46768280_channel__x_581_44700320______58_84_44701400______58_840_50200720->any = realloc(abus__r_46768280_channel__x_581_44700320______58_84_44701400______58_840_50200720->any,abus__r_46768280_channel__x_581_44700320______58_84_44701400______58_840_50200720->num_any*sizeof(Object));
abus__r_46768280_channel__x_581_44700320______58_84_44701400______58_840_50200720->any[abus__r_46768280_channel__x_581_44700320______58_84_44701400______58_840_50200720->num_any-1] = (Object)behavior;
   behavior->block = make__50287860();

   return behavior;
}

Behavior __50287460;

Behavior make__50287460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50287460 = behavior;
   behavior->owner = (Object)channel__x_581_44700320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5814_47851000______58_84_44701400______58_840_50200720);
   _5814_47851000______58_84_44701400______58_840_50200720->num_any += 1;
   _5814_47851000______58_84_44701400______58_840_50200720->any = realloc(_5814_47851000______58_84_44701400______58_840_50200720->any,_5814_47851000______58_84_44701400______58_840_50200720->num_any*sizeof(Object));
_5814_47851000______58_84_44701400______58_840_50200720->any[_5814_47851000______58_84_44701400______58_840_50200720->num_any-1] = (Object)behavior;
   behavior->block = make__50287640();

   return behavior;
}

Behavior __50286840;

Behavior make__50286840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50286840 = behavior;
   behavior->owner = (Object)channel__x_581_44700320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_44889040_channel__x_581_44700320______58_84_44701400______58_840_50200720);
   trig__w_44889040_channel__x_581_44700320______58_84_44701400______58_840_50200720->num_any += 1;
   trig__w_44889040_channel__x_581_44700320______58_84_44701400______58_840_50200720->any = realloc(trig__w_44889040_channel__x_581_44700320______58_84_44701400______58_840_50200720->any,trig__w_44889040_channel__x_581_44700320______58_84_44701400______58_840_50200720->num_any*sizeof(Object));
trig__w_44889040_channel__x_581_44700320______58_84_44701400______58_840_50200720->any[trig__w_44889040_channel__x_581_44700320______58_84_44701400______58_840_50200720->num_any-1] = (Object)behavior;
   behavior->block = make__50287060();

   return behavior;
}

Behavior __50286580;

Behavior make__50286580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50286580 = behavior;
   behavior->owner = (Object)channel__x_581_44700320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5817_47850960______58_84_44701400______58_840_50200720);
   _5817_47850960______58_84_44701400______58_840_50200720->num_any += 1;
   _5817_47850960______58_84_44701400______58_840_50200720->any = realloc(_5817_47850960______58_84_44701400______58_840_50200720->any,_5817_47850960______58_84_44701400______58_840_50200720->num_any*sizeof(Object));
_5817_47850960______58_84_44701400______58_840_50200720->any[_5817_47850960______58_84_44701400______58_840_50200720->num_any-1] = (Object)behavior;
   behavior->block = make__50286800();

   return behavior;
}

Behavior __50285960;

Behavior make__50285960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50285960 = behavior;
   behavior->owner = (Object)channel__x_581_44700320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_46768180_channel__x_581_44700320______58_84_44701400______58_840_50200720);
   abus__w_46768180_channel__x_581_44700320______58_84_44701400______58_840_50200720->num_any += 1;
   abus__w_46768180_channel__x_581_44700320______58_84_44701400______58_840_50200720->any = realloc(abus__w_46768180_channel__x_581_44700320______58_84_44701400______58_840_50200720->any,abus__w_46768180_channel__x_581_44700320______58_84_44701400______58_840_50200720->num_any*sizeof(Object));
abus__w_46768180_channel__x_581_44700320______58_84_44701400______58_840_50200720->any[abus__w_46768180_channel__x_581_44700320______58_84_44701400______58_840_50200720->num_any-1] = (Object)behavior;
   behavior->block = make__50286140();

   return behavior;
}

Behavior __50285660;

Behavior make__50285660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50285660 = behavior;
   behavior->owner = (Object)channel__x_581_44700320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5818_47850800______58_84_44701400______58_840_50200720);
   _5818_47850800______58_84_44701400______58_840_50200720->num_any += 1;
   _5818_47850800______58_84_44701400______58_840_50200720->any = realloc(_5818_47850800______58_84_44701400______58_840_50200720->any,_5818_47850800______58_84_44701400______58_840_50200720->num_any*sizeof(Object));
_5818_47850800______58_84_44701400______58_840_50200720->any[_5818_47850800______58_84_44701400______58_840_50200720->num_any-1] = (Object)behavior;
   behavior->block = make__50285900();

   return behavior;
}

Behavior __50285020;

Behavior make__50285020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50285020 = behavior;
   behavior->owner = (Object)channel__x_581_44700320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_46768400_channel__x_581_44700320______58_84_44701400______58_840_50200720);
   dbus__w_46768400_channel__x_581_44700320______58_84_44701400______58_840_50200720->num_any += 1;
   dbus__w_46768400_channel__x_581_44700320______58_84_44701400______58_840_50200720->any = realloc(dbus__w_46768400_channel__x_581_44700320______58_84_44701400______58_840_50200720->any,dbus__w_46768400_channel__x_581_44700320______58_84_44701400______58_840_50200720->num_any*sizeof(Object));
dbus__w_46768400_channel__x_581_44700320______58_84_44701400______58_840_50200720->any[dbus__w_46768400_channel__x_581_44700320______58_84_44701400______58_840_50200720->num_any-1] = (Object)behavior;
   behavior->block = make__50285240();

   return behavior;
}

Behavior __50284800;

Behavior make__50284800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50284800 = behavior;
   behavior->owner = (Object)channel__x_581_44700320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5819_44923000______58_84_44701400______58_840_50200720);
   _5819_44923000______58_84_44701400______58_840_50200720->num_any += 1;
   _5819_44923000______58_84_44701400______58_840_50200720->any = realloc(_5819_44923000______58_84_44701400______58_840_50200720->any,_5819_44923000______58_84_44701400______58_840_50200720->num_any*sizeof(Object));
_5819_44923000______58_84_44701400______58_840_50200720->any[_5819_44923000______58_84_44701400______58_840_50200720->num_any-1] = (Object)behavior;
   behavior->block = make__50284980();

   return behavior;
}

Scope makechannel__x_581_44700320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__x_581_44700320 = scope;
   scope->owner = (Object)_____58_84_44701400;
   scope->name = "channel_x:1";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_44889100();
   scope->inners[1] = maketrig__w_44889040();
   scope->inners[2] = makedbus__r_45331480();
   scope->inners[3] = makedbus__w_46768400();
   scope->inners[4] = makeabus__r_46768280();
   scope->inners[5] = makeabus__w_46768180();
   scope->inners[6] = makemem_47076140();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_582_44698360();
   scope->scopes[1] = makewaddr_587_44697500();
   scope->scopes[2] = makerinc_5812_44696700();
   scope->scopes[3] = makewinc_5816_44695720();
   scope->scopes[4] = makerdec_5820_44891380();
   scope->scopes[5] = makewdec_5825_44889960();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47045820();
   scope->behaviors[1] = make__50289780();
   scope->behaviors[2] = make__50289500();
   scope->behaviors[3] = make__50288960();
   scope->behaviors[4] = make__50288620();
   scope->behaviors[5] = make__50287680();
   scope->behaviors[6] = make__50287460();
   scope->behaviors[7] = make__50286840();
   scope->behaviors[8] = make__50286580();
   scope->behaviors[9] = make__50285960();
   scope->behaviors[10] = make__50285660();
   scope->behaviors[11] = make__50285020();
   scope->behaviors[12] = make__50284800();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__a0_5830_47045620;

SignalI reg__0_47201360_channel__a0_5830_47045620______58_84_44701400______58_840_50200720;

SignalI makereg__0_47201360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_47201360_channel__a0_5830_47045620______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)channel__a0_5830_47045620;
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

Scope anum_5831_47045320;

Scope makeanum_5831_47045320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_5831_47045320 = scope;
   scope->owner = (Object)channel__a0_5830_47045620;
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

Scope raddr_5833_47044900;

Scope makeraddr_5833_47044900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5833_47044900 = scope;
   scope->owner = (Object)channel__a0_5830_47045620;
   scope->name = "raddr:33";
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

Scope waddr_5836_47044320;

Scope makewaddr_5836_47044320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5836_47044320 = scope;
   scope->owner = (Object)channel__a0_5830_47045620;
   scope->name = "waddr:36";
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

Scope rinc_5839_47043740;

SignalI abus__r_47043360_rinc_5839_47043740_channel__a0_5830_47045620______58_84_44701400______58_840_50200720;

SignalI makeabus__r_47043360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47043360_rinc_5839_47043740_channel__a0_5830_47045620______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)rinc_5839_47043740;
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

Behavior __50303320;

Behavior make__50303320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50303320 = behavior;
   behavior->owner = (Object)rinc_5839_47043740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_47043360_rinc_5839_47043740_channel__a0_5830_47045620______58_84_44701400______58_840_50200720);
   abus__r_47043360_rinc_5839_47043740_channel__a0_5830_47045620______58_84_44701400______58_840_50200720->num_any += 1;
   abus__r_47043360_rinc_5839_47043740_channel__a0_5830_47045620______58_84_44701400______58_840_50200720->any = realloc(abus__r_47043360_rinc_5839_47043740_channel__a0_5830_47045620______58_84_44701400______58_840_50200720->any,abus__r_47043360_rinc_5839_47043740_channel__a0_5830_47045620______58_84_44701400______58_840_50200720->num_any*sizeof(Object));
abus__r_47043360_rinc_5839_47043740_channel__a0_5830_47045620______58_84_44701400______58_840_50200720->any[abus__r_47043360_rinc_5839_47043740_channel__a0_5830_47045620______58_84_44701400______58_840_50200720->num_any-1] = (Object)behavior;
   behavior->block = make__50303480();

   return behavior;
}

Behavior __50303120;

Behavior make__50303120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50303120 = behavior;
   behavior->owner = (Object)rinc_5839_47043740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5841_47278480______58_84_44701400______58_840_50200720);
   _5841_47278480______58_84_44701400______58_840_50200720->num_any += 1;
   _5841_47278480______58_84_44701400______58_840_50200720->any = realloc(_5841_47278480______58_84_44701400______58_840_50200720->any,_5841_47278480______58_84_44701400______58_840_50200720->num_any*sizeof(Object));
_5841_47278480______58_84_44701400______58_840_50200720->any[_5841_47278480______58_84_44701400______58_840_50200720->num_any-1] = (Object)behavior;
   behavior->block = make__50303280();

   return behavior;
}

Scope makerinc_5839_47043740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5839_47043740 = scope;
   scope->owner = (Object)channel__a0_5830_47045620;
   scope->name = "rinc:39";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47043360();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50303320();
   scope->behaviors[1] = make__50303120();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5842_47042980;

SignalI abus__w_47042600_winc_5842_47042980_channel__a0_5830_47045620______58_84_44701400______58_840_50200720;

SignalI makeabus__w_47042600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47042600_winc_5842_47042980_channel__a0_5830_47045620______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)winc_5842_47042980;
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

Scope makewinc_5842_47042980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5842_47042980 = scope;
   scope->owner = (Object)channel__a0_5830_47045620;
   scope->name = "winc:42";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47042600();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5845_47042460;

SignalI abus__r_47042000_rdec_5845_47042460_channel__a0_5830_47045620______58_84_44701400______58_840_50200720;

SignalI makeabus__r_47042000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47042000_rdec_5845_47042460_channel__a0_5830_47045620______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)rdec_5845_47042460;
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

Scope makerdec_5845_47042460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5845_47042460 = scope;
   scope->owner = (Object)channel__a0_5830_47045620;
   scope->name = "rdec:45";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47042000();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_5849_47041880;

SignalI abus__w_47039340_wdec_5849_47041880_channel__a0_5830_47045620______58_84_44701400______58_840_50200720;

SignalI makeabus__w_47039340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47039340_wdec_5849_47041880_channel__a0_5830_47045620______58_84_44701400______58_840_50200720 = signalI;
   signalI->owner = (Object)wdec_5849_47041880;
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

Scope makewdec_5849_47041880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5849_47041880 = scope;
   scope->owner = (Object)channel__a0_5830_47045620;
   scope->name = "wdec:49";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47039340();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __50306800;

Behavior make__50306800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50306800 = behavior;
   behavior->owner = (Object)channel__a0_5830_47045620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_47201360_channel__a0_5830_47045620______58_84_44701400______58_840_50200720);
   reg__0_47201360_channel__a0_5830_47045620______58_84_44701400______58_840_50200720->num_any += 1;
   reg__0_47201360_channel__a0_5830_47045620______58_84_44701400______58_840_50200720->any = realloc(reg__0_47201360_channel__a0_5830_47045620______58_84_44701400______58_840_50200720->any,reg__0_47201360_channel__a0_5830_47045620______58_84_44701400______58_840_50200720->num_any*sizeof(Object));
reg__0_47201360_channel__a0_5830_47045620______58_84_44701400______58_840_50200720->any[reg__0_47201360_channel__a0_5830_47045620______58_84_44701400______58_840_50200720->num_any-1] = (Object)behavior;
   behavior->block = make__50282520();

   return behavior;
}

Behavior __50306440;

Behavior make__50306440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50306440 = behavior;
   behavior->owner = (Object)channel__a0_5830_47045620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5832_46994000______58_84_44701400______58_840_50200720);
   _5832_46994000______58_84_44701400______58_840_50200720->num_any += 1;
   _5832_46994000______58_84_44701400______58_840_50200720->any = realloc(_5832_46994000______58_84_44701400______58_840_50200720->any,_5832_46994000______58_84_44701400______58_840_50200720->num_any*sizeof(Object));
_5832_46994000______58_84_44701400______58_840_50200720->any[_5832_46994000______58_84_44701400______58_840_50200720->num_any-1] = (Object)behavior;
   behavior->block = make__50306680();

   return behavior;
}

Behavior __50305900;

Behavior make__50305900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50305900 = behavior;
   behavior->owner = (Object)channel__a0_5830_47045620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_47201360_channel__a0_5830_47045620______58_84_44701400______58_840_50200720);
   reg__0_47201360_channel__a0_5830_47045620______58_84_44701400______58_840_50200720->num_any += 1;
   reg__0_47201360_channel__a0_5830_47045620______58_84_44701400______58_840_50200720->any = realloc(reg__0_47201360_channel__a0_5830_47045620______58_84_44701400______58_840_50200720->any,reg__0_47201360_channel__a0_5830_47045620______58_84_44701400______58_840_50200720->num_any*sizeof(Object));
reg__0_47201360_channel__a0_5830_47045620______58_84_44701400______58_840_50200720->any[reg__0_47201360_channel__a0_5830_47045620______58_84_44701400______58_840_50200720->num_any-1] = (Object)behavior;
   behavior->block = make__50306060();

   return behavior;
}

Behavior __50305700;

Behavior make__50305700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50305700 = behavior;
   behavior->owner = (Object)channel__a0_5830_47045620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5840_47278620______58_84_44701400______58_840_50200720);
   _5840_47278620______58_84_44701400______58_840_50200720->num_any += 1;
   _5840_47278620______58_84_44701400______58_840_50200720->any = realloc(_5840_47278620______58_84_44701400______58_840_50200720->any,_5840_47278620______58_84_44701400______58_840_50200720->num_any*sizeof(Object));
_5840_47278620______58_84_44701400______58_840_50200720->any[_5840_47278620______58_84_44701400______58_840_50200720->num_any-1] = (Object)behavior;
   behavior->block = make__50305860();

   return behavior;
}

Scope makechannel__a0_5830_47045620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__a0_5830_47045620 = scope;
   scope->owner = (Object)_____58_84_44701400;
   scope->name = "channel_a0:30";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_47201360();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_5831_47045320();
   scope->scopes[1] = makeraddr_5833_47044900();
   scope->scopes[2] = makewaddr_5836_47044320();
   scope->scopes[3] = makerinc_5839_47043740();
   scope->scopes[4] = makewinc_5842_47042980();
   scope->scopes[5] = makerdec_5845_47042460();
   scope->scopes[6] = makewdec_5849_47041880();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50306800();
   scope->behaviors[1] = make__50306440();
   scope->behaviors[2] = make__50305900();
   scope->behaviors[3] = make__50305700();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __50159060;

Behavior make__50159060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50159060 = behavior;
   behavior->owner = (Object)_____58_84_44701400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_47607860______58_84_44701400______58_840_50200720);
   clk_47607860______58_84_44701400______58_840_50200720->num_pos += 1;
   clk_47607860______58_84_44701400______58_840_50200720->pos = realloc(clk_47607860______58_84_44701400______58_840_50200720->pos,clk_47607860______58_84_44701400______58_840_50200720->num_pos*sizeof(Object));
clk_47607860______58_84_44701400______58_840_50200720->pos[clk_47607860______58_84_44701400______58_840_50200720->num_pos-1] = (Object)behavior;
   behavior->block = make__49940580();

   return behavior;
}

Behavior __50200840;

Behavior make__50200840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50200840 = behavior;
   register_timed_behavior(behavior);
   behavior->owner = (Object)_____58_84_44701400;
   behavior->activated = 0;
   behavior->timed = 1;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__50158940();

   return behavior;
}

Behavior __50250300;

Behavior make__50250300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50250300 = behavior;
   behavior->owner = (Object)_____58_84_44701400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 4;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_47607860______58_84_44701400______58_840_50200720);
   clk_47607860______58_84_44701400______58_840_50200720->num_any += 1;
   clk_47607860______58_84_44701400______58_840_50200720->any = realloc(clk_47607860______58_84_44701400______58_840_50200720->any,clk_47607860______58_84_44701400______58_840_50200720->num_any*sizeof(Object));
clk_47607860______58_84_44701400______58_840_50200720->any[clk_47607860______58_84_44701400______58_840_50200720->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_47607820______58_84_44701400______58_840_50200720);
   rst_47607820______58_84_44701400______58_840_50200720->num_any += 1;
   rst_47607820______58_84_44701400______58_840_50200720->any = realloc(rst_47607820______58_84_44701400______58_840_50200720->any,rst_47607820______58_84_44701400______58_840_50200720->num_any*sizeof(Object));
rst_47607820______58_84_44701400______58_840_50200720->any[rst_47607820______58_84_44701400______58_840_50200720->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,fill_47607620______58_84_44701400______58_840_50200720);
   fill_47607620______58_84_44701400______58_840_50200720->num_any += 1;
   fill_47607620______58_84_44701400______58_840_50200720->any = realloc(fill_47607620______58_84_44701400______58_840_50200720->any,fill_47607620______58_84_44701400______58_840_50200720->num_any*sizeof(Object));
fill_47607620______58_84_44701400______58_840_50200720->any[fill_47607620______58_84_44701400______58_840_50200720->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,req_47607760______58_84_44701400______58_840_50200720);
   req_47607760______58_84_44701400______58_840_50200720->num_any += 1;
   req_47607760______58_84_44701400______58_840_50200720->any = realloc(req_47607760______58_84_44701400______58_840_50200720->any,req_47607760______58_84_44701400______58_840_50200720->num_any*sizeof(Object));
req_47607760______58_84_44701400______58_840_50200720->any[req_47607760______58_84_44701400______58_840_50200720->num_any-1] = (Object)behavior;
   behavior->block = make__50254640();

   return behavior;
}

Behavior __50250000;

Behavior make__50250000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50250000 = behavior;
   behavior->owner = (Object)_____58_84_44701400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__0_49942280_layer__output_58_840_49944820______58_84_44701400______58_840_50200720);
   ack__0_49942280_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any += 1;
   ack__0_49942280_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any = realloc(ack__0_49942280_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any,ack__0_49942280_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any*sizeof(Object));
ack__0_49942280_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->any[ack__0_49942280_layer__output_58_840_49944820______58_84_44701400______58_840_50200720->num_any-1] = (Object)behavior;
   behavior->block = make__50254580();

   return behavior;
}

Scope make_____58_84_44701400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   _____58_84_44701400 = scope;
   scope->owner = (Object)_____58_840_50200720;
   scope->name = "__:T";
   scope->num_systemIs = 1;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makelayer__output_49942140();
   scope->num_inners = 14;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeclk_47607860();
   scope->inners[1] = makerst_47607820();
   scope->inners[2] = makereq_47607760();
   scope->inners[3] = makeack__0_47607640();
   scope->inners[4] = makefill_47607620();
   scope->inners[5] = make_5815_47851300();
   scope->inners[6] = make_5813_47851280();
   scope->inners[7] = make_5814_47851000();
   scope->inners[8] = make_5817_47850960();
   scope->inners[9] = make_5818_47850800();
   scope->inners[10] = make_5819_44923000();
   scope->inners[11] = make_5832_46994000();
   scope->inners[12] = make_5840_47278620();
   scope->inners[13] = make_5841_47278480();
   scope->num_scopes = 2;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__x_581_44700320();
   scope->scopes[1] = makechannel__a0_5830_47045620();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50159060();
   scope->behaviors[1] = make__50200840();
   scope->behaviors[2] = make__50250300();
   scope->behaviors[3] = make__50250000();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT make_____58_840_50200720() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   _____58_840_50200720 = systemT;
systemT->owner = NULL;
   systemT->name = "__:T0";
   systemT->num_inputs = 0;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->num_outputs = 0;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make_____58_84_44701400();

   return systemT;
}