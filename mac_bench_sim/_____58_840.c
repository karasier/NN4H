#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT _____58_840_50161480;

Block __49966760;

Block __49966600;

Block __49966280;

void code__49966280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50365260(),_5818_47773040______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__49966280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49966280 = block;
   block->owner = (Object)__49966600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49966280;

   return block;
};

void code__49966600() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_47604820______58_84_41403940______58_840_50161480->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50365380();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49966280();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50365180(),_5817_47773140______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__49966600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49966600 = block;
   block->owner = (Object)__49966760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49966600;

   return block;
};

Block __49965200;

Block __49965000;

Block __49964620;

void code__49964620() {
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
                  src0 = _5818_47773040______58_84_41403940______58_840_50161480->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__50364820();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5818_47773040______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50364720(),_5817_47773140______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__50364660(),_5819_48023180______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__49964620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49964620 = block;
   block->owner = (Object)__49965000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49964620;

   return block;
};

void code__49965000() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_47604820______58_84_41403940______58_840_50161480->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__50364960();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49964620();
   }
      }
   }
}

Block make__49965000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49965000 = block;
   block->owner = (Object)__49965200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49965000;

   return block;
};

void code__49965200() {
 code__49965000();
}

Block make__49965200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49965200 = block;
   block->owner = (Object)__49966760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49965200;

   return block;
};

void code__49966760() {
 code__49966600();
   {
      Value cond = fill_47604760______58_84_41403940______58_840_50161480->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49965200();
   }
      }
   }
}

Block make__49966760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49966760 = block;
   block->owner = (Object)__50128080;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49966760;

   return block;
};

Block __50127960;

void code__50127960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50364600(),clk_47604840______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50364540(),rst_47604820______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50364480(),req_47604800______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50364420(),fill_47604760______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50161640);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50405280(),rst_47604820______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50161640);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50405220(),clk_47604840______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50161640);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50405160(),clk_47604840______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50405100(),rst_47604820______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50405040(),fill_47604760______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50161640);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50404960(),clk_47604840______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50161640);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50404880(),clk_47604840______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50161640);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50404820(),clk_47604840______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50161640);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50404760(),clk_47604840______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50161640);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50404640(),clk_47604840______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50161640);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50404540(),clk_47604840______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50161640);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50404420(),clk_47604840______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50161640);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50404340(),clk_47604840______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50161640);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50404180(),clk_47604840______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50161640);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50403900(),clk_47604840______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50161640);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50403840(),clk_47604840______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50161640);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50403780(),clk_47604840______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50161640);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50403660(),clk_47604840______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50161640);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50403600(),clk_47604840______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50161640);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50403540(),clk_47604840______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50161640);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50403480(),clk_47604840______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50161640);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50403420(),clk_47604840______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50161640);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50403360(),clk_47604840______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50161640);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50403300(),clk_47604840______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50161640);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50403240(),clk_47604840______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50161640);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50403180(),fill_47604760______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50403120(),clk_47604840______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50403060(),clk_47604840______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50403000(),req_47604800______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50161640);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50402940(),clk_47604840______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50161640);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50402880(),clk_47604840______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50402820(),req_47604800______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50402760(),clk_47604840______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50161640);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50402700(),clk_47604840______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50161640);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50402640(),clk_47604840______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50161640);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50402580(),clk_47604840______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50161640);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50402520(),clk_47604840______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50161640);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50402460(),clk_47604840______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50161640);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50402360(),clk_47604840______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50161640);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50402260(),clk_47604840______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50161640);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50402180(),clk_47604840______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50161640);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50402080(),clk_47604840______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50161640);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50401800(),clk_47604840______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50161640);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50401120(),clk_47604840______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50161640);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50401020(),clk_47604840______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50161640);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50400960(),clk_47604840______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50161640);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50400900(),clk_47604840______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50161640);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50400840(),clk_47604840______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50161640);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50400780(),clk_47604840______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50161640);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50400720(),clk_47604840______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50161640);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50400660(),clk_47604840______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50161640);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__50400600(),clk_47604840______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,NS),__50161640);
}

Block make__50127960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50127960 = block;
   block->owner = (Object)__50161640;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50127960;

   return block;
};

Block __50215460;

void code__50215460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_47604840______58_84_41403940______58_840_50161480->c_value,clk_49968660_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_47604820______58_84_41403940______58_840_50161480->c_value,rst_49968620_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(fill_47604760______58_84_41403940______58_840_50161480->c_value,fill_49968600_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(req_47604800______58_84_41403940______58_840_50161480->c_value,req_49968580_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__50215460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50215460 = block;
   block->owner = (Object)__50210960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50215460;

   return block;
};

Block __50215400;

void code__50215400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__0_49968520_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->c_value,ack__0_47604780______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__50215400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50215400 = block;
   block->owner = (Object)__50210780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50215400;

   return block;
};

Block __47540960;

Block __48044120;

void code__48044120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_45632800_channel__x_581_41458320______58_84_41403940______58_840_50161480->c_value,make_ref_rangeS(mem_46846820_channel__x_581_41458320______58_84_41403940______58_840_50161480,value2integer(abus__w_45632280_channel__x_581_41458320______58_84_41403940______58_840_50161480->c_value),value2integer(abus__w_45632280_channel__x_581_41458320______58_84_41403940______58_840_50161480->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__48044120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __48044120 = block;
   block->owner = (Object)__47540960;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__48044120;

   return block;
};

void code__47540960() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_46846820_channel__x_581_41458320______58_84_41403940______58_840_50161480->c_value;
            idx = value2integer(abus__r_45632660_channel__x_581_41458320______58_84_41403940______58_840_50161480->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_45068280_channel__x_581_41458320______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_41959500_channel__x_581_41458320______58_84_41403940______58_840_50161480->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__48044120();
   }
      }
   }
}

