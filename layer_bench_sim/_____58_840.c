#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT _____58_840_60688100;

Block __60491500;

Block __60491020;

Block __60490700;

void code__60490700() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60988560(),_5818_45297260______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__60490700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60490700 = block;
   block->owner = (Object)__60491020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60490700;

   return block;
};

void code__60491020() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49635220______58_84_47501740______58_840_60688100->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60988680();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60490700();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60988500(),_5817_45297940______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__60491020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60491020 = block;
   block->owner = (Object)__60491500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60491020;

   return block;
};

Block __60490020;

Block __60489860;

Block __60563180;

void code__60563180() {
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
                  src0 = _5818_45297260______58_84_47501740______58_840_60688100->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__60988240();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5818_45297260______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60988120(),_5817_45297940______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__60988040(),_5819_47234080______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__60563180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60563180 = block;
   block->owner = (Object)__60489860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60563180;

   return block;
};

void code__60489860() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49635220______58_84_47501740______58_840_60688100->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__60988380();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60563180();
   }
      }
   }
}

Block make__60489860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60489860 = block;
   block->owner = (Object)__60490020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60489860;

   return block;
};

void code__60490020() {
 code__60489860();
}

Block make__60490020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60490020 = block;
   block->owner = (Object)__60491500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60490020;

   return block;
};

void code__60491500() {
 code__60491020();
   {
      Value cond = fill_49635140______58_84_47501740______58_840_60688100->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__60490020();
   }
      }
   }
}

Block make__60491500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60491500 = block;
   block->owner = (Object)__60676740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60491500;

   return block;
};

Block __60676580;

void code__60676580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60987980(),clk_49635240______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60987900(),rst_49635220______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60987800(),req_49635200______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60987740(),fill_49635140______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__60688220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60987680(),rst_49635220______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__60688220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60987620(),clk_49635240______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__60688220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60987560(),clk_49635240______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60987500(),rst_49635220______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60987440(),fill_49635140______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__60688220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60987360(),clk_49635240______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__60688220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60987280(),clk_49635240______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__60688220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60987220(),clk_49635240______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__60688220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60987140(),clk_49635240______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__60688220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60987040(),clk_49635240______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__60688220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60986980(),clk_49635240______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__60688220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60986920(),clk_49635240______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__60688220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60986860(),clk_49635240______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__60688220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60986780(),clk_49635240______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__60688220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60986720(),clk_49635240______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__60688220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60986640(),clk_49635240______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__60688220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60986580(),clk_49635240______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__60688220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60986500(),clk_49635240______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__60688220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60986260(),clk_49635240______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__60688220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60986200(),clk_49635240______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__60688220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60986140(),clk_49635240______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__60688220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60986060(),clk_49635240______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__60688220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60985980(),clk_49635240______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__60688220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60985920(),clk_49635240______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__60688220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60985860(),clk_49635240______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__60688220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60985740(),fill_49635140______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60985680(),clk_49635240______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60985620(),clk_49635240______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60985560(),req_49635200______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__60688220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60985500(),clk_49635240______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__60688220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60985440(),clk_49635240______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60985380(),req_49635200______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60985320(),clk_49635240______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__60688220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60985260(),clk_49635240______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__60688220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60985200(),clk_49635240______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__60688220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60985140(),clk_49635240______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__60688220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60985080(),clk_49635240______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__60688220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60985020(),clk_49635240______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__60688220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60984940(),clk_49635240______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__60688220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60984860(),clk_49635240______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__60688220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60984800(),clk_49635240______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__60688220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60984720(),clk_49635240______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__60688220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60984620(),clk_49635240______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__60688220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60984560(),clk_49635240______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__60688220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60984500(),clk_49635240______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__60688220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60984420(),clk_49635240______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__60688220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60984360(),clk_49635240______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__60688220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60984280(),clk_49635240______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__60688220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60984220(),clk_49635240______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__60688220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60984140(),clk_49635240______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__60688220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60984040(),clk_49635240______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__60688220);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__60983960(),clk_49635240______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__60688220);
}

Block make__60676580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60676580 = block;
   block->owner = (Object)__60688220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60676580;

   return block;
};

Block __60722260;

void code__60722260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_49635240______58_84_47501740______58_840_60688100->c_value,clk_52148200_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_49635220______58_84_47501740______58_840_60688100->c_value,rst_52148180_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(fill_49635140______58_84_47501740______58_840_60688100->c_value,fill_52148160_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(req_49635200______58_84_47501740______58_840_60688100->c_value,req_52148140_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_49635240______58_84_47501740______58_840_60688100->c_value,clk_60494120_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_49635220______58_84_47501740______58_840_60688100->c_value,rst_60494080_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(fill_49635140______58_84_47501740______58_840_60688100->c_value,fill_60494060_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__0_49635180______58_84_47501740______58_840_60688100->c_value,req_60494040_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__60722260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60722260 = block;
   block->owner = (Object)__60747600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60722260;

   return block;
};

Block __60722180;

void code__60722180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__0_52148080_layer0_58_840_52102580______58_84_47501740______58_840_60688100->c_value,ack__0_49635180______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__1_60493980_layer1_58_840_60496360______58_84_47501740______58_840_60688100->c_value,ack__1_49635160______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__60722180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60722180 = block;
   block->owner = (Object)__60747400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60722180;

   return block;
};

Block __49045620;

Block __49452540;

void code__49452540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_47832200_channel__x_581_47501060______58_84_47501740______58_840_60688100->c_value,make_ref_rangeS(mem_48236580_channel__x_581_47501060______58_84_47501740______58_840_60688100,value2integer(abus__w_47831940_channel__x_581_47501060______58_84_47501740______58_840_60688100->c_value),value2integer(abus__w_47831940_channel__x_581_47501060______58_84_47501740______58_840_60688100->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__49452540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49452540 = block;
   block->owner = (Object)__49045620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49452540;

   return block;
};

void code__49045620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_48236580_channel__x_581_47501060______58_84_47501740______58_840_60688100->c_value;
            idx = value2integer(abus__r_47832020_channel__x_581_47501060______58_84_47501740______58_840_60688100->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_47681360_channel__x_581_47501060______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_47520280_channel__x_581_47501060______58_84_47501740______58_840_60688100->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49452540();
   }
      }
   }
}

Block make__49045620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49045620 = block;
   block->owner = (Object)__46996960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49045620;

   return block;
};

Block __60746620;

