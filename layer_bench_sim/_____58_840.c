#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT _____58_840_59034920;

Block __54421580;

Block __54421420;

Block __54421060;

void code__54421060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59296640(),_5818_47997320______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__54421060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54421060 = block;
   block->owner = (Object)__54421420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54421060;

   return block;
};

void code__54421420() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_47765260______58_84_49433100______58_840_59034920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59296720();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54421060();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59296580(),_5817_47997420______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__54421420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54421420 = block;
   block->owner = (Object)__54421580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54421420;

   return block;
};

Block __54420220;

Block __54420060;

Block __54419740;

void code__54419740() {
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
                  src0 = _5818_47997320______58_84_49433100______58_840_59034920->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59296260();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5818_47997320______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59296120(),_5817_47997420______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59296060(),_5819_48305100______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__54419740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54419740 = block;
   block->owner = (Object)__54420060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54419740;

   return block;
};

void code__54420060() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_47765260______58_84_49433100______58_840_59034920->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59296420();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54419740();
   }
      }
   }
}

Block make__54420060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54420060 = block;
   block->owner = (Object)__54420220;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54420060;

   return block;
};

void code__54420220() {
 code__54420060();
}

Block make__54420220() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54420220 = block;
   block->owner = (Object)__54421580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54420220;

   return block;
};

void code__54421580() {
 code__54421420();
   {
      Value cond = fill_47764020______58_84_49433100______58_840_59034920->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__54420220();
   }
      }
   }
}

Block make__54421580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __54421580 = block;
   block->owner = (Object)__59022620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__54421580;

   return block;
};

Block __59022500;

void code__59022500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59296000(),clk_47765380______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59295940(),rst_47765260______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59295860(),req_47764720______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59295780(),fill_47764020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59035040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59295720(),rst_47765260______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59035040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59295660(),clk_47765380______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59035040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59295540(),clk_47765380______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59295480(),rst_47765260______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59295420(),fill_47764020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59035040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59295360(),clk_47765380______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59035040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59295300(),clk_47765380______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59035040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59295240(),clk_47765380______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59035040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59295180(),clk_47765380______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59035040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59295120(),clk_47765380______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59035040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59295060(),clk_47765380______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59035040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59295000(),clk_47765380______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59035040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59294940(),clk_47765380______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59035040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59294880(),clk_47765380______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59035040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59294820(),clk_47765380______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59035040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59294760(),clk_47765380______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59035040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59294700(),clk_47765380______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59035040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59294640(),clk_47765380______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59035040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59294580(),clk_47765380______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59035040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59294520(),clk_47765380______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59035040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59294460(),clk_47765380______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59035040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59294400(),clk_47765380______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59035040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59294320(),clk_47765380______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59035040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59294240(),clk_47765380______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59035040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59294180(),clk_47765380______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59035040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59294100(),fill_47764020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59293960(),clk_47765380______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59293740(),clk_47765380______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59318200(),req_47764720______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59035040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59318140(),clk_47765380______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59035040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59318060(),clk_47765380______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59317960(),clk_47765380______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59035040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59317900(),clk_47765380______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59035040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59317840(),clk_47765380______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59035040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59317780(),clk_47765380______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59035040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59317720(),clk_47765380______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59035040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59317660(),clk_47765380______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59035040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59317600(),clk_47765380______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59035040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59317540(),clk_47765380______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59035040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59317480(),clk_47765380______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59035040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59317420(),clk_47765380______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59035040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59317360(),clk_47765380______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59035040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59317300(),clk_47765380______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59035040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59317240(),clk_47765380______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59035040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59317180(),clk_47765380______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59035040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59317120(),clk_47765380______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59035040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59317060(),clk_47765380______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59035040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59317000(),clk_47765380______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59035040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59316940(),clk_47765380______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59035040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59316880(),clk_47765380______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59035040);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59316820(),clk_47765380______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__59035040);
}

Block make__59022500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59022500 = block;
   block->owner = (Object)__59035040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59022500;

   return block;
};

Block __59085540;

void code__59085540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_47765380______58_84_49433100______58_840_59034920->c_value,clk_49953700_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_47765260______58_84_49433100______58_840_59034920->c_value,rst_49953680_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(fill_47764020______58_84_49433100______58_840_59034920->c_value,fill_49953660_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(req_47764720______58_84_49433100______58_840_59034920->c_value,req_49953640_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_47765380______58_84_49433100______58_840_59034920->c_value,clk_54423980_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_47765260______58_84_49433100______58_840_59034920->c_value,rst_54423960_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(fill_47764020______58_84_49433100______58_840_59034920->c_value,fill_54423940_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__0_47764580______58_84_49433100______58_840_59034920->c_value,req_54423920_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59085540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59085540 = block;
   block->owner = (Object)__59152420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59085540;

   return block;
};

Block __59085480;

void code__59085480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__0_49953500_layer0_58_840_49935740______58_84_49433100______58_840_59034920->c_value,ack__0_47764580______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__1_54423880_layer1_58_840_54426020______58_84_49433100______58_840_59034920->c_value,ack__1_47764400______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59085480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59085480 = block;
   block->owner = (Object)__59152260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59085480;

   return block;
};

Block __50108080;

Block __50317860;

void code__50317860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_49688820_channel__x_581_49432760______58_84_49433100______58_840_59034920->c_value,make_ref_rangeS(mem_49801200_channel__x_581_49432760______58_84_49433100______58_840_59034920,value2integer(abus__w_49688580_channel__x_581_49432760______58_84_49433100______58_840_59034920->c_value),value2integer(abus__w_49688580_channel__x_581_49432760______58_84_49433100______58_840_59034920->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__50317860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50317860 = block;
   block->owner = (Object)__50108080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50317860;

   return block;
};

void code__50108080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_49801200_channel__x_581_49432760______58_84_49433100______58_840_59034920->c_value;
            idx = value2integer(abus__r_49688660_channel__x_581_49432760______58_84_49433100______58_840_59034920->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_49604160_channel__x_581_49432760______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_49453740_channel__x_581_49432760______58_84_49433100______58_840_59034920->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__50317860();
   }
      }
   }
}

Block make__50108080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50108080 = block;
   block->owner = (Object)__48123180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50108080;

   return block;
};

Block __59151500;

void code__59151500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_49604160_channel__x_581_49432760______58_84_49433100______58_840_59034920->c_value,_5815_47997560______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59151500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59151500 = block;
   block->owner = (Object)__59151280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59151500;

   return block;
};