Block make__47540960() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47540960 = block;
   block->owner = (Object)__46545540;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47540960;

   return block;
};

Block __50209860;

void code__50209860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_45068280_channel__x_581_41458320______58_84_41403940______58_840_50161480->c_value,_5815_47773260______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__50209860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50209860 = block;
   block->owner = (Object)__50209620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50209860;

   return block;
};

Block __50209540;

void code__50209540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5815_47773260______58_84_41403940______58_840_50161480->c_value,dbus__r_45068280_channel__x_581_41458320______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__50209540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50209540 = block;
   block->owner = (Object)__50209320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50209540;

   return block;
};

Block __50208940;

void code__50208940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__r_41959520_channel__x_581_41458320______58_84_41403940______58_840_50161480->c_value,_5813_47773240______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__50208940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50208940 = block;
   block->owner = (Object)__50241440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50208940;

   return block;
};

Block __50241360;

void code__50241360() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5813_47773240______58_84_41403940______58_840_50161480->c_value,trig__r_41959520_channel__x_581_41458320______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__50241360() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50241360 = block;
   block->owner = (Object)__50240780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50241360;

   return block;
};

Block __50240480;

void code__50240480() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_45632660_channel__x_581_41458320______58_84_41403940______58_840_50161480->c_value,_5814_47773160______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__50240480() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50240480 = block;
   block->owner = (Object)__50240300;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50240480;

   return block;
};

Block __50240260;

void code__50240260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5814_47773160______58_84_41403940______58_840_50161480->c_value,abus__r_45632660_channel__x_581_41458320______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__50240260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50240260 = block;
   block->owner = (Object)__50239980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50240260;

   return block;
};

Block __50239620;

void code__50239620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_41959500_channel__x_581_41458320______58_84_41403940______58_840_50161480->c_value,_5817_47773140______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__50239620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50239620 = block;
   block->owner = (Object)__50239440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50239620;

   return block;
};

Block __50239400;

void code__50239400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5817_47773140______58_84_41403940______58_840_50161480->c_value,trig__w_41959500_channel__x_581_41458320______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__50239400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50239400 = block;
   block->owner = (Object)__50239160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50239400;

   return block;
};

Block __50238660;

void code__50238660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_45632280_channel__x_581_41458320______58_84_41403940______58_840_50161480->c_value,_5818_47773040______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__50238660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50238660 = block;
   block->owner = (Object)__50238460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50238660;

   return block;
};

Block __50238420;

void code__50238420() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5818_47773040______58_84_41403940______58_840_50161480->c_value,abus__w_45632280_channel__x_581_41458320______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__50238420() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50238420 = block;
   block->owner = (Object)__50238200;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50238420;

   return block;
};

Block __50237860;

void code__50237860() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_45632800_channel__x_581_41458320______58_84_41403940______58_840_50161480->c_value,_5819_48023180______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__50237860() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50237860 = block;
   block->owner = (Object)__50237600;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50237860;

   return block;
};

Block __50237560;

void code__50237560() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5819_48023180______58_84_41403940______58_840_50161480->c_value,dbus__w_45632800_channel__x_581_41458320______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__50237560() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50237560 = block;
   block->owner = (Object)__50237260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50237560;

   return block;
};

Block __50235080;

void code__50235080() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_46891780_channel__a0_5830_46545420______58_84_41403940______58_840_50161480->c_value,_5832_44966380______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__50235080() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50235080 = block;
   block->owner = (Object)__50234840;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50235080;

   return block;
};

Block __50234760;

void code__50234760() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5832_44966380______58_84_41403940______58_840_50161480->c_value,reg__0_46891780_channel__a0_5830_46545420______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__50234760() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50234760 = block;
   block->owner = (Object)__50234500;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50234760;

   return block;
};

Block __50234140;

void code__50234140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_46891780_channel__a0_5830_46545420______58_84_41403940______58_840_50161480->c_value,_5840_46844260______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__50234140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50234140 = block;
   block->owner = (Object)__50233940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50234140;

   return block;
};

Block __50233900;

void code__50233900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5840_46844260______58_84_41403940______58_840_50161480->c_value,reg__0_46891780_channel__a0_5830_46545420______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__50233900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50233900 = block;
   block->owner = (Object)__50233680;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50233900;

   return block;
};

Block __50305240;

void code__50305240() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_46543340_rinc_5839_46543720_channel__a0_5830_46545420______58_84_41403940______58_840_50161480->c_value,_5841_46844180______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__50305240() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50305240 = block;
   block->owner = (Object)__50305040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50305240;

   return block;
};

Block __50305000;

void code__50305000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5841_46844180______58_84_41403940______58_840_50161480->c_value,abus__r_46543340_rinc_5839_46543720_channel__a0_5830_46545420______58_84_41403940______58_840_50161480);
      set_value_pos(pool_state);
   }
}

Block make__50305000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __50305000 = block;
   block->owner = (Object)__50304780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__50305000;

   return block;
};