void code__60746620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_47681360_channel__x_581_47501060______58_84_47501740______58_840_60688100->c_value,_5815_45299400______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__60746620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60746620 = block;
   block->owner = (Object)__60746440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60746620;

   return block;
};

Block __60746400;

void code__60746400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5815_45299400______58_84_47501740______58_840_60688100->c_value,dbus__r_47681360_channel__x_581_47501060______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__60746400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60746400 = block;
   block->owner = (Object)__60746220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60746400;

   return block;
};

Block __60745820;

void code__60745820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_47520300_channel__x_581_47501060______58_84_47501740______58_840_60688100->c_value,_5813_45299380______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__60745820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60745820 = block;
   block->owner = (Object)__60745600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60745820;

   return block;
};

Block __60745560;

void code__60745560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5813_45299380______58_84_47501740______58_840_60688100->c_value,trig__r_47520300_channel__x_581_47501060______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__60745560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60745560 = block;
   block->owner = (Object)__60745360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60745560;

   return block;
};

Block __60745000;

void code__60745000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_47832020_channel__x_581_47501060______58_84_47501740______58_840_60688100->c_value,_5814_45298000______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__60745000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60745000 = block;
   block->owner = (Object)__60744840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60745000;

   return block;
};

Block __60744800;

void code__60744800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5814_45298000______58_84_47501740______58_840_60688100->c_value,abus__r_47832020_channel__x_581_47501060______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__60744800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60744800 = block;
   block->owner = (Object)__60744640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60744800;

   return block;
};

Block __60744340;

void code__60744340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_47520280_channel__x_581_47501060______58_84_47501740______58_840_60688100->c_value,_5817_45297940______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__60744340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60744340 = block;
   block->owner = (Object)__60744160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60744340;

   return block;
};

Block __60744120;

void code__60744120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5817_45297940______58_84_47501740______58_840_60688100->c_value,trig__w_47520280_channel__x_581_47501060______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__60744120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60744120 = block;
   block->owner = (Object)__60743940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60744120;

   return block;
};

Block __60768000;

void code__60768000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_47831940_channel__x_581_47501060______58_84_47501740______58_840_60688100->c_value,_5818_45297260______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__60768000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60768000 = block;
   block->owner = (Object)__60767800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60768000;

   return block;
};

Block __60767760;

void code__60767760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5818_45297260______58_84_47501740______58_840_60688100->c_value,abus__w_47831940_channel__x_581_47501060______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__60767760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60767760 = block;
   block->owner = (Object)__60767540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60767760;

   return block;
};

Block __60767240;

void code__60767240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_47832200_channel__x_581_47501060______58_84_47501740______58_840_60688100->c_value,_5819_47234080______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__60767240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60767240 = block;
   block->owner = (Object)__60767080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60767240;

   return block;
};

Block __60767040;

void code__60767040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5819_47234080______58_84_47501740______58_840_60688100->c_value,dbus__w_47832200_channel__x_581_47501060______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__60767040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60767040 = block;
   block->owner = (Object)__60766880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60767040;

   return block;
};

Block __60765060;

void code__60765060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_47299240_channel__a0_5830_46996400______58_84_47501740______58_840_60688100->c_value,_5832_47465120______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__60765060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60765060 = block;
   block->owner = (Object)__60764900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60765060;

   return block;
};

Block __60764860;

void code__60764860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5832_47465120______58_84_47501740______58_840_60688100->c_value,reg__0_47299240_channel__a0_5830_46996400______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__60764860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60764860 = block;
   block->owner = (Object)__60764700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60764860;

   return block;
};

Block __60764400;

void code__60764400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_47499060_channel__a0_5830_46996400______58_84_47501740______58_840_60688100->c_value,_5833_47684580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__60764400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60764400 = block;
   block->owner = (Object)__60764240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60764400;

   return block;
};

Block __60764200;

void code__60764200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5833_47684580______58_84_47501740______58_840_60688100->c_value,reg__1_47499060_channel__a0_5830_46996400______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__60764200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60764200 = block;
   block->owner = (Object)__60763980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60764200;

   return block;
};

Block __60763480;

void code__60763480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_47299240_channel__a0_5830_46996400______58_84_47501740______58_840_60688100->c_value,_5843_47831580______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__60763480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60763480 = block;
   block->owner = (Object)__60763280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60763480;

   return block;
};

Block __60763240;

void code__60763240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5843_47831580______58_84_47501740______58_840_60688100->c_value,reg__0_47299240_channel__a0_5830_46996400______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__60763240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60763240 = block;
   block->owner = (Object)__60763080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60763240;

   return block;
};

Block __60762780;

void code__60762780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_47499060_channel__a0_5830_46996400______58_84_47501740______58_840_60688100->c_value,_5844_48575140______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__60762780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60762780 = block;
   block->owner = (Object)__60762620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60762780;

   return block;
};

Block __60762580;

void code__60762580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5844_48575140______58_84_47501740______58_840_60688100->c_value,reg__1_47499060_channel__a0_5830_46996400______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__60762580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60762580 = block;
   block->owner = (Object)__60762420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60762580;

   return block;
};

Block __60760500;

void code__60760500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_47034660_rinc_5842_47035940_channel__a0_5830_46996400______58_84_47501740______58_840_60688100->c_value,_5845_48575060______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__60760500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60760500 = block;
   block->owner = (Object)__60760340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60760500;

   return block;
};

Block __60760300;

void code__60760300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5845_48575060______58_84_47501740______58_840_60688100->c_value,abus__r_47034660_rinc_5842_47035940_channel__a0_5830_46996400______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__60760300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60760300 = block;
   block->owner = (Object)__60760140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60760300;

   return block;
};

Block __60783160;

void code__60783160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_49400460_channel__a1_5860_49212100______58_84_47501740______58_840_60688100->c_value,_5862_48639520______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__60783160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60783160 = block;
   block->owner = (Object)__60783000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60783160;

   return block;
};

Block __60782960;

void code__60782960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5862_48639520______58_84_47501740______58_840_60688100->c_value,reg__0_49400460_channel__a1_5860_49212100______58_84_47501740______58_840_60688100);
      set_value_pos(pool_state);
   }
}

Block make__60782960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __60782960 = block;
   block->owner = (Object)__60782800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__60782960;

   return block;
};