Block __59151240;

void code__59151240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5815_47997560______58_84_49433100______58_840_59034920->c_value,dbus__r_49604160_channel__x_581_49432760______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59151240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59151240 = block;
   block->owner = (Object)__59151060;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59151240;

   return block;
};

Block __59150680;

void code__59150680() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_49453760_channel__x_581_49432760______58_84_49433100______58_840_59034920->c_value,_5813_47997540______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59150680() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59150680 = block;
   block->owner = (Object)__59150520;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59150680;

   return block;
};

Block __59150480;

void code__59150480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5813_47997540______58_84_49433100______58_840_59034920->c_value,trig__r_49453760_channel__x_581_49432760______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59150480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59150480 = block;
   block->owner = (Object)__59150320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59150480;

   return block;
};

Block __59150020;

void code__59150020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_49688660_channel__x_581_49432760______58_84_49433100______58_840_59034920->c_value,_5814_47997440______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59150020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59150020 = block;
   block->owner = (Object)__59149860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59150020;

   return block;
};

Block __59149820;

void code__59149820() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5814_47997440______58_84_49433100______58_840_59034920->c_value,abus__r_49688660_channel__x_581_49432760______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59149820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59149820 = block;
   block->owner = (Object)__59149660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59149820;

   return block;
};

Block __59149300;

void code__59149300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_49453740_channel__x_581_49432760______58_84_49433100______58_840_59034920->c_value,_5817_47997420______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59149300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59149300 = block;
   block->owner = (Object)__59149100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59149300;

   return block;
};

Block __59149060;

void code__59149060() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5817_47997420______58_84_49433100______58_840_59034920->c_value,trig__w_49453740_channel__x_581_49432760______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59149060() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59149060 = block;
   block->owner = (Object)__59148880;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59149060;

   return block;
};

Block __59148500;

void code__59148500() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_49688580_channel__x_581_49432760______58_84_49433100______58_840_59034920->c_value,_5818_47997320______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59148500() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59148500 = block;
   block->owner = (Object)__59148340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59148500;

   return block;
};

Block __59148300;

void code__59148300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5818_47997320______58_84_49433100______58_840_59034920->c_value,abus__w_49688580_channel__x_581_49432760______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59148300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59148300 = block;
   block->owner = (Object)__59148140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59148300;

   return block;
};

Block __59147840;

void code__59147840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_49688820_channel__x_581_49432760______58_84_49433100______58_840_59034920->c_value,_5819_48305100______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59147840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59147840 = block;
   block->owner = (Object)__59147680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59147840;

   return block;
};

Block __59147640;

void code__59147640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5819_48305100______58_84_49433100______58_840_59034920->c_value,dbus__w_49688820_channel__x_581_49432760______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59147640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59147640 = block;
   block->owner = (Object)__59147460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59147640;

   return block;
};

Block __59170280;

void code__59170280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_48486060_channel__a0_5830_48123060______58_84_49433100______58_840_59034920->c_value,_5832_49296920______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59170280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59170280 = block;
   block->owner = (Object)__59170120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59170280;

   return block;
};

Block __59170080;

void code__59170080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5832_49296920______58_84_49433100______58_840_59034920->c_value,reg__0_48486060_channel__a0_5830_48123060______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59170080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59170080 = block;
   block->owner = (Object)__59169900;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59170080;

   return block;
};

Block __59169380;

void code__59169380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_49435320_channel__a0_5830_48123060______58_84_49433100______58_840_59034920->c_value,_5833_49610280______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59169380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59169380 = block;
   block->owner = (Object)__59169180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59169380;

   return block;
};

Block __59169140;

void code__59169140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5833_49610280______58_84_49433100______58_840_59034920->c_value,reg__1_49435320_channel__a0_5830_48123060______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59169140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59169140 = block;
   block->owner = (Object)__59168980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59169140;

   return block;
};

Block __59168620;

void code__59168620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_48486060_channel__a0_5830_48123060______58_84_49433100______58_840_59034920->c_value,_5843_49668860______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59168620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59168620 = block;
   block->owner = (Object)__59168360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59168620;

   return block;
};

Block __59168320;

void code__59168320() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5843_49668860______58_84_49433100______58_840_59034920->c_value,reg__0_48486060_channel__a0_5830_48123060______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59168320() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59168320 = block;
   block->owner = (Object)__59168160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59168320;

   return block;
};

Block __59167420;

void code__59167420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_49435320_channel__a0_5830_48123060______58_84_49433100______58_840_59034920->c_value,_5844_49800720______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59167420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59167420 = block;
   block->owner = (Object)__59167200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59167420;

   return block;
};

Block __59167160;

void code__59167160() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5844_49800720______58_84_49433100______58_840_59034920->c_value,reg__1_49435320_channel__a0_5830_48123060______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59167160() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59167160 = block;
   block->owner = (Object)__59166860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59167160;

   return block;
};

Block __59165340;

void code__59165340() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_48120760_rinc_5842_48121180_channel__a0_5830_48123060______58_84_49433100______58_840_59034920->c_value,_5845_49800640______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59165340() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59165340 = block;
   block->owner = (Object)__59165100;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59165340;

   return block;
};

Block __59165040;

void code__59165040() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5845_49800640______58_84_49433100______58_840_59034920->c_value,abus__r_48120760_rinc_5842_48121180_channel__a0_5830_48123060______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59165040() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59165040 = block;
   block->owner = (Object)__59164860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59165040;

   return block;
};

Block __59163600;

void code__59163600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_50305900_channel__a1_5860_50201420______58_84_49433100______58_840_59034920->c_value,_5862_49864840______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59163600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59163600 = block;
   block->owner = (Object)__59163420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59163600;

   return block;
};

Block __59163380;

void code__59163380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5862_49864840______58_84_49433100______58_840_59034920->c_value,reg__0_50305900_channel__a1_5860_50201420______58_84_49433100______58_840_59034920);
      set_value_pos(pool_state);
   }
}

Block make__59163380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59163380 = block;
   block->owner = (Object)__59163200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59163380;

   return block;
};