Value make__50365380() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50365260() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__50365180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50364960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50364820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__50364720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50364660() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__50364600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50364540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50364480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50364420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50405280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50405220() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50405160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50405100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50405040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50404960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50404880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50404820() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50404760() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50404640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50404540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50404420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50404340() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50404180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50403900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50403840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50403780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50403660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50403600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50403540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50403480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50403420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50403360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50403300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50403240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50403180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50403120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50403060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50403000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50402940() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50402880() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50402820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50402760() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50402700() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50402640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50402580() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50402520() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50402460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50402360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50402260() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50402180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50402080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50401800() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50401120() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50401020() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50400960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50400900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50400840() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50400780() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50400720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50400660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__50400600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope _____58_84_41403940;

SignalI clk_47604840______58_84_41403940______58_840_50161480;

SignalI makeclk_47604840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_47604840______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)_____58_84_41403940;
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

SignalI rst_47604820______58_84_41403940______58_840_50161480;

SignalI makerst_47604820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_47604820______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)_____58_84_41403940;
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

SignalI req_47604800______58_84_41403940______58_840_50161480;

SignalI makereq_47604800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_47604800______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)_____58_84_41403940;
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

SignalI ack__0_47604780______58_84_41403940______58_840_50161480;

SignalI makeack__0_47604780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__0_47604780______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)_____58_84_41403940;
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

SignalI fill_47604760______58_84_41403940______58_840_50161480;

SignalI makefill_47604760() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_47604760______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)_____58_84_41403940;
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

SignalI _5815_47773260______58_84_41403940______58_840_50161480;

SignalI make_5815_47773260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5815_47773260______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)_____58_84_41403940;
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

SignalI _5813_47773240______58_84_41403940______58_840_50161480;

SignalI make_5813_47773240() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5813_47773240______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)_____58_84_41403940;
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

SignalI _5814_47773160______58_84_41403940______58_840_50161480;

SignalI make_5814_47773160() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5814_47773160______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)_____58_84_41403940;
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

SignalI _5817_47773140______58_84_41403940______58_840_50161480;

SignalI make_5817_47773140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5817_47773140______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)_____58_84_41403940;
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

SignalI _5818_47773040______58_84_41403940______58_840_50161480;

SignalI make_5818_47773040() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5818_47773040______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)_____58_84_41403940;
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

SignalI _5819_48023180______58_84_41403940______58_840_50161480;

SignalI make_5819_48023180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5819_48023180______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)_____58_84_41403940;
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

SignalI _5832_44966380______58_84_41403940______58_840_50161480;

SignalI make_5832_44966380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5832_44966380______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)_____58_84_41403940;
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

SignalI _5840_46844260______58_84_41403940______58_840_50161480;

SignalI make_5840_46844260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5840_46844260______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)_____58_84_41403940;
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

SignalI _5841_46844180______58_84_41403940______58_840_50161480;

SignalI make_5841_46844180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5841_46844180______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)_____58_84_41403940;
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

SystemI layer__output_49968340;

SystemI makelayer__output_49968340() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer__output_49968340 = systemI;
   systemI->owner = (Object)_____58_84_41403940;
   systemI->name = "layer_output";
   systemI->system = layer__output_58_840_49971080;

   return systemI;
};

Scope channel__x_581_41458320;

SignalI trig__r_41959520_channel__x_581_41458320______58_84_41403940______58_840_50161480;

SignalI maketrig__r_41959520() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_41959520_channel__x_581_41458320______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)channel__x_581_41458320;
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

SignalI trig__w_41959500_channel__x_581_41458320______58_84_41403940______58_840_50161480;

SignalI maketrig__w_41959500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_41959500_channel__x_581_41458320______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)channel__x_581_41458320;
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

SignalI dbus__r_45068280_channel__x_581_41458320______58_84_41403940______58_840_50161480;

SignalI makedbus__r_45068280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_45068280_channel__x_581_41458320______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)channel__x_581_41458320;
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

SignalI dbus__w_45632800_channel__x_581_41458320______58_84_41403940______58_840_50161480;

SignalI makedbus__w_45632800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_45632800_channel__x_581_41458320______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)channel__x_581_41458320;
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

SignalI abus__r_45632660_channel__x_581_41458320______58_84_41403940______58_840_50161480;

SignalI makeabus__r_45632660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_45632660_channel__x_581_41458320______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)channel__x_581_41458320;
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

SignalI abus__w_45632280_channel__x_581_41458320______58_84_41403940______58_840_50161480;

SignalI makeabus__w_45632280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_45632280_channel__x_581_41458320______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)channel__x_581_41458320;
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

SignalI mem_46846820_channel__x_581_41458320______58_84_41403940______58_840_50161480;

SignalI makemem_46846820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_46846820_channel__x_581_41458320______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)channel__x_581_41458320;
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

Scope raddr_582_41752000;

Scope makeraddr_582_41752000() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_582_41752000 = scope;
   scope->owner = (Object)channel__x_581_41458320;
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

Scope waddr_587_41747540;

Scope makewaddr_587_41747540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_587_41747540 = scope;
   scope->owner = (Object)channel__x_581_41458320;
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

Scope rinc_5812_41834760;

Scope makerinc_5812_41834760() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5812_41834760 = scope;
   scope->owner = (Object)channel__x_581_41458320;
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

Scope winc_5816_41828500;

