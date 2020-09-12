#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT _____58_840_59389220;

Block __58905060;

Block __58904900;

Block __58904580;

void code__58904580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59585860(),_5818_49406900______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__58904580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58904580 = block;
   block->owner = (Object)__58904900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58904580;

   return block;
};

void code__58904900() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49167740______58_84_49763560______58_840_59389220->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59585940();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58904580();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59585800(),_5817_49407000______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__58904900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58904900 = block;
   block->owner = (Object)__58905060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58904900;

   return block;
};

Block __58903880;

Block __58903700;

Block __58903220;

void code__58903220() {
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
                  src0 = _5818_49406900______58_84_49763560______58_840_59389220->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59585540();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5818_49406900______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59585440(),_5817_49407000______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59585380(),_5819_49562880______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__58903220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58903220 = block;
   block->owner = (Object)__58903700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58903220;

   return block;
};

void code__58903700() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49167740______58_84_49763560______58_840_59389220->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59585680();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58903220();
   }
      }
   }
}

Block make__58903700() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58903700 = block;
   block->owner = (Object)__58903880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58903700;

   return block;
};

void code__58903880() {
 code__58903700();
}

Block make__58903880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58903880 = block;
   block->owner = (Object)__58905060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58903880;

   return block;
};

void code__58905060() {
 code__58904900();
   {
      Value cond = fill_49167660______58_84_49763560______58_840_59389220->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__58903880();
   }
      }
   }
}

Block make__58905060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __58905060 = block;
   block->owner = (Object)__59180620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__58905060;

   return block;
};

Block __59180500;

void code__59180500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59585320(),clk_49167760______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59585260(),rst_49167740______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59585180(),req_49167720______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59585120(),fill_49167660______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59389400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59585040(),rst_49167740______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59389400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59584980(),clk_49167760______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59389400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59584900(),clk_49167760______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59584800(),rst_49167740______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59584740(),fill_49167660______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59389400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59584680(),clk_49167760______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59389400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59584600(),clk_49167760______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59389400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59584540(),clk_49167760______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59389400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59584460(),clk_49167760______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59389400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59584400(),clk_49167760______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59389400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59584320(),clk_49167760______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59389400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59584080(),clk_49167760______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59389400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59584020(),clk_49167760______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59389400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59583960(),clk_49167760______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59389400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59583900(),clk_49167760______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59389400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59583840(),clk_49167760______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59389400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59583780(),clk_49167760______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59389400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59583720(),clk_49167760______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59389400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59583660(),clk_49167760______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59389400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59583600(),clk_49167760______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59389400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59583540(),clk_49167760______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59389400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59583480(),clk_49167760______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59389400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59583420(),clk_49167760______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59389400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59583360(),clk_49167760______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59389400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59583300(),clk_49167760______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59389400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59583240(),fill_49167660______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59583180(),clk_49167760______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59583120(),clk_49167760______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59583060(),req_49167720______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59389400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59583000(),clk_49167760______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59389400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59582940(),clk_49167760______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59582860(),clk_49167760______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59389400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59582800(),clk_49167760______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59389400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59582720(),clk_49167760______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59389400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59582660(),clk_49167760______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59389400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59582580(),clk_49167760______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59389400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59582480(),clk_49167760______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59389400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59582420(),clk_49167760______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59389400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59582340(),clk_49167760______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59389400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59582280(),clk_49167760______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59389400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59582200(),clk_49167760______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59389400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59582140(),clk_49167760______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59389400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59582060(),clk_49167760______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59389400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59581960(),clk_49167760______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59389400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59581900(),clk_49167760______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59389400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59581840(),clk_49167760______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59389400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59581780(),clk_49167760______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59389400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59581720(),clk_49167760______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59389400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59581660(),clk_49167760______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59389400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59581600(),clk_49167760______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59389400);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59581540(),clk_49167760______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59389400);
}

Block make__59180500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59180500 = block;
   block->owner = (Object)__59389400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59180500;

   return block;
};

Block __59456800;

void code__59456800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_49167760______58_84_49763560______58_840_59389220->c_value,clk_53411220_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_49167740______58_84_49763560______58_840_59389220->c_value,rst_53411200_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(fill_49167660______58_84_49763560______58_840_59389220->c_value,fill_53411180_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(req_49167720______58_84_49763560______58_840_59389220->c_value,req_53411160_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_49167760______58_84_49763560______58_840_59389220->c_value,clk_58907460_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_49167740______58_84_49763560______58_840_59389220->c_value,rst_58907440_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(fill_49167660______58_84_49763560______58_840_59389220->c_value,fill_58907420_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__0_49167700______58_84_49763560______58_840_59389220->c_value,req_58907400_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59456800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59456800 = block;
   block->owner = (Object)__59490240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59456800;

   return block;
};

Block __59456740;

void code__59456740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__0_53411120_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->c_value,ack__0_49167700______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__1_58907360_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->c_value,ack__1_49167680______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59456740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59456740 = block;
   block->owner = (Object)__59490080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59456740;

   return block;
};

Block __48251640;

Block __49050960;

void code__49050960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_49952800_channel__x_581_49763260______58_84_49763560______58_840_59389220->c_value,make_ref_rangeS(mem_45414720_channel__x_581_49763260______58_84_49763560______58_840_59389220,value2integer(abus__w_49952640_channel__x_581_49763260______58_84_49763560______58_840_59389220->c_value),value2integer(abus__w_49952640_channel__x_581_49763260______58_84_49763560______58_840_59389220->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__49050960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49050960 = block;
   block->owner = (Object)__48251640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49050960;

   return block;
};

void code__48251640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_45414720_channel__x_581_49763260______58_84_49763560______58_840_59389220->c_value;
            idx = value2integer(abus__r_49952720_channel__x_581_49763260______58_84_49763560______58_840_59389220->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_49866240_channel__x_581_49763260______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_49760360_channel__x_581_49763260______58_84_49763560______58_840_59389220->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49050960();
   }
      }
   }
}

Block make__48251640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48251640 = block;
   block->owner = (Object)__49458000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48251640;

   return block;
};

Block __59489260;

void code__59489260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_49866240_channel__x_581_49763260______58_84_49763560______58_840_59389220->c_value,_5815_49407140______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59489260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59489260 = block;
   block->owner = (Object)__59489060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59489260;

   return block;
};

Block __59489020;