Value make__60988680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60988560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__60988500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60988380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60988240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__60988120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60988040() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__60987980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60987900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60987800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60987740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60987680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60987620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60987560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60987500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60987440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60987360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60987280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60987220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60987140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60987040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60986980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60986920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60986860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60986780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60986720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60986640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60986580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60986500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60986260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60986200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60986140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60986060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60985980() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60985920() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60985860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60985740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60985680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60985620() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60985560() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60985500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60985440() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60985380() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60985320() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60985260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60985200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60985140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60985080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60985020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60984940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60984860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60984800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60984720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60984620() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60984560() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60984500() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60984420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60984360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60984280() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60984220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60984140() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60984040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__60983960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope _____58_84_47501740;

SignalI clk_49635240______58_84_47501740______58_840_60688100;

SignalI makeclk_49635240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_49635240______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)_____58_84_47501740;
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

SignalI rst_49635220______58_84_47501740______58_840_60688100;

SignalI makerst_49635220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_49635220______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)_____58_84_47501740;
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

SignalI req_49635200______58_84_47501740______58_840_60688100;

SignalI makereq_49635200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_49635200______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)_____58_84_47501740;
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

SignalI ack__0_49635180______58_84_47501740______58_840_60688100;

SignalI makeack__0_49635180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__0_49635180______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)_____58_84_47501740;
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

SignalI ack__1_49635160______58_84_47501740______58_840_60688100;

SignalI makeack__1_49635160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__1_49635160______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)_____58_84_47501740;
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

SignalI fill_49635140______58_84_47501740______58_840_60688100;

SignalI makefill_49635140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_49635140______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)_____58_84_47501740;
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

SignalI _5815_45299400______58_84_47501740______58_840_60688100;

SignalI make_5815_45299400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5815_45299400______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)_____58_84_47501740;
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

SignalI _5813_45299380______58_84_47501740______58_840_60688100;

SignalI make_5813_45299380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5813_45299380______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)_____58_84_47501740;
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

SignalI _5814_45298000______58_84_47501740______58_840_60688100;

SignalI make_5814_45298000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5814_45298000______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)_____58_84_47501740;
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

SignalI _5817_45297940______58_84_47501740______58_840_60688100;

SignalI make_5817_45297940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5817_45297940______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)_____58_84_47501740;
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

SignalI _5818_45297260______58_84_47501740______58_840_60688100;

SignalI make_5818_45297260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5818_45297260______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)_____58_84_47501740;
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

SignalI _5819_47234080______58_84_47501740______58_840_60688100;

SignalI make_5819_47234080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5819_47234080______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)_____58_84_47501740;
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

SignalI _5832_47465120______58_84_47501740______58_840_60688100;

SignalI make_5832_47465120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5832_47465120______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)_____58_84_47501740;
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

SignalI _5833_47684580______58_84_47501740______58_840_60688100;

SignalI make_5833_47684580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5833_47684580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)_____58_84_47501740;
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

SignalI _5843_47831580______58_84_47501740______58_840_60688100;

SignalI make_5843_47831580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5843_47831580______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)_____58_84_47501740;
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

SignalI _5844_48575140______58_84_47501740______58_840_60688100;

SignalI make_5844_48575140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5844_48575140______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)_____58_84_47501740;
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

SignalI _5845_48575060______58_84_47501740______58_840_60688100;

SignalI make_5845_48575060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5845_48575060______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)_____58_84_47501740;
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

SignalI _5862_48639520______58_84_47501740______58_840_60688100;

SignalI make_5862_48639520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5862_48639520______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)_____58_84_47501740;
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

SystemI layer0_52147920;

SystemI makelayer0_52147920() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer0_52147920 = systemI;
   systemI->owner = (Object)_____58_84_47501740;
   systemI->name = "layer0";
   systemI->system = layer0_58_840_52102580;

   return systemI;
};

SystemI layer1_60493780;

SystemI makelayer1_60493780() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer1_60493780 = systemI;
   systemI->owner = (Object)_____58_84_47501740;
   systemI->name = "layer1";
   systemI->system = layer1_58_840_60496360;

   return systemI;
};

Scope channel__x_581_47501060;

SignalI trig__r_47520300_channel__x_581_47501060______58_84_47501740______58_840_60688100;

SignalI maketrig__r_47520300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_47520300_channel__x_581_47501060______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)channel__x_581_47501060;
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

SignalI trig__w_47520280_channel__x_581_47501060______58_84_47501740______58_840_60688100;

SignalI maketrig__w_47520280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_47520280_channel__x_581_47501060______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)channel__x_581_47501060;
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

SignalI dbus__r_47681360_channel__x_581_47501060______58_84_47501740______58_840_60688100;

SignalI makedbus__r_47681360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_47681360_channel__x_581_47501060______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)channel__x_581_47501060;
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

SignalI dbus__w_47832200_channel__x_581_47501060______58_84_47501740______58_840_60688100;

SignalI makedbus__w_47832200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_47832200_channel__x_581_47501060______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)channel__x_581_47501060;
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

SignalI abus__r_47832020_channel__x_581_47501060______58_84_47501740______58_840_60688100;

SignalI makeabus__r_47832020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47832020_channel__x_581_47501060______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)channel__x_581_47501060;
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

SignalI abus__w_47831940_channel__x_581_47501060______58_84_47501740______58_840_60688100;

SignalI makeabus__w_47831940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47831940_channel__x_581_47501060______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)channel__x_581_47501060;
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

SignalI mem_48236580_channel__x_581_47501060______58_84_47501740______58_840_60688100;

SignalI makemem_48236580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_48236580_channel__x_581_47501060______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)channel__x_581_47501060;
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

Scope raddr_582_47500440;

Scope makeraddr_582_47500440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_582_47500440 = scope;
   scope->owner = (Object)channel__x_581_47501060;
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

Scope waddr_587_47499640;

Scope makewaddr_587_47499640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_587_47499640 = scope;
   scope->owner = (Object)channel__x_581_47501060;
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

Scope rinc_5812_47498880;

Scope makerinc_5812_47498880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5812_47498880 = scope;
   scope->owner = (Object)channel__x_581_47501060;
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

Scope winc_5816_47498020;

Scope makewinc_5816_47498020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5816_47498020 = scope;
   scope->owner = (Object)channel__x_581_47501060;
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

Scope rdec_5820_47497420;

Scope makerdec_5820_47497420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5820_47497420 = scope;
   scope->owner = (Object)channel__x_581_47501060;
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

Scope wdec_5825_47521180;