Value make__59296720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59296640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59296580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59296420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59296260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59296120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59296060() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__59296000() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59295940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59295860() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59295780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59295720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59295660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59295540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59295480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59295420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59295360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59295300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59295240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59295180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59295120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59295060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59295000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59294940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59294880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59294820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59294760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59294700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59294640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59294580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59294520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59294460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59294400() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59294320() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59294240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59294180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59294100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59293960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59293740() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59318200() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59318140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59318060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59317960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59317900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59317840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59317780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59317720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59317660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59317600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59317540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59317480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59317420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59317360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59317300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59317240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59317180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59317120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59317060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59317000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59316940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59316880() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59316820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope _____58_84_49433100;

SignalI clk_47765380______58_84_49433100______58_840_59034920;

SignalI makeclk_47765380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_47765380______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)_____58_84_49433100;
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

SignalI rst_47765260______58_84_49433100______58_840_59034920;

SignalI makerst_47765260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_47765260______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)_____58_84_49433100;
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

SignalI req_47764720______58_84_49433100______58_840_59034920;

SignalI makereq_47764720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_47764720______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)_____58_84_49433100;
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

SignalI ack__0_47764580______58_84_49433100______58_840_59034920;

SignalI makeack__0_47764580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__0_47764580______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)_____58_84_49433100;
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

SignalI ack__1_47764400______58_84_49433100______58_840_59034920;

SignalI makeack__1_47764400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__1_47764400______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)_____58_84_49433100;
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

SignalI fill_47764020______58_84_49433100______58_840_59034920;

SignalI makefill_47764020() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_47764020______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)_____58_84_49433100;
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

SignalI _5815_47997560______58_84_49433100______58_840_59034920;

SignalI make_5815_47997560() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5815_47997560______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)_____58_84_49433100;
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

SignalI _5813_47997540______58_84_49433100______58_840_59034920;

SignalI make_5813_47997540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5813_47997540______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)_____58_84_49433100;
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

SignalI _5814_47997440______58_84_49433100______58_840_59034920;

SignalI make_5814_47997440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5814_47997440______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)_____58_84_49433100;
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

SignalI _5817_47997420______58_84_49433100______58_840_59034920;

SignalI make_5817_47997420() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5817_47997420______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)_____58_84_49433100;
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

SignalI _5818_47997320______58_84_49433100______58_840_59034920;

SignalI make_5818_47997320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5818_47997320______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)_____58_84_49433100;
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

SignalI _5819_48305100______58_84_49433100______58_840_59034920;

SignalI make_5819_48305100() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5819_48305100______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)_____58_84_49433100;
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

SignalI _5832_49296920______58_84_49433100______58_840_59034920;

SignalI make_5832_49296920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5832_49296920______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)_____58_84_49433100;
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

SignalI _5833_49610280______58_84_49433100______58_840_59034920;

SignalI make_5833_49610280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5833_49610280______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)_____58_84_49433100;
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

SignalI _5843_49668860______58_84_49433100______58_840_59034920;

SignalI make_5843_49668860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5843_49668860______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)_____58_84_49433100;
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

SignalI _5844_49800720______58_84_49433100______58_840_59034920;

SignalI make_5844_49800720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5844_49800720______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)_____58_84_49433100;
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

SignalI _5845_49800640______58_84_49433100______58_840_59034920;

SignalI make_5845_49800640() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5845_49800640______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)_____58_84_49433100;
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

SignalI _5862_49864840______58_84_49433100______58_840_59034920;

SignalI make_5862_49864840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5862_49864840______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)_____58_84_49433100;
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

SystemI layer0_49953220;

SystemI makelayer0_49953220() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer0_49953220 = systemI;
   systemI->owner = (Object)_____58_84_49433100;
   systemI->name = "layer0";
   systemI->system = layer0_58_840_49935740;

   return systemI;
};

SystemI layer1_54423740;

SystemI makelayer1_54423740() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer1_54423740 = systemI;
   systemI->owner = (Object)_____58_84_49433100;
   systemI->name = "layer1";
   systemI->system = layer1_58_840_54426020;

   return systemI;
};

Scope channel__x_581_49432760;

SignalI trig__r_49453760_channel__x_581_49432760______58_84_49433100______58_840_59034920;

SignalI maketrig__r_49453760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_49453760_channel__x_581_49432760______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)channel__x_581_49432760;
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

SignalI trig__w_49453740_channel__x_581_49432760______58_84_49433100______58_840_59034920;

SignalI maketrig__w_49453740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_49453740_channel__x_581_49432760______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)channel__x_581_49432760;
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

SignalI dbus__r_49604160_channel__x_581_49432760______58_84_49433100______58_840_59034920;

SignalI makedbus__r_49604160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_49604160_channel__x_581_49432760______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)channel__x_581_49432760;
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

SignalI dbus__w_49688820_channel__x_581_49432760______58_84_49433100______58_840_59034920;

SignalI makedbus__w_49688820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_49688820_channel__x_581_49432760______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)channel__x_581_49432760;
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

SignalI abus__r_49688660_channel__x_581_49432760______58_84_49433100______58_840_59034920;

SignalI makeabus__r_49688660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49688660_channel__x_581_49432760______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)channel__x_581_49432760;
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

SignalI abus__w_49688580_channel__x_581_49432760______58_84_49433100______58_840_59034920;

SignalI makeabus__w_49688580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49688580_channel__x_581_49432760______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)channel__x_581_49432760;
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

SignalI mem_49801200_channel__x_581_49432760______58_84_49433100______58_840_59034920;

SignalI makemem_49801200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_49801200_channel__x_581_49432760______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)channel__x_581_49432760;
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

Scope raddr_582_49432320;

Scope makeraddr_582_49432320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_582_49432320 = scope;
   scope->owner = (Object)channel__x_581_49432760;
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

Scope waddr_587_49431900;

Scope makewaddr_587_49431900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_587_49431900 = scope;
   scope->owner = (Object)channel__x_581_49432760;
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

Scope rinc_5812_49431480;

Scope makerinc_5812_49431480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5812_49431480 = scope;
   scope->owner = (Object)channel__x_581_49432760;
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

Scope winc_5816_49430760;

Scope makewinc_5816_49430760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5816_49430760 = scope;
   scope->owner = (Object)channel__x_581_49432760;
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

Scope rdec_5820_49454880;

Scope makerdec_5820_49454880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5820_49454880 = scope;
   scope->owner = (Object)channel__x_581_49432760;
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

Scope wdec_5825_49454460;

Scope makewdec_5825_49454460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5825_49454460 = scope;
   scope->owner = (Object)channel__x_581_49432760;
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