void code__59489020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5815_49407140______58_84_49763560______58_840_59389220->c_value,dbus__r_49866240_channel__x_581_49763260______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59489020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59489020 = block;
   block->owner = (Object)__59488800;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59489020;

   return block;
};

Block __59488500;

void code__59488500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_49760380_channel__x_581_49763260______58_84_49763560______58_840_59389220->c_value,_5813_49407120______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59488500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59488500 = block;
   block->owner = (Object)__59488340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59488500;

   return block;
};

Block __59488300;

void code__59488300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5813_49407120______58_84_49763560______58_840_59389220->c_value,trig__r_49760380_channel__x_581_49763260______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59488300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59488300 = block;
   block->owner = (Object)__59488140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59488300;

   return block;
};

Block __59487840;

void code__59487840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_49952720_channel__x_581_49763260______58_84_49763560______58_840_59389220->c_value,_5814_49407020______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59487840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59487840 = block;
   block->owner = (Object)__59487680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59487840;

   return block;
};

Block __59487640;

void code__59487640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5814_49407020______58_84_49763560______58_840_59389220->c_value,abus__r_49952720_channel__x_581_49763260______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59487640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59487640 = block;
   block->owner = (Object)__59487480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59487640;

   return block;
};

Block __59487060;

void code__59487060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_49760360_channel__x_581_49763260______58_84_49763560______58_840_59389220->c_value,_5817_49407000______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59487060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59487060 = block;
   block->owner = (Object)__59486860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59487060;

   return block;
};

Block __59486780;

void code__59486780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5817_49407000______58_84_49763560______58_840_59389220->c_value,trig__w_49760360_channel__x_581_49763260______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59486780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59486780 = block;
   block->owner = (Object)__59486620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59486780;

   return block;
};

Block __59486320;

void code__59486320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_49952640_channel__x_581_49763260______58_84_49763560______58_840_59389220->c_value,_5818_49406900______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59486320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59486320 = block;
   block->owner = (Object)__59486160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59486320;

   return block;
};

Block __59486120;

void code__59486120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5818_49406900______58_84_49763560______58_840_59389220->c_value,abus__w_49952640_channel__x_581_49763260______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59486120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59486120 = block;
   block->owner = (Object)__59485960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59486120;

   return block;
};

Block __59485660;

void code__59485660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_49952800_channel__x_581_49763260______58_84_49763560______58_840_59389220->c_value,_5819_49562880______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59485660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59485660 = block;
   block->owner = (Object)__59485500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59485660;

   return block;
};

Block __59485460;

void code__59485460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5819_49562880______58_84_49763560______58_840_59389220->c_value,dbus__w_49952800_channel__x_581_49763260______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59485460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59485460 = block;
   block->owner = (Object)__59485300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59485460;

   return block;
};

Block __59483580;

void code__59483580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_49649520_channel__a0_5830_49457840______58_84_49763560______58_840_59389220->c_value,_5832_49696560______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59483580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59483580 = block;
   block->owner = (Object)__59483420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59483580;

   return block;
};

Block __59483380;

void code__59483380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5832_49696560______58_84_49763560______58_840_59389220->c_value,reg__0_49649520_channel__a0_5830_49457840______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59483380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59483380 = block;
   block->owner = (Object)__59483220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59483380;

   return block;
};

Block __59482840;

void code__59482840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_49749080_channel__a0_5830_49457840______58_84_49763560______58_840_59389220->c_value,_5833_49815100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59482840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59482840 = block;
   block->owner = (Object)__59482560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59482840;

   return block;
};

Block __59482520;

void code__59482520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5833_49815100______58_84_49763560______58_840_59389220->c_value,reg__1_49749080_channel__a0_5830_49457840______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59482520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59482520 = block;
   block->owner = (Object)__59482360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59482520;

   return block;
};

Block __59506600;

void code__59506600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_49649520_channel__a0_5830_49457840______58_84_49763560______58_840_59389220->c_value,_5843_49920740______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59506600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59506600 = block;
   block->owner = (Object)__59506440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59506600;

   return block;
};

Block __59506400;

void code__59506400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5843_49920740______58_84_49763560______58_840_59389220->c_value,reg__0_49649520_channel__a0_5830_49457840______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59506400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59506400 = block;
   block->owner = (Object)__59506240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59506400;

   return block;
};

Block __59505940;

void code__59505940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_49749080_channel__a0_5830_49457840______58_84_49763560______58_840_59389220->c_value,_5844_44580260______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59505940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59505940 = block;
   block->owner = (Object)__59505780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59505940;

   return block;
};

Block __59505740;

void code__59505740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5844_44580260______58_84_49763560______58_840_59389220->c_value,reg__1_49749080_channel__a0_5830_49457840______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59505740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59505740 = block;
   block->owner = (Object)__59505580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59505740;

   return block;
};

Block __59503760;

void code__59503760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_49475320_rinc_5842_49477520_channel__a0_5830_49457840______58_84_49763560______58_840_59389220->c_value,_5845_44580100______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59503760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59503760 = block;
   block->owner = (Object)__59503600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59503760;

   return block;
};

Block __59503560;

void code__59503560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5845_44580100______58_84_49763560______58_840_59389220->c_value,abus__r_49475320_rinc_5842_49477520_channel__a0_5830_49457840______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59503560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59503560 = block;
   block->owner = (Object)__59503400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59503560;

   return block;
};

Block __59501980;

void code__59501980() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_48958540_channel__a1_5860_49246620______58_84_49763560______58_840_59389220->c_value,_5862_47481420______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59501980() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59501980 = block;
   block->owner = (Object)__59501820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59501980;

   return block;
};

Block __59501780;

void code__59501780() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5862_47481420______58_84_49763560______58_840_59389220->c_value,reg__0_48958540_channel__a1_5860_49246620______58_84_49763560______58_840_59389220);
      set_value_pos(pool_state);
   }
}

Block make__59501780() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59501780 = block;
   block->owner = (Object)__59501620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59501780;

   return block;
};

Value make__59585940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59585860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59585800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59585680() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59585540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59585440() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59585380() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__59585320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59585260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59585180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59585120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59585040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59584980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59584900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59584800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59584740() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59584680() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59584600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59584540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59584460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59584400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59584320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59584080() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59584020() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59583960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59583900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59583840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59583780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59583720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59583660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59583600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59583540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59583480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59583420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59583360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59583300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59583240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59583180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59583120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59583060() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59583000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59582940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59582860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59582800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59582720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59582660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59582580() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59582480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59582420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59582340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59582280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59582200() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59582140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59582060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59581960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59581900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59581840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59581780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59581720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59581660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59581600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59581540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope _____58_84_49763560;