Scope makewinc_5816_41828500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5816_41828500 = scope;
   scope->owner = (Object)channel__x_581_41458320;
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

Scope rdec_5820_41886020;

Scope makerdec_5820_41886020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5820_41886020 = scope;
   scope->owner = (Object)channel__x_581_41458320;
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

Scope wdec_5825_41933080;

Scope makewdec_5825_41933080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5825_41933080 = scope;
   scope->owner = (Object)channel__x_581_41458320;
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

Behavior __46545540;

Behavior make__46545540() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __46545540 = behavior;
   behavior->owner = (Object)channel__x_581_41458320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_47604840______58_84_41403940______58_840_50161480);
   clk_47604840______58_84_41403940______58_840_50161480->num_neg += 1;
   clk_47604840______58_84_41403940______58_840_50161480->neg = realloc(clk_47604840______58_84_41403940______58_840_50161480->neg,clk_47604840______58_84_41403940______58_840_50161480->num_neg*sizeof(Object));
clk_47604840______58_84_41403940______58_840_50161480->neg[clk_47604840______58_84_41403940______58_840_50161480->num_neg-1] = (Object)behavior;
   behavior->block = make__47540960();

   return behavior;
}

Behavior __50209620;

Behavior make__50209620() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50209620 = behavior;
   behavior->owner = (Object)channel__x_581_41458320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_45068280_channel__x_581_41458320______58_84_41403940______58_840_50161480);
   dbus__r_45068280_channel__x_581_41458320______58_84_41403940______58_840_50161480->num_any += 1;
   dbus__r_45068280_channel__x_581_41458320______58_84_41403940______58_840_50161480->any = realloc(dbus__r_45068280_channel__x_581_41458320______58_84_41403940______58_840_50161480->any,dbus__r_45068280_channel__x_581_41458320______58_84_41403940______58_840_50161480->num_any*sizeof(Object));
dbus__r_45068280_channel__x_581_41458320______58_84_41403940______58_840_50161480->any[dbus__r_45068280_channel__x_581_41458320______58_84_41403940______58_840_50161480->num_any-1] = (Object)behavior;
   behavior->block = make__50209860();

   return behavior;
}

Behavior __50209320;

Behavior make__50209320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50209320 = behavior;
   behavior->owner = (Object)channel__x_581_41458320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5815_47773260______58_84_41403940______58_840_50161480);
   _5815_47773260______58_84_41403940______58_840_50161480->num_any += 1;
   _5815_47773260______58_84_41403940______58_840_50161480->any = realloc(_5815_47773260______58_84_41403940______58_840_50161480->any,_5815_47773260______58_84_41403940______58_840_50161480->num_any*sizeof(Object));
_5815_47773260______58_84_41403940______58_840_50161480->any[_5815_47773260______58_84_41403940______58_840_50161480->num_any-1] = (Object)behavior;
   behavior->block = make__50209540();

   return behavior;
}

Behavior __50241440;

Behavior make__50241440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50241440 = behavior;
   behavior->owner = (Object)channel__x_581_41458320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__r_41959520_channel__x_581_41458320______58_84_41403940______58_840_50161480);
   trig__r_41959520_channel__x_581_41458320______58_84_41403940______58_840_50161480->num_any += 1;
   trig__r_41959520_channel__x_581_41458320______58_84_41403940______58_840_50161480->any = realloc(trig__r_41959520_channel__x_581_41458320______58_84_41403940______58_840_50161480->any,trig__r_41959520_channel__x_581_41458320______58_84_41403940______58_840_50161480->num_any*sizeof(Object));
trig__r_41959520_channel__x_581_41458320______58_84_41403940______58_840_50161480->any[trig__r_41959520_channel__x_581_41458320______58_84_41403940______58_840_50161480->num_any-1] = (Object)behavior;
   behavior->block = make__50208940();

   return behavior;
}

Behavior __50240780;

Behavior make__50240780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50240780 = behavior;
   behavior->owner = (Object)channel__x_581_41458320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5813_47773240______58_84_41403940______58_840_50161480);
   _5813_47773240______58_84_41403940______58_840_50161480->num_any += 1;
   _5813_47773240______58_84_41403940______58_840_50161480->any = realloc(_5813_47773240______58_84_41403940______58_840_50161480->any,_5813_47773240______58_84_41403940______58_840_50161480->num_any*sizeof(Object));
_5813_47773240______58_84_41403940______58_840_50161480->any[_5813_47773240______58_84_41403940______58_840_50161480->num_any-1] = (Object)behavior;
   behavior->block = make__50241360();

   return behavior;
}

Behavior __50240300;

Behavior make__50240300() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50240300 = behavior;
   behavior->owner = (Object)channel__x_581_41458320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_45632660_channel__x_581_41458320______58_84_41403940______58_840_50161480);
   abus__r_45632660_channel__x_581_41458320______58_84_41403940______58_840_50161480->num_any += 1;
   abus__r_45632660_channel__x_581_41458320______58_84_41403940______58_840_50161480->any = realloc(abus__r_45632660_channel__x_581_41458320______58_84_41403940______58_840_50161480->any,abus__r_45632660_channel__x_581_41458320______58_84_41403940______58_840_50161480->num_any*sizeof(Object));
abus__r_45632660_channel__x_581_41458320______58_84_41403940______58_840_50161480->any[abus__r_45632660_channel__x_581_41458320______58_84_41403940______58_840_50161480->num_any-1] = (Object)behavior;
   behavior->block = make__50240480();

   return behavior;
}