Behavior __48123180;

Behavior make__48123180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __48123180 = behavior;
   behavior->owner = (Object)channel__x_581_49432760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_47765380______58_84_49433100______58_840_59034920);
   clk_47765380______58_84_49433100______58_840_59034920->num_neg += 1;
   clk_47765380______58_84_49433100______58_840_59034920->neg = realloc(clk_47765380______58_84_49433100______58_840_59034920->neg,clk_47765380______58_84_49433100______58_840_59034920->num_neg*sizeof(Object));
clk_47765380______58_84_49433100______58_840_59034920->neg[clk_47765380______58_84_49433100______58_840_59034920->num_neg-1] = (Object)behavior;
   behavior->block = make__50108080();

   return behavior;
}

Behavior __59151280;

Behavior make__59151280() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59151280 = behavior;
   behavior->owner = (Object)channel__x_581_49432760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_49604160_channel__x_581_49432760______58_84_49433100______58_840_59034920);
   dbus__r_49604160_channel__x_581_49432760______58_84_49433100______58_840_59034920->num_any += 1;
   dbus__r_49604160_channel__x_581_49432760______58_84_49433100______58_840_59034920->any = realloc(dbus__r_49604160_channel__x_581_49432760______58_84_49433100______58_840_59034920->any,dbus__r_49604160_channel__x_581_49432760______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
dbus__r_49604160_channel__x_581_49432760______58_84_49433100______58_840_59034920->any[dbus__r_49604160_channel__x_581_49432760______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59151500();

   return behavior;
}

Behavior __59151060;

Behavior make__59151060() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59151060 = behavior;
   behavior->owner = (Object)channel__x_581_49432760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5815_47997560______58_84_49433100______58_840_59034920);
   _5815_47997560______58_84_49433100______58_840_59034920->num_any += 1;
   _5815_47997560______58_84_49433100______58_840_59034920->any = realloc(_5815_47997560______58_84_49433100______58_840_59034920->any,_5815_47997560______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
_5815_47997560______58_84_49433100______58_840_59034920->any[_5815_47997560______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59151240();

   return behavior;
}

Behavior __59150520;

Behavior make__59150520() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59150520 = behavior;
   behavior->owner = (Object)channel__x_581_49432760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_49453760_channel__x_581_49432760______58_84_49433100______58_840_59034920);
   trig__r_49453760_channel__x_581_49432760______58_84_49433100______58_840_59034920->num_any += 1;
   trig__r_49453760_channel__x_581_49432760______58_84_49433100______58_840_59034920->any = realloc(trig__r_49453760_channel__x_581_49432760______58_84_49433100______58_840_59034920->any,trig__r_49453760_channel__x_581_49432760______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
trig__r_49453760_channel__x_581_49432760______58_84_49433100______58_840_59034920->any[trig__r_49453760_channel__x_581_49432760______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59150680();

   return behavior;
}

Behavior __59150320;

Behavior make__59150320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59150320 = behavior;
   behavior->owner = (Object)channel__x_581_49432760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5813_47997540______58_84_49433100______58_840_59034920);
   _5813_47997540______58_84_49433100______58_840_59034920->num_any += 1;
   _5813_47997540______58_84_49433100______58_840_59034920->any = realloc(_5813_47997540______58_84_49433100______58_840_59034920->any,_5813_47997540______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
_5813_47997540______58_84_49433100______58_840_59034920->any[_5813_47997540______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59150480();

   return behavior;
}

Behavior __59149860;

Behavior make__59149860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59149860 = behavior;
   behavior->owner = (Object)channel__x_581_49432760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_49688660_channel__x_581_49432760______58_84_49433100______58_840_59034920);
   abus__r_49688660_channel__x_581_49432760______58_84_49433100______58_840_59034920->num_any += 1;
   abus__r_49688660_channel__x_581_49432760______58_84_49433100______58_840_59034920->any = realloc(abus__r_49688660_channel__x_581_49432760______58_84_49433100______58_840_59034920->any,abus__r_49688660_channel__x_581_49432760______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
abus__r_49688660_channel__x_581_49432760______58_84_49433100______58_840_59034920->any[abus__r_49688660_channel__x_581_49432760______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59150020();

   return behavior;
}

Behavior __59149660;

Behavior make__59149660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59149660 = behavior;
   behavior->owner = (Object)channel__x_581_49432760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5814_47997440______58_84_49433100______58_840_59034920);
   _5814_47997440______58_84_49433100______58_840_59034920->num_any += 1;
   _5814_47997440______58_84_49433100______58_840_59034920->any = realloc(_5814_47997440______58_84_49433100______58_840_59034920->any,_5814_47997440______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
_5814_47997440______58_84_49433100______58_840_59034920->any[_5814_47997440______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59149820();

   return behavior;
}

Behavior __59149100;

Behavior make__59149100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59149100 = behavior;
   behavior->owner = (Object)channel__x_581_49432760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_49453740_channel__x_581_49432760______58_84_49433100______58_840_59034920);
   trig__w_49453740_channel__x_581_49432760______58_84_49433100______58_840_59034920->num_any += 1;
   trig__w_49453740_channel__x_581_49432760______58_84_49433100______58_840_59034920->any = realloc(trig__w_49453740_channel__x_581_49432760______58_84_49433100______58_840_59034920->any,trig__w_49453740_channel__x_581_49432760______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
trig__w_49453740_channel__x_581_49432760______58_84_49433100______58_840_59034920->any[trig__w_49453740_channel__x_581_49432760______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59149300();

   return behavior;
}

Behavior __59148880;

Behavior make__59148880() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59148880 = behavior;
   behavior->owner = (Object)channel__x_581_49432760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5817_47997420______58_84_49433100______58_840_59034920);
   _5817_47997420______58_84_49433100______58_840_59034920->num_any += 1;
   _5817_47997420______58_84_49433100______58_840_59034920->any = realloc(_5817_47997420______58_84_49433100______58_840_59034920->any,_5817_47997420______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
_5817_47997420______58_84_49433100______58_840_59034920->any[_5817_47997420______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59149060();

   return behavior;
}

Behavior __59148340;

Behavior make__59148340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59148340 = behavior;
   behavior->owner = (Object)channel__x_581_49432760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_49688580_channel__x_581_49432760______58_84_49433100______58_840_59034920);
   abus__w_49688580_channel__x_581_49432760______58_84_49433100______58_840_59034920->num_any += 1;
   abus__w_49688580_channel__x_581_49432760______58_84_49433100______58_840_59034920->any = realloc(abus__w_49688580_channel__x_581_49432760______58_84_49433100______58_840_59034920->any,abus__w_49688580_channel__x_581_49432760______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
abus__w_49688580_channel__x_581_49432760______58_84_49433100______58_840_59034920->any[abus__w_49688580_channel__x_581_49432760______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59148500();

   return behavior;
}

Behavior __59148140;

Behavior make__59148140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59148140 = behavior;
   behavior->owner = (Object)channel__x_581_49432760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5818_47997320______58_84_49433100______58_840_59034920);
   _5818_47997320______58_84_49433100______58_840_59034920->num_any += 1;
   _5818_47997320______58_84_49433100______58_840_59034920->any = realloc(_5818_47997320______58_84_49433100______58_840_59034920->any,_5818_47997320______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
_5818_47997320______58_84_49433100______58_840_59034920->any[_5818_47997320______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59148300();

   return behavior;
}

Behavior __59147680;

Behavior make__59147680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59147680 = behavior;
   behavior->owner = (Object)channel__x_581_49432760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_49688820_channel__x_581_49432760______58_84_49433100______58_840_59034920);
   dbus__w_49688820_channel__x_581_49432760______58_84_49433100______58_840_59034920->num_any += 1;
   dbus__w_49688820_channel__x_581_49432760______58_84_49433100______58_840_59034920->any = realloc(dbus__w_49688820_channel__x_581_49432760______58_84_49433100______58_840_59034920->any,dbus__w_49688820_channel__x_581_49432760______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
dbus__w_49688820_channel__x_581_49432760______58_84_49433100______58_840_59034920->any[dbus__w_49688820_channel__x_581_49432760______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59147840();

   return behavior;
}

Behavior __59147460;

Behavior make__59147460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59147460 = behavior;
   behavior->owner = (Object)channel__x_581_49432760;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5819_48305100______58_84_49433100______58_840_59034920);
   _5819_48305100______58_84_49433100______58_840_59034920->num_any += 1;
   _5819_48305100______58_84_49433100______58_840_59034920->any = realloc(_5819_48305100______58_84_49433100______58_840_59034920->any,_5819_48305100______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
_5819_48305100______58_84_49433100______58_840_59034920->any[_5819_48305100______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59147640();

   return behavior;
}

Scope makechannel__x_581_49432760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__x_581_49432760 = scope;
   scope->owner = (Object)_____58_84_49433100;
   scope->name = "channel_x:1";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_49453760();
   scope->inners[1] = maketrig__w_49453740();
   scope->inners[2] = makedbus__r_49604160();
   scope->inners[3] = makedbus__w_49688820();
   scope->inners[4] = makeabus__r_49688660();
   scope->inners[5] = makeabus__w_49688580();
   scope->inners[6] = makemem_49801200();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_582_49432320();
   scope->scopes[1] = makewaddr_587_49431900();
   scope->scopes[2] = makerinc_5812_49431480();
   scope->scopes[3] = makewinc_5816_49430760();
   scope->scopes[4] = makerdec_5820_49454880();
   scope->scopes[5] = makewdec_5825_49454460();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__48123180();
   scope->behaviors[1] = make__59151280();
   scope->behaviors[2] = make__59151060();
   scope->behaviors[3] = make__59150520();
   scope->behaviors[4] = make__59150320();
   scope->behaviors[5] = make__59149860();
   scope->behaviors[6] = make__59149660();
   scope->behaviors[7] = make__59149100();
   scope->behaviors[8] = make__59148880();
   scope->behaviors[9] = make__59148340();
   scope->behaviors[10] = make__59148140();
   scope->behaviors[11] = make__59147680();
   scope->behaviors[12] = make__59147460();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__a0_5830_48123060;

SignalI reg__0_48486060_channel__a0_5830_48123060______58_84_49433100______58_840_59034920;

SignalI makereg__0_48486060() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_48486060_channel__a0_5830_48123060______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)channel__a0_5830_48123060;
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