SignalI clk_49167760______58_84_49763560______58_840_59389220;

SignalI makeclk_49167760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_49167760______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)_____58_84_49763560;
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

SignalI rst_49167740______58_84_49763560______58_840_59389220;

SignalI makerst_49167740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_49167740______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)_____58_84_49763560;
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

SignalI req_49167720______58_84_49763560______58_840_59389220;

SignalI makereq_49167720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_49167720______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)_____58_84_49763560;
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

SignalI ack__0_49167700______58_84_49763560______58_840_59389220;

SignalI makeack__0_49167700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__0_49167700______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)_____58_84_49763560;
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

SignalI ack__1_49167680______58_84_49763560______58_840_59389220;

SignalI makeack__1_49167680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__1_49167680______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)_____58_84_49763560;
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

SignalI fill_49167660______58_84_49763560______58_840_59389220;

SignalI makefill_49167660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_49167660______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)_____58_84_49763560;
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

SignalI _5815_49407140______58_84_49763560______58_840_59389220;

SignalI make_5815_49407140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5815_49407140______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)_____58_84_49763560;
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

SignalI _5813_49407120______58_84_49763560______58_840_59389220;

SignalI make_5813_49407120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5813_49407120______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)_____58_84_49763560;
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

SignalI _5814_49407020______58_84_49763560______58_840_59389220;

SignalI make_5814_49407020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5814_49407020______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)_____58_84_49763560;
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

SignalI _5817_49407000______58_84_49763560______58_840_59389220;

SignalI make_5817_49407000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5817_49407000______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)_____58_84_49763560;
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

SignalI _5818_49406900______58_84_49763560______58_840_59389220;

SignalI make_5818_49406900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5818_49406900______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)_____58_84_49763560;
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

SignalI _5819_49562880______58_84_49763560______58_840_59389220;

SignalI make_5819_49562880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5819_49562880______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)_____58_84_49763560;
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

SignalI _5832_49696560______58_84_49763560______58_840_59389220;

SignalI make_5832_49696560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5832_49696560______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)_____58_84_49763560;
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

SignalI _5833_49815100______58_84_49763560______58_840_59389220;

SignalI make_5833_49815100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5833_49815100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)_____58_84_49763560;
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

SignalI _5843_49920740______58_84_49763560______58_840_59389220;

SignalI make_5843_49920740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5843_49920740______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)_____58_84_49763560;
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

SignalI _5844_44580260______58_84_49763560______58_840_59389220;

SignalI make_5844_44580260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5844_44580260______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)_____58_84_49763560;
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

SignalI _5845_44580100______58_84_49763560______58_840_59389220;

SignalI make_5845_44580100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5845_44580100______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)_____58_84_49763560;
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

SignalI _5862_47481420______58_84_49763560______58_840_59389220;

SignalI make_5862_47481420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5862_47481420______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)_____58_84_49763560;
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

SystemI layer__hidden_53410960;

SystemI makelayer__hidden_53410960() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer__hidden_53410960 = systemI;
   systemI->owner = (Object)_____58_84_49763560;
   systemI->name = "layer_hidden";
   systemI->system = layer__hidden_58_840_53373100;

   return systemI;
};

SystemI layer__output_58907220;

SystemI makelayer__output_58907220() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer__output_58907220 = systemI;
   systemI->owner = (Object)_____58_84_49763560;
   systemI->name = "layer_output";
   systemI->system = layer__output_58_840_58885180;

   return systemI;
};

Scope channel__x_581_49763260;

SignalI trig__r_49760380_channel__x_581_49763260______58_84_49763560______58_840_59389220;

SignalI maketrig__r_49760380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_49760380_channel__x_581_49763260______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)channel__x_581_49763260;
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

SignalI trig__w_49760360_channel__x_581_49763260______58_84_49763560______58_840_59389220;

SignalI maketrig__w_49760360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_49760360_channel__x_581_49763260______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)channel__x_581_49763260;
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

SignalI dbus__r_49866240_channel__x_581_49763260______58_84_49763560______58_840_59389220;

SignalI makedbus__r_49866240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_49866240_channel__x_581_49763260______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)channel__x_581_49763260;
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

SignalI dbus__w_49952800_channel__x_581_49763260______58_84_49763560______58_840_59389220;

SignalI makedbus__w_49952800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_49952800_channel__x_581_49763260______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)channel__x_581_49763260;
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

SignalI abus__r_49952720_channel__x_581_49763260______58_84_49763560______58_840_59389220;

SignalI makeabus__r_49952720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49952720_channel__x_581_49763260______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)channel__x_581_49763260;
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

SignalI abus__w_49952640_channel__x_581_49763260______58_84_49763560______58_840_59389220;

SignalI makeabus__w_49952640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49952640_channel__x_581_49763260______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)channel__x_581_49763260;
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

SignalI mem_45414720_channel__x_581_49763260______58_84_49763560______58_840_59389220;

SignalI makemem_45414720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_45414720_channel__x_581_49763260______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)channel__x_581_49763260;
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

Scope raddr_582_49762960;

Scope makeraddr_582_49762960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_582_49762960 = scope;
   scope->owner = (Object)channel__x_581_49763260;
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

Scope waddr_587_49762540;

Scope makewaddr_587_49762540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_587_49762540 = scope;
   scope->owner = (Object)channel__x_581_49763260;
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

Scope rinc_5812_49762120;

Scope makerinc_5812_49762120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5812_49762120 = scope;
   scope->owner = (Object)channel__x_581_49763260;
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

Scope winc_5816_49761700;

Scope makewinc_5816_49761700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5816_49761700 = scope;
   scope->owner = (Object)channel__x_581_49763260;
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

Scope rdec_5820_49761280;

Scope makerdec_5820_49761280() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5820_49761280 = scope;
   scope->owner = (Object)channel__x_581_49763260;
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

Scope wdec_5825_49760860;

Scope makewdec_5825_49760860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5825_49760860 = scope;
   scope->owner = (Object)channel__x_581_49763260;
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

Behavior __49458000;