Scope makewdec_5825_47521180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5825_47521180 = scope;
   scope->owner = (Object)channel__x_581_47501060;
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

Behavior __46996960;

Behavior make__46996960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46996960 = behavior;
   behavior->owner = (Object)channel__x_581_47501060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_49635240______58_84_47501740______58_840_60688100);
   clk_49635240______58_84_47501740______58_840_60688100->num_neg += 1;
   clk_49635240______58_84_47501740______58_840_60688100->neg = realloc(clk_49635240______58_84_47501740______58_840_60688100->neg,clk_49635240______58_84_47501740______58_840_60688100->num_neg*sizeof(Object));
clk_49635240______58_84_47501740______58_840_60688100->neg[clk_49635240______58_84_47501740______58_840_60688100->num_neg-1] = (Object)behavior;
   behavior->block = make__49045620();

   return behavior;
}

Behavior __60746440;

Behavior make__60746440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60746440 = behavior;
   behavior->owner = (Object)channel__x_581_47501060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_47681360_channel__x_581_47501060______58_84_47501740______58_840_60688100);
   dbus__r_47681360_channel__x_581_47501060______58_84_47501740______58_840_60688100->num_any += 1;
   dbus__r_47681360_channel__x_581_47501060______58_84_47501740______58_840_60688100->any = realloc(dbus__r_47681360_channel__x_581_47501060______58_84_47501740______58_840_60688100->any,dbus__r_47681360_channel__x_581_47501060______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
dbus__r_47681360_channel__x_581_47501060______58_84_47501740______58_840_60688100->any[dbus__r_47681360_channel__x_581_47501060______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__60746620();

   return behavior;
}

Behavior __60746220;

Behavior make__60746220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60746220 = behavior;
   behavior->owner = (Object)channel__x_581_47501060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5815_45299400______58_84_47501740______58_840_60688100);
   _5815_45299400______58_84_47501740______58_840_60688100->num_any += 1;
   _5815_45299400______58_84_47501740______58_840_60688100->any = realloc(_5815_45299400______58_84_47501740______58_840_60688100->any,_5815_45299400______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
_5815_45299400______58_84_47501740______58_840_60688100->any[_5815_45299400______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__60746400();

   return behavior;
}

Behavior __60745600;

Behavior make__60745600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60745600 = behavior;
   behavior->owner = (Object)channel__x_581_47501060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_47520300_channel__x_581_47501060______58_84_47501740______58_840_60688100);
   trig__r_47520300_channel__x_581_47501060______58_84_47501740______58_840_60688100->num_any += 1;
   trig__r_47520300_channel__x_581_47501060______58_84_47501740______58_840_60688100->any = realloc(trig__r_47520300_channel__x_581_47501060______58_84_47501740______58_840_60688100->any,trig__r_47520300_channel__x_581_47501060______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
trig__r_47520300_channel__x_581_47501060______58_84_47501740______58_840_60688100->any[trig__r_47520300_channel__x_581_47501060______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__60745820();

   return behavior;
}

Behavior __60745360;

Behavior make__60745360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60745360 = behavior;
   behavior->owner = (Object)channel__x_581_47501060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5813_45299380______58_84_47501740______58_840_60688100);
   _5813_45299380______58_84_47501740______58_840_60688100->num_any += 1;
   _5813_45299380______58_84_47501740______58_840_60688100->any = realloc(_5813_45299380______58_84_47501740______58_840_60688100->any,_5813_45299380______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
_5813_45299380______58_84_47501740______58_840_60688100->any[_5813_45299380______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__60745560();

   return behavior;
}

Behavior __60744840;

Behavior make__60744840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60744840 = behavior;
   behavior->owner = (Object)channel__x_581_47501060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_47832020_channel__x_581_47501060______58_84_47501740______58_840_60688100);
   abus__r_47832020_channel__x_581_47501060______58_84_47501740______58_840_60688100->num_any += 1;
   abus__r_47832020_channel__x_581_47501060______58_84_47501740______58_840_60688100->any = realloc(abus__r_47832020_channel__x_581_47501060______58_84_47501740______58_840_60688100->any,abus__r_47832020_channel__x_581_47501060______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
abus__r_47832020_channel__x_581_47501060______58_84_47501740______58_840_60688100->any[abus__r_47832020_channel__x_581_47501060______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__60745000();

   return behavior;
}

Behavior __60744640;

Behavior make__60744640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60744640 = behavior;
   behavior->owner = (Object)channel__x_581_47501060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5814_45298000______58_84_47501740______58_840_60688100);
   _5814_45298000______58_84_47501740______58_840_60688100->num_any += 1;
   _5814_45298000______58_84_47501740______58_840_60688100->any = realloc(_5814_45298000______58_84_47501740______58_840_60688100->any,_5814_45298000______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
_5814_45298000______58_84_47501740______58_840_60688100->any[_5814_45298000______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__60744800();

   return behavior;
}

Behavior __60744160;

Behavior make__60744160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60744160 = behavior;
   behavior->owner = (Object)channel__x_581_47501060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_47520280_channel__x_581_47501060______58_84_47501740______58_840_60688100);
   trig__w_47520280_channel__x_581_47501060______58_84_47501740______58_840_60688100->num_any += 1;
   trig__w_47520280_channel__x_581_47501060______58_84_47501740______58_840_60688100->any = realloc(trig__w_47520280_channel__x_581_47501060______58_84_47501740______58_840_60688100->any,trig__w_47520280_channel__x_581_47501060______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
trig__w_47520280_channel__x_581_47501060______58_84_47501740______58_840_60688100->any[trig__w_47520280_channel__x_581_47501060______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__60744340();

   return behavior;
}

Behavior __60743940;

Behavior make__60743940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60743940 = behavior;
   behavior->owner = (Object)channel__x_581_47501060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5817_45297940______58_84_47501740______58_840_60688100);
   _5817_45297940______58_84_47501740______58_840_60688100->num_any += 1;
   _5817_45297940______58_84_47501740______58_840_60688100->any = realloc(_5817_45297940______58_84_47501740______58_840_60688100->any,_5817_45297940______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
_5817_45297940______58_84_47501740______58_840_60688100->any[_5817_45297940______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__60744120();

   return behavior;
}

Behavior __60767800;

Behavior make__60767800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60767800 = behavior;
   behavior->owner = (Object)channel__x_581_47501060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_47831940_channel__x_581_47501060______58_84_47501740______58_840_60688100);
   abus__w_47831940_channel__x_581_47501060______58_84_47501740______58_840_60688100->num_any += 1;
   abus__w_47831940_channel__x_581_47501060______58_84_47501740______58_840_60688100->any = realloc(abus__w_47831940_channel__x_581_47501060______58_84_47501740______58_840_60688100->any,abus__w_47831940_channel__x_581_47501060______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
abus__w_47831940_channel__x_581_47501060______58_84_47501740______58_840_60688100->any[abus__w_47831940_channel__x_581_47501060______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__60768000();

   return behavior;
}

Behavior __60767540;

Behavior make__60767540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60767540 = behavior;
   behavior->owner = (Object)channel__x_581_47501060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5818_45297260______58_84_47501740______58_840_60688100);
   _5818_45297260______58_84_47501740______58_840_60688100->num_any += 1;
   _5818_45297260______58_84_47501740______58_840_60688100->any = realloc(_5818_45297260______58_84_47501740______58_840_60688100->any,_5818_45297260______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
_5818_45297260______58_84_47501740______58_840_60688100->any[_5818_45297260______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__60767760();

   return behavior;
}

Behavior __60767080;

Behavior make__60767080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60767080 = behavior;
   behavior->owner = (Object)channel__x_581_47501060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_47832200_channel__x_581_47501060______58_84_47501740______58_840_60688100);
   dbus__w_47832200_channel__x_581_47501060______58_84_47501740______58_840_60688100->num_any += 1;
   dbus__w_47832200_channel__x_581_47501060______58_84_47501740______58_840_60688100->any = realloc(dbus__w_47832200_channel__x_581_47501060______58_84_47501740______58_840_60688100->any,dbus__w_47832200_channel__x_581_47501060______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
dbus__w_47832200_channel__x_581_47501060______58_84_47501740______58_840_60688100->any[dbus__w_47832200_channel__x_581_47501060______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__60767240();

   return behavior;
}

Behavior __60766880;

Behavior make__60766880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60766880 = behavior;
   behavior->owner = (Object)channel__x_581_47501060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5819_47234080______58_84_47501740______58_840_60688100);
   _5819_47234080______58_84_47501740______58_840_60688100->num_any += 1;
   _5819_47234080______58_84_47501740______58_840_60688100->any = realloc(_5819_47234080______58_84_47501740______58_840_60688100->any,_5819_47234080______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
_5819_47234080______58_84_47501740______58_840_60688100->any[_5819_47234080______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__60767040();

   return behavior;
}

Scope makechannel__x_581_47501060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__x_581_47501060 = scope;
   scope->owner = (Object)_____58_84_47501740;
   scope->name = "channel_x:1";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_47520300();
   scope->inners[1] = maketrig__w_47520280();
   scope->inners[2] = makedbus__r_47681360();
   scope->inners[3] = makedbus__w_47832200();
   scope->inners[4] = makeabus__r_47832020();
   scope->inners[5] = makeabus__w_47831940();
   scope->inners[6] = makemem_48236580();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_582_47500440();
   scope->scopes[1] = makewaddr_587_47499640();
   scope->scopes[2] = makerinc_5812_47498880();
   scope->scopes[3] = makewinc_5816_47498020();
   scope->scopes[4] = makerdec_5820_47497420();
   scope->scopes[5] = makewdec_5825_47521180();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__46996960();
   scope->behaviors[1] = make__60746440();
   scope->behaviors[2] = make__60746220();
   scope->behaviors[3] = make__60745600();
   scope->behaviors[4] = make__60745360();
   scope->behaviors[5] = make__60744840();
   scope->behaviors[6] = make__60744640();
   scope->behaviors[7] = make__60744160();
   scope->behaviors[8] = make__60743940();
   scope->behaviors[9] = make__60767800();
   scope->behaviors[10] = make__60767540();
   scope->behaviors[11] = make__60767080();
   scope->behaviors[12] = make__60766880();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__a0_5830_46996400;

SignalI reg__0_47299240_channel__a0_5830_46996400______58_84_47501740______58_840_60688100;

SignalI makereg__0_47299240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_47299240_channel__a0_5830_46996400______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)channel__a0_5830_46996400;
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