SignalI reg__1_49435320_channel__a0_5830_48123060______58_84_49433100______58_840_59034920;

SignalI makereg__1_49435320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_49435320_channel__a0_5830_48123060______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)channel__a0_5830_48123060;
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

Scope anum_5831_48122740;

Scope makeanum_5831_48122740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_5831_48122740 = scope;
   scope->owner = (Object)channel__a0_5830_48123060;
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

Scope raddr_5834_48122260;

Scope makeraddr_5834_48122260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5834_48122260 = scope;
   scope->owner = (Object)channel__a0_5830_48123060;
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

Scope waddr_5838_48121760;

Scope makewaddr_5838_48121760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5838_48121760 = scope;
   scope->owner = (Object)channel__a0_5830_48123060;
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

Scope rinc_5842_48121180;

SignalI abus__r_48120760_rinc_5842_48121180_channel__a0_5830_48123060______58_84_49433100______58_840_59034920;

SignalI makeabus__r_48120760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48120760_rinc_5842_48121180_channel__a0_5830_48123060______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)rinc_5842_48121180;
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

Behavior __59165100;

Behavior make__59165100() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59165100 = behavior;
   behavior->owner = (Object)rinc_5842_48121180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_48120760_rinc_5842_48121180_channel__a0_5830_48123060______58_84_49433100______58_840_59034920);
   abus__r_48120760_rinc_5842_48121180_channel__a0_5830_48123060______58_84_49433100______58_840_59034920->num_any += 1;
   abus__r_48120760_rinc_5842_48121180_channel__a0_5830_48123060______58_84_49433100______58_840_59034920->any = realloc(abus__r_48120760_rinc_5842_48121180_channel__a0_5830_48123060______58_84_49433100______58_840_59034920->any,abus__r_48120760_rinc_5842_48121180_channel__a0_5830_48123060______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
abus__r_48120760_rinc_5842_48121180_channel__a0_5830_48123060______58_84_49433100______58_840_59034920->any[abus__r_48120760_rinc_5842_48121180_channel__a0_5830_48123060______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59165340();

   return behavior;
}

Behavior __59164860;

Behavior make__59164860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59164860 = behavior;
   behavior->owner = (Object)rinc_5842_48121180;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5845_49800640______58_84_49433100______58_840_59034920);
   _5845_49800640______58_84_49433100______58_840_59034920->num_any += 1;
   _5845_49800640______58_84_49433100______58_840_59034920->any = realloc(_5845_49800640______58_84_49433100______58_840_59034920->any,_5845_49800640______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
_5845_49800640______58_84_49433100______58_840_59034920->any[_5845_49800640______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59165040();

   return behavior;
}

Scope makerinc_5842_48121180() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5842_48121180 = scope;
   scope->owner = (Object)channel__a0_5830_48123060;
   scope->name = "rinc:42";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_48120760();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59165100();
   scope->behaviors[1] = make__59164860();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5846_48143100;

SignalI abus__w_48177080_winc_5846_48143100_channel__a0_5830_48123060______58_84_49433100______58_840_59034920;

SignalI makeabus__w_48177080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48177080_winc_5846_48143100_channel__a0_5830_48123060______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)winc_5846_48143100;
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