Behavior make__49458000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49458000 = behavior;
   behavior->owner = (Object)channel__x_581_49763260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_49167760______58_84_49763560______58_840_59389220);
   clk_49167760______58_84_49763560______58_840_59389220->num_neg += 1;
   clk_49167760______58_84_49763560______58_840_59389220->neg = realloc(clk_49167760______58_84_49763560______58_840_59389220->neg,clk_49167760______58_84_49763560______58_840_59389220->num_neg*sizeof(Object));
clk_49167760______58_84_49763560______58_840_59389220->neg[clk_49167760______58_84_49763560______58_840_59389220->num_neg-1] = (Object)behavior;
   behavior->block = make__48251640();

   return behavior;
}

Behavior __59489060;

Behavior make__59489060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59489060 = behavior;
   behavior->owner = (Object)channel__x_581_49763260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_49866240_channel__x_581_49763260______58_84_49763560______58_840_59389220);
   dbus__r_49866240_channel__x_581_49763260______58_84_49763560______58_840_59389220->num_any += 1;
   dbus__r_49866240_channel__x_581_49763260______58_84_49763560______58_840_59389220->any = realloc(dbus__r_49866240_channel__x_581_49763260______58_84_49763560______58_840_59389220->any,dbus__r_49866240_channel__x_581_49763260______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
dbus__r_49866240_channel__x_581_49763260______58_84_49763560______58_840_59389220->any[dbus__r_49866240_channel__x_581_49763260______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59489260();

   return behavior;
}

Behavior __59488800;

Behavior make__59488800() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59488800 = behavior;
   behavior->owner = (Object)channel__x_581_49763260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5815_49407140______58_84_49763560______58_840_59389220);
   _5815_49407140______58_84_49763560______58_840_59389220->num_any += 1;
   _5815_49407140______58_84_49763560______58_840_59389220->any = realloc(_5815_49407140______58_84_49763560______58_840_59389220->any,_5815_49407140______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
_5815_49407140______58_84_49763560______58_840_59389220->any[_5815_49407140______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59489020();

   return behavior;
}

Behavior __59488340;

Behavior make__59488340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59488340 = behavior;
   behavior->owner = (Object)channel__x_581_49763260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_49760380_channel__x_581_49763260______58_84_49763560______58_840_59389220);
   trig__r_49760380_channel__x_581_49763260______58_84_49763560______58_840_59389220->num_any += 1;
   trig__r_49760380_channel__x_581_49763260______58_84_49763560______58_840_59389220->any = realloc(trig__r_49760380_channel__x_581_49763260______58_84_49763560______58_840_59389220->any,trig__r_49760380_channel__x_581_49763260______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
trig__r_49760380_channel__x_581_49763260______58_84_49763560______58_840_59389220->any[trig__r_49760380_channel__x_581_49763260______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59488500();

   return behavior;
}

Behavior __59488140;

Behavior make__59488140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59488140 = behavior;
   behavior->owner = (Object)channel__x_581_49763260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5813_49407120______58_84_49763560______58_840_59389220);
   _5813_49407120______58_84_49763560______58_840_59389220->num_any += 1;
   _5813_49407120______58_84_49763560______58_840_59389220->any = realloc(_5813_49407120______58_84_49763560______58_840_59389220->any,_5813_49407120______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
_5813_49407120______58_84_49763560______58_840_59389220->any[_5813_49407120______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59488300();

   return behavior;
}

Behavior __59487680;

Behavior make__59487680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59487680 = behavior;
   behavior->owner = (Object)channel__x_581_49763260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_49952720_channel__x_581_49763260______58_84_49763560______58_840_59389220);
   abus__r_49952720_channel__x_581_49763260______58_84_49763560______58_840_59389220->num_any += 1;
   abus__r_49952720_channel__x_581_49763260______58_84_49763560______58_840_59389220->any = realloc(abus__r_49952720_channel__x_581_49763260______58_84_49763560______58_840_59389220->any,abus__r_49952720_channel__x_581_49763260______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
abus__r_49952720_channel__x_581_49763260______58_84_49763560______58_840_59389220->any[abus__r_49952720_channel__x_581_49763260______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59487840();

   return behavior;
}

Behavior __59487480;

Behavior make__59487480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59487480 = behavior;
   behavior->owner = (Object)channel__x_581_49763260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5814_49407020______58_84_49763560______58_840_59389220);
   _5814_49407020______58_84_49763560______58_840_59389220->num_any += 1;
   _5814_49407020______58_84_49763560______58_840_59389220->any = realloc(_5814_49407020______58_84_49763560______58_840_59389220->any,_5814_49407020______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
_5814_49407020______58_84_49763560______58_840_59389220->any[_5814_49407020______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59487640();

   return behavior;
}

Behavior __59486860;

Behavior make__59486860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59486860 = behavior;
   behavior->owner = (Object)channel__x_581_49763260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_49760360_channel__x_581_49763260______58_84_49763560______58_840_59389220);
   trig__w_49760360_channel__x_581_49763260______58_84_49763560______58_840_59389220->num_any += 1;
   trig__w_49760360_channel__x_581_49763260______58_84_49763560______58_840_59389220->any = realloc(trig__w_49760360_channel__x_581_49763260______58_84_49763560______58_840_59389220->any,trig__w_49760360_channel__x_581_49763260______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
trig__w_49760360_channel__x_581_49763260______58_84_49763560______58_840_59389220->any[trig__w_49760360_channel__x_581_49763260______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59487060();

   return behavior;
}

Behavior __59486620;

Behavior make__59486620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59486620 = behavior;
   behavior->owner = (Object)channel__x_581_49763260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5817_49407000______58_84_49763560______58_840_59389220);
   _5817_49407000______58_84_49763560______58_840_59389220->num_any += 1;
   _5817_49407000______58_84_49763560______58_840_59389220->any = realloc(_5817_49407000______58_84_49763560______58_840_59389220->any,_5817_49407000______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
_5817_49407000______58_84_49763560______58_840_59389220->any[_5817_49407000______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59486780();

   return behavior;
}

Behavior __59486160;

Behavior make__59486160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59486160 = behavior;
   behavior->owner = (Object)channel__x_581_49763260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_49952640_channel__x_581_49763260______58_84_49763560______58_840_59389220);
   abus__w_49952640_channel__x_581_49763260______58_84_49763560______58_840_59389220->num_any += 1;
   abus__w_49952640_channel__x_581_49763260______58_84_49763560______58_840_59389220->any = realloc(abus__w_49952640_channel__x_581_49763260______58_84_49763560______58_840_59389220->any,abus__w_49952640_channel__x_581_49763260______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
abus__w_49952640_channel__x_581_49763260______58_84_49763560______58_840_59389220->any[abus__w_49952640_channel__x_581_49763260______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59486320();

   return behavior;
}

Behavior __59485960;

Behavior make__59485960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59485960 = behavior;
   behavior->owner = (Object)channel__x_581_49763260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5818_49406900______58_84_49763560______58_840_59389220);
   _5818_49406900______58_84_49763560______58_840_59389220->num_any += 1;
   _5818_49406900______58_84_49763560______58_840_59389220->any = realloc(_5818_49406900______58_84_49763560______58_840_59389220->any,_5818_49406900______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
_5818_49406900______58_84_49763560______58_840_59389220->any[_5818_49406900______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59486120();

   return behavior;
}

Behavior __59485500;

Behavior make__59485500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59485500 = behavior;
   behavior->owner = (Object)channel__x_581_49763260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_49952800_channel__x_581_49763260______58_84_49763560______58_840_59389220);
   dbus__w_49952800_channel__x_581_49763260______58_84_49763560______58_840_59389220->num_any += 1;
   dbus__w_49952800_channel__x_581_49763260______58_84_49763560______58_840_59389220->any = realloc(dbus__w_49952800_channel__x_581_49763260______58_84_49763560______58_840_59389220->any,dbus__w_49952800_channel__x_581_49763260______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
dbus__w_49952800_channel__x_581_49763260______58_84_49763560______58_840_59389220->any[dbus__w_49952800_channel__x_581_49763260______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59485660();

   return behavior;
}

Behavior __59485300;

Behavior make__59485300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59485300 = behavior;
   behavior->owner = (Object)channel__x_581_49763260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5819_49562880______58_84_49763560______58_840_59389220);
   _5819_49562880______58_84_49763560______58_840_59389220->num_any += 1;
   _5819_49562880______58_84_49763560______58_840_59389220->any = realloc(_5819_49562880______58_84_49763560______58_840_59389220->any,_5819_49562880______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
_5819_49562880______58_84_49763560______58_840_59389220->any[_5819_49562880______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59485460();

   return behavior;
}

Scope makechannel__x_581_49763260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__x_581_49763260 = scope;
   scope->owner = (Object)_____58_84_49763560;
   scope->name = "channel_x:1";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_49760380();
   scope->inners[1] = maketrig__w_49760360();
   scope->inners[2] = makedbus__r_49866240();
   scope->inners[3] = makedbus__w_49952800();
   scope->inners[4] = makeabus__r_49952720();
   scope->inners[5] = makeabus__w_49952640();
   scope->inners[6] = makemem_45414720();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_582_49762960();
   scope->scopes[1] = makewaddr_587_49762540();
   scope->scopes[2] = makerinc_5812_49762120();
   scope->scopes[3] = makewinc_5816_49761700();
   scope->scopes[4] = makerdec_5820_49761280();
   scope->scopes[5] = makewdec_5825_49760860();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49458000();
   scope->behaviors[1] = make__59489060();
   scope->behaviors[2] = make__59488800();
   scope->behaviors[3] = make__59488340();
   scope->behaviors[4] = make__59488140();
   scope->behaviors[5] = make__59487680();
   scope->behaviors[6] = make__59487480();
   scope->behaviors[7] = make__59486860();
   scope->behaviors[8] = make__59486620();
   scope->behaviors[9] = make__59486160();
   scope->behaviors[10] = make__59485960();
   scope->behaviors[11] = make__59485500();
   scope->behaviors[12] = make__59485300();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__a0_5830_49457840;

SignalI reg__0_49649520_channel__a0_5830_49457840______58_84_49763560______58_840_59389220;

SignalI makereg__0_49649520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_49649520_channel__a0_5830_49457840______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)channel__a0_5830_49457840;
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