Behavior __50239980;

Behavior make__50239980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50239980 = behavior;
   behavior->owner = (Object)channel__x_581_41458320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5814_47773160______58_84_41403940______58_840_50161480);
   _5814_47773160______58_84_41403940______58_840_50161480->num_any += 1;
   _5814_47773160______58_84_41403940______58_840_50161480->any = realloc(_5814_47773160______58_84_41403940______58_840_50161480->any,_5814_47773160______58_84_41403940______58_840_50161480->num_any*sizeof(Object));
_5814_47773160______58_84_41403940______58_840_50161480->any[_5814_47773160______58_84_41403940______58_840_50161480->num_any-1] = (Object)behavior;
   behavior->block = make__50240260();

   return behavior;
}

Behavior __50239440;

Behavior make__50239440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50239440 = behavior;
   behavior->owner = (Object)channel__x_581_41458320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_41959500_channel__x_581_41458320______58_84_41403940______58_840_50161480);
   trig__w_41959500_channel__x_581_41458320______58_84_41403940______58_840_50161480->num_any += 1;
   trig__w_41959500_channel__x_581_41458320______58_84_41403940______58_840_50161480->any = realloc(trig__w_41959500_channel__x_581_41458320______58_84_41403940______58_840_50161480->any,trig__w_41959500_channel__x_581_41458320______58_84_41403940______58_840_50161480->num_any*sizeof(Object));
trig__w_41959500_channel__x_581_41458320______58_84_41403940______58_840_50161480->any[trig__w_41959500_channel__x_581_41458320______58_84_41403940______58_840_50161480->num_any-1] = (Object)behavior;
   behavior->block = make__50239620();

   return behavior;
}

Behavior __50239160;

Behavior make__50239160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50239160 = behavior;
   behavior->owner = (Object)channel__x_581_41458320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5817_47773140______58_84_41403940______58_840_50161480);
   _5817_47773140______58_84_41403940______58_840_50161480->num_any += 1;
   _5817_47773140______58_84_41403940______58_840_50161480->any = realloc(_5817_47773140______58_84_41403940______58_840_50161480->any,_5817_47773140______58_84_41403940______58_840_50161480->num_any*sizeof(Object));
_5817_47773140______58_84_41403940______58_840_50161480->any[_5817_47773140______58_84_41403940______58_840_50161480->num_any-1] = (Object)behavior;
   behavior->block = make__50239400();

   return behavior;
}

Behavior __50238460;

Behavior make__50238460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50238460 = behavior;
   behavior->owner = (Object)channel__x_581_41458320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_45632280_channel__x_581_41458320______58_84_41403940______58_840_50161480);
   abus__w_45632280_channel__x_581_41458320______58_84_41403940______58_840_50161480->num_any += 1;
   abus__w_45632280_channel__x_581_41458320______58_84_41403940______58_840_50161480->any = realloc(abus__w_45632280_channel__x_581_41458320______58_84_41403940______58_840_50161480->any,abus__w_45632280_channel__x_581_41458320______58_84_41403940______58_840_50161480->num_any*sizeof(Object));
abus__w_45632280_channel__x_581_41458320______58_84_41403940______58_840_50161480->any[abus__w_45632280_channel__x_581_41458320______58_84_41403940______58_840_50161480->num_any-1] = (Object)behavior;
   behavior->block = make__50238660();

   return behavior;
}

Behavior __50238200;

Behavior make__50238200() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50238200 = behavior;
   behavior->owner = (Object)channel__x_581_41458320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5818_47773040______58_84_41403940______58_840_50161480);
   _5818_47773040______58_84_41403940______58_840_50161480->num_any += 1;
   _5818_47773040______58_84_41403940______58_840_50161480->any = realloc(_5818_47773040______58_84_41403940______58_840_50161480->any,_5818_47773040______58_84_41403940______58_840_50161480->num_any*sizeof(Object));
_5818_47773040______58_84_41403940______58_840_50161480->any[_5818_47773040______58_84_41403940______58_840_50161480->num_any-1] = (Object)behavior;
   behavior->block = make__50238420();

   return behavior;
}

Behavior __50237600;

Behavior make__50237600() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50237600 = behavior;
   behavior->owner = (Object)channel__x_581_41458320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_45632800_channel__x_581_41458320______58_84_41403940______58_840_50161480);
   dbus__w_45632800_channel__x_581_41458320______58_84_41403940______58_840_50161480->num_any += 1;
   dbus__w_45632800_channel__x_581_41458320______58_84_41403940______58_840_50161480->any = realloc(dbus__w_45632800_channel__x_581_41458320______58_84_41403940______58_840_50161480->any,dbus__w_45632800_channel__x_581_41458320______58_84_41403940______58_840_50161480->num_any*sizeof(Object));
dbus__w_45632800_channel__x_581_41458320______58_84_41403940______58_840_50161480->any[dbus__w_45632800_channel__x_581_41458320______58_84_41403940______58_840_50161480->num_any-1] = (Object)behavior;
   behavior->block = make__50237860();

   return behavior;
}

Behavior __50237260;