Scope makewinc_5846_48143100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5846_48143100 = scope;
   scope->owner = (Object)channel__a0_5830_48123060;
   scope->name = "winc:46";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_48177080();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5850_48175820;

SignalI abus__r_48170040_rdec_5850_48175820_channel__a0_5830_48123060______58_84_49433100______58_840_59034920;

SignalI makeabus__r_48170040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48170040_rdec_5850_48175820_channel__a0_5830_48123060______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)rdec_5850_48175820;
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

Scope makerdec_5850_48175820() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5850_48175820 = scope;
   scope->owner = (Object)channel__a0_5830_48123060;
   scope->name = "rdec:50";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_48170040();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_5855_48169880;

SignalI abus__w_48191940_wdec_5855_48169880_channel__a0_5830_48123060______58_84_49433100______58_840_59034920;

SignalI makeabus__w_48191940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48191940_wdec_5855_48169880_channel__a0_5830_48123060______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)wdec_5855_48169880;
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

Scope makewdec_5855_48169880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5855_48169880 = scope;
   scope->owner = (Object)channel__a0_5830_48123060;
   scope->name = "wdec:55";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_48191940();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __59170120;

Behavior make__59170120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59170120 = behavior;
   behavior->owner = (Object)channel__a0_5830_48123060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_48486060_channel__a0_5830_48123060______58_84_49433100______58_840_59034920);
   reg__0_48486060_channel__a0_5830_48123060______58_84_49433100______58_840_59034920->num_any += 1;
   reg__0_48486060_channel__a0_5830_48123060______58_84_49433100______58_840_59034920->any = realloc(reg__0_48486060_channel__a0_5830_48123060______58_84_49433100______58_840_59034920->any,reg__0_48486060_channel__a0_5830_48123060______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
reg__0_48486060_channel__a0_5830_48123060______58_84_49433100______58_840_59034920->any[reg__0_48486060_channel__a0_5830_48123060______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59170280();

   return behavior;
}

Behavior __59169900;

Behavior make__59169900() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59169900 = behavior;
   behavior->owner = (Object)channel__a0_5830_48123060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5832_49296920______58_84_49433100______58_840_59034920);
   _5832_49296920______58_84_49433100______58_840_59034920->num_any += 1;
   _5832_49296920______58_84_49433100______58_840_59034920->any = realloc(_5832_49296920______58_84_49433100______58_840_59034920->any,_5832_49296920______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
_5832_49296920______58_84_49433100______58_840_59034920->any[_5832_49296920______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59170080();

   return behavior;
}

Behavior __59169180;

Behavior make__59169180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59169180 = behavior;
   behavior->owner = (Object)channel__a0_5830_48123060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_49435320_channel__a0_5830_48123060______58_84_49433100______58_840_59034920);
   reg__1_49435320_channel__a0_5830_48123060______58_84_49433100______58_840_59034920->num_any += 1;
   reg__1_49435320_channel__a0_5830_48123060______58_84_49433100______58_840_59034920->any = realloc(reg__1_49435320_channel__a0_5830_48123060______58_84_49433100______58_840_59034920->any,reg__1_49435320_channel__a0_5830_48123060______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
reg__1_49435320_channel__a0_5830_48123060______58_84_49433100______58_840_59034920->any[reg__1_49435320_channel__a0_5830_48123060______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59169380();

   return behavior;
}

Behavior __59168980;

Behavior make__59168980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59168980 = behavior;
   behavior->owner = (Object)channel__a0_5830_48123060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5833_49610280______58_84_49433100______58_840_59034920);
   _5833_49610280______58_84_49433100______58_840_59034920->num_any += 1;
   _5833_49610280______58_84_49433100______58_840_59034920->any = realloc(_5833_49610280______58_84_49433100______58_840_59034920->any,_5833_49610280______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
_5833_49610280______58_84_49433100______58_840_59034920->any[_5833_49610280______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59169140();

   return behavior;
}

Behavior __59168360;

Behavior make__59168360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59168360 = behavior;
   behavior->owner = (Object)channel__a0_5830_48123060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_48486060_channel__a0_5830_48123060______58_84_49433100______58_840_59034920);
   reg__0_48486060_channel__a0_5830_48123060______58_84_49433100______58_840_59034920->num_any += 1;
   reg__0_48486060_channel__a0_5830_48123060______58_84_49433100______58_840_59034920->any = realloc(reg__0_48486060_channel__a0_5830_48123060______58_84_49433100______58_840_59034920->any,reg__0_48486060_channel__a0_5830_48123060______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
reg__0_48486060_channel__a0_5830_48123060______58_84_49433100______58_840_59034920->any[reg__0_48486060_channel__a0_5830_48123060______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59168620();

   return behavior;
}

Behavior __59168160;

Behavior make__59168160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59168160 = behavior;
   behavior->owner = (Object)channel__a0_5830_48123060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5843_49668860______58_84_49433100______58_840_59034920);
   _5843_49668860______58_84_49433100______58_840_59034920->num_any += 1;
   _5843_49668860______58_84_49433100______58_840_59034920->any = realloc(_5843_49668860______58_84_49433100______58_840_59034920->any,_5843_49668860______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
_5843_49668860______58_84_49433100______58_840_59034920->any[_5843_49668860______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59168320();

   return behavior;
}

Behavior __59167200;

Behavior make__59167200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59167200 = behavior;
   behavior->owner = (Object)channel__a0_5830_48123060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_49435320_channel__a0_5830_48123060______58_84_49433100______58_840_59034920);
   reg__1_49435320_channel__a0_5830_48123060______58_84_49433100______58_840_59034920->num_any += 1;
   reg__1_49435320_channel__a0_5830_48123060______58_84_49433100______58_840_59034920->any = realloc(reg__1_49435320_channel__a0_5830_48123060______58_84_49433100______58_840_59034920->any,reg__1_49435320_channel__a0_5830_48123060______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
reg__1_49435320_channel__a0_5830_48123060______58_84_49433100______58_840_59034920->any[reg__1_49435320_channel__a0_5830_48123060______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59167420();

   return behavior;
}

Behavior __59166860;

Behavior make__59166860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59166860 = behavior;
   behavior->owner = (Object)channel__a0_5830_48123060;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5844_49800720______58_84_49433100______58_840_59034920);
   _5844_49800720______58_84_49433100______58_840_59034920->num_any += 1;
   _5844_49800720______58_84_49433100______58_840_59034920->any = realloc(_5844_49800720______58_84_49433100______58_840_59034920->any,_5844_49800720______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
_5844_49800720______58_84_49433100______58_840_59034920->any[_5844_49800720______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59167160();

   return behavior;
}

Scope makechannel__a0_5830_48123060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__a0_5830_48123060 = scope;
   scope->owner = (Object)_____58_84_49433100;
   scope->name = "channel_a0:30";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_48486060();
   scope->inners[1] = makereg__1_49435320();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_5831_48122740();
   scope->scopes[1] = makeraddr_5834_48122260();
   scope->scopes[2] = makewaddr_5838_48121760();
   scope->scopes[3] = makerinc_5842_48121180();
   scope->scopes[4] = makewinc_5846_48143100();
   scope->scopes[5] = makerdec_5850_48175820();
   scope->scopes[6] = makewdec_5855_48169880();
   scope->num_behaviors = 8;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59170120();
   scope->behaviors[1] = make__59169900();
   scope->behaviors[2] = make__59169180();
   scope->behaviors[3] = make__59168980();
   scope->behaviors[4] = make__59168360();
   scope->behaviors[5] = make__59168160();
   scope->behaviors[6] = make__59167200();
   scope->behaviors[7] = make__59166860();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__a1_5860_50201420;

SignalI reg__0_50305900_channel__a1_5860_50201420______58_84_49433100______58_840_59034920;

SignalI makereg__0_50305900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_50305900_channel__a1_5860_50201420______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)channel__a1_5860_50201420;
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