SignalI reg__1_49749080_channel__a0_5830_49457840______58_84_49763560______58_840_59389220;

SignalI makereg__1_49749080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_49749080_channel__a0_5830_49457840______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)channel__a0_5830_49457840;
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

Scope anum_5831_49457540;

Scope makeanum_5831_49457540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_5831_49457540 = scope;
   scope->owner = (Object)channel__a0_5830_49457840;
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

Scope raddr_5834_49456440;

Scope makeraddr_5834_49456440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5834_49456440 = scope;
   scope->owner = (Object)channel__a0_5830_49457840;
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

Scope waddr_5838_49479400;

Scope makewaddr_5838_49479400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5838_49479400 = scope;
   scope->owner = (Object)channel__a0_5830_49457840;
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

Scope rinc_5842_49477520;

SignalI abus__r_49475320_rinc_5842_49477520_channel__a0_5830_49457840______58_84_49763560______58_840_59389220;

SignalI makeabus__r_49475320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49475320_rinc_5842_49477520_channel__a0_5830_49457840______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)rinc_5842_49477520;
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

Behavior __59503600;

Behavior make__59503600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59503600 = behavior;
   behavior->owner = (Object)rinc_5842_49477520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_49475320_rinc_5842_49477520_channel__a0_5830_49457840______58_84_49763560______58_840_59389220);
   abus__r_49475320_rinc_5842_49477520_channel__a0_5830_49457840______58_84_49763560______58_840_59389220->num_any += 1;
   abus__r_49475320_rinc_5842_49477520_channel__a0_5830_49457840______58_84_49763560______58_840_59389220->any = realloc(abus__r_49475320_rinc_5842_49477520_channel__a0_5830_49457840______58_84_49763560______58_840_59389220->any,abus__r_49475320_rinc_5842_49477520_channel__a0_5830_49457840______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
abus__r_49475320_rinc_5842_49477520_channel__a0_5830_49457840______58_84_49763560______58_840_59389220->any[abus__r_49475320_rinc_5842_49477520_channel__a0_5830_49457840______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59503760();

   return behavior;
}

Behavior __59503400;

Behavior make__59503400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59503400 = behavior;
   behavior->owner = (Object)rinc_5842_49477520;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5845_44580100______58_84_49763560______58_840_59389220);
   _5845_44580100______58_84_49763560______58_840_59389220->num_any += 1;
   _5845_44580100______58_84_49763560______58_840_59389220->any = realloc(_5845_44580100______58_84_49763560______58_840_59389220->any,_5845_44580100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
_5845_44580100______58_84_49763560______58_840_59389220->any[_5845_44580100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59503560();

   return behavior;
}

Scope makerinc_5842_49477520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5842_49477520 = scope;
   scope->owner = (Object)channel__a0_5830_49457840;
   scope->name = "rinc:42";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49475320();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59503600();
   scope->behaviors[1] = make__59503400();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5846_49472920;

SignalI abus__w_49495940_winc_5846_49472920_channel__a0_5830_49457840______58_84_49763560______58_840_59389220;

SignalI makeabus__w_49495940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49495940_winc_5846_49472920_channel__a0_5830_49457840______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)winc_5846_49472920;
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