Behavior make__50237260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50237260 = behavior;
   behavior->owner = (Object)channel__x_581_41458320;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5819_48023180______58_84_41403940______58_840_50161480);
   _5819_48023180______58_84_41403940______58_840_50161480->num_any += 1;
   _5819_48023180______58_84_41403940______58_840_50161480->any = realloc(_5819_48023180______58_84_41403940______58_840_50161480->any,_5819_48023180______58_84_41403940______58_840_50161480->num_any*sizeof(Object));
_5819_48023180______58_84_41403940______58_840_50161480->any[_5819_48023180______58_84_41403940______58_840_50161480->num_any-1] = (Object)behavior;
   behavior->block = make__50237560();

   return behavior;
}

Scope makechannel__x_581_41458320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__x_581_41458320 = scope;
   scope->owner = (Object)_____58_84_41403940;
   scope->name = "channel_x:1";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_41959520();
   scope->inners[1] = maketrig__w_41959500();
   scope->inners[2] = makedbus__r_45068280();
   scope->inners[3] = makedbus__w_45632800();
   scope->inners[4] = makeabus__r_45632660();
   scope->inners[5] = makeabus__w_45632280();
   scope->inners[6] = makemem_46846820();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_582_41752000();
   scope->scopes[1] = makewaddr_587_41747540();
   scope->scopes[2] = makerinc_5812_41834760();
   scope->scopes[3] = makewinc_5816_41828500();
   scope->scopes[4] = makerdec_5820_41886020();
   scope->scopes[5] = makewdec_5825_41933080();
   scope->num_behaviors = 13;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__46545540();
   scope->behaviors[1] = make__50209620();
   scope->behaviors[2] = make__50209320();
   scope->behaviors[3] = make__50241440();
   scope->behaviors[4] = make__50240780();
   scope->behaviors[5] = make__50240300();
   scope->behaviors[6] = make__50239980();
   scope->behaviors[7] = make__50239440();
   scope->behaviors[8] = make__50239160();
   scope->behaviors[9] = make__50238460();
   scope->behaviors[10] = make__50238200();
   scope->behaviors[11] = make__50237600();
   scope->behaviors[12] = make__50237260();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__a0_5830_46545420;

SignalI reg__0_46891780_channel__a0_5830_46545420______58_84_41403940______58_840_50161480;

SignalI makereg__0_46891780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_46891780_channel__a0_5830_46545420______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)channel__a0_5830_46545420;
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

Scope anum_5831_46545120;

Scope makeanum_5831_46545120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_5831_46545120 = scope;
   scope->owner = (Object)channel__a0_5830_46545420;
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

Scope raddr_5833_46544700;

Scope makeraddr_5833_46544700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5833_46544700 = scope;
   scope->owner = (Object)channel__a0_5830_46545420;
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

Scope waddr_5836_46544220;

Scope makewaddr_5836_46544220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5836_46544220 = scope;
   scope->owner = (Object)channel__a0_5830_46545420;
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

Scope rinc_5839_46543720;

SignalI abus__r_46543340_rinc_5839_46543720_channel__a0_5830_46545420______58_84_41403940______58_840_50161480;

SignalI makeabus__r_46543340() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_46543340_rinc_5839_46543720_channel__a0_5830_46545420______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)rinc_5839_46543720;
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

Behavior __50305040;

Behavior make__50305040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50305040 = behavior;
   behavior->owner = (Object)rinc_5839_46543720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_46543340_rinc_5839_46543720_channel__a0_5830_46545420______58_84_41403940______58_840_50161480);
   abus__r_46543340_rinc_5839_46543720_channel__a0_5830_46545420______58_84_41403940______58_840_50161480->num_any += 1;
   abus__r_46543340_rinc_5839_46543720_channel__a0_5830_46545420______58_84_41403940______58_840_50161480->any = realloc(abus__r_46543340_rinc_5839_46543720_channel__a0_5830_46545420______58_84_41403940______58_840_50161480->any,abus__r_46543340_rinc_5839_46543720_channel__a0_5830_46545420______58_84_41403940______58_840_50161480->num_any*sizeof(Object));
abus__r_46543340_rinc_5839_46543720_channel__a0_5830_46545420______58_84_41403940______58_840_50161480->any[abus__r_46543340_rinc_5839_46543720_channel__a0_5830_46545420______58_84_41403940______58_840_50161480->num_any-1] = (Object)behavior;
   behavior->block = make__50305240();

   return behavior;
}

Behavior __50304780;

Behavior make__50304780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50304780 = behavior;
   behavior->owner = (Object)rinc_5839_46543720;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5841_46844180______58_84_41403940______58_840_50161480);
   _5841_46844180______58_84_41403940______58_840_50161480->num_any += 1;
   _5841_46844180______58_84_41403940______58_840_50161480->any = realloc(_5841_46844180______58_84_41403940______58_840_50161480->any,_5841_46844180______58_84_41403940______58_840_50161480->num_any*sizeof(Object));
_5841_46844180______58_84_41403940______58_840_50161480->any[_5841_46844180______58_84_41403940______58_840_50161480->num_any-1] = (Object)behavior;
   behavior->block = make__50305000();

   return behavior;
}

Scope makerinc_5839_46543720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5839_46543720 = scope;
   scope->owner = (Object)channel__a0_5830_46545420;
   scope->name = "rinc:39";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_46543340();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50305040();
   scope->behaviors[1] = make__50304780();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5842_46542960;

SignalI abus__w_46542580_winc_5842_46542960_channel__a0_5830_46545420______58_84_41403940______58_840_50161480;