SignalI reg__1_47499060_channel__a0_5830_46996400______58_84_47501740______58_840_60688100;

SignalI makereg__1_47499060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_47499060_channel__a0_5830_46996400______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)channel__a0_5830_46996400;
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

Scope anum_5831_46992720;

Scope makeanum_5831_46992720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_5831_46992720 = scope;
   scope->owner = (Object)channel__a0_5830_46996400;
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

Scope raddr_5834_46990060;

Scope makeraddr_5834_46990060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5834_46990060 = scope;
   scope->owner = (Object)channel__a0_5830_46996400;
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

Scope waddr_5838_47011560;

Scope makewaddr_5838_47011560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5838_47011560 = scope;
   scope->owner = (Object)channel__a0_5830_46996400;
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

Scope rinc_5842_47035940;

SignalI abus__r_47034660_rinc_5842_47035940_channel__a0_5830_46996400______58_84_47501740______58_840_60688100;

SignalI makeabus__r_47034660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47034660_rinc_5842_47035940_channel__a0_5830_46996400______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)rinc_5842_47035940;
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

Behavior __60760340;

Behavior make__60760340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60760340 = behavior;
   behavior->owner = (Object)rinc_5842_47035940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_47034660_rinc_5842_47035940_channel__a0_5830_46996400______58_84_47501740______58_840_60688100);
   abus__r_47034660_rinc_5842_47035940_channel__a0_5830_46996400______58_84_47501740______58_840_60688100->num_any += 1;
   abus__r_47034660_rinc_5842_47035940_channel__a0_5830_46996400______58_84_47501740______58_840_60688100->any = realloc(abus__r_47034660_rinc_5842_47035940_channel__a0_5830_46996400______58_84_47501740______58_840_60688100->any,abus__r_47034660_rinc_5842_47035940_channel__a0_5830_46996400______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
abus__r_47034660_rinc_5842_47035940_channel__a0_5830_46996400______58_84_47501740______58_840_60688100->any[abus__r_47034660_rinc_5842_47035940_channel__a0_5830_46996400______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__60760500();

   return behavior;
}

Behavior __60760140;

Behavior make__60760140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60760140 = behavior;
   behavior->owner = (Object)rinc_5842_47035940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5845_48575060______58_84_47501740______58_840_60688100);
   _5845_48575060______58_84_47501740______58_840_60688100->num_any += 1;
   _5845_48575060______58_84_47501740______58_840_60688100->any = realloc(_5845_48575060______58_84_47501740______58_840_60688100->any,_5845_48575060______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
_5845_48575060______58_84_47501740______58_840_60688100->any[_5845_48575060______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__60760300();

   return behavior;
}

Scope makerinc_5842_47035940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5842_47035940 = scope;
   scope->owner = (Object)channel__a0_5830_46996400;
   scope->name = "rinc:42";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47034660();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60760340();
   scope->behaviors[1] = make__60760140();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5846_47030280;

SignalI abus__w_47052040_winc_5846_47030280_channel__a0_5830_46996400______58_84_47501740______58_840_60688100;

SignalI makeabus__w_47052040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47052040_winc_5846_47030280_channel__a0_5830_46996400______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)winc_5846_47030280;
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