Scope anum_5861_50200960;

Scope makeanum_5861_50200960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_5861_50200960 = scope;
   scope->owner = (Object)channel__a1_5860_50201420;
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

Scope raddr_5863_50224980;

Scope makeraddr_5863_50224980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5863_50224980 = scope;
   scope->owner = (Object)channel__a1_5860_50201420;
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

Scope waddr_5866_50224520;

Scope makewaddr_5866_50224520() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5866_50224520 = scope;
   scope->owner = (Object)channel__a1_5860_50201420;
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

Scope rinc_5869_50224100;

SignalI abus__r_50223720_rinc_5869_50224100_channel__a1_5860_50201420______58_84_49433100______58_840_59034920;

SignalI makeabus__r_50223720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50223720_rinc_5869_50224100_channel__a1_5860_50201420______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)rinc_5869_50224100;
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

Scope makerinc_5869_50224100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5869_50224100 = scope;
   scope->owner = (Object)channel__a1_5860_50201420;
   scope->name = "rinc:69";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_50223720();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5872_50223600;

SignalI abus__w_50223200_winc_5872_50223600_channel__a1_5860_50201420______58_84_49433100______58_840_59034920;

SignalI makeabus__w_50223200() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50223200_winc_5872_50223600_channel__a1_5860_50201420______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)winc_5872_50223600;
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

Scope makewinc_5872_50223600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5872_50223600 = scope;
   scope->owner = (Object)channel__a1_5860_50201420;
   scope->name = "winc:72";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_50223200();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5875_50223020;

SignalI abus__r_50222580_rdec_5875_50223020_channel__a1_5860_50201420______58_84_49433100______58_840_59034920;

SignalI makeabus__r_50222580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_50222580_rdec_5875_50223020_channel__a1_5860_50201420______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)rdec_5875_50223020;
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

Scope makerdec_5875_50223020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5875_50223020 = scope;
   scope->owner = (Object)channel__a1_5860_50201420;
   scope->name = "rdec:75";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_50222580();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_5879_50222460;

SignalI abus__w_50222080_wdec_5879_50222460_channel__a1_5860_50201420______58_84_49433100______58_840_59034920;

SignalI makeabus__w_50222080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_50222080_wdec_5879_50222460_channel__a1_5860_50201420______58_84_49433100______58_840_59034920 = signalI;
   signalI->owner = (Object)wdec_5879_50222460;
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

Scope makewdec_5879_50222460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5879_50222460 = scope;
   scope->owner = (Object)channel__a1_5860_50201420;
   scope->name = "wdec:79";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_50222080();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __59163420;

Behavior make__59163420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59163420 = behavior;
   behavior->owner = (Object)channel__a1_5860_50201420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_50305900_channel__a1_5860_50201420______58_84_49433100______58_840_59034920);
   reg__0_50305900_channel__a1_5860_50201420______58_84_49433100______58_840_59034920->num_any += 1;
   reg__0_50305900_channel__a1_5860_50201420______58_84_49433100______58_840_59034920->any = realloc(reg__0_50305900_channel__a1_5860_50201420______58_84_49433100______58_840_59034920->any,reg__0_50305900_channel__a1_5860_50201420______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
reg__0_50305900_channel__a1_5860_50201420______58_84_49433100______58_840_59034920->any[reg__0_50305900_channel__a1_5860_50201420______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59163600();

   return behavior;
}

Behavior __59163200;

Behavior make__59163200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59163200 = behavior;
   behavior->owner = (Object)channel__a1_5860_50201420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5862_49864840______58_84_49433100______58_840_59034920);
   _5862_49864840______58_84_49433100______58_840_59034920->num_any += 1;
   _5862_49864840______58_84_49433100______58_840_59034920->any = realloc(_5862_49864840______58_84_49433100______58_840_59034920->any,_5862_49864840______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
_5862_49864840______58_84_49433100______58_840_59034920->any[_5862_49864840______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59163380();

   return behavior;
}

Scope makechannel__a1_5860_50201420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__a1_5860_50201420 = scope;
   scope->owner = (Object)_____58_84_49433100;
   scope->name = "channel_a1:60";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_50305900();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_5861_50200960();
   scope->scopes[1] = makeraddr_5863_50224980();
   scope->scopes[2] = makewaddr_5866_50224520();
   scope->scopes[3] = makerinc_5869_50224100();
   scope->scopes[4] = makewinc_5872_50223600();
   scope->scopes[5] = makerdec_5875_50223020();
   scope->scopes[6] = makewdec_5879_50222460();
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59163420();
   scope->behaviors[1] = make__59163200();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __59022620;

Behavior make__59022620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59022620 = behavior;
   behavior->owner = (Object)_____58_84_49433100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_47765380______58_84_49433100______58_840_59034920);
   clk_47765380______58_84_49433100______58_840_59034920->num_pos += 1;
   clk_47765380______58_84_49433100______58_840_59034920->pos = realloc(clk_47765380______58_84_49433100______58_840_59034920->pos,clk_47765380______58_84_49433100______58_840_59034920->num_pos*sizeof(Object));