SignalI makeabus__w_46542580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_46542580_winc_5842_46542960_channel__a0_5830_46545420______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)winc_5842_46542960;
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

Scope makewinc_5842_46542960() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5842_46542960 = scope;
   scope->owner = (Object)channel__a0_5830_46545420;
   scope->name = "winc:42";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_46542580();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5845_46542460;

SignalI abus__r_46541980_rdec_5845_46542460_channel__a0_5830_46545420______58_84_41403940______58_840_50161480;

SignalI makeabus__r_46541980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_46541980_rdec_5845_46542460_channel__a0_5830_46545420______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)rdec_5845_46542460;
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

Scope makerdec_5845_46542460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5845_46542460 = scope;
   scope->owner = (Object)channel__a0_5830_46545420;
   scope->name = "rdec:45";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_46541980();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_5849_46541860;

SignalI abus__w_46541480_wdec_5849_46541860_channel__a0_5830_46545420______58_84_41403940______58_840_50161480;

SignalI makeabus__w_46541480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_46541480_wdec_5849_46541860_channel__a0_5830_46545420______58_84_41403940______58_840_50161480 = signalI;
   signalI->owner = (Object)wdec_5849_46541860;
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

Scope makewdec_5849_46541860() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5849_46541860 = scope;
   scope->owner = (Object)channel__a0_5830_46545420;
   scope->name = "wdec:49";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_46541480();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __50234840;

Behavior make__50234840() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50234840 = behavior;
   behavior->owner = (Object)channel__a0_5830_46545420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_46891780_channel__a0_5830_46545420______58_84_41403940______58_840_50161480);
   reg__0_46891780_channel__a0_5830_46545420______58_84_41403940______58_840_50161480->num_any += 1;
   reg__0_46891780_channel__a0_5830_46545420______58_84_41403940______58_840_50161480->any = realloc(reg__0_46891780_channel__a0_5830_46545420______58_84_41403940______58_840_50161480->any,reg__0_46891780_channel__a0_5830_46545420______58_84_41403940______58_840_50161480->num_any*sizeof(Object));
reg__0_46891780_channel__a0_5830_46545420______58_84_41403940______58_840_50161480->any[reg__0_46891780_channel__a0_5830_46545420______58_84_41403940______58_840_50161480->num_any-1] = (Object)behavior;
   behavior->block = make__50235080();

   return behavior;
}

Behavior __50234500;

Behavior make__50234500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50234500 = behavior;
   behavior->owner = (Object)channel__a0_5830_46545420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5832_44966380______58_84_41403940______58_840_50161480);
   _5832_44966380______58_84_41403940______58_840_50161480->num_any += 1;
   _5832_44966380______58_84_41403940______58_840_50161480->any = realloc(_5832_44966380______58_84_41403940______58_840_50161480->any,_5832_44966380______58_84_41403940______58_840_50161480->num_any*sizeof(Object));
_5832_44966380______58_84_41403940______58_840_50161480->any[_5832_44966380______58_84_41403940______58_840_50161480->num_any-1] = (Object)behavior;
   behavior->block = make__50234760();

   return behavior;
}

Behavior __50233940;

Behavior make__50233940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50233940 = behavior;
   behavior->owner = (Object)channel__a0_5830_46545420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_46891780_channel__a0_5830_46545420______58_84_41403940______58_840_50161480);
   reg__0_46891780_channel__a0_5830_46545420______58_84_41403940______58_840_50161480->num_any += 1;
   reg__0_46891780_channel__a0_5830_46545420______58_84_41403940______58_840_50161480->any = realloc(reg__0_46891780_channel__a0_5830_46545420______58_84_41403940______58_840_50161480->any,reg__0_46891780_channel__a0_5830_46545420______58_84_41403940______58_840_50161480->num_any*sizeof(Object));
reg__0_46891780_channel__a0_5830_46545420______58_84_41403940______58_840_50161480->any[reg__0_46891780_channel__a0_5830_46545420______58_84_41403940______58_840_50161480->num_any-1] = (Object)behavior;
   behavior->block = make__50234140();

   return behavior;
}

Behavior __50233680;

Behavior make__50233680() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50233680 = behavior;
   behavior->owner = (Object)channel__a0_5830_46545420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5840_46844260______58_84_41403940______58_840_50161480);
   _5840_46844260______58_84_41403940______58_840_50161480->num_any += 1;
   _5840_46844260______58_84_41403940______58_840_50161480->any = realloc(_5840_46844260______58_84_41403940______58_840_50161480->any,_5840_46844260______58_84_41403940______58_840_50161480->num_any*sizeof(Object));
_5840_46844260______58_84_41403940______58_840_50161480->any[_5840_46844260______58_84_41403940______58_840_50161480->num_any-1] = (Object)behavior;
   behavior->block = make__50233900();

   return behavior;
}

Scope makechannel__a0_5830_46545420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__a0_5830_46545420 = scope;
   scope->owner = (Object)_____58_84_41403940;
   scope->name = "channel_a0:30";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_46891780();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_5831_46545120();
   scope->scopes[1] = makeraddr_5833_46544700();
   scope->scopes[2] = makewaddr_5836_46544220();
   scope->scopes[3] = makerinc_5839_46543720();
   scope->scopes[4] = makewinc_5842_46542960();
   scope->scopes[5] = makerdec_5845_46542460();
   scope->scopes[6] = makewdec_5849_46541860();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50234840();
   scope->behaviors[1] = make__50234500();
   scope->behaviors[2] = make__50233940();
   scope->behaviors[3] = make__50233680();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __50128080;