Scope makewinc_5846_47030280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5846_47030280 = scope;
   scope->owner = (Object)channel__a0_5830_46996400;
   scope->name = "winc:46";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47052040();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5850_47051280;

SignalI abus__r_47050020_rdec_5850_47051280_channel__a0_5830_46996400______58_84_47501740______58_840_60688100;

SignalI makeabus__r_47050020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47050020_rdec_5850_47051280_channel__a0_5830_46996400______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)rdec_5850_47051280;
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

Scope makerdec_5850_47051280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5850_47051280 = scope;
   scope->owner = (Object)channel__a0_5830_46996400;
   scope->name = "rdec:50";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47050020();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_5855_47049880;

SignalI abus__w_47049400_wdec_5855_47049880_channel__a0_5830_46996400______58_84_47501740______58_840_60688100;

SignalI makeabus__w_47049400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_47049400_wdec_5855_47049880_channel__a0_5830_46996400______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)wdec_5855_47049880;
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

Scope makewdec_5855_47049880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5855_47049880 = scope;
   scope->owner = (Object)channel__a0_5830_46996400;
   scope->name = "wdec:55";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_47049400();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __60764900;

Behavior make__60764900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60764900 = behavior;
   behavior->owner = (Object)channel__a0_5830_46996400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_47299240_channel__a0_5830_46996400______58_84_47501740______58_840_60688100);
   reg__0_47299240_channel__a0_5830_46996400______58_84_47501740______58_840_60688100->num_any += 1;
   reg__0_47299240_channel__a0_5830_46996400______58_84_47501740______58_840_60688100->any = realloc(reg__0_47299240_channel__a0_5830_46996400______58_84_47501740______58_840_60688100->any,reg__0_47299240_channel__a0_5830_46996400______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
reg__0_47299240_channel__a0_5830_46996400______58_84_47501740______58_840_60688100->any[reg__0_47299240_channel__a0_5830_46996400______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__60765060();

   return behavior;
}

Behavior __60764700;

Behavior make__60764700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60764700 = behavior;
   behavior->owner = (Object)channel__a0_5830_46996400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5832_47465120______58_84_47501740______58_840_60688100);
   _5832_47465120______58_84_47501740______58_840_60688100->num_any += 1;
   _5832_47465120______58_84_47501740______58_840_60688100->any = realloc(_5832_47465120______58_84_47501740______58_840_60688100->any,_5832_47465120______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
_5832_47465120______58_84_47501740______58_840_60688100->any[_5832_47465120______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__60764860();

   return behavior;
}

Behavior __60764240;

Behavior make__60764240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60764240 = behavior;
   behavior->owner = (Object)channel__a0_5830_46996400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_47499060_channel__a0_5830_46996400______58_84_47501740______58_840_60688100);
   reg__1_47499060_channel__a0_5830_46996400______58_84_47501740______58_840_60688100->num_any += 1;
   reg__1_47499060_channel__a0_5830_46996400______58_84_47501740______58_840_60688100->any = realloc(reg__1_47499060_channel__a0_5830_46996400______58_84_47501740______58_840_60688100->any,reg__1_47499060_channel__a0_5830_46996400______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
reg__1_47499060_channel__a0_5830_46996400______58_84_47501740______58_840_60688100->any[reg__1_47499060_channel__a0_5830_46996400______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__60764400();

   return behavior;
}

Behavior __60763980;

Behavior make__60763980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60763980 = behavior;
   behavior->owner = (Object)channel__a0_5830_46996400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5833_47684580______58_84_47501740______58_840_60688100);
   _5833_47684580______58_84_47501740______58_840_60688100->num_any += 1;
   _5833_47684580______58_84_47501740______58_840_60688100->any = realloc(_5833_47684580______58_84_47501740______58_840_60688100->any,_5833_47684580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
_5833_47684580______58_84_47501740______58_840_60688100->any[_5833_47684580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__60764200();

   return behavior;
}

Behavior __60763280;

Behavior make__60763280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60763280 = behavior;
   behavior->owner = (Object)channel__a0_5830_46996400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_47299240_channel__a0_5830_46996400______58_84_47501740______58_840_60688100);
   reg__0_47299240_channel__a0_5830_46996400______58_84_47501740______58_840_60688100->num_any += 1;
   reg__0_47299240_channel__a0_5830_46996400______58_84_47501740______58_840_60688100->any = realloc(reg__0_47299240_channel__a0_5830_46996400______58_84_47501740______58_840_60688100->any,reg__0_47299240_channel__a0_5830_46996400______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
reg__0_47299240_channel__a0_5830_46996400______58_84_47501740______58_840_60688100->any[reg__0_47299240_channel__a0_5830_46996400______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__60763480();

   return behavior;
}

Behavior __60763080;

Behavior make__60763080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60763080 = behavior;
   behavior->owner = (Object)channel__a0_5830_46996400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5843_47831580______58_84_47501740______58_840_60688100);
   _5843_47831580______58_84_47501740______58_840_60688100->num_any += 1;
   _5843_47831580______58_84_47501740______58_840_60688100->any = realloc(_5843_47831580______58_84_47501740______58_840_60688100->any,_5843_47831580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
_5843_47831580______58_84_47501740______58_840_60688100->any[_5843_47831580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__60763240();

   return behavior;
}

Behavior __60762620;

Behavior make__60762620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60762620 = behavior;
   behavior->owner = (Object)channel__a0_5830_46996400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_47499060_channel__a0_5830_46996400______58_84_47501740______58_840_60688100);
   reg__1_47499060_channel__a0_5830_46996400______58_84_47501740______58_840_60688100->num_any += 1;
   reg__1_47499060_channel__a0_5830_46996400______58_84_47501740______58_840_60688100->any = realloc(reg__1_47499060_channel__a0_5830_46996400______58_84_47501740______58_840_60688100->any,reg__1_47499060_channel__a0_5830_46996400______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
reg__1_47499060_channel__a0_5830_46996400______58_84_47501740______58_840_60688100->any[reg__1_47499060_channel__a0_5830_46996400______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__60762780();

   return behavior;
}

Behavior __60762420;

Behavior make__60762420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60762420 = behavior;
   behavior->owner = (Object)channel__a0_5830_46996400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5844_48575140______58_84_47501740______58_840_60688100);
   _5844_48575140______58_84_47501740______58_840_60688100->num_any += 1;
   _5844_48575140______58_84_47501740______58_840_60688100->any = realloc(_5844_48575140______58_84_47501740______58_840_60688100->any,_5844_48575140______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
_5844_48575140______58_84_47501740______58_840_60688100->any[_5844_48575140______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__60762580();

   return behavior;
}

Scope makechannel__a0_5830_46996400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__a0_5830_46996400 = scope;
   scope->owner = (Object)_____58_84_47501740;
   scope->name = "channel_a0:30";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_47299240();
   scope->inners[1] = makereg__1_47499060();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_5831_46992720();
   scope->scopes[1] = makeraddr_5834_46990060();
   scope->scopes[2] = makewaddr_5838_47011560();
   scope->scopes[3] = makerinc_5842_47035940();
   scope->scopes[4] = makewinc_5846_47030280();
   scope->scopes[5] = makerdec_5850_47051280();
   scope->scopes[6] = makewdec_5855_47049880();
   scope->num_behaviors = 8;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60764900();
   scope->behaviors[1] = make__60764700();
   scope->behaviors[2] = make__60764240();
   scope->behaviors[3] = make__60763980();
   scope->behaviors[4] = make__60763280();
   scope->behaviors[5] = make__60763080();
   scope->behaviors[6] = make__60762620();
   scope->behaviors[7] = make__60762420();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__a1_5860_49212100;

SignalI reg__0_49400460_channel__a1_5860_49212100______58_84_47501740______58_840_60688100;

SignalI makereg__0_49400460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_49400460_channel__a1_5860_49212100______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)channel__a1_5860_49212100;
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