Scope makewinc_5846_49472920() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5846_49472920 = scope;
   scope->owner = (Object)channel__a0_5830_49457840;
   scope->name = "winc:46";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49495940();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5850_49495580;

SignalI abus__r_49494880_rdec_5850_49495580_channel__a0_5830_49457840______58_84_49763560______58_840_59389220;

SignalI makeabus__r_49494880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49494880_rdec_5850_49495580_channel__a0_5830_49457840______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)rdec_5850_49495580;
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

Scope makerdec_5850_49495580() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5850_49495580 = scope;
   scope->owner = (Object)channel__a0_5830_49457840;
   scope->name = "rdec:50";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49494880();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_5855_49494760;

SignalI abus__w_49494340_wdec_5855_49494760_channel__a0_5830_49457840______58_84_49763560______58_840_59389220;

SignalI makeabus__w_49494340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49494340_wdec_5855_49494760_channel__a0_5830_49457840______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)wdec_5855_49494760;
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

Scope makewdec_5855_49494760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5855_49494760 = scope;
   scope->owner = (Object)channel__a0_5830_49457840;
   scope->name = "wdec:55";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49494340();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __59483420;

Behavior make__59483420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59483420 = behavior;
   behavior->owner = (Object)channel__a0_5830_49457840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_49649520_channel__a0_5830_49457840______58_84_49763560______58_840_59389220);
   reg__0_49649520_channel__a0_5830_49457840______58_84_49763560______58_840_59389220->num_any += 1;
   reg__0_49649520_channel__a0_5830_49457840______58_84_49763560______58_840_59389220->any = realloc(reg__0_49649520_channel__a0_5830_49457840______58_84_49763560______58_840_59389220->any,reg__0_49649520_channel__a0_5830_49457840______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
reg__0_49649520_channel__a0_5830_49457840______58_84_49763560______58_840_59389220->any[reg__0_49649520_channel__a0_5830_49457840______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59483580();

   return behavior;
}

Behavior __59483220;

Behavior make__59483220() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59483220 = behavior;
   behavior->owner = (Object)channel__a0_5830_49457840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5832_49696560______58_84_49763560______58_840_59389220);
   _5832_49696560______58_84_49763560______58_840_59389220->num_any += 1;
   _5832_49696560______58_84_49763560______58_840_59389220->any = realloc(_5832_49696560______58_84_49763560______58_840_59389220->any,_5832_49696560______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
_5832_49696560______58_84_49763560______58_840_59389220->any[_5832_49696560______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59483380();

   return behavior;
}

Behavior __59482560;

Behavior make__59482560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59482560 = behavior;
   behavior->owner = (Object)channel__a0_5830_49457840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_49749080_channel__a0_5830_49457840______58_84_49763560______58_840_59389220);
   reg__1_49749080_channel__a0_5830_49457840______58_84_49763560______58_840_59389220->num_any += 1;
   reg__1_49749080_channel__a0_5830_49457840______58_84_49763560______58_840_59389220->any = realloc(reg__1_49749080_channel__a0_5830_49457840______58_84_49763560______58_840_59389220->any,reg__1_49749080_channel__a0_5830_49457840______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
reg__1_49749080_channel__a0_5830_49457840______58_84_49763560______58_840_59389220->any[reg__1_49749080_channel__a0_5830_49457840______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59482840();

   return behavior;
}

Behavior __59482360;

Behavior make__59482360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59482360 = behavior;
   behavior->owner = (Object)channel__a0_5830_49457840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5833_49815100______58_84_49763560______58_840_59389220);
   _5833_49815100______58_84_49763560______58_840_59389220->num_any += 1;
   _5833_49815100______58_84_49763560______58_840_59389220->any = realloc(_5833_49815100______58_84_49763560______58_840_59389220->any,_5833_49815100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
_5833_49815100______58_84_49763560______58_840_59389220->any[_5833_49815100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59482520();

   return behavior;
}

Behavior __59506440;

Behavior make__59506440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59506440 = behavior;
   behavior->owner = (Object)channel__a0_5830_49457840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_49649520_channel__a0_5830_49457840______58_84_49763560______58_840_59389220);
   reg__0_49649520_channel__a0_5830_49457840______58_84_49763560______58_840_59389220->num_any += 1;
   reg__0_49649520_channel__a0_5830_49457840______58_84_49763560______58_840_59389220->any = realloc(reg__0_49649520_channel__a0_5830_49457840______58_84_49763560______58_840_59389220->any,reg__0_49649520_channel__a0_5830_49457840______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
reg__0_49649520_channel__a0_5830_49457840______58_84_49763560______58_840_59389220->any[reg__0_49649520_channel__a0_5830_49457840______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59506600();

   return behavior;
}

Behavior __59506240;

Behavior make__59506240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59506240 = behavior;
   behavior->owner = (Object)channel__a0_5830_49457840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5843_49920740______58_84_49763560______58_840_59389220);
   _5843_49920740______58_84_49763560______58_840_59389220->num_any += 1;
   _5843_49920740______58_84_49763560______58_840_59389220->any = realloc(_5843_49920740______58_84_49763560______58_840_59389220->any,_5843_49920740______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
_5843_49920740______58_84_49763560______58_840_59389220->any[_5843_49920740______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59506400();

   return behavior;
}

Behavior __59505780;

Behavior make__59505780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59505780 = behavior;
   behavior->owner = (Object)channel__a0_5830_49457840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_49749080_channel__a0_5830_49457840______58_84_49763560______58_840_59389220);
   reg__1_49749080_channel__a0_5830_49457840______58_84_49763560______58_840_59389220->num_any += 1;
   reg__1_49749080_channel__a0_5830_49457840______58_84_49763560______58_840_59389220->any = realloc(reg__1_49749080_channel__a0_5830_49457840______58_84_49763560______58_840_59389220->any,reg__1_49749080_channel__a0_5830_49457840______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
reg__1_49749080_channel__a0_5830_49457840______58_84_49763560______58_840_59389220->any[reg__1_49749080_channel__a0_5830_49457840______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59505940();

   return behavior;
}

Behavior __59505580;

Behavior make__59505580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59505580 = behavior;
   behavior->owner = (Object)channel__a0_5830_49457840;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5844_44580260______58_84_49763560______58_840_59389220);
   _5844_44580260______58_84_49763560______58_840_59389220->num_any += 1;
   _5844_44580260______58_84_49763560______58_840_59389220->any = realloc(_5844_44580260______58_84_49763560______58_840_59389220->any,_5844_44580260______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
_5844_44580260______58_84_49763560______58_840_59389220->any[_5844_44580260______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59505740();

   return behavior;
}

Scope makechannel__a0_5830_49457840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__a0_5830_49457840 = scope;
   scope->owner = (Object)_____58_84_49763560;
   scope->name = "channel_a0:30";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_49649520();
   scope->inners[1] = makereg__1_49749080();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_5831_49457540();
   scope->scopes[1] = makeraddr_5834_49456440();
   scope->scopes[2] = makewaddr_5838_49479400();
   scope->scopes[3] = makerinc_5842_49477520();
   scope->scopes[4] = makewinc_5846_49472920();
   scope->scopes[5] = makerdec_5850_49495580();
   scope->scopes[6] = makewdec_5855_49494760();
   scope->num_behaviors = 8;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59483420();
   scope->behaviors[1] = make__59483220();
   scope->behaviors[2] = make__59482560();
   scope->behaviors[3] = make__59482360();
   scope->behaviors[4] = make__59506440();
   scope->behaviors[5] = make__59506240();
   scope->behaviors[6] = make__59505780();
   scope->behaviors[7] = make__59505580();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__a1_5860_49246620;

SignalI reg__0_48958540_channel__a1_5860_49246620______58_84_49763560______58_840_59389220;

SignalI makereg__0_48958540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_48958540_channel__a1_5860_49246620______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)channel__a1_5860_49246620;
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