Behavior make__50128080() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50128080 = behavior;
   behavior->owner = (Object)_____58_84_41403940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_47604840______58_84_41403940______58_840_50161480);
   clk_47604840______58_84_41403940______58_840_50161480->num_pos += 1;
   clk_47604840______58_84_41403940______58_840_50161480->pos = realloc(clk_47604840______58_84_41403940______58_840_50161480->pos,clk_47604840______58_84_41403940______58_840_50161480->num_pos*sizeof(Object));
clk_47604840______58_84_41403940______58_840_50161480->pos[clk_47604840______58_84_41403940______58_840_50161480->num_pos-1] = (Object)behavior;
   behavior->block = make__49966760();

   return behavior;
}

Behavior __50161640;

Behavior make__50161640() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50161640 = behavior;
   register_timed_behavior(behavior);
   behavior->owner = (Object)_____58_84_41403940;
   behavior->activated = 0;
   behavior->timed = 1;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__50127960();

   return behavior;
}

Behavior __50210960;

Behavior make__50210960() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50210960 = behavior;
   behavior->owner = (Object)_____58_84_41403940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 4;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_47604840______58_84_41403940______58_840_50161480);
   clk_47604840______58_84_41403940______58_840_50161480->num_any += 1;
   clk_47604840______58_84_41403940______58_840_50161480->any = realloc(clk_47604840______58_84_41403940______58_840_50161480->any,clk_47604840______58_84_41403940______58_840_50161480->num_any*sizeof(Object));
clk_47604840______58_84_41403940______58_840_50161480->any[clk_47604840______58_84_41403940______58_840_50161480->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_47604820______58_84_41403940______58_840_50161480);
   rst_47604820______58_84_41403940______58_840_50161480->num_any += 1;
   rst_47604820______58_84_41403940______58_840_50161480->any = realloc(rst_47604820______58_84_41403940______58_840_50161480->any,rst_47604820______58_84_41403940______58_840_50161480->num_any*sizeof(Object));
rst_47604820______58_84_41403940______58_840_50161480->any[rst_47604820______58_84_41403940______58_840_50161480->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,fill_47604760______58_84_41403940______58_840_50161480);
   fill_47604760______58_84_41403940______58_840_50161480->num_any += 1;
   fill_47604760______58_84_41403940______58_840_50161480->any = realloc(fill_47604760______58_84_41403940______58_840_50161480->any,fill_47604760______58_84_41403940______58_840_50161480->num_any*sizeof(Object));
fill_47604760______58_84_41403940______58_840_50161480->any[fill_47604760______58_84_41403940______58_840_50161480->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,req_47604800______58_84_41403940______58_840_50161480);
   req_47604800______58_84_41403940______58_840_50161480->num_any += 1;
   req_47604800______58_84_41403940______58_840_50161480->any = realloc(req_47604800______58_84_41403940______58_840_50161480->any,req_47604800______58_84_41403940______58_840_50161480->num_any*sizeof(Object));
req_47604800______58_84_41403940______58_840_50161480->any[req_47604800______58_84_41403940______58_840_50161480->num_any-1] = (Object)behavior;
   behavior->block = make__50215460();

   return behavior;
}

Behavior __50210780;

Behavior make__50210780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __50210780 = behavior;
   behavior->owner = (Object)_____58_84_41403940;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__0_49968520_layer__output_58_840_49971080______58_84_41403940______58_840_50161480);
   ack__0_49968520_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any += 1;
   ack__0_49968520_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any = realloc(ack__0_49968520_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any,ack__0_49968520_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any*sizeof(Object));
ack__0_49968520_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->any[ack__0_49968520_layer__output_58_840_49971080______58_84_41403940______58_840_50161480->num_any-1] = (Object)behavior;
   behavior->block = make__50215400();

   return behavior;
}

Scope make_____58_84_41403940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   _____58_84_41403940 = scope;
   scope->owner = (Object)_____58_840_50161480;
   scope->name = "__:T";
   scope->num_systemIs = 1;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makelayer__output_49968340();
   scope->num_inners = 14;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeclk_47604840();
   scope->inners[1] = makerst_47604820();
   scope->inners[2] = makereq_47604800();
   scope->inners[3] = makeack__0_47604780();
   scope->inners[4] = makefill_47604760();
   scope->inners[5] = make_5815_47773260();
   scope->inners[6] = make_5813_47773240();
   scope->inners[7] = make_5814_47773160();
   scope->inners[8] = make_5817_47773140();
   scope->inners[9] = make_5818_47773040();
   scope->inners[10] = make_5819_48023180();
   scope->inners[11] = make_5832_44966380();
   scope->inners[12] = make_5840_46844260();
   scope->inners[13] = make_5841_46844180();
   scope->num_scopes = 2;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__x_581_41458320();
   scope->scopes[1] = makechannel__a0_5830_46545420();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__50128080();
   scope->behaviors[1] = make__50161640();
   scope->behaviors[2] = make__50210960();
   scope->behaviors[3] = make__50210780();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT make_____58_840_50161480() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   _____58_840_50161480 = systemT;
systemT->owner = NULL;
   systemT->name = "__:T0";
   systemT->num_inputs = 0;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->num_outputs = 0;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make_____58_84_41403940();

   return systemT;
}