Scope anum_5861_49211480;

Scope makeanum_5861_49211480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_5861_49211480 = scope;
   scope->owner = (Object)channel__a1_5860_49212100;
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

Scope raddr_5863_49209380;

Scope makeraddr_5863_49209380() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5863_49209380 = scope;
   scope->owner = (Object)channel__a1_5860_49212100;
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

Scope waddr_5866_49228060;

Scope makewaddr_5866_49228060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5866_49228060 = scope;
   scope->owner = (Object)channel__a1_5860_49212100;
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

Scope rinc_5869_49227160;

SignalI abus__r_49226780_rinc_5869_49227160_channel__a1_5860_49212100______58_84_47501740______58_840_60688100;

SignalI makeabus__r_49226780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49226780_rinc_5869_49227160_channel__a1_5860_49212100______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)rinc_5869_49227160;
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

Scope makerinc_5869_49227160() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5869_49227160 = scope;
   scope->owner = (Object)channel__a1_5860_49212100;
   scope->name = "rinc:69";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49226780();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5872_49226660;

SignalI abus__w_49226260_winc_5872_49226660_channel__a1_5860_49212100______58_84_47501740______58_840_60688100;

SignalI makeabus__w_49226260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49226260_winc_5872_49226660_channel__a1_5860_49212100______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)winc_5872_49226660;
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

Scope makewinc_5872_49226660() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5872_49226660 = scope;
   scope->owner = (Object)channel__a1_5860_49212100;
   scope->name = "winc:72";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49226260();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5875_49226140;

SignalI abus__r_49250220_rdec_5875_49226140_channel__a1_5860_49212100______58_84_47501740______58_840_60688100;

SignalI makeabus__r_49250220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49250220_rdec_5875_49226140_channel__a1_5860_49212100______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)rdec_5875_49226140;
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

Scope makerdec_5875_49226140() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5875_49226140 = scope;
   scope->owner = (Object)channel__a1_5860_49212100;
   scope->name = "rdec:75";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49250220();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_5879_49250100;

SignalI abus__w_49248920_wdec_5879_49250100_channel__a1_5860_49212100______58_84_47501740______58_840_60688100;

SignalI makeabus__w_49248920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49248920_wdec_5879_49250100_channel__a1_5860_49212100______58_84_47501740______58_840_60688100 = signalI;
   signalI->owner = (Object)wdec_5879_49250100;
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

Scope makewdec_5879_49250100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5879_49250100 = scope;
   scope->owner = (Object)channel__a1_5860_49212100;
   scope->name = "wdec:79";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49248920();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __60783000;

Behavior make__60783000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60783000 = behavior;
   behavior->owner = (Object)channel__a1_5860_49212100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_49400460_channel__a1_5860_49212100______58_84_47501740______58_840_60688100);
   reg__0_49400460_channel__a1_5860_49212100______58_84_47501740______58_840_60688100->num_any += 1;
   reg__0_49400460_channel__a1_5860_49212100______58_84_47501740______58_840_60688100->any = realloc(reg__0_49400460_channel__a1_5860_49212100______58_84_47501740______58_840_60688100->any,reg__0_49400460_channel__a1_5860_49212100______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
reg__0_49400460_channel__a1_5860_49212100______58_84_47501740______58_840_60688100->any[reg__0_49400460_channel__a1_5860_49212100______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__60783160();

   return behavior;
}

Behavior __60782800;

Behavior make__60782800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60782800 = behavior;
   behavior->owner = (Object)channel__a1_5860_49212100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5862_48639520______58_84_47501740______58_840_60688100);
   _5862_48639520______58_84_47501740______58_840_60688100->num_any += 1;
   _5862_48639520______58_84_47501740______58_840_60688100->any = realloc(_5862_48639520______58_84_47501740______58_840_60688100->any,_5862_48639520______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
_5862_48639520______58_84_47501740______58_840_60688100->any[_5862_48639520______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__60782960();

   return behavior;
}

Scope makechannel__a1_5860_49212100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__a1_5860_49212100 = scope;
   scope->owner = (Object)_____58_84_47501740;
   scope->name = "channel_a1:60";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_49400460();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_5861_49211480();
   scope->scopes[1] = makeraddr_5863_49209380();
   scope->scopes[2] = makewaddr_5866_49228060();
   scope->scopes[3] = makerinc_5869_49227160();
   scope->scopes[4] = makewinc_5872_49226660();
   scope->scopes[5] = makerdec_5875_49226140();
   scope->scopes[6] = makewdec_5879_49250100();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60783000();
   scope->behaviors[1] = make__60782800();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __60676740;

Behavior make__60676740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60676740 = behavior;
   behavior->owner = (Object)_____58_84_47501740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_49635240______58_84_47501740______58_840_60688100);
   clk_49635240______58_84_47501740______58_840_60688100->num_pos += 1;
   clk_49635240______58_84_47501740______58_840_60688100->pos = realloc(clk_49635240______58_84_47501740______58_840_60688100->pos,clk_49635240______58_84_47501740______58_840_60688100->num_pos*sizeof(Object));