Scope anum_5861_49246320;

Scope makeanum_5861_49246320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_5861_49246320 = scope;
   scope->owner = (Object)channel__a1_5860_49246620;
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

Scope raddr_5863_49245900;

Scope makeraddr_5863_49245900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5863_49245900 = scope;
   scope->owner = (Object)channel__a1_5860_49246620;
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

Scope waddr_5866_49245480;

Scope makewaddr_5866_49245480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5866_49245480 = scope;
   scope->owner = (Object)channel__a1_5860_49246620;
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

Scope rinc_5869_49245060;

SignalI abus__r_49244580_rinc_5869_49245060_channel__a1_5860_49246620______58_84_49763560______58_840_59389220;

SignalI makeabus__r_49244580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49244580_rinc_5869_49245060_channel__a1_5860_49246620______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)rinc_5869_49245060;
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

Scope makerinc_5869_49245060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5869_49245060 = scope;
   scope->owner = (Object)channel__a1_5860_49246620;
   scope->name = "rinc:69";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49244580();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5872_49244460;

SignalI abus__w_49244080_winc_5872_49244460_channel__a1_5860_49246620______58_84_49763560______58_840_59389220;

SignalI makeabus__w_49244080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49244080_winc_5872_49244460_channel__a1_5860_49246620______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)winc_5872_49244460;
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

Scope makewinc_5872_49244460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5872_49244460 = scope;
   scope->owner = (Object)channel__a1_5860_49246620;
   scope->name = "winc:72";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49244080();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5875_49243960;

SignalI abus__r_49243580_rdec_5875_49243960_channel__a1_5860_49246620______58_84_49763560______58_840_59389220;

SignalI makeabus__r_49243580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49243580_rdec_5875_49243960_channel__a1_5860_49246620______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)rdec_5875_49243960;
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

Scope makerdec_5875_49243960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5875_49243960 = scope;
   scope->owner = (Object)channel__a1_5860_49246620;
   scope->name = "rdec:75";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49243580();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_5879_49243460;

SignalI abus__w_49243080_wdec_5879_49243460_channel__a1_5860_49246620______58_84_49763560______58_840_59389220;

SignalI makeabus__w_49243080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49243080_wdec_5879_49243460_channel__a1_5860_49246620______58_84_49763560______58_840_59389220 = signalI;
   signalI->owner = (Object)wdec_5879_49243460;
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

Scope makewdec_5879_49243460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5879_49243460 = scope;
   scope->owner = (Object)channel__a1_5860_49246620;
   scope->name = "wdec:79";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49243080();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __59501820;

Behavior make__59501820() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59501820 = behavior;
   behavior->owner = (Object)channel__a1_5860_49246620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_48958540_channel__a1_5860_49246620______58_84_49763560______58_840_59389220);
   reg__0_48958540_channel__a1_5860_49246620______58_84_49763560______58_840_59389220->num_any += 1;
   reg__0_48958540_channel__a1_5860_49246620______58_84_49763560______58_840_59389220->any = realloc(reg__0_48958540_channel__a1_5860_49246620______58_84_49763560______58_840_59389220->any,reg__0_48958540_channel__a1_5860_49246620______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
reg__0_48958540_channel__a1_5860_49246620______58_84_49763560______58_840_59389220->any[reg__0_48958540_channel__a1_5860_49246620______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59501980();

   return behavior;
}

Behavior __59501620;

Behavior make__59501620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59501620 = behavior;
   behavior->owner = (Object)channel__a1_5860_49246620;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5862_47481420______58_84_49763560______58_840_59389220);
   _5862_47481420______58_84_49763560______58_840_59389220->num_any += 1;
   _5862_47481420______58_84_49763560______58_840_59389220->any = realloc(_5862_47481420______58_84_49763560______58_840_59389220->any,_5862_47481420______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
_5862_47481420______58_84_49763560______58_840_59389220->any[_5862_47481420______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59501780();

   return behavior;
}

Scope makechannel__a1_5860_49246620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__a1_5860_49246620 = scope;
   scope->owner = (Object)_____58_84_49763560;
   scope->name = "channel_a1:60";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_48958540();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_5861_49246320();
   scope->scopes[1] = makeraddr_5863_49245900();
   scope->scopes[2] = makewaddr_5866_49245480();
   scope->scopes[3] = makerinc_5869_49245060();
   scope->scopes[4] = makewinc_5872_49244460();
   scope->scopes[5] = makerdec_5875_49243960();
   scope->scopes[6] = makewdec_5879_49243460();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59501820();
   scope->behaviors[1] = make__59501620();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __59180620;

Behavior make__59180620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59180620 = behavior;
   behavior->owner = (Object)_____58_84_49763560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_49167760______58_84_49763560______58_840_59389220);
   clk_49167760______58_84_49763560______58_840_59389220->num_pos += 1;
   clk_49167760______58_84_49763560______58_840_59389220->pos = realloc(clk_49167760______58_84_49763560______58_840_59389220->pos,clk_49167760______58_84_49763560______58_840_59389220->num_pos*sizeof(Object));