clk_47765380______58_84_49433100______58_840_59034920->pos[clk_47765380______58_84_49433100______58_840_59034920->num_pos-1] = (Object)behavior;
   behavior->block = make__54421580();

   return behavior;
}

Behavior __59035040;

Behavior make__59035040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59035040 = behavior;
   register_timed_behavior(behavior);
   behavior->owner = (Object)_____58_84_49433100;
   behavior->activated = 0;
   behavior->timed = 1;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__59022500();

   return behavior;
}

Behavior __59152420;

Behavior make__59152420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59152420 = behavior;
   behavior->owner = (Object)_____58_84_49433100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_47765380______58_84_49433100______58_840_59034920);
   clk_47765380______58_84_49433100______58_840_59034920->num_any += 1;
   clk_47765380______58_84_49433100______58_840_59034920->any = realloc(clk_47765380______58_84_49433100______58_840_59034920->any,clk_47765380______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
clk_47765380______58_84_49433100______58_840_59034920->any[clk_47765380______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_47765260______58_84_49433100______58_840_59034920);
   rst_47765260______58_84_49433100______58_840_59034920->num_any += 1;
   rst_47765260______58_84_49433100______58_840_59034920->any = realloc(rst_47765260______58_84_49433100______58_840_59034920->any,rst_47765260______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
rst_47765260______58_84_49433100______58_840_59034920->any[rst_47765260______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,fill_47764020______58_84_49433100______58_840_59034920);
   fill_47764020______58_84_49433100______58_840_59034920->num_any += 1;
   fill_47764020______58_84_49433100______58_840_59034920->any = realloc(fill_47764020______58_84_49433100______58_840_59034920->any,fill_47764020______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
fill_47764020______58_84_49433100______58_840_59034920->any[fill_47764020______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,req_47764720______58_84_49433100______58_840_59034920);
   req_47764720______58_84_49433100______58_840_59034920->num_any += 1;
   req_47764720______58_84_49433100______58_840_59034920->any = realloc(req_47764720______58_84_49433100______58_840_59034920->any,req_47764720______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
req_47764720______58_84_49433100______58_840_59034920->any[req_47764720______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__0_47764580______58_84_49433100______58_840_59034920);
   ack__0_47764580______58_84_49433100______58_840_59034920->num_any += 1;
   ack__0_47764580______58_84_49433100______58_840_59034920->any = realloc(ack__0_47764580______58_84_49433100______58_840_59034920->any,ack__0_47764580______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
ack__0_47764580______58_84_49433100______58_840_59034920->any[ack__0_47764580______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59085540();

   return behavior;
}

Behavior __59152260;

Behavior make__59152260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59152260 = behavior;
   behavior->owner = (Object)_____58_84_49433100;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__0_49953500_layer0_58_840_49935740______58_84_49433100______58_840_59034920);
   ack__0_49953500_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any += 1;
   ack__0_49953500_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any = realloc(ack__0_49953500_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any,ack__0_49953500_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
ack__0_49953500_layer0_58_840_49935740______58_84_49433100______58_840_59034920->any[ack__0_49953500_layer0_58_840_49935740______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__1_54423880_layer1_58_840_54426020______58_84_49433100______58_840_59034920);
   ack__1_54423880_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any += 1;
   ack__1_54423880_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any = realloc(ack__1_54423880_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any,ack__1_54423880_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any*sizeof(Object));
ack__1_54423880_layer1_58_840_54426020______58_84_49433100______58_840_59034920->any[ack__1_54423880_layer1_58_840_54426020______58_84_49433100______58_840_59034920->num_any-1] = (Object)behavior;
   behavior->block = make__59085480();

   return behavior;
}

Scope make_____58_84_49433100() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   _____58_84_49433100 = scope;
   scope->owner = (Object)_____58_840_59034920;
   scope->name = "__:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makelayer0_49953220();
   scope->systemIs[1] = makelayer1_54423740();
   scope->num_inners = 18;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeclk_47765380();
   scope->inners[1] = makerst_47765260();
   scope->inners[2] = makereq_47764720();
   scope->inners[3] = makeack__0_47764580();
   scope->inners[4] = makeack__1_47764400();
   scope->inners[5] = makefill_47764020();
   scope->inners[6] = make_5815_47997560();
   scope->inners[7] = make_5813_47997540();
   scope->inners[8] = make_5814_47997440();
   scope->inners[9] = make_5817_47997420();
   scope->inners[10] = make_5818_47997320();
   scope->inners[11] = make_5819_48305100();
   scope->inners[12] = make_5832_49296920();
   scope->inners[13] = make_5833_49610280();
   scope->inners[14] = make_5843_49668860();
   scope->inners[15] = make_5844_49800720();
   scope->inners[16] = make_5845_49800640();
   scope->inners[17] = make_5862_49864840();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__x_581_49432760();
   scope->scopes[1] = makechannel__a0_5830_48123060();
   scope->scopes[2] = makechannel__a1_5860_50201420();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59022620();
   scope->behaviors[1] = make__59035040();
   scope->behaviors[2] = make__59152420();
   scope->behaviors[3] = make__59152260();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT make_____58_840_59034920() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   _____58_840_59034920 = systemT;
systemT->owner = NULL;
   systemT->name = "__:T0";
   systemT->num_inputs = 0;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->num_outputs = 0;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make_____58_84_49433100();

   return systemT;
}