clk_49635240______58_84_47501740______58_840_60688100->pos[clk_49635240______58_84_47501740______58_840_60688100->num_pos-1] = (Object)behavior;
   behavior->block = make__60491500();

   return behavior;
}

Behavior __60688220;

Behavior make__60688220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60688220 = behavior;
   register_timed_behavior(behavior);
   behavior->owner = (Object)_____58_84_47501740;
   behavior->activated = 0;
   behavior->timed = 1;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__60676580();

   return behavior;
}

Behavior __60747600;

Behavior make__60747600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60747600 = behavior;
   behavior->owner = (Object)_____58_84_47501740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_49635240______58_84_47501740______58_840_60688100);
   clk_49635240______58_84_47501740______58_840_60688100->num_any += 1;
   clk_49635240______58_84_47501740______58_840_60688100->any = realloc(clk_49635240______58_84_47501740______58_840_60688100->any,clk_49635240______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
clk_49635240______58_84_47501740______58_840_60688100->any[clk_49635240______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_49635220______58_84_47501740______58_840_60688100);
   rst_49635220______58_84_47501740______58_840_60688100->num_any += 1;
   rst_49635220______58_84_47501740______58_840_60688100->any = realloc(rst_49635220______58_84_47501740______58_840_60688100->any,rst_49635220______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
rst_49635220______58_84_47501740______58_840_60688100->any[rst_49635220______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,fill_49635140______58_84_47501740______58_840_60688100);
   fill_49635140______58_84_47501740______58_840_60688100->num_any += 1;
   fill_49635140______58_84_47501740______58_840_60688100->any = realloc(fill_49635140______58_84_47501740______58_840_60688100->any,fill_49635140______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
fill_49635140______58_84_47501740______58_840_60688100->any[fill_49635140______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,req_49635200______58_84_47501740______58_840_60688100);
   req_49635200______58_84_47501740______58_840_60688100->num_any += 1;
   req_49635200______58_84_47501740______58_840_60688100->any = realloc(req_49635200______58_84_47501740______58_840_60688100->any,req_49635200______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
req_49635200______58_84_47501740______58_840_60688100->any[req_49635200______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__0_49635180______58_84_47501740______58_840_60688100);
   ack__0_49635180______58_84_47501740______58_840_60688100->num_any += 1;
   ack__0_49635180______58_84_47501740______58_840_60688100->any = realloc(ack__0_49635180______58_84_47501740______58_840_60688100->any,ack__0_49635180______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
ack__0_49635180______58_84_47501740______58_840_60688100->any[ack__0_49635180______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__60722260();

   return behavior;
}

Behavior __60747400;

Behavior make__60747400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __60747400 = behavior;
   behavior->owner = (Object)_____58_84_47501740;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__0_52148080_layer0_58_840_52102580______58_84_47501740______58_840_60688100);
   ack__0_52148080_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any += 1;
   ack__0_52148080_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any = realloc(ack__0_52148080_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any,ack__0_52148080_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
ack__0_52148080_layer0_58_840_52102580______58_84_47501740______58_840_60688100->any[ack__0_52148080_layer0_58_840_52102580______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__1_60493980_layer1_58_840_60496360______58_84_47501740______58_840_60688100);
   ack__1_60493980_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any += 1;
   ack__1_60493980_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any = realloc(ack__1_60493980_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any,ack__1_60493980_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any*sizeof(Object));
ack__1_60493980_layer1_58_840_60496360______58_84_47501740______58_840_60688100->any[ack__1_60493980_layer1_58_840_60496360______58_84_47501740______58_840_60688100->num_any-1] = (Object)behavior;
   behavior->block = make__60722180();

   return behavior;
}

Scope make_____58_84_47501740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   _____58_84_47501740 = scope;
   scope->owner = (Object)_____58_840_60688100;
   scope->name = "__:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makelayer0_52147920();
   scope->systemIs[1] = makelayer1_60493780();
   scope->num_inners = 18;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeclk_49635240();
   scope->inners[1] = makerst_49635220();
   scope->inners[2] = makereq_49635200();
   scope->inners[3] = makeack__0_49635180();
   scope->inners[4] = makeack__1_49635160();
   scope->inners[5] = makefill_49635140();
   scope->inners[6] = make_5815_45299400();
   scope->inners[7] = make_5813_45299380();
   scope->inners[8] = make_5814_45298000();
   scope->inners[9] = make_5817_45297940();
   scope->inners[10] = make_5818_45297260();
   scope->inners[11] = make_5819_47234080();
   scope->inners[12] = make_5832_47465120();
   scope->inners[13] = make_5833_47684580();
   scope->inners[14] = make_5843_47831580();
   scope->inners[15] = make_5844_48575140();
   scope->inners[16] = make_5845_48575060();
   scope->inners[17] = make_5862_48639520();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__x_581_47501060();
   scope->scopes[1] = makechannel__a0_5830_46996400();
   scope->scopes[2] = makechannel__a1_5860_49212100();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__60676740();
   scope->behaviors[1] = make__60688220();
   scope->behaviors[2] = make__60747600();
   scope->behaviors[3] = make__60747400();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT make_____58_840_60688100() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   _____58_840_60688100 = systemT;
systemT->owner = NULL;
   systemT->name = "__:T0";
   systemT->num_inputs = 0;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->num_outputs = 0;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make_____58_84_47501740();

   return systemT;
}