clk_49167760______58_84_49763560______58_840_59389220->pos[clk_49167760______58_84_49763560______58_840_59389220->num_pos-1] = (Object)behavior;
   behavior->block = make__58905060();

   return behavior;
}

Behavior __59389400;

Behavior make__59389400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59389400 = behavior;
   register_timed_behavior(behavior);
   behavior->owner = (Object)_____58_84_49763560;
   behavior->activated = 0;
   behavior->timed = 1;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__59180500();

   return behavior;
}

Behavior __59490240;

Behavior make__59490240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59490240 = behavior;
   behavior->owner = (Object)_____58_84_49763560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_49167760______58_84_49763560______58_840_59389220);
   clk_49167760______58_84_49763560______58_840_59389220->num_any += 1;
   clk_49167760______58_84_49763560______58_840_59389220->any = realloc(clk_49167760______58_84_49763560______58_840_59389220->any,clk_49167760______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
clk_49167760______58_84_49763560______58_840_59389220->any[clk_49167760______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_49167740______58_84_49763560______58_840_59389220);
   rst_49167740______58_84_49763560______58_840_59389220->num_any += 1;
   rst_49167740______58_84_49763560______58_840_59389220->any = realloc(rst_49167740______58_84_49763560______58_840_59389220->any,rst_49167740______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
rst_49167740______58_84_49763560______58_840_59389220->any[rst_49167740______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,fill_49167660______58_84_49763560______58_840_59389220);
   fill_49167660______58_84_49763560______58_840_59389220->num_any += 1;
   fill_49167660______58_84_49763560______58_840_59389220->any = realloc(fill_49167660______58_84_49763560______58_840_59389220->any,fill_49167660______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
fill_49167660______58_84_49763560______58_840_59389220->any[fill_49167660______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,req_49167720______58_84_49763560______58_840_59389220);
   req_49167720______58_84_49763560______58_840_59389220->num_any += 1;
   req_49167720______58_84_49763560______58_840_59389220->any = realloc(req_49167720______58_84_49763560______58_840_59389220->any,req_49167720______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
req_49167720______58_84_49763560______58_840_59389220->any[req_49167720______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__0_49167700______58_84_49763560______58_840_59389220);
   ack__0_49167700______58_84_49763560______58_840_59389220->num_any += 1;
   ack__0_49167700______58_84_49763560______58_840_59389220->any = realloc(ack__0_49167700______58_84_49763560______58_840_59389220->any,ack__0_49167700______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
ack__0_49167700______58_84_49763560______58_840_59389220->any[ack__0_49167700______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59456800();

   return behavior;
}

Behavior __59490080;

Behavior make__59490080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59490080 = behavior;
   behavior->owner = (Object)_____58_84_49763560;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__0_53411120_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220);
   ack__0_53411120_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any += 1;
   ack__0_53411120_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any = realloc(ack__0_53411120_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any,ack__0_53411120_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
ack__0_53411120_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->any[ack__0_53411120_layer__hidden_58_840_53373100______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__1_58907360_layer__output_58_840_58885180______58_84_49763560______58_840_59389220);
   ack__1_58907360_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any += 1;
   ack__1_58907360_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any = realloc(ack__1_58907360_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any,ack__1_58907360_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any*sizeof(Object));
ack__1_58907360_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->any[ack__1_58907360_layer__output_58_840_58885180______58_84_49763560______58_840_59389220->num_any-1] = (Object)behavior;
   behavior->block = make__59456740();

   return behavior;
}

Scope make_____58_84_49763560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   _____58_84_49763560 = scope;
   scope->owner = (Object)_____58_840_59389220;
   scope->name = "__:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makelayer__hidden_53410960();
   scope->systemIs[1] = makelayer__output_58907220();
   scope->num_inners = 18;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeclk_49167760();
   scope->inners[1] = makerst_49167740();
   scope->inners[2] = makereq_49167720();
   scope->inners[3] = makeack__0_49167700();
   scope->inners[4] = makeack__1_49167680();
   scope->inners[5] = makefill_49167660();
   scope->inners[6] = make_5815_49407140();
   scope->inners[7] = make_5813_49407120();
   scope->inners[8] = make_5814_49407020();
   scope->inners[9] = make_5817_49407000();
   scope->inners[10] = make_5818_49406900();
   scope->inners[11] = make_5819_49562880();
   scope->inners[12] = make_5832_49696560();
   scope->inners[13] = make_5833_49815100();
   scope->inners[14] = make_5843_49920740();
   scope->inners[15] = make_5844_44580260();
   scope->inners[16] = make_5845_44580100();
   scope->inners[17] = make_5862_47481420();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__x_581_49763260();
   scope->scopes[1] = makechannel__a0_5830_49457840();
   scope->scopes[2] = makechannel__a1_5860_49246620();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59180620();
   scope->behaviors[1] = make__59389400();
   scope->behaviors[2] = make__59490240();
   scope->behaviors[3] = make__59490080();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT make_____58_840_59389220() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   _____58_840_59389220 = systemT;
systemT->owner = NULL;
   systemT->name = "__:T0";
   systemT->num_inputs = 0;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->num_outputs = 0;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make_____58_84_49763560();

   return systemT